# APB CSR Generator

`CSR_Generation.py` reads a register map from an Excel workbook and writes one synthesizable SystemVerilog module: an AMBA APB4 completer with the registers and fields of the workbook, so that software can control and observe a hardware block.

The complete documentation is one document: **[spec/CSR_Generator_Specification.md](spec/CSR_Generator_Specification.md)**.

| You want to | Read |
|---|---|
| Run the tool | Section A.6 (user guide) |
| Know what the script does | Section A.3 (script flow with flowcharts) |
| Know what every option does, with its gate-level schematic | Section A.5 |
| Write the workbook | Section A.4 |
| Check requirements, interfaces, timing, verification results | Part B |
| See the planned register attributes | Part C (not implemented) |

## Quick start

```bash
pip install openpyxl
python CSR_Generation.py CSR_GOLDEN_FORMAT.xlsx CSR --out build --project MyProject --author "Your Name (user)"
```

Output under `build/`:

| File | Content |
|---|---|
| `RTL/<module>.sv` | The CSR module |
| `RTL/filelist.f` | Compile order (paths relative to the file) |
| `RTL/models/m_csr_sync.sv` | Behavioral synchronizer (replace with your technology cell) |
| `Debug/debug.json` | What was read from the workbook |

## Features (generator 2.4)

- APB4 completer, one transfer at a time, `PSLVERR` on protection, alignment and partial-strobe errors.
- Field types `rw`, `ro`, `rwi`, `w1c`, `w0c`, `w2c`, `r2c`.
- Register replication: `FIXED` copies and `PARAMETERIZED` banks.
- One module for both clock architectures, selected by the parameter `PARA_ASYNCHRONOUS`.
- Output follows the VLSIT RTL Design Rule v2.

## Verify

```bash
python sim/tests/generator_test/run_generator_test.py
python sim/tests/golden_test/run_golden_test.py --mutants     # needs iverilog in PATH
```

## Repository

| Path | Content |
|---|---|
| `CSR_Generation.py` | Generator |
| `CSR_GOLDEN_FORMAT.xlsx` | Reference workbook (sheets `CSR`, `ASYNC_CSR`) |
| `RTL/`, `Debug/` | Reference output of sheet `CSR` |
| `spec/` | The specification and its figures (`spec/figures/tools` makes the schematics and flowcharts) |
| `sim/tests/` | Generator test and golden-map simulation testbench |
| `lint/` | Verilator and VC Static lint scripts |
