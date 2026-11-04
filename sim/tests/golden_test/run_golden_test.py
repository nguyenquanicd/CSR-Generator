#!/usr/bin/env python3
"""Simulation regression of the RTL that CSR_Generation.py makes from CSR_GOLDEN_FORMAT.xlsx.

Steps
  1. Generate sheets CSR and ASYNC_CSR into a temporary folder and compare their normalized RTL.
  2. Generate the APB4 sideband example and compare it with its checked-in RTL (Date is ignored).
  3. Compile and simulate the base map across synchronous/asynchronous clock modes and monitor counts,
     then simulate the event-sideband example with directed read/write event checks.
  4. With --mutants: apply single-point faults to the generated module and require that the testbench fails.

Usage : python run_golden_test.py [--mutants] [--quick] [--keep]
Needs : Python 3, openpyxl, and Icarus/vvp or Verilator plus g++.
Exit  : 0 when every step passes.
"""
import argparse
import os
import re
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), '..')))
from verilator_manual_build import build_and_run

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


def generate(sheet, out, workbook=WORKBOOK):
    return run([sys.executable, TOOL, workbook, sheet, '--out', out, '--project', 'APB-CSR-Generator',
                '--author', 'Tester (user)'])


def body(text):
    """Module text without the header comment, so that the Date field does not matter."""
    return text.split('`timescale', 1)[1].replace('\r\n', '\n')


def simulate(iverilog, vvp, rtl_files, cfg, workdir, sideband=False):
    asyn, mc, papb, preg = cfg
    vvp_file = os.path.join(workdir, 'sim.vvp')
    cmd = [iverilog, '-g2012', '-P', 'tb_csr_golden.ASYNC=%d' % asyn, '-P', 'tb_csr_golden.MC=%d' % mc,
           '-P', 'tb_csr_golden.P_APB=%d' % papb, '-P', 'tb_csr_golden.P_REG=%d' % preg,
           '-s', 'tb_csr_golden', '-o', vvp_file] + rtl_files + [TB]
    if sideband:
        cmd.insert(2, '-DCSR_EVENT_SIDEBAND')
    c = run(cmd)
    if c.returncode != 0:
        return False, 'Icarus compile failed (exit %d): %s' % (c.returncode, c.stderr[-400:]), False
    r = run([vvp, vvp_file])
    last = [l for l in r.stdout.splitlines() if l.startswith('TB ')]
    if r.returncode != 0 or not last:
        return False, 'Icarus runtime failed (exit %d): %s' % (
            r.returncode, (r.stdout + r.stderr)[-400:]), False
    return ((bool(last) and last[-1].startswith('TB PASS')),
            (last[-1] if last else r.stdout[-300:] + r.stderr[-300:]), True)


