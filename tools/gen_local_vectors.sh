#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
cd "$ROOT"
mkdir -p vectors logs
if [[ ! -x ./obj_dir/Vtb_kyber_top ]]; then
  make sim
fi
./obj_dir/Vtb_kyber_top +DUMP_REF=1 | tee logs/gen_local_vectors.log
//echo "Generated vectors under vectors/c_ref_*.mem"
echo "Generated self-reference vectors under vectors/c_ref_*.mem (dumped from current RTL/TB via +DUMP_REF=1)"
