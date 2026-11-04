#!/usr/bin/env bash
# Verilator lint of the APB4 reference example for both clock architectures and the limits of the
# parameterized monitor bank. Set VERILATOR to the executable (on Windows with the OSS CAD Suite:
# VERILATOR=verilator_bin.exe and VERILATOR_ROOT=<suite>/share/verilator).
#
# Accepted warnings (inherent to the register map, not defects):
#   UNUSEDSIGNAL i_apb_pprot[2,0]   only PPROT[1] is checked (REQ-ERR-001)
#   UNUSEDSIGNAL reg_wdata[...]     ro and reserved bits take no software write data
#   UNUSEDSIGNAL w_rd_ack_fall      used only when PARA_ASYNCHRONOUS = 1
set -uo pipefail

ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
EXAMPLE_DIR="$ROOT_DIR/examples/APB4_Synchronous"
VERILATOR="${VERILATOR:-verilator}"

# The paths of filelist.f are relative to the folder of that file.
cd "$EXAMPLE_DIR/RTL"

status=0
for params in "-GPARA_ASYNCHRONOUS=0 -GPARA_MONITOR_COUNT=1" \
              "-GPARA_ASYNCHRONOUS=0 -GPARA_MONITOR_COUNT=2" \
              "-GPARA_ASYNCHRONOUS=1 -GPARA_MONITOR_COUNT=2" \
              "-GPARA_ASYNCHRONOUS=1 -GPARA_MONITOR_COUNT=4"; do
  echo "== ${params}"
  out="$("$VERILATOR" --lint-only --sv -Wall --top-module m_vlsi_apb4_csr ${params} \
          -f "$EXAMPLE_DIR/RTL/filelist.f" "$@" 2>&1)"
  echo "${out}" | grep '^%Warning\|^%Error' | grep -Ev 'UNUSEDSIGNAL|Exiting due to' && status=1
done
[ "${status}" -eq 0 ] && echo "LINT: no warning other than the accepted ones"
exit "${status}"
