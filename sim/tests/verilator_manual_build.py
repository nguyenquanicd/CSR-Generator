"""Build and run a Verilator model without GNU Make.

This fallback is for environments where Icarus cannot compile the testbench, or
where Verilator can elaborate a design but its generated make command is broken.
It supports the timing-enabled C++ models used by the CSR regressions.
"""

from pathlib import Path
import shutil
import subprocess


def _find_cxx(env):
    user_profile = env.get("USERPROFILE", "")
    candidates = [
        env.get("CXX"),
        shutil.which("g++", path=env.get("PATH")),
        str(Path(user_profile) / "Tools" / "msys64" / "ucrt64" / "bin" / "g++.exe")
        if user_profile else None,
        r"C:\msys64\ucrt64\bin\g++.exe",
    ]
    for candidate in candidates:
        if candidate and Path(candidate).is_file():
            return candidate
    return None


def build_and_run(verilator, top, rtl_files, parameter_args, obj_dir, env,
                  defines=(), label="simulation", success_marker=None):
    """Return (success, output); compile generated C++ directly, bypassing make."""
    obj_dir = Path(obj_dir).resolve()
    obj_dir.mkdir(parents=True, exist_ok=True)
    verilator_root = env.get("VERILATOR_ROOT")
    compiler = _find_cxx(env)
    if not verilator_root or not Path(verilator_root).is_dir():
        return False, "VERILATOR_ROOT is not a valid Verilator support directory"
    if not compiler:
        return False, "g++ was not found; direct Verilator build fallback is unavailable"

    codegen = [
        str(verilator), "--cc", "--exe", "--main", "--timing", "--assert",
        "-Wno-fatal", "-Wno-UNUSEDSIGNAL", "--top-module", top,
        "--Mdir", str(obj_dir), "-o", "run.exe",
        *defines, *parameter_args, *(str(Path(path).resolve()) for path in rtl_files),
    ]
    generated = subprocess.run(codegen, cwd=obj_dir.parent, env=env, text=True,
                                stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    if generated.returncode != 0:
        return False, ("Verilator C++ generation failed; command: " + repr(codegen) +
                       "\n" + generated.stdout)

    generated_sources = sorted(path for path in obj_dir.glob("*.cpp")
                               if path.name != "codex_time_stub.cpp")
    if not generated_sources:
        return False, "Verilator did not generate C++ source files"

    support_dir = Path(verilator_root) / "include"
    support_sources = [support_dir / name for name in (
        "verilated.cpp", "verilated_timing.cpp", "verilated_threads.cpp")]
    missing = [str(path) for path in support_sources if not path.is_file()]
    if missing:
        return False, "Missing Verilator runtime source(s): " + ", ".join(missing)

    # The runtime declares this optional legacy hook weakly, but this MinGW
    # linker still requires a definition. Timing-enabled Verilator models use
    # their scheduler/context time; this legacy hook is not used by the tests.
    time_stub = obj_dir / "codex_time_stub.cpp"
    time_stub.write_text(
        '#include "verilated.h"\n'
        'double sc_time_stamp() { return 0.0; }\n',
        encoding="ascii",
    )

    include_args = [
        "-I" + str(obj_dir),
        "-I" + str(support_dir),
        "-I" + str(support_dir / "vltstd"),
    ]
    defines_args = [
        "-DVERILATOR=1", "-DVM_COVERAGE=0", "-DVM_SC=0", "-DVM_TIMING=1",
        "-DVM_TRACE=0", "-DVM_TRACE_FST=0", "-DVM_TRACE_VCD=0",
        "-DVM_TRACE_SAIF=0", "-DVM_VPI=0",
    ]
    compile_command = [
        compiler, "-std=gnu++17", "-fcoroutines", "-Os", "-pthread",
        *include_args, *defines_args,
        *(str(path) for path in generated_sources), str(time_stub),
        *(str(path) for path in support_sources), "-o", str(obj_dir / "run.exe"),
    ]
    compiled = subprocess.run(compile_command, cwd=obj_dir, env=env, text=True,
                              stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
    if compiled.returncode != 0:
        return False, "Direct g++ build failed:\n" + compiled.stdout[-5000:]

    simulated = subprocess.run([str(obj_dir / "run.exe")], cwd=obj_dir, env=env,
                               text=True, stdout=subprocess.PIPE,
                               stderr=subprocess.STDOUT)
    if simulated.returncode != 0:
        return False, (label + " exited with code " + str(simulated.returncode) +
                       ("\n" + simulated.stdout if simulated.stdout else " without output"))
    if success_marker and success_marker not in simulated.stdout:
        return False, (label + " exited without the required testbench result " +
                       repr(success_marker) + ":\n" + simulated.stdout[-3000:])
    return True, simulated.stdout or (label + " exited without output")
