#!/usr/bin/env python3
"""Tests of CSR_Generation.py itself (TEST-001 and TEST-002 of the specification).

Runs the tool on the golden workbook and on bad inputs; checks files, ports, exit status and determinism.
Usage : python run_generator_test.py [WORKBOOK]   (default: CSR_GOLDEN_FORMAT.xlsx)
Needs : Python 3 and openpyxl. Exit 0 when every check passes.
"""
import os
import re
import shutil
import subprocess
import sys
import tempfile

import openpyxl

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), '..', '..', '..'))
TOOL = os.path.join(ROOT, 'CSR_Generation.py')
results = []


def check(name, ok, detail=''):
    results.append(ok)
    print('%s  %s %s' % ('PASS' if ok else 'FAIL', name, detail))


def run(args, cwd=None):
    return subprocess.run([sys.executable, TOOL] + args, capture_output=True, text=True, cwd=cwd)


def ports_of(sv):
    text = open(sv, encoding='utf-8').read()
    m = re.search(r'\)\s*\(\s*(.*?)\);', text, re.S)
    return re.findall(r'(?m)^\s*(input|output)\s+(?:wire|logic)\s*(?:\[[^\]]+\])*\s*(\w+)\s*,?\s*$', m.group(1))


def expected_field_ports(ws):
    """Field ports expected by REQ-IF-003 from the register table of a sheet."""
    exp = set()
    groups, current, started = [], None, False
    for row in ws.iter_rows(values_only=True):
        a = row[0]
        if not started:
            if a and 'REGISTER' in str(a):
                started = True
            continue
        if a:
            current = {'base': a, 'mode': str(row[7] or 'NONE').strip().upper(),
                       'count': int(row[8] or 1), 'fields': []}
            groups.append(current)
        elif current and row[2] and row[2] != 'reserved':
            current['fields'].append((row[2], str(row[4]).strip().lower()))
    for group in groups:
        names = (['%s_%d' % (group['base'], index) for index in range(group['count'])]
                 if group['mode'] == 'FIXED' else [group['base']])
        for register_name in names:
            for field_name, field_type in group['fields']:
                name = '%s_%s' % (register_name, field_name)
                if field_type == 'ro':
                    exp.add('i_' + name)
                else:
                    exp.add('o_' + name)
                    if field_type in ('rwi', 'w1c', 'w0c', 'w2c', 'r2c'):
                        exp |= {'i_hw_wdata_' + name, 'i_hw_we_' + name}
    return exp


