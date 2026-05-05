#!/usr/bin/env bash
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/.." && pwd)"
cd "$ROOT"

mkdir -p vectors logs

if [[ ! -d kyber/ref ]]; then
  echo "[INFO] kyber/ref missing. Bootstrapping C reference..."
  bash tools/bootstrap_c_ref.sh
fi

WORK_DIR="$ROOT/kyber/ref"
REF_DIR="$WORK_DIR/ref"

if [[ ! -d "$REF_DIR" ]]; then
  echo "[ERROR] Missing C reference directory: $REF_DIR" >&2
  exit 2
fi

# RTL hiện tại đang Kyber512-only, nên mặc định chỉ sinh 512.
if [[ "$#" -gt 0 ]]; then
  PARAMS=("$@")
else
  PARAMS=(512)
fi

mode_to_k() {
  case "$1" in
    512)  echo 2 ;;
    768)  echo 3 ;;
    1024) echo 4 ;;
    *)
      echo "[ERROR] Unsupported mode: $1" >&2
      exit 2
      ;;
  esac
}

build_and_dump() {
  local mode="$1"
  local k
  k="$(mode_to_k "$mode")"

  local out_bin="$WORK_DIR/.kyber${mode}_dump"
  local src_file="$WORK_DIR/.kyber${mode}_dump.c"
  local dump_file="$WORK_DIR/.kyber${mode}_dump.txt"

  echo "[INFO] Using C reference dir: $REF_DIR"
  echo "[INFO] Building Kyber${mode} with KYBER_K=${k}"

  cat > "$src_file" <<'CSRC'
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include "params.h"
#include "kem.h"

/*
 * Deterministic randombytes() for RTL-vs-C comparison.
 * This replaces official randombytes.c, so do NOT link randombytes.c.
 */
static const uint8_t deterministic_seed[64] = {
  0x2F,0x07,0xCD,0x8F,0x75,0xBD,0xFB,0x16,
  0x34,0x84,0x2B,0xFE,0x25,0x9A,0xD2,0x9C,
  0x77,0xB8,0x83,0x65,0x8D,0xC6,0x6C,0xBA,
  0xDD,0x25,0x2D,0x93,0xA3,0xEB,0xAB,0xF1,
  0xA2,0xB8,0xD2,0x7B,0xD6,0x3F,0xF8,0x6D,
  0x54,0xC5,0xE1,0xE2,0xF1,0x29,0x4C,0xA3,
  0x14,0x2E,0x04,0x7C,0x04,0x60,0xB0,0x10,
  0xE9,0xD6,0x38,0x82,0x59,0x02,0xEF,0xDD
};

void randombytes(uint8_t *out, size_t outlen) {
  static size_t pos = 0;
  for (size_t i = 0; i < outlen; i++) {
    out[i] = deterministic_seed[pos % sizeof(deterministic_seed)];
    pos++;
  }
}

static void print_hex(const uint8_t *buf, size_t n) {
  for (size_t i = 0; i < n; i++) {
    printf("%02x", buf[i]);
  }
  printf("\n");
}

int main(void) {
  uint8_t pk[KYBER_PUBLICKEYBYTES];
  uint8_t sk[KYBER_SECRETKEYBYTES];
  uint8_t ct[KYBER_CIPHERTEXTBYTES];
  uint8_t ss_enc[KYBER_SSBYTES];
  uint8_t ss_dec[KYBER_SSBYTES];

  if (crypto_kem_keypair(pk, sk) != 0) return 1;
  if (crypto_kem_enc(ct, ss_enc, pk) != 0) return 2;
  if (crypto_kem_dec(ss_dec, ct, sk) != 0) return 3;

  print_hex(pk, sizeof(pk));
  print_hex(sk, sizeof(sk));
  print_hex(ct, sizeof(ct));
  print_hex(ss_enc, sizeof(ss_enc));
  print_hex(ss_dec, sizeof(ss_dec));

  return 0;
}
CSRC

  local required=(
    kem.c
    indcpa.c
    polyvec.c
    poly.c
    ntt.c
    cbd.c
    reduce.c
    verify.c
    symmetric-shake.c
    fips202.c
  )

  local srcs=()
  local f
  for f in "${required[@]}"; do
    if [[ ! -f "$REF_DIR/$f" ]]; then
      echo "[ERROR] Missing required C source: $REF_DIR/$f" >&2
      return 2
    fi
    srcs+=("$REF_DIR/$f")
  done

  gcc -O2 -std=c11 \
    -DKYBER_K="$k" \
    -I"$REF_DIR" \
    "$src_file" \
    "${srcs[@]}" \
    -o "$out_bin"

  "$out_bin" > "$dump_file"

  python3 - "$mode" "$dump_file" <<'PY'
import pathlib
import re
import sys

mode = sys.argv[1]
dump_file = pathlib.Path(sys.argv[2])

expected_sizes = {
    "512":  {"pk": 800,  "sk": 1632, "ct": 768,  "ss_enc": 32, "ss_dec": 32},
    "768":  {"pk": 1184, "sk": 2400, "ct": 1088, "ss_enc": 32, "ss_dec": 32},
    "1024": {"pk": 1568, "sk": 3168, "ct": 1568, "ss_enc": 32, "ss_dec": 32},
}

keys = ["pk", "sk", "ct", "ss_enc", "ss_dec"]

rows = [r.strip() for r in dump_file.read_text().splitlines() if r.strip()]

if len(rows) != 5:
    raise SystemExit(f"[ERROR] Expected 5 lines from C dump, got {len(rows)}")

outdir = pathlib.Path("vectors")
outdir.mkdir(exist_ok=True)

for key, hexs in zip(keys, rows):
    h = re.sub(r"[^0-9a-fA-F]", "", hexs)

    exp_bytes = expected_sizes[mode][key]
    if len(h) != exp_bytes * 2:
        raise SystemExit(
            f"[ERROR] {key}: expected {exp_bytes} bytes, got {len(h)//2} bytes"
        )

    byte_rows = [h[i:i+2] for i in range(0, len(h), 2)]
    out_path = outdir / f"c_ref_{mode}_{key}.mem"
    out_path.write_text("\n".join(byte_rows) + "\n")
    print(f"[OK] wrote {out_path} ({exp_bytes} bytes)")
PY
}

for mode in "${PARAMS[@]}"; do
  echo "[INFO] Generating C-reference vectors for Kyber${mode}..."
  build_and_dump "$mode"
done | tee logs/gen_c_reference_vectors.log

echo "[DONE] Generated vectors/c_ref_* from pq-crystals C reference."