def simulate_with_fallback(iverilog, vvp, verilator, rtl_files, cfg, workdir,
                           sideband=False, run_id='golden'):
    if iverilog and vvp:
        ok, message, compiled = simulate(iverilog, vvp, rtl_files, cfg, workdir, sideband)
    else:
        ok, message, compiled = False, 'Icarus/vvp is unavailable', False
    if ok or compiled or not verilator:
        return ok, message

    asyn, mc, papb, preg = cfg
    env = os.environ.copy()
    env['VERILATOR_ROOT'] = r'C:\Tools\oss-cad-suite\share\verilator'
    if not os.path.isdir(env['VERILATOR_ROOT']):
        return False, message + '; Verilator fallback runtime directory is missing'
    manual_dir = Path(workdir) / ('vlt_' + run_id)
    defines = ['-DCSR_EVENT_SIDEBAND'] if sideband else []
    params = ['-GASYNC=%d' % asyn, '-GMC=%d' % mc,
              '-GP_APB=%d' % papb, '-GP_REG=%d' % preg]
    vlt_ok, vlt_output = build_and_run(
        verilator, 'tb_csr_golden', [*rtl_files, TB], params, manual_dir, env,
        defines=defines, label=run_id, success_marker='TB PASS')
    if not vlt_ok:
        return False, message + '; Verilator fallback failed:\n' + vlt_output
    if 'Icarus compile failed' in message:
        reason = 'Icarus compile failed'
    elif 'Icarus runtime failed' in message:
        reason = 'Icarus runtime failed'
    else:
        reason = 'Icarus unavailable'
    result = next((line.strip() for line in vlt_output.splitlines() if 'TB PASS' in line), 'TB PASS')
    return vlt_ok, reason + '; Verilator direct g++ fallback: ' + result


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--mutants', action='store_true', help='also run the single-fault mutants')
    ap.add_argument('--quick', action='store_true', help='two configurations only')
    ap.add_argument('--keep', action='store_true', help='keep the temporary folder')
    args = ap.parse_args()

    iverilog, vvp = find_tool('iverilog'), find_tool('vvp')
    verilator = find_tool('verilator_bin')
    if (not iverilog or not vvp) and not verilator:
        print('Icarus/vvp or Verilator with g++ is needed (add the OSS CAD Suite bin folder to PATH)')
        return 2
    temp_root = os.path.join(ROOT, '.test_tmp')
    os.makedirs(temp_root, exist_ok=True)
    work = tempfile.mkdtemp(prefix='csr_golden_', dir=temp_root)
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
        gen = open(sync_sv, encoding='utf-8').read()
        asyn_text = open(async_sv, encoding='utf-8').read()
        norm = body(asyn_text).replace('m_vlsi_async_csr', 'm_vlsi_csr').replace("PARA_ASYNCHRONOUS = 32'd1", "PARA_ASYNCHRONOUS = 32'd0")
        step('sheets CSR and ASYNC_CSR differ only in the name and the default parameter', norm == body(gen))

        example_book = os.path.join(ROOT, 'examples', 'APB4_Synchronous', 'APB4_Synchronous_Config.xlsx')
        example_out = os.path.join(work, 'APB4_SIDEBAND')
        r = generate('CSR', example_out, example_book)
        step('generate APB4 event-sideband example', r.returncode == 0, r.stderr[-250:] if r.returncode else '')
        example_sv = os.path.join(example_out, 'RTL', 'm_vlsi_apb4_csr.sv')
        example_model = os.path.join(example_out, 'RTL', 'models', 'm_csr_sync.sv')
        repo_sv = os.path.join(ROOT, 'examples', 'APB4_Synchronous', 'RTL', 'm_vlsi_apb4_csr.sv')
        if r.returncode == 0 and os.path.isfile(repo_sv):
            step('APB4 example RTL matches its workbook (Date ignored)',
                 body(open(repo_sv, encoding='utf-8').read()) == body(open(example_sv, encoding='utf-8').read()))

        for index, cfg in enumerate(QUICK if args.quick else FULL):
            ok, msg = simulate_with_fallback(iverilog, vvp, verilator,
                                             [sync_model, sync_sv], cfg, work,
                                             run_id='base_%02d' % index)
            step('simulation ASYNC=%d MC=%d P_APB=%d P_REG=%d' % cfg, ok, msg)

        if os.path.isfile(example_sv):
            ok, msg = simulate_with_fallback(
                iverilog, vvp, verilator, [example_model, example_sv],
                (0, 2, 10000, 10000), work, sideband=True,
                run_id='apb4_event_sideband')
            step('simulation APB4 register-event sideband', ok, msg)

        if args.mutants:
            for name, old, new in MUTANTS:
                if old not in gen:
                    step('mutant "%s": pattern present' % name, False)
                    continue
                mut = os.path.join(work, 'mutant.sv')
                open(mut, 'w', encoding='utf-8').write(gen.replace(old, new, 1))
                detected = False
                for cfg in ((0, 2, 10000, 10000), (1, 2, 10000, 33000)):
                    ok, _ = simulate_with_fallback(
                        iverilog, vvp, verilator, [sync_model, mut], cfg, work,
                        run_id='mutant_%02d_%d' % (len(fails), cfg[0]))
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
