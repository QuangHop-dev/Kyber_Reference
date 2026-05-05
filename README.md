# Crystal-Kyber RTL (Verilog) + C Reference (NIST)

## 1) Muc tieu du an
Du an nay la implementation RTL cho KEM Kyber (CRYSTALS-Kyber Round-3), co doi chieu voi C reference trong `kyber/ref`.

Trang thai hien tai:
- Ho tro 3 mode tham so: `kyber512`, `kyber768`, `kyber1024`
- Co luong KeyGen / Encap / Decap trong RTL
- Co che so sanh RTL vs C voi cung seed deterministic
- C mode da tach:
  - `legacy`: de giu tuong thich luong cu
  - `full-KDF`: theo luong KEM day du (`KDF(...)`)

## 2) Cau truc thu muc
- `kyber_main_fsm.v`: FSM dieu khien tong the (KeyGen/Encap/Decap)
- `kyber_hash_wrapper.v`, `shake_top.v`, `sponge.v`, `keccak_*`: SHA3/SHAKE path
- `ntt_core.v`, `butterfly_unit.v`, `address_generator.v`, `twiddle_rom.v`: NTT/INTT core
- `pwma_top.v`: nhan-chap poly theo pair (A*s, s^T*u, ...)
- `kyber_codec.v`: pack/unpack/compress/decompress cho pk/sk/ct
- `kyber_ct_pack_engine.v`: dong goi ciphertext stream ra external memory
- `dual_port_ram.v`, `kyber_memory_map.v`: RAM + map dia chi
- `top_trng.v`: nguon seed (dummy seed deterministic)
- `tb_kyber_top.v`: testbench top-level cho 512/768/1024
- `kyber/ref`: C reference (NIST style)
- `tools`: script verify/compare/diff

## 3) Giai thich module chinh
### `kyber_main_fsm.v`
- Dieu phoi opcode:
  - `01`: KeyGen
  - `10`: Encap
  - `11`: Decap
- Quan ly external bus (`ext_we/ext_re/ext_addr/ext_dout/ext_din`)
- Quan ly flow hash stream cho `H(pk)`, `H(ct)`, `G(...)`, `KDF(...)`
- Dieu phoi NTT/INTT + PWMA + codec

### `ntt_core.v`
- Core NTT/INTT theo stage, ping-pong RAM noi bo
- Dung twiddle tu ROM
- Duoc FSM feed du lieu cho ca KeyGen, Encap, Decap

### `pwma_top.v`
- Basemul pair-level + cong don tich chap
- Dung cho:
  - KeyGen: `A*s + e`
  - Encap: `A^T*sp`, `pk*sp`
  - Decap: `s^T*u`

### `kyber_codec.v` + `kyber_ct_pack_engine.v`
- `kyber_codec.v`: pack/unpack coeff theo format Kyber
- `kyber_ct_pack_engine.v`: stream U/V ra byte ciphertext theo dung kich thuoc mode

### Hash path (`kyber_hash_wrapper.v`, `shake_top.v`, `sponge.v`)
- Dispatcher SHA3-256/SHA3-512/SHAKE128/SHAKE256
- Ho tro absorb streaming nhieu beat cho input dai

## 4) Seed va co che deterministic
Seed dummy 64 bytes duoc dat trong RTL (`DUMMY_SEED`) de so sanh 1-1 voi C.
Neu muon so khop, C reference phai dung cung nguon seed deterministic.

## 5) Chay C reference
Trong WSL:

```bash
cd /mnt/d/CRYSTALS-Kyber/test_2/kyber/ref
make clean
make
./test/test_kyber512
./test/test_kyber768
./test/test_kyber1024
```

## 6) Chay RTL testbench
Trong WSL:

```bash
cd /mnt/d/CRYSTALS-Kyber/test_2
verilator --binary --timing --trace *.v --top tb_kyber_top
./obj_dir/Vtb_kyber_top
```

Chay tung mode:
```bash
./obj_dir/Vtb_kyber_top +MODE=512
./obj_dir/Vtb_kyber_top +MODE=768
./obj_dir/Vtb_kyber_top +MODE=1024
```

## 7) So sanh RTL vs C voi cung seed
### Buoc 1: Tao vector C (`vectors/c_ref_*.mem`)
```bash
cd /mnt/d/CRYSTALS-Kyber/test_2
python3 tools/gen_c_ref_mem.py --workspace . --mode 512 768 1024
```

### Buoc 2: Chay TB o che do compare
```bash
./obj_dir/Vtb_kyber_top +CHECK_REF=1
```
TB se in:
- `[REF][KHOP] ...` neu trung
- `[REF][LECH] ...` + `[REF][FAIL] ...` neu lech

Script mot lenh:
```bash
bash tools/run_ref_compare_tb.sh
```

## 8) Legacy vs Full-KDF (C side)
Trong `kyber/ref/kem.c` co macro:
- `KEM_USE_FULL_KDF=1`: luong day du KEM (`KDF(Kbar || H(ct))`)
- `KEM_USE_FULL_KDF=0`: giu hanh vi legacy

Build voi flag:
```bash
cd /mnt/d/CRYSTALS-Kyber/test_2/kyber/ref
make clean
make KEM_MODE_FLAGS='-DKEM_USE_FULL_KDF=1'
```

## 9) CRYSTALS-Kyber Round-3 va ML-KEM (FIPS 203)
- Round-3 Kyber va ML-KEM co khac biet ten goi + dinh nghia chuan hoa.
- Du an nay giu flow tuong thich voi reference Round-3 trong `kyber/ref`.
- Khi chuyen sang profile ML-KEM, can khoa cac diem sau:
  - tham so/format pack theo profile muc tieu
  - hash/KDF policy
  - bo test vector va KAT phu hop FIPS 203

Khuyen nghi thuc te: giu 2 profile build ro rang:
- `legacy` (Round-3 compat)
- `full-KDF` (KEM day du, de de nang cap sang profile ML-KEM)

## 10) Bo nho external map (TB)
Trong `tb_kyber_top.v`:
- `PK_BASE_WORD = 0`
- `SK_BASE_WORD = 2048`
- `CT_BASE_WORD = 0`
- `SS_BASE_WORD = 3900`

Moi word 32-bit dang dung byte LSB (`[7:0]`) cho stream byte.

