# APB-CSR-Generator

## English

`CSR_Generation.py` v3.0 reads a register map from an Excel workbook and generates one synthesizable SystemVerilog CSR module. Each workbook sheet selects one bus interface.

| Bus | Supported profile | Key options |
|---|---|---|
| APB4 | Existing profile | `i_slverr_en=1` rejects partial strobes; `i_slverr_en=0` honors byte lanes. Optional APB4-only register-event sideband; synchronous or asynchronous CSR clocking |
| AXI4-Lite | 32-bit data, byte-addressed | `SINGLE`, `READ_WRITE`, or `QUEUED`; independent read/write depths from 1 to 8; `HONOR` or `REJECT` `WSTRB` |
| AHB-Lite | 32-bit data, byte-addressed | `HONOR` or `REJECT` subword writes; `LITTLE`, `BE8`, or `BE32` lane mapping |

AXI4-Lite read and write requests share one CSR engine. Arbitration is round-robin and starts with read after reset. `SINGLE` allows one global outstanding request, `READ_WRITE` allows one per direction, and `QUEUED` uses the configured read and write limits. AXI responses remain stable until accepted. AHB-Lite processes each accepted beat separately and returns the required two-cycle `ERROR` response for invalid or unmapped accesses.

For AXI4-Lite/AHB-Lite, `Asynchronous=0` uses single-clock request/response FIFOs and elaborates no CDC synchronizers. `Asynchronous=1` uses the workbook's register clock and dual-clock FIFOs. Both builds come from one RTL source using `PARA_ASYNCHRONOUS`. APB4 retains its existing clock architecture.

For APB4, the optional `Register Event Sideband` setting defaults to `0` when omitted. Set it to `1` to add one-cycle `o_reg_rd_en`/`o_reg_wr_en` pulses and `o_reg_rd_addr`/`o_reg_wr_addr` outputs. Read events cover aligned reads, including unmapped addresses. Write events cover accepted writes to mapped registers with software-writable fields. Address outputs are zero when their event is inactive. The APB4 example enables this option.

### Generate

```bash
pip install openpyxl
python CSR_Generation.py CSR_GOLDEN_FORMAT.xlsx AXIL_QUEUED --out build --project MyProject --author "Your Name (user)"
```

The generated output contains `RTL/<module>.sv`, `RTL/filelist.f`, and `Debug/debug.json`. AXI4-Lite/AHB-Lite output also includes single-clock and dual-clock FIFO models under `RTL/models/`.

### Verify

```bash
python sim/tests/generator_test/run_generator_test.py
python sim/tests/golden_test/run_golden_test.py
python sim/tests/protocol_test/run_protocol_test.py
```

The APB4 golden-map regression simulates both clock modes and checks the event-sideband example. Add `--mutants` to check detection of selected injected RTL faults. The AXI4-Lite/AHB-Lite protocol regression generates test RTL from `AXIL_SIM` and `AHB_SIM` workbook sheets, runs Verilator lint, then simulates outstanding modes, byte strobes, response stability, arbitration, AHB endian/size/alignment, unmapped accesses, and asynchronous FIFO cases. The golden runner falls back to direct Verilator/g++ build if Icarus compilation or simulation fails; the protocol runner uses that build if Verilator's generated `make` command fails. The fallback requires a compatible `g++` toolchain.

### Examples

The root [`CSR_GOLDEN_FORMAT.xlsx`](CSR_GOLDEN_FORMAT.xlsx) contains the complete set of configuration and simulation sheets. Each protocol example has its own single-sheet configuration workbook, generated RTL, file list, and debug report under [`examples/`](examples/README.md). This includes the APB4 example previously kept at the project root.

## Tiếng Việt

`CSR_Generation.py` phiên bản 3.0 đọc bản đồ thanh ghi từ workbook Excel và sinh một module CSR SystemVerilog có thể tổng hợp. Mỗi sheet chọn một giao diện bus.

| Bus | Profile hỗ trợ | Tùy chọn chính |
|---|---|---|
| APB4 | Profile hiện có | `i_slverr_en=1` từ chối strobe không đầy đủ; `i_slverr_en=0` ghi theo byte lane. Có thể bật register-event sideband; CSR đồng bộ hoặc bất đồng bộ |
| AXI4-Lite | Data 32 bit, địa chỉ theo byte | `SINGLE`, `READ_WRITE` hoặc `QUEUED`; độ sâu read/write độc lập từ 1 đến 8; `WSTRB` ở chế độ `HONOR` hoặc `REJECT` |
| AHB-Lite | Data 32 bit, địa chỉ theo byte | Ghi nhỏ hơn word ở chế độ `HONOR` hoặc `REJECT`; ánh xạ lane `LITTLE`, `BE8` hoặc `BE32` |

