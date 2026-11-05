# CSR Example RTL Coverage

Run: `run_20261105_074223`

Coverage points are limited to generated RTL under each example's `RTL/` directory. The condition gate uses Verilator expression coverage when present, otherwise branch outcomes; branch and expression values are both reported separately.

Strict requirement: each design must exceed 70% line, condition, and toggle coverage.

| Example | Line | Condition gate | Branch | Expression | Toggle | Result |
|---|---:|---:|---:|---:|---:|---|
| APB4_Synchronous | 97.22% (35/36) | 98.14% (211/215) | 95.18% (158/166) | 98.14% (211/215) | 79.33% (1574/1984) | PASS |
| AXI4_Lite | 87.27% (48/55) | 74.60% (232/311) | 77.14% (162/210) | 74.60% (232/311) | 41.29% (1545/3742) | FAIL |
| AHB_Lite | 78.69% (48/61) | 68.00% (170/250) | 72.34% (136/188) | 68.00% (170/250) | 42.99% (1319/3068) | FAIL |

The `.dat` files are the raw coverage databases; the adjacent `.log` files contain each self-checking simulation's result. `tb_*.sv` are the generated example-map testbench wrappers used for AXI4-Lite and AHB-Lite.
