#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
cd "$ROOT"
mkdir -p kyber
if [[ -d kyber/ref/.git ]]; then
  echo "kyber/ref already exists"
  exit 0
fi

REPO_URL="${1:-https://github.com/pq-crystals/kyber.git}"
echo "Cloning C reference from: $REPO_URL"
git clone "$REPO_URL" kyber/ref
echo "Done. C reference is at kyber/ref"
