#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
cd "$ROOT"
if [[ ! -x ./obj_dir/Vtb_kyber_top ]]; then
  make sim
fi
./obj_dir/Vtb_kyber_top +CHECK_REF=1
