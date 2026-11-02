#!/usr/bin/env python3
"""Simulation regression of the RTL that CSR_Generation.py makes from CSR_GOLDEN_FORMAT.xlsx.

Steps
  1. Generate sheets CSR and ASYNC_CSR into a temporary folder.
  2. Compare the generated module with RTL/m_vlsi_csr.sv of the repository (the Date field is ignored)
     and check that the two sheets give the same module apart from its name and its default parameter.
  3. Compile the module with tb_csr_golden.sv (iverilog) and run the configuration matrix: the
     synchronous mode, the asynchronous mode with several clock ratios, and 1 to 4 monitor entries.
  4. With --mutants: apply single-point faults to the generated module and require that the testbench fails.

Usage : python run_golden_test.py [--mutants] [--quick] [--keep]
Needs : Python 3, openpyxl (for the generator), iverilog and vvp in PATH (OSS CAD Suite).
Exit  : 0 when every step passes.
"""
import argparse
import os
import re
import shutil
import subprocess
import sys
import tempfile

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.abspath(os.path.join(HERE, '..', '..', '..'))
TOOL = os.path.join(ROOT, 'CSR_Generation.py')
WORKBOOK = os.path.join(ROOT, 'CSR_GOLDEN_FORMAT.xlsx')
TB = os.path.join(HERE, 'tb_csr_golden.sv')

# (ASYNC, MC, P_APB ps, P_REG ps)
FULL = [(0, 1, 10000, 10000), (0, 2, 10000, 10000), (0, 4, 10000, 10000),
        (1, 2, 10000, 10000), (1, 2, 10000, 33000), (1, 2, 33000, 10000),
        (1, 3, 10000, 7000), (1, 4, 7000, 10000), (1, 1, 20000, 30000)]
QUICK = [(0, 2, 10000, 10000), (1, 2, 10000, 33000)]

MUTANTS = [
    ('rwi: hardware load wins over a software write',
     "(w_we_engine) ? reg_wdata[19]\n                               : (i_hw_we_engine_start) ? i_hw_wdata_engine_start",
     "(i_hw_we_engine_start) ? i_hw_wdata_engine_start\n                               : (w_we_engine) ? reg_wdata[19]"),
    ('w1c: software clear wins over a hardware load',
     "(i_hw_we_engine_fault) ? i_hw_wdata_engine_fault\n                               : (w_we_engine) ? (~reg_wdata[18] & reg_engine_fault)",
     "(w_we_engine) ? (~reg_wdata[18] & reg_engine_fault)\n                               : (i_hw_we_engine_fault) ? i_hw_wdata_engine_fault"),
    ('w0c: a 1 written clears instead of a 0',
     "(reg_wdata[17] & reg_engine_pending)", "(~reg_wdata[17] & reg_engine_pending)"),
    ('w2c: clears only when the bit is written 1',
     "(w_we_engine) ? '0\n                                  : reg_engine_overflow",
     "(w_we_engine & reg_wdata[16]) ? '0\n                                  : reg_engine_overflow"),
    ('r2c: a read does not clear',
     "(w_rd_engine) ? '0", "(1'b0) ? '0"),
    ('r2c: a read clears every monitor index',
     "(w_rd_monitor[gen_idx] ? '0", "((|w_rd_monitor) ? '0"),
    ('PSTRB check removed',
     "(~&i_apb_pstrb & i_apb_pwrite)", "1'b0"),
    ('PPROT check removed',
     "i_protect_en ? ~i_apb_pprot[1] : 1'b1", "1'b1"),
    ('monitor write decode uses the wrong stride',
     "w_we_monitor[gen_idx] = w_wr_en & (32'(reg_addr) == (LPARA_MONITOR_BASE_OFFSET + (gen_idx * LPARA_MONITOR_OFFSET_STRIDE)))",
     "w_we_monitor[gen_idx] = w_wr_en & (32'(reg_addr) == (LPARA_MONITOR_BASE_OFFSET + (gen_idx * 32'd8)))"),
    ('rw field takes the wrong PWDATA bits',
     "(w_we_engine) ? reg_wdata[23:20] : reg_engine_mode", "(w_we_engine) ? reg_wdata[22:19] : reg_engine_mode"),
]

fails = []


def step(name, ok, detail=''):
    print('%s  %s %s' % ('PASS' if ok else 'FAIL', name, detail))
    if not ok:
        fails.append(name)


def run(cmd, **kw):
    return subprocess.run(cmd, capture_output=True, text=True, **kw)