Read và write AXI4-Lite dùng chung một CSR engine. Bộ phân xử round-robin, sau reset ưu tiên read. `SINGLE` cho phép một yêu cầu outstanding tổng thể; `READ_WRITE` cho phép một yêu cầu mỗi chiều; `QUEUED` dùng giới hạn read và write đã cấu hình. Response AXI giữ ổn định đến khi được nhận. AHB-Lite xử lý từng beat riêng và trả response `ERROR` hai chu kỳ cho truy cập sai hoặc địa chỉ không ánh xạ.

Với AXI4-Lite/AHB-Lite, `Asynchronous=0` dùng FIFO request/response một clock và không khai triển bộ đồng bộ CDC. `Asynchronous=1` dùng clock register trong workbook và FIFO hai clock. Cả hai cấu hình dùng chung một RTL với parameter `PARA_ASYNCHRONOUS`. APB4 giữ nguyên kiến trúc clock hiện có.

Với APB4, cấu hình tùy chọn `Register Event Sideband` mặc định bằng `0` nếu sheet không khai báo. Đặt thành `1` để sinh các xung `o_reg_rd_en`/`o_reg_wr_en` một chu kỳ và các output địa chỉ `o_reg_rd_addr`/`o_reg_wr_addr`. Read event báo các lần đọc đúng căn chỉnh, kể cả địa chỉ chưa ánh xạ. Write event báo lần ghi được chấp nhận vào thanh ghi đã ánh xạ có field cho phép software ghi. Địa chỉ output bằng 0 khi event không hoạt động. Ví dụ APB4 bật tùy chọn này.

### Sinh RTL

```bash
pip install openpyxl
python CSR_Generation.py CSR_GOLDEN_FORMAT.xlsx AXIL_QUEUED --out build --project MyProject --author "Your Name (user)"
```

Kết quả sinh gồm `RTL/<module>.sv`, `RTL/filelist.f` và `Debug/debug.json`. RTL AXI4-Lite/AHB-Lite có thêm model FIFO một clock và hai clock trong `RTL/models/`.

### Kiểm tra

```bash
python sim/tests/generator_test/run_generator_test.py
python sim/tests/golden_test/run_golden_test.py
python sim/tests/protocol_test/run_protocol_test.py
```

APB4 golden-map regression mô phỏng hai chế độ clock và kiểm tra ví dụ event-sideband. Thêm `--mutants` để kiểm tra khả năng phát hiện một số RTL fault được chèn có chủ đích. AXI4-Lite/AHB-Lite protocol regression sinh RTL test từ các sheet `AXIL_SIM` và `AHB_SIM`, chạy Verilator lint rồi mô phỏng mode outstanding, byte strobe, độ ổn định response, arbitration, endian/size/alignment AHB, địa chỉ không ánh xạ và FIFO bất đồng bộ. Golden runner chuyển sang build trực tiếp bằng Verilator/g++ nếu biên dịch hoặc mô phỏng bằng Icarus lỗi; protocol runner dùng cách build này nếu lệnh `make` do Verilator sinh bị lỗi. Chế độ dự phòng cần toolchain `g++` tương thích.

### Ví dụ

[`CSR_GOLDEN_FORMAT.xlsx`](CSR_GOLDEN_FORMAT.xlsx) ở thư mục gốc chứa đầy đủ sheet cấu hình và mô phỏng. Mỗi ví dụ giao thức có workbook cấu hình một sheet, RTL, filelist và báo cáo debug riêng trong [`examples/`](examples/README.md), gồm cả ví dụ APB4 trước đây đặt ở thư mục gốc.

## Repository layout

| Path | Content |
|---|---|
| `CSR_Generation.py`, `CSR_Protocol_Generation.py` | Workbook parser, register model, protocol RTL emitters |
| `CSR_GOLDEN_FORMAT.xlsx` | Complete golden workbook and protocol configurations |
| `examples/APB4_Synchronous/` | APB4 configuration workbook and generated reference output |
| `examples/AXI4_Lite/`, `examples/AHB_Lite/` | Protocol-specific configuration workbooks and generated RTL |
| `spec/` | Generator specification and figures |
| `sim/tests/` | Generator, golden-map, and protocol regressions |
| `lint/` | Lint scripts |
