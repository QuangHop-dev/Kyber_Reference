#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
cd "$ROOT"
MODE="${1:-all}"
CHECK_REF="${CHECK_REF:-0}"
mkdir -p logs
TS="$(date +%Y%m%d_%H%M%S)"
LOG="logs/tb_${MODE}_${TS}.log"

if [[ ! -x ./obj_dir/Vtb_kyber_top ]]; then
  make sim
fi

ARGS=()
case "$MODE" in
  512) ARGS+=("+MODE=512");;
  all) ARGS+=("+MODE=512");;
  *) echo "Mode must be 512|all"; exit 2;;
esac
if [[ "$CHECK_REF" != "0" ]]; then
  ARGS+=("+CHECK_REF=1")
fi

./obj_dir/Vtb_kyber_top "${ARGS[@]}" | tee "$LOG"
echo "\n==== TOM TAT NHANH ===="
grep -E "MODE:|THANH CONG|REF\]|MO PHONG" "$LOG" || true
echo "Log: $LOG"
if [[ -f waveform.vcd ]]; then
  echo "Waveform: waveform.vcd (mo bang gtkwave waveform.vcd)"
fi
