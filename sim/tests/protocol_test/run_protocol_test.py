"""Generate protocol test RTL from workbook examples and run self-checking Verilator simulations."""

import os
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))
from verilator_manual_build import build_and_run


ROOT = Path(__file__).resolve().parents[3]
GENERATOR = ROOT / "CSR_Generation.py"
WORKBOOK = ROOT / "CSR_GOLDEN_FORMAT.xlsx"
TEST_DIR = Path(__file__).resolve().parent
OSS_BIN = Path(r"C:\Tools\oss-cad-suite\bin")
VERILATOR = OSS_BIN / "verilator_bin.exe"


def run_checked(command, cwd, env, label):
    result = subprocess.run(command, cwd=cwd, env=env, text=True,
                            stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    if result.returncode != 0:
        print(f"FAIL {label} (exit {result.returncode})")
        print(result.stdout)
        raise SystemExit(result.returncode or 1)
    if label.startswith("compile "):
        print(f"PASS {label}")
    elif result.stdout.strip():
        print(result.stdout.rstrip())


def main():
    if not WORKBOOK.is_file():
        raise SystemExit(f"missing golden workbook: {WORKBOOK}")
    if not VERILATOR.is_file():
        raise SystemExit(f"missing Verilator executable: {VERILATOR}")

    env = os.environ.copy()
    # Verilator's generated makefile invokes python3 for verilator_includer;
    # the Windows Store python3 alias can hang, so use the active interpreter.
    env["PYTHON3"] = sys.executable
    temp_root = ROOT / ".test_tmp"
    temp_root.mkdir(exist_ok=True)
    env["TEMP"] = str(temp_root)
    env["TMP"] = str(temp_root)
    tempfile.tempdir = str(temp_root)
    env["VERILATOR_ROOT"] = str(OSS_BIN.parent / "share" / "verilator")
    user_profile = Path(env.get("USERPROFILE", ""))
    tool_paths = [str(OSS_BIN)]
    if str(user_profile):
        tool_paths.extend([
            str(user_profile / "Tools" / "msys64" / "ucrt64" / "bin"),
            str(user_profile / "Tools" / "msys64" / "usr" / "bin"),
        ])
    env["PATH"] = os.pathsep.join(tool_paths + [env.get("PATH", "")])

    with tempfile.TemporaryDirectory(prefix="csr_protocol_test_") as temp_name:
        temp = Path(temp_name)
        generated = {}
        for sheet, module in (("AXIL_SIM", "m_vlsi_axil_sim_csr"),
                              ("AHB_SIM", "m_vlsi_ahb_sim_csr")):
            out = temp / sheet
            run_checked([sys.executable, str(GENERATOR), str(WORKBOOK), sheet,
                         "--out", str(out), "--project", "CSR Protocol Simulation",
                         "--author", "Simulation Test (user)"],
                        ROOT, env, f"generate {sheet}")
            generated[sheet] = out / "RTL"

        runs = [
            ("AXIL_SINGLE", "tb_axil", "AXIL_SIM", "m_vlsi_axil_sim_csr", 0, 0),
            ("AXIL_READ_WRITE", "tb_axil", "AXIL_SIM", "m_vlsi_axil_sim_csr", 1, 0),
            ("AXIL_QUEUED", "tb_axil", "AXIL_SIM", "m_vlsi_axil_sim_csr", 2, 0),
            ("AXIL_ASYNC_QUEUED", "tb_axil", "AXIL_SIM", "m_vlsi_axil_sim_csr", 2, 1),
            ("AHB_LITTLE", "tb_ahblite", "AHB_SIM", "m_vlsi_ahb_sim_csr", 0, 0),
            ("AHB_BE8", "tb_ahblite", "AHB_SIM", "m_vlsi_ahb_sim_csr", 1, 0),
            ("AHB_BE32", "tb_ahblite", "AHB_SIM", "m_vlsi_ahb_sim_csr", 2, 0),
            ("AHB_ASYNC_BE8", "tb_ahblite", "AHB_SIM", "m_vlsi_ahb_sim_csr", 1, 1),
        ]
        for label, top, sheet, module, option, asynchronous in runs:
            obj_dir = temp / f"obj_{label}"
            obj_dir.mkdir()
            rtl_dir = generated[sheet]
            tb_file = TEST_DIR / ("tb_axil.sv" if top == "tb_axil" else "tb_ahblite.sv")
            rtl_files = [str(tb_file), str(rtl_dir / "models" / "m_csr_async_fifo.sv"),
                         str(rtl_dir / "models" / "m_csr_sync_fifo.sv"),
                         str(rtl_dir / f"{module}.sv")]
            lint_command = [
                str(VERILATOR), "--lint-only", "--timing", "--assert", "-Wno-fatal",
                "-Wno-UNUSEDSIGNAL", "--top-module", top,
                f"-GTEST_{'MODE' if top == 'tb_axil' else 'ENDIAN'}={option}",
                f"-GTEST_ASYNC={asynchronous}", *rtl_files]
            run_checked(lint_command, ROOT, env, f"lint {label}")
            command = [
                str(VERILATOR), "--binary", "--timing", "--assert", "-Wno-fatal",
                "-Wno-UNUSEDSIGNAL", "--top-module", top,
                "-CFLAGS", "-D_GLIBCXX_USE_CXX11_ABI=0",
                "-MAKEFLAGS", f"PYTHON3={sys.executable.replace(chr(92), '/')}",
                f"-GTEST_{'MODE' if top == 'tb_axil' else 'ENDIAN'}={option}",
                f"-GTEST_ASYNC={asynchronous}", "--Mdir", str(obj_dir), "-o", "run.exe",
                *rtl_files]
            compiled = subprocess.run(command, cwd=ROOT, env=env, text=True,
                                      stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
            if compiled.returncode != 0:
                print(f"INFO {label}: Verilator --binary failed (exit {compiled.returncode}); retrying with direct g++ build")
                manual_dir = temp / f"obj_{label}_manual"
                ok, output = build_and_run(
                    VERILATOR, top, rtl_files,
                    [f"-GTEST_{'MODE' if top == 'tb_axil' else 'ENDIAN'}={option}",
                     f"-GTEST_ASYNC={asynchronous}"],
                    manual_dir, env, label=label,
                    success_marker="PASS AXIL:" if top == "tb_axil" else "PASS AHB:")
                if not ok:
                    print(f"FAIL compile/simulate {label} (direct build fallback)")
                    print(output)
                    raise SystemExit(1)
                print(f"PASS compile and simulate {label} (direct g++ fallback)")
                print(output.rstrip())
                continue
            if compiled.stdout.strip():
                print(compiled.stdout.rstrip())
            print(f"PASS compile {label}")
            executable = obj_dir / "run.exe"
            run_checked([str(executable)], ROOT, env, f"simulate {label}")

    print("PASS: 8 lint configurations and 8 protocol simulations; AXI4-Lite and AHB-Lite RTL was generated from the golden workbook.")


if __name__ == "__main__":
    main()