def find_tool(name):
    path = shutil.which(name)
    if path:
        return path
    for base in (r'C:\Tools\oss-cad-suite\bin', '/c/Tools/oss-cad-suite/bin'):
        for ext in ('', '.exe'):
            cand = os.path.join(base, name + ext)
            if os.path.isfile(cand):
                return cand
    return None


def generate(sheet, out):
    return run([sys.executable, '-I', TOOL, WORKBOOK, sheet, '--out', out, '--project', 'APB-CSR-Generator',
                '--author', 'Tester (user)'])


def body(text):
    """Module text without the header comment, so that the Date field does not matter."""
    return text.split('`timescale', 1)[1].replace('\r\n', '\n')


def simulate(iverilog, vvp, rtl_files, cfg, workdir):
    asyn, mc, papb, preg = cfg
    vvp_file = os.path.join(workdir, 'sim.vvp')
    cmd = [iverilog, '-g2012', '-P', 'tb_csr_golden.ASYNC=%d' % asyn, '-P', 'tb_csr_golden.MC=%d' % mc,
           '-P', 'tb_csr_golden.P_APB=%d' % papb, '-P', 'tb_csr_golden.P_REG=%d' % preg,
           '-s', 'tb_csr_golden', '-o', vvp_file] + rtl_files + [TB]
    c = run(cmd)
    if c.returncode != 0:
        return False, c.stderr[-400:]
    r = run([vvp, vvp_file])
    last = [l for l in r.stdout.splitlines() if l.startswith('TB ')]
    return (bool(last) and last[-1].startswith('TB PASS')), (last[-1] if last else r.stdout[-300:] + r.stderr[-300:])


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--mutants', action='store_true', help='also run the single-fault mutants')
    ap.add_argument('--quick', action='store_true', help='two configurations only')
    ap.add_argument('--keep', action='store_true', help='keep the temporary folder')
    args = ap.parse_args()

    iverilog, vvp = find_tool('iverilog'), find_tool('vvp')
    if not iverilog or not vvp:
        print('iverilog and vvp are needed (add the OSS CAD Suite bin folder to PATH)')
        return 2
    work = tempfile.mkdtemp(prefix='csr_golden_')
    try:
        outs = {}
        for sheet in ('CSR', 'ASYNC_CSR'):
            out = os.path.join(work, sheet)
            r = generate(sheet, out)
            step('generate sheet %s' % sheet, r.returncode == 0, r.stderr[-200:] if r.returncode else '')
            outs[sheet] = out
        sync_sv = os.path.join(outs['CSR'], 'RTL', 'm_vlsi_csr.sv')
        async_sv = os.path.join(outs['ASYNC_CSR'], 'RTL', 'm_vlsi_async_csr.sv')
        sync_model = os.path.join(outs['CSR'], 'RTL', 'models', 'm_csr_sync.sv')
        repo_sv = os.path.join(ROOT, 'RTL', 'm_vlsi_csr.sv')
        gen = open(sync_sv, encoding='utf-8').read()
        if os.path.isfile(repo_sv):
            step('RTL/m_vlsi_csr.sv equals the generated module', body(open(repo_sv, encoding='utf-8').read()) == body(gen))
        asyn_text = open(async_sv, encoding='utf-8').read()
        norm = body(asyn_text).replace('m_vlsi_async_csr', 'm_vlsi_csr').replace("PARA_ASYNCHRONOUS = 32'd1", "PARA_ASYNCHRONOUS = 32'd0")
        step('sheets CSR and ASYNC_CSR differ only in the name and the default parameter', norm == body(gen))

        for cfg in (QUICK if args.quick else FULL):
            ok, msg = simulate(iverilog, vvp, [sync_model, sync_sv], cfg, work)
            step('simulation ASYNC=%d MC=%d P_APB=%d P_REG=%d' % cfg, ok, msg)

        if args.mutants:
            for name, old, new in MUTANTS:
                if old not in gen:
                    step('mutant "%s": pattern present' % name, False)
                    continue
                mut = os.path.join(work, 'mutant.sv')
                open(mut, 'w', encoding='utf-8').write(gen.replace(old, new, 1))
                detected = False
                for cfg in ((0, 2, 10000, 10000), (1, 2, 10000, 33000)):
                    ok, _ = simulate(iverilog, vvp, [sync_model, mut], cfg, work)
                    if not ok:
                        detected = True
                        break
                step('mutant detected: %s' % name, detected)
    finally:
        if args.keep:
            print('kept', work)
        else:
            shutil.rmtree(work, ignore_errors=True)
    print('RESULT: %s' % ('PASS' if not fails else 'FAIL (%d)' % len(fails)))
    return 0 if not fails else 1


if __name__ == '__main__':
    sys.exit(main())
