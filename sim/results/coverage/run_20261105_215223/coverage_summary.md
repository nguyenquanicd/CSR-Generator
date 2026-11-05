# CSR Example RTL Coverage

Run: `run_20261105_215223`

Coverage points are limited to generated RTL under each example's `RTL/` directory. The condition gate uses Verilator expression coverage when present, otherwise branch outcomes; branch and expression values are both reported separately.

Measured profiles: APB4 synchronous (`ASYNC=0`, `MC=2`); AXI4-Lite queued (`TEST_MODE=2`, `TEST_ASYNC=0`); AHB-Lite little-endian (`TEST_ENDIAN=0`, `TEST_ASYNC=0`).

Randomized AXI4-Lite/AHB-Lite stress uses Verilator seed `1` for repeatable runs.
Strict requirement: each design must exceed 70% line, condition, and toggle coverage.

| Example | Line | Condition gate | Branch | Expression | Toggle | Result |
|---|---:|---:|---:|---:|---:|---|
| APB4_Synchronous | 97.22% (35/36) | 98.14% (211/215) | 95.18% (158/166) | 98.14% (211/215) | 79.33% (1574/1984) | PASS |
| AXI4_Lite | 92.73% (51/55) | 88.42% (275/311) | 93.33% (196/210) | 88.42% (275/311) | 73.36% (2745/3742) | PASS |
| AHB_Lite | 86.89% (53/61) | 85.20% (213/250) | 91.49% (172/188) | 85.20% (213/250) | 72.88% (2236/3068) | PASS |

The `.dat` files are the raw coverage databases; the adjacent `.log` files contain each self-checking simulation's result. `tb_*.sv` are the generated example-map testbench wrappers used for AXI4-Lite and AHB-Lite.
