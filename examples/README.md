# CSR protocol examples

## English

Each example has its own configuration workbook, generated RTL, file list, and debug report. The workbooks contain only the sheet used by that example. `CSR_GOLDEN_FORMAT.xlsx` at the repository root remains the complete golden workbook.

| Example | Configuration workbook and sheet | Generated module | Configuration |
|---|---|---|---|
| [APB4 synchronous](APB4_Synchronous/RTL/) | [APB4_Synchronous_Config.xlsx](APB4_Synchronous/APB4_Synchronous_Config.xlsx), `CSR` | `m_vlsi_apb4_csr` | 32-bit, synchronous; register-event sideband enabled |
| [AXI4-Lite](AXI4_Lite/RTL/) | [AXI4_Lite_Config.xlsx](AXI4_Lite/AXI4_Lite_Config.xlsx), `AXIL_QUEUED` | `m_vlsi_axil_queued_csr` | 32-bit data, queued mode, 2 read entries, 4 write entries, synchronous clock |
| [AHB-Lite](AHB_Lite/RTL/) | [AHB_Lite_Config.xlsx](AHB_Lite/AHB_Lite_Config.xlsx), `AHB_LITE_LE` | `m_vlsi_ahb_le_csr` | 32-bit data, little-endian, synchronous clock |

Regenerate each example from the repository root:

```bash
python CSR_Generation.py examples/APB4_Synchronous/APB4_Synchronous_Config.xlsx CSR --out examples/APB4_Synchronous --project APB-CSR-Generator --author "Nguyen Quan (user)"
python CSR_Generation.py examples/AXI4_Lite/AXI4_Lite_Config.xlsx AXIL_QUEUED --out examples/AXI4_Lite --project APB-CSR-Generator --author "Nguyen Quan (user)"
python CSR_Generation.py examples/AHB_Lite/AHB_Lite_Config.xlsx AHB_LITE_LE --out examples/AHB_Lite --project APB-CSR-Generator --author "Nguyen Quan (user)"
```

The APB4 golden-map simulation is in [`sim/tests/golden_test/`](../sim/tests/golden_test/). The AXI4-Lite and AHB-Lite protocol testbenches are in [`sim/tests/protocol_test/`](../sim/tests/protocol_test/); that runner generates DUTs from the simulation sheets in the root golden workbook and checks eight configurations.

The APB4 example enables `Register Event Sideband=1`. It adds read/write event pulses and the corresponding register address outputs. The APB4 simulation checks mapped and unmapped reads, mapped writes, and suppression for invalid or unmapped writes.

Each protocol example includes a scalar `wo` key field with a hardware-clear input. The tests check software read-as-zero, stored writes, clear priority over a simultaneous write, and a write after clear. The coverage runner requires each example profile to exceed 70% line, expression-based condition, and toggle coverage; reports and raw simulator data are saved under `sim/results/coverage/run_<timestamp>/`.

```bash
python sim/tests/golden_test/run_golden_test.py
python sim/tests/protocol_test/run_protocol_test.py
python sim/tests/coverage_test/run_coverage_test.py
```

The golden runner uses Icarus/vvp when available and falls back to a direct Verilator/g++ build if Icarus compilation or simulation fails. The protocol runner uses Verilator and falls back to direct g++ compilation if Verilator cannot run `make`. The fallback needs a compatible C++ toolchain. Add `--mutants` to the golden command to run injected-fault checks. Each `RTL/filelist.f` lists the sources for its example.

## Tiếng Việt

Mỗi ví dụ có workbook cấu hình, RTL, filelist và báo cáo debug riêng. Workbook trong từng thư mục chỉ chứa sheet cấu hình được dùng cho ví dụ đó. `CSR_GOLDEN_FORMAT.xlsx` ở thư mục gốc vẫn là workbook golden đầy đủ.

| Ví dụ | Workbook và sheet cấu hình | Module được sinh | Cấu hình |
|---|---|---|---|
| [APB4 đồng bộ](APB4_Synchronous/RTL/) | [APB4_Synchronous_Config.xlsx](APB4_Synchronous/APB4_Synchronous_Config.xlsx), `CSR` | `m_vlsi_apb4_csr` | Data 32 bit, đồng bộ; bật register-event sideband |
| [AXI4-Lite](AXI4_Lite/RTL/) | [AXI4_Lite_Config.xlsx](AXI4_Lite/AXI4_Lite_Config.xlsx), `AXIL_QUEUED` | `m_vlsi_axil_queued_csr` | Data 32 bit, queued, 2 entry read, 4 entry write, clock đồng bộ |
| [AHB-Lite](AHB_Lite/RTL/) | [AHB_Lite_Config.xlsx](AHB_Lite/AHB_Lite_Config.xlsx), `AHB_LITE_LE` | `m_vlsi_ahb_le_csr` | Data 32 bit, little-endian, clock đồng bộ |

Sinh lại từng ví dụ từ thư mục gốc:

```bash
python CSR_Generation.py examples/APB4_Synchronous/APB4_Synchronous_Config.xlsx CSR --out examples/APB4_Synchronous --project APB-CSR-Generator --author "Nguyen Quan (user)"
python CSR_Generation.py examples/AXI4_Lite/AXI4_Lite_Config.xlsx AXIL_QUEUED --out examples/AXI4_Lite --project APB-CSR-Generator --author "Nguyen Quan (user)"
python CSR_Generation.py examples/AHB_Lite/AHB_Lite_Config.xlsx AHB_LITE_LE --out examples/AHB_Lite --project APB-CSR-Generator --author "Nguyen Quan (user)"
```

Mô phỏng golden-map APB4 nằm trong [`sim/tests/golden_test/`](../sim/tests/golden_test/). Testbench giao thức AXI4-Lite và AHB-Lite nằm trong [`sim/tests/protocol_test/`](../sim/tests/protocol_test/); runner sinh DUT từ các sheet mô phỏng trong workbook golden ở thư mục gốc và kiểm tra tám cấu hình.

Ví dụ APB4 bật `Register Event Sideband=1`, sinh các xung read/write event và địa chỉ thanh ghi tương ứng. Mô phỏng APB4 kiểm tra read đã ánh xạ/chưa ánh xạ, write đã ánh xạ và việc không phát event cho write sai hoặc chưa ánh xạ.

Mỗi ví dụ giao thức có field key `wo` dạng scalar cùng input hardware-clear. Test kiểm tra read trả 0, lưu giá trị write, clear ưu tiên hơn write đồng thời và write lại sau clear. Coverage runner yêu cầu mỗi cấu hình ví dụ đạt trên 70% line, condition dựa trên expression và toggle coverage; report cùng dữ liệu mô phỏng thô được lưu trong `sim/results/coverage/run_<timestamp>/`.

```bash
python sim/tests/golden_test/run_golden_test.py
python sim/tests/protocol_test/run_protocol_test.py
python sim/tests/coverage_test/run_coverage_test.py
```

Golden runner dùng Icarus/vvp nếu biên dịch và mô phỏng được; nếu một trong hai bước lỗi, runner chuyển sang build trực tiếp Verilator/g++. Protocol runner dùng Verilator và chuyển sang build trực tiếp bằng g++ khi không chạy được `make`. Chế độ dự phòng cần C++ toolchain tương thích. Thêm `--mutants` vào lệnh golden để chạy kiểm tra fault injection. Mỗi `RTL/filelist.f` liệt kê các source của ví dụ tương ứng.
