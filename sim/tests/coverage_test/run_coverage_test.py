#!/usr/bin/env python3
"""Run coverage-instrumented simulations on the checked-in APB4, AXI4-Lite and AHB-Lite examples.

The output includes raw Verilator coverage databases and a per-example threshold report.
Coverage gates are strict: line, expression/condition, and toggle coverage must each exceed 70%.
"""
from __future__ import annotations

import datetime as dt
import os
import re
import shutil
import subprocess
import sys
from pathlib import Path

TEST_ROOT = Path(__file__).resolve().parents[1]
REPO_ROOT = TEST_ROOT.parents[1]
GENERATOR = REPO_ROOT / "CSR_Generation.py"
OSS_BIN = Path(r"C:\Tools\oss-cad-suite\bin")
VERILATOR = OSS_BIN / "verilator_bin.exe"
VERILATOR_COVERAGE = OSS_BIN / "verilator_coverage_bin.exe"
THRESHOLD = 70.0

sys.path.insert(0, str(TEST_ROOT))
from verilator_manual_build import build_and_run


def prepare_env() -> dict[str, str]:
    env = os.environ.copy()
    env["PYTHON3"] = sys.executable
    env["VERILATOR_ROOT"] = str(OSS_BIN.parent / "share" / "verilator")
    user_profile = Path(env.get("USERPROFILE", ""))
    paths = [str(OSS_BIN)]
    if user_profile:
        paths.extend([
            str(user_profile / "Tools" / "msys64" / "ucrt64" / "bin"),
            str(user_profile / "Tools" / "msys64" / "usr" / "bin"),
        ])
    env["PATH"] = os.pathsep.join(paths + [env.get("PATH", "")])
    return env