def main():
    wb_path = sys.argv[1] if len(sys.argv) > 1 else os.path.join(ROOT, 'CSR_GOLDEN_FORMAT.xlsx')
    # Keep generated files inside the repository so restricted Windows
    # environments can create and remove the test workspace.
    tmp = tempfile.mkdtemp(prefix='.generator_test_', dir=ROOT)
    wb = openpyxl.load_workbook(wb_path)
    for sheet, asyn in (('CSR', 0), ('ASYNC_CSR', 1)):
        if sheet not in wb.sheetnames:
            continue
        out = os.path.join(tmp, sheet)
        r = run([wb_path, sheet, '--out', out, '--project', 'Test', '--author', 'Tester (user)'])
        cfg = {str(wb[sheet].cell(i, 1).value): wb[sheet].cell(i, 2).value for i in range(3, 9)}
        mod = cfg['Module Name']
        sv = os.path.join(out, 'RTL', mod + '.sv')
        check('%s: exit 0' % sheet, r.returncode == 0)
        check('%s: module file, file list, debug dump' % sheet,
              os.path.isfile(sv) and os.path.isfile(os.path.join(out, 'RTL', 'filelist.f')) and os.path.isfile(os.path.join(out, 'Debug', 'debug.json')))
        check('%s: synchronizer model present for parameter override' % sheet,
              os.path.isfile(os.path.join(out, 'RTL', 'models', 'm_csr_sync.sv')))
        debug = open(os.path.join(out, 'Debug', 'debug.json'), encoding='utf-8').read()
        check('%s: debug author follows the requested author' % sheet,
              '"Author": "Tester (user)"' in debug)
        head = open(sv, encoding='utf-8').read()[:700]
        check('%s: header fields' % sheet, all(re.search(r'%s\s*:' % k, head) for k in ('Project', 'Author', 'AI Flow', 'AI Flow Page', 'Date', 'Description'))
              and 'Author       : Tester (user)' in head and 'Design Rule v2' in head)
        got = {n for d, n in ports_of(sv)}
        fixed = {'i_clk_apb', 'i_rst_n_apb', 'i_apb_psel', 'i_apb_penable', 'i_apb_pwrite', 'i_apb_paddr', 'i_apb_pwdata', 'i_apb_pstrb',
                 'i_apb_pprot', 'o_apb_pready', 'o_apb_pslverr', 'o_apb_prdata', 'i_protect_en', 'i_slverr_en'}
        fixed |= {'i_clk_reg', 'i_rst_n_reg'}
        check('%s: ports = fixed ports + field ports' % sheet, got == fixed | expected_field_ports(wb[sheet]), '(%d ports)' % len(got))
        # TEST-002: same inputs, same files except the Date field
        out2 = os.path.join(tmp, sheet + '_2')
        run([wb_path, sheet, '--out', out2, '--project', 'Test', '--author', 'Tester (user)'])
        a = re.sub(r'Date\s*:.*', '', open(sv, encoding='utf-8').read())
        b = re.sub(r'Date\s*:.*', '', open(os.path.join(out2, 'RTL', mod + '.sv'), encoding='utf-8').read())
        check('%s: repeatable output' % sheet, a == b)
    # negative inputs
    r = run([wb_path, 'NO_SUCH_SHEET', '--out', os.path.join(tmp, 'x')])
    check('missing sheet: exit status 1', r.returncode == 1)
    bad = os.path.join(tmp, 'bad_protocol.xlsx')
    w2 = openpyxl.load_workbook(wb_path)
    sheet0 = 'CSR' if 'CSR' in w2.sheetnames else w2.sheetnames[0]
    for i in range(1, 12):
        if w2[sheet0].cell(i, 1).value == 'Protocol':
            w2[sheet0].cell(i, 2).value = 'UNKNOWN'
    w2.save(bad)
    r = run([bad, sheet0, '--out', os.path.join(tmp, 'y')])
    check('unsupported protocol: exit status 1 and a message', r.returncode == 1 and 'Protocol must be' in r.stdout)
    miss = os.path.join(tmp, 'missing_cfg.xlsx')
    w3 = openpyxl.load_workbook(wb_path)
    for i in range(1, 12):
        if w3[sheet0].cell(i, 1).value == 'Data Width':
            w3[sheet0].cell(i, 1).value = 'Width of data'
    w3.save(miss)
    r = run([miss, sheet0, '--out', os.path.join(tmp, 'z')])
    check('missing configuration value: exit status 1 and a message naming it', r.returncode == 1 and 'data_wd' in r.stdout)
    # an empty row inside the register table is skipped
    w4 = openpyxl.load_workbook(wb_path)
    ws = w4[sheet0]
    start = next(i for i in range(1, 40) if ws.cell(i, 1).value and 'REGISTER' in str(ws.cell(i, 1).value))
    ws.insert_rows(start + 3)
    gap = os.path.join(tmp, 'gap.xlsx')
    w4.save(gap)
    r = run([gap, sheet0, '--out', os.path.join(tmp, 'g')])
    check('empty row in the register table is skipped', r.returncode == 0)
    # a workbook of the older 7-column layout (no repeat columns) is still read
    w5 = openpyxl.load_workbook(wb_path)
    ws5 = w5[sheet0]
    ws5.delete_cols(8, 4)
    narrow = os.path.join(tmp, 'narrow.xlsx')
    w5.save(narrow)
    r = run([narrow, sheet0, '--out', os.path.join(tmp, 'n')])
    check('7-column workbook without repeat columns generates (registers of mode NONE)', r.returncode == 0)
    # a register may have several reserved fields
    w6 = openpyxl.load_workbook(wb_path)
    ws6 = w6[sheet0]
    rrow = next(i for i in range(1, 60) if ws6.cell(i, 3).value == 'reserved')
    ws6.cell(rrow, 4).value = '[14:8]'
    ws6.insert_rows(rrow + 1)
    for c, v in ((3, 'reserved'), (4, '[7:0]'), (5, 'ro'), (6, '0x0'), (7, 'Reserved; reads as zero and has no hardware input.')):
        ws6.cell(rrow + 1, c).value = v
    multi = os.path.join(tmp, 'multi_reserved.xlsx')
    w6.save(multi)
    r = run([multi, sheet0, '--out', os.path.join(tmp, 'm')])
    check('several reserved fields in one register are accepted', r.returncode == 0)
    # Register Event Sideband = 1 adds the four o_reg_* ports of an APB4 module; 2 is rejected
    w7 = openpyxl.load_workbook(wb_path)
    ws7 = w7[sheet0]
    ws7.insert_rows(9)
    ws7.cell(9, 1).value = 'Register Event Sideband'
    ws7.cell(9, 2).value = 1
    side = os.path.join(tmp, 'sideband.xlsx')
    w7.save(side)
    r = run([side, sheet0, '--out', os.path.join(tmp, 's')])
    sv_side = os.path.join(tmp, 's', 'RTL', str(w7[sheet0].cell(3, 2).value) + '.sv')
    side_ports = {n for d, n in ports_of(sv_side)} if r.returncode == 0 else set()
    check('Register Event Sideband = 1 adds o_reg_rd_en, o_reg_rd_addr, o_reg_wr_en, o_reg_wr_addr',
          side_ports >= {'o_reg_rd_en', 'o_reg_rd_addr', 'o_reg_wr_en', 'o_reg_wr_addr'})
    text_side = open(sv_side, encoding='utf-8').read() if r.returncode == 0 else ''
    check('Register Event Sideband: write event ORs only registers with a software-writable field',
          'assign o_reg_wr_en' in text_side and 'assign o_reg_rd_en   = w_rd_en & (reg_addr[1:0] == 2\'b00);' in text_side)
    ws7.cell(9, 2).value = 2
    w7.save(side)
    r = run([side, sheet0, '--out', os.path.join(tmp, 's2')])
    check('Register Event Sideband = 2: exit status 1 and a message', r.returncode == 1 and 'Register Event Sideband' in r.stdout)
    shutil.rmtree(tmp, ignore_errors=True)
    print('RESULT: %s (%d of %d checks)' % ('PASS' if all(results) else 'FAIL', sum(results), len(results)))
    return 0 if all(results) else 1


if __name__ == '__main__':
    sys.exit(main())