def run_generator(workbook: Path, sheet: str, output: Path, env: dict[str, str]) -> None:
    command = [sys.executable, str(GENERATOR), str(workbook), sheet,
               "--out", str(output), "--project", "APB-CSR-Generator",
               "--author", "Nguyen Quan (user)"]
    result = subprocess.run(command, cwd=REPO_ROOT, env=env, text=True,
                            stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    if result.returncode:
        raise RuntimeError(f"Generator failed for {workbook.name}/{sheet}:\n{result.stdout}")


def module_ports(rtl_path: Path) -> list[tuple[str, str, str]]:
    text = rtl_path.read_text(encoding="utf-8")
    module = re.search(r"\)\s*\(\s*(.*?)\);", text, re.S)
    if not module:
        raise RuntimeError(f"Cannot parse module port list from {rtl_path}")
    count_match = re.search(r"PARA_MONITOR_COUNT\s*=\s*32'd(\d+)", text)
    count = int(count_match.group(1)) if count_match else 1
    ports = re.findall(
        r"(?m)^\s*(input|output)\s+(?:wire|logic)\s*((?:\[[^\]]+\]\s*)*)([A-Za-z_][A-Za-z0-9_]*)\s*,?\s*$",
        module.group(1),
    )
    result = []
    for direction, dimensions, name in ports:
        dimensions = dimensions.replace("PARA_MONITOR_COUNT-1:0", f"{count - 1}:0")
        result.append((direction, name, dimensions.strip()))
    return result


def example_testbench(base_path: Path, rtl_path: Path, dut_name: str,
                      protocol: str, output_path: Path) -> Path:
    text = base_path.read_text(encoding="utf-8")
    if protocol == "AXI4-Lite":
        instance_start = text.index("  m_vlsi_axil_sim_csr #(")
        instance_end = text.index("\n\n  task automatic send_ar", instance_start)
        params = """#(
    .PARA_ASYNCHRONOUS(TEST_ASYNC),
    .PARA_AXI_OUTSTANDING_MODE(TEST_MODE),
    .PARA_AXI_RD_DEPTH(32'd2),
    .PARA_AXI_WR_DEPTH(32'd4)
  )"""
    else:
        instance_start = text.index("  m_vlsi_ahb_sim_csr #(")
        instance_end = text.index("\n\n  task automatic ahb_access", instance_start)
        params = """#(
    .PARA_ASYNCHRONOUS(TEST_ASYNC),
    .PARA_AHB_ENDIAN(TEST_ENDIAN),
    .PARA_WRITE_STROBE_MODE(32'd0)
  )"""

    declared = set(re.findall(
        r"(?m)^\s*(?:logic|wire|reg)\s+(?:\[[^\]\n]+\]\s*)*([A-Za-z_][A-Za-z0-9_]*)\s*(?:=|;)" , text
    ))
    coverage_inputs: list[str] = []
    connections: list[str] = []
    coverage_widths: dict[str, int] = {}
    for direction, name, dimensions in module_ports(rtl_path):
        if name in declared:
            value = name
        elif direction == "input":
            value = "cov_" + name
            coverage_inputs.append(name)
            sizes = [int(match.group(1)) - int(match.group(2)) + 1
                     for match in re.finditer(r"\[(\d+):(\d+)\]", dimensions)]
            coverage_widths[name] = 1
            for size in sizes:
                coverage_widths[name] *= size
            if not sizes:
                coverage_widths[name] = 1
        else:
            value = ""
        connections.append(f"    .{name}({value})")
    instance = (f"  {dut_name} {params} u_dut (\n" + ",\n".join(connections) + "\n  );")
    text = text[:instance_start] + instance + text[instance_end:]

    port_dims = {name: dims for direction, name, dims in module_ports(rtl_path)}
    declarations = "\n".join(
        f"  logic {port_dims[name]} cov_{name};" if port_dims[name]
        else f"  logic cov_{name};"
        for name in coverage_inputs
    )
    text = text.replace("  integer test_count;", declarations + "\n  integer test_count;", 1)
    init_cov = "\n".join(f"      cov_{name} = '0;" for name in coverage_inputs)
    init_cov += "\n      cov_i_engine_events = 8'h12;\n      cov_i_port_0_event_count = 8'h34;\n      cov_i_monitor_sample_count = 16'h7856;"
    text = text.replace("  task automatic run_example_map;\n    begin\n",
                        "  task automatic run_example_map;\n    begin\n" + init_cov + "\n", 1)

    toggle_clock = "i_clk_axi" if protocol == "AXI4-Lite" else "i_clk_ahb"
    toggle_loop = (
        "  task automatic cov_toggle_inputs;\n"
        "    integer cov_i;\n"
        "    begin\n"
        "      for (cov_i = 0; cov_i < 256; cov_i = cov_i + 1) begin\n"
        f"        @(negedge {toggle_clock});\n" +
        "\n".join(f"        cov_{name} = {coverage_widths[name]}'($urandom);" for name in coverage_inputs) + "\n"
        "      end\n"
        "    end\n"
        "  endtask\n\n"
    )
    text = text.replace("  task automatic run_example_map;", toggle_loop + "  task automatic run_example_map;", 1)
    if protocol == "AXI4-Lite":
        burst = r'''  function automatic bit example_mapped(input logic [15:0] addr);
    begin
      case (addr)
        16'h0000, 16'h0100, 16'h0104, 16'h0108, 16'h0200, 16'h0204, 16'h0400: example_mapped = 1'b1;
        default: example_mapped = 1'b0;
      endcase
    end
  endfunction

  task automatic axi_read_response(input logic [15:0] address, input logic [1:0] expected_resp);
    integer wait_cycles;
    begin
      send_ar(address);
      wait_cycles = 0;
      while (!o_axi_rvalid && wait_cycles < 100) begin
        @(posedge i_clk_axi);
        wait_cycles = wait_cycles + 1;
      end
      if (!o_axi_rvalid || o_axi_rresp !== expected_resp)
        $fatal(1, "coverage read response mismatch at %04x", address);
      @(negedge i_clk_axi);
      i_axi_rready = 1'b1;
      @(posedge i_clk_axi);
      @(negedge i_clk_axi);
      i_axi_rready = 1'b0;
    end
  endtask

  task automatic coverage_burst;
    integer q;
    integer pick;
    logic [15:0] addr;
    logic [31:0] data;
    logic [3:0] strb;
    logic [15:0] legal_addr [0:6];
    begin
      legal_addr[0] = 16'h0000; legal_addr[1] = 16'h0100; legal_addr[2] = 16'h0104;
      legal_addr[3] = 16'h0108; legal_addr[4] = 16'h0200; legal_addr[5] = 16'h0204;
      legal_addr[6] = 16'h0400;
      for (q = 0; q < 96; q = q + 1) begin
        data = $urandom;
        strb = 4'($urandom_range(0, 15));
        case (q % 4)
          0: begin
            pick = $urandom_range(0, 6);
            addr = legal_addr[pick];
            axi_write(addr, data, strb, 2'b00);
          end
          1: begin
            addr = 16'h8000 | 16'($urandom & 32'h7FFC);
            axi_write(addr, data, strb, 2'b11);
          end
          2: begin
            addr = 16'(($urandom & 32'hFFFC) | 32'h0001);
            axi_write(addr, data, strb, 2'b10);
          end
          default: begin
            addr = 16'(($urandom & 32'hFFFC) | 32'h0002);
            axi_write(addr, data, strb, 2'b10);
          end
        endcase
        if ((q % 8) == 0) axi_read_response(legal_addr[(q / 8) % 7], 2'b00);
      end
      cov_toggle_inputs();
    end
  endtask
'''
        insertion = "\n\n  task automatic send_ar"
        text = text.replace(insertion, "\n\n" + burst + "\n  task automatic send_ar", 1)
        end_needle = "      check_full_queued_limit();\n    end\n  endtask"
    else:
        burst = r'''  task automatic ahb_read_response(input logic [15:0] address, input logic expected_error);
    integer wait_cycles;
    integer error_cycles;
    logic done;
    begin
      @(negedge i_clk_ahb);
      i_ahb_hsel = 1'b1;
      i_ahb_htrans = 2'b10;
      i_ahb_haddr = address;
      i_ahb_hwrite = 1'b0;
      i_ahb_hsize = 3'd2;
      i_ahb_hburst = address[4:2];
      @(posedge i_clk_ahb);
      @(negedge i_clk_ahb);
      i_ahb_hsel = 1'b0;
      i_ahb_htrans = 2'b00;
      wait_cycles = 0;
      error_cycles = 0;
      done = 1'b0;
      while ((wait_cycles < 120) && !done) begin
        @(negedge i_clk_ahb);
        wait_cycles = wait_cycles + 1;
        if (o_ahb_hresp) error_cycles = error_cycles + 1;
        if (o_ahb_hreadyout) begin
          if (o_ahb_hresp !== expected_error) $fatal(1, "coverage AHB response mismatch at %04x", address);
          if (expected_error && error_cycles != 2) $fatal(1, "coverage AHB ERROR was not two cycles");
          @(posedge i_clk_ahb);
          done = 1'b1;
        end
      end
      if (!done) $fatal(1, "coverage AHB read timeout at %04x", address);
      @(negedge i_clk_ahb);
    end
  endtask

  task automatic coverage_burst;
    integer q;
    integer pick;
    logic [15:0] addr;
    logic [31:0] data;
    logic [2:0] size;
    logic [15:0] legal_addr [0:6];
    begin
      legal_addr[0] = 16'h0000; legal_addr[1] = 16'h0100; legal_addr[2] = 16'h0104;
      legal_addr[3] = 16'h0108; legal_addr[4] = 16'h0200; legal_addr[5] = 16'h0204;
      legal_addr[6] = 16'h0400;
      for (q = 0; q < 96; q = q + 1) begin
        data = $urandom;
        case (q % 4)
          0: begin
            pick = $urandom_range(0, 6);
            size = 3'(q % 3);
            addr = legal_addr[pick];
            if (size == 3'd0) addr = legal_addr[pick] + 16'(q % 4);
            else if (size == 3'd1) addr = legal_addr[pick] + 16'(2 * (q % 2));
            ahb_access(addr, 1'b1, size, data, 1'b0, '0);
          end
          1: begin
            addr = 16'h8000 | 16'($urandom & 32'h7FFC);
            ahb_access(addr, 1'b1, 3'd2, data, 1'b1, '0);
          end
          2: begin
            addr = 16'(($urandom & 32'hFFFC) | 32'h0001);
            ahb_access(addr, 1'b1, 3'd1, data, 1'b1, '0);
          end
          default: begin
            addr = legal_addr[$urandom_range(0, 6)];
            ahb_access(addr, 1'b1, 3'd3, data, 1'b1, '0);
          end
        endcase
        if ((q % 8) == 0) ahb_read_response(legal_addr[(q / 8) % 7], 1'b0);
      end
      cov_toggle_inputs();
    end
  endtask
'''
        insertion = "\n\n  task automatic ahb_access"
        text = text.replace(insertion, "\n\n" + burst + "\n  task automatic ahb_access", 1)
        end_needle = "      ahb_access(16'h0300, 1'b0, 3'd2, '0, 1'b1, '0);\n    end\n  endtask"
    if end_needle not in text:
        raise RuntimeError(f"Coverage burst insertion point not found in {base_path.name}")
    if protocol == "AXI4-Lite":
        text = text.replace(end_needle, "      check_full_queued_limit();\n      coverage_burst();\n    end\n  endtask", 1)
    else:
        text = text.replace(end_needle, "      ahb_access(16'h0300, 1'b0, 3'd2, '0, 1'b1, '0);\n      coverage_burst();\n    end\n  endtask", 1)
    output_path.write_text(text, encoding="utf-8")
    return output_path


def read_coverage_points(dat_path: Path, rtl_root: Path) -> dict[str, list[int]]:
    data = dat_path.read_text(encoding="utf-8", errors="replace")
    root = os.path.normcase(os.path.abspath(rtl_root))
    points: dict[str, list[int]] = {}
    for line in data.splitlines():
        if not line.startswith("C '"):
            continue
        fields: dict[str, str] = {}
        for part in line.split("\x01")[1:]:
            if "\x02" in part:
                key, value = part.split("\x02", 1)
                fields[key] = value
        source = fields.get("f", "")
        source_abs = os.path.normcase(os.path.abspath(source))
        if not source_abs.startswith(root + os.sep):
            continue
        point_type = fields.get("t", "")
        count_match = re.search(r"'\s+(\d+)\s*$", line)
        if point_type and count_match:
            points.setdefault(point_type, []).append(int(count_match.group(1)))
    return points


def percent(points: dict[str, list[int]], kind: str) -> tuple[float | None, int, int]:
    values = points.get(kind, [])
    if not values:
        return None, 0, 0
    hits = sum(value > 0 for value in values)
    return 100.0 * hits / len(values), hits, len(values)


def run_coverage(top: str, rtl_files: list[Path], tb_file: Path, params: list[str],
                 defines: list[str], rtl_root: Path, name: str, run_dir: Path,
                 env: dict[str, str], success_marker: str) -> dict[str, object]:
    obj_dir = run_dir / f"obj_{name}"
    dat_path = run_dir / f"{name}.dat"
    ok, output = build_and_run(
        VERILATOR, top, [tb_file, *rtl_files], params, obj_dir, env,
        defines=defines, label=name, success_marker=success_marker,
        coverage_file=dat_path,
    )
    (run_dir / f"{name}.log").write_text(output, encoding="utf-8")
    if not ok:
        raise RuntimeError(f"Simulation failed for {name}:\n{output}")
    if not dat_path.is_file():
        raise RuntimeError(f"Simulation passed but did not write coverage database: {dat_path}")
    points = read_coverage_points(dat_path, rtl_root)
    line = percent(points, "line")
    toggle = percent(points, "toggle")
    branch = percent(points, "branch")
    expr = percent(points, "expr")
    condition = expr if expr[2] else branch
    return {
        "name": name,
        "dat": dat_path,
        "line": line,
        "toggle": toggle,
        "branch": branch,
        "expr": expr,
        "condition": condition,
    }


def fmt_metric(metric: tuple[float | None, int, int]) -> str:
    value, hit, total = metric
    return "N/A (no points)" if value is None else f"{value:.2f}% ({hit}/{total})"


def main() -> int:
    if not VERILATOR.is_file() or not VERILATOR_COVERAGE.is_file():
        print(f"ERROR: Verilator binaries not found under {OSS_BIN}")
        return 2
    env = prepare_env()
    stamp = dt.datetime.now().strftime("%Y%m%d_%H%M%S")
    run_dir = REPO_ROOT / "sim" / "results" / "coverage" / f"run_{stamp}"
    run_dir.mkdir(parents=True, exist_ok=False)

    example_specs = [
        ("APB4_Synchronous", "CSR", "m_vlsi_apb4_csr", "APB4",
         REPO_ROOT / "examples/APB4_Synchronous/APB4_Synchronous_Config.xlsx", "tb_csr_golden"),
        ("AXI4_Lite", "AXIL_QUEUED", "m_vlsi_axil_queued_csr", "AXI4-Lite",
         REPO_ROOT / "examples/AXI4_Lite/AXI4_Lite_Config.xlsx", "tb_axil"),
        ("AHB_Lite", "AHB_LITE_LE", "m_vlsi_ahb_le_csr", "AHB-Lite",
         REPO_ROOT / "examples/AHB_Lite/AHB_Lite_Config.xlsx", "tb_ahblite"),
    ]
    results: list[dict[str, object]] = []
    try:
        for folder, sheet, dut, protocol, workbook, testbench in example_specs:
            example_dir = REPO_ROOT / "examples" / folder
            run_generator(workbook, sheet, example_dir, env)
            rtl_root = example_dir / "RTL"
            module = rtl_root / f"{dut}.sv"
            if not module.is_file():
                raise RuntimeError(f"Generator did not create the expected module: {module}")
            models = rtl_root / "models"
            if protocol == "APB4":
                rtl = [models / "m_csr_sync.sv", module]
                tb = TEST_ROOT / "golden_test" / "tb_csr_golden.sv"
                params = ["-GASYNC=0", "-GMC=2", "-GP_APB=10000", "-GP_REG=10000"]
                defines = ["-DCSR_EVENT_SIDEBAND"]
                marker = "TB PASS"
            else:
                rtl = [models / "m_csr_async_fifo.sv", models / "m_csr_sync_fifo.sv", module]
                base_tb = TEST_ROOT / "protocol_test" / ("tb_axil.sv" if protocol == "AXI4-Lite" else "tb_ahblite.sv")
                tb = example_testbench(base_tb, module, dut, protocol,
                                       run_dir / f"tb_{folder}.sv")
                if protocol == "AXI4-Lite":
                    params = ["-GTEST_MODE=2", "-GTEST_ASYNC=0", "-GTEST_EXAMPLE=1"]
                    marker = "PASS AXIL example map"
                else:
                    params = ["-GTEST_ENDIAN=0", "-GTEST_ASYNC=0", "-GTEST_EXAMPLE=1"]
                    marker = "PASS AHB example map"
                defines = []
            result = run_coverage(
                testbench, rtl, tb, params, defines, rtl_root, folder,
                run_dir, env, marker,
            )
            results.append(result)
            print(f"PASS simulation {folder}: {result['name']}")

        lines = [
            "# CSR Example RTL Coverage",
            "",
            f"Run: `{run_dir.name}`",
            "",
            "Coverage points are limited to generated RTL under each example's `RTL/` directory. The condition gate uses Verilator expression coverage when present, otherwise branch outcomes; branch and expression values are both reported separately.",
            "",
            "Measured profiles: APB4 synchronous (`ASYNC=0`, `MC=2`); AXI4-Lite queued (`TEST_MODE=2`, `TEST_ASYNC=0`); AHB-Lite little-endian (`TEST_ENDIAN=0`, `TEST_ASYNC=0`).",
            "",
            "Randomized AXI4-Lite/AHB-Lite stress uses Verilator seed `1` for repeatable runs.",
            f"Strict requirement: each design must exceed {THRESHOLD:.0f}% line, condition, and toggle coverage.",
            "",
            "| Example | Line | Condition gate | Branch | Expression | Toggle | Result |",
            "|---|---:|---:|---:|---:|---:|---|",
        ]
        all_pass = True
        for result in results:
            line = result["line"]
            condition = result["condition"]
            toggle = result["toggle"]
            passed = all(m[0] is not None and m[0] > THRESHOLD for m in (line, condition, toggle))
            all_pass &= passed
            lines.append(
                f"| {result['name']} | {fmt_metric(line)} | {fmt_metric(condition)} | "
                f"{fmt_metric(result['branch'])} | {fmt_metric(result['expr'])} | "
                f"{fmt_metric(toggle)} | {'PASS' if passed else 'FAIL'} |"
            )
        lines.extend([
            "",
            "The `.dat` files are the raw coverage databases; the adjacent `.log` files contain each self-checking simulation's result. `tb_*.sv` are the generated example-map testbench wrappers used for AXI4-Lite and AHB-Lite.",
            "",
        ])
        report = run_dir / "coverage_summary.md"
        report.write_text("\n".join(lines), encoding="utf-8")
        print(report.read_text(encoding="utf-8"))
        return 0 if all_pass else 1
    except Exception as exc:
        (run_dir / "coverage_failure.txt").write_text(str(exc) + "\n", encoding="utf-8")
        print(f"FAIL: {exc}")
        print(f"Artifacts: {run_dir}")
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
