`timescale 1ns / 1ps

// =============================================================================
// MODULE: kyber_main_fsm (KEYGEN COMPLETE)
// =============================================================================

module kyber_main_fsm (
    input  wire clk,
    input  wire rst,

    input  wire        start,
    input  wire [1:0]  opcode,
    input  wire [1:0]  mode_k,
    output reg         done,
    output reg         busy,

    output reg         ext_we,
    output reg         ext_re,
    output reg  [31:0] ext_addr,
    output reg  [31:0] ext_dout,
    input  wire [31:0] ext_din,
    input  wire        ext_ready,
    
    // External deterministic seed input (replaces internal TRNG block)
    input  wire [511:0] seed_in,
    input  wire         seed_valid,

    output wire [7:0]  state_dbg
);

    // =========================================================================
    // FSM STATES AND MEMORY BASE ADDRESSES
    // Moved to top to resolve Vivado synthesis forward-reference warnings
    // =========================================================================
    localparam S_IDLE           = 8'd0;
    localparam S_KG_TRNG        = 8'd10; localparam S_KG_HASH_G      = 8'd11; 
    localparam S_KG_PRF_E       = 8'd12; localparam S_KG_CBD_E       = 8'd13; localparam S_KG_NTT_E       = 8'd14; localparam S_KG_DMA_E       = 8'd15;
    localparam S_KG_PRF_S       = 8'd16; localparam S_KG_CBD_S       = 8'd17; localparam S_KG_NTT_S       = 8'd18; localparam S_KG_DMA_S       = 8'd19;
    localparam S_KG_GEN_A       = 8'd20; 
    localparam S_KG_PWMA_A_S    = 8'd23; localparam S_KG_HASH_PK     = 8'd24; localparam S_KG_PACK        = 8'd25;
    localparam S_ENC_TRNG = 8'd30; localparam S_ENC_HASH_G = 8'd31; localparam S_ENC_PRF_R = 8'd32; localparam S_ENC_CBD_R = 8'd33; localparam S_ENC_NTT_R = 8'd34; localparam S_ENC_PWMA_U = 8'd35; localparam S_ENC_INTT_U = 8'd36; localparam S_ENC_PWMA_V = 8'd37; localparam S_ENC_INTT_V = 8'd38; localparam S_ENC_ADD_MATH = 8'd39; localparam S_ENC_COMP = 8'd40; localparam S_ENC_HASH_C = 8'd41; localparam S_ENC_KDF = 8'd42; localparam S_ENC_PACK = 8'd43;
    localparam S_ENC_READ_PK = 8'd44;
    localparam S_DEC_READ = 8'd50; localparam S_DEC_DECOMP = 8'd51; localparam S_DEC_NTT_U = 8'd52; localparam S_DEC_PWMA_M = 8'd53; localparam S_DEC_INTT_M = 8'd54; localparam S_DEC_CMP = 8'd56; localparam S_DEC_KDF = 8'd57; localparam S_DEC_PACK = 8'd58;
    localparam S_DEC_READ_REST = 8'd55; localparam S_DEC_READ_CT = 8'd59;
    localparam S_KG_WRITE_REST = 8'd60; localparam S_KG_DMA_TRNG = 8'd61;

    localparam [31:0] PK_EXT_BASE = 32'd0;
    localparam [31:0] SK_EXT_BASE = 32'd2000;
    localparam [31:0] CT_EXT_BASE = 32'd6000;
    localparam [31:0] SS_EXT_BASE = 32'd8000;
    localparam [31:0] TRNG_EXT_BASE = 32'd9000;

    reg [255:0] reg_rho, reg_sigma, reg_z, reg_m, reg_K_bar, reg_r_seed, reg_H_pk, reg_H_c;
    reg [511:0] reg_trng_seed;
    reg dec_ct_match;
    reg dec_reenc_mode;
    reg enc_kdf_ready, dec_kdf_ready;
    reg pwma_sp_from_scratch;
    reg pwma_use_tomont;
    reg [1:0] enc_noise_kind; // 0:sp, 1:ep, 2:epp
    reg [1:0] enc_ntt_phase;  // 0:load,1:run,2:dump
    // Core FSM/control regs declared early to avoid forward-use warnings.
    reg [7:0]  state;
    reg [11:0] dma_cnt;
    reg [2:0]  loop_i, loop_j;
    reg [3:0]  dec_phase;
    //wire [2:0] k_val = {1'b0, mode_k} + 3'd2; // 2/3/4 for Kyber512/768/1024
    wire [1:0] mode_k_locked = 2'b00; // Kyber512 only
    wire [2:0] k_val = 3'd2; // locked to Kyber512
    wire       ntt_dec_intt_gs_en;
    // Buffers used by streaming hash/pack paths.
    // Replaced flat registers with BRAM modules for LUT optimization
    reg  hpk_we;
    reg  [10:0] hpk_addr_a;
    reg  [7:0]  hpk_din;
    reg  [10:0] hpk_addr_b;
    wire [7:0]  hpk_dout;
    kyber_bram u_hpk_ram (
        .wclk(clk), .we(hpk_we), .waddr(hpk_addr_a), .din(hpk_din),
        .rclk(clk), .raddr(hpk_addr_b), .dout(hpk_dout)
    );

    reg  ct_we;
    reg  [10:0] ct_addr_a;
    reg  [7:0]  ct_din;
    reg  [10:0] ct_addr_b;
    wire [7:0]  ct_dout;
    kyber_bram u_ct_ram (
        .wclk(clk), .we(ct_we), .waddr(ct_addr_a), .din(ct_din),
        .rclk(clk), .raddr(ct_addr_b), .dout(ct_dout)
    );

    reg  ct_dec_we;
    reg  [10:0] ct_dec_addr_a;
    reg  [7:0]  ct_dec_din;
    reg  [10:0] ct_dec_addr_b;
    wire [7:0]  ct_dec_dout;
    kyber_bram u_ct_dec_ram (
        .wclk(clk), .we(ct_dec_we), .waddr(ct_dec_addr_a), .din(ct_dec_din),
        .rclk(clk), .raddr(ct_dec_addr_b), .dout(ct_dec_dout)
    );

    reg  ct_reenc_we;
    reg  [10:0] ct_reenc_addr_a;
    reg  [7:0]  ct_reenc_din;
    reg  [10:0] ct_reenc_addr_b;
    wire [7:0]  ct_reenc_dout;
    kyber_bram u_ct_reenc_ram (
        .wclk(clk), .we(ct_reenc_we), .waddr(ct_reenc_addr_a), .din(ct_reenc_din),
        .rclk(clk), .raddr(ct_reenc_addr_b), .dout(ct_reenc_dout)
    );
    // Combinational temporaries for DEC codec feed.
    integer biu;
    reg [11:0] base_u, base_v;

    localparam [11:0] SCR_SP_BASE  = 12'd0;
    localparam [11:0] SCR_EP_BASE  = 12'd1024;
    localparam [11:0] SCR_U_BASE   = 12'd2048;
    localparam [11:0] SCR_V_BASE   = 12'd3072;
    localparam [11:0] SCR_EPP_BASE = 12'd3328;
    localparam [11:0] SCR_MSG_BASE = 12'd3584;
    localparam [11:0] SCR_TMP_BASE = 12'd3840;

    function [255:0] flip_bytes_32;
        input [255:0] in_data;
        integer i;
        begin
            for (i = 0; i < 32; i = i + 1)
                flip_bytes_32[(31-i)*8 +: 8] = in_data[i*8 +: 8];
        end
    endfunction

    function signed [15:0] barrett_reduce_q;
        input signed [16:0] a_in;
        reg signed [31:0] t;
        reg signed [31:0] r;
        begin
            // Match C reference barrett_reduce:
            // t = ((v*a + (1<<25)) >> 26), v=20159
            t = ((32'sd20159 * a_in) + 32'sd33554432) >>> 26;
            r = a_in - (t * 32'sd3329);
            barrett_reduce_q = r[15:0];
        end
    endfunction





    /*// --- 3.1 TRNG ---
    reg        trng_trigger; reg [1:0] trng_req_bytes; wire trng_valid; wire [511:0] trng_data;
    top_trng u_trng (.clk(clk), .rst(rst), .trigger(trng_trigger), .req_bytes(trng_req_bytes), .rand_data(trng_data), .valid(trng_valid));*/
    
    // --- 3.1 External seed interface (TRNG removed) ---
    wire trng_valid; wire [511:0] trng_data;
    assign trng_valid = seed_valid;
    assign trng_data  = seed_in;

    // --- 3.2 Hash Wrapper ---
    reg hash_start; reg [2:0] hash_cmd; reg [1087:0] hash_din; reg [7:0] hash_bytes; reg hash_prf_eta3;
    reg hash_stream_en, hash_stream_valid, hash_stream_last;
    reg [1087:0] hash_stream_din;
    reg [7:0] hash_stream_bytes;
    wire hash_stream_ack;
    wire [1535:0] hash_dout; wire hash_done; wire hash_busy;
    kyber_hash_wrapper u_hash (
        .clk(clk), .rst(rst), .start(hash_start), .hash_cmd(hash_cmd), .prf_eta3(hash_prf_eta3),
        .din(hash_din), .din_bytes(hash_bytes),
        .stream_en(hash_stream_en), .stream_valid(hash_stream_valid), .stream_last(hash_stream_last),
        .stream_din(hash_stream_din), .stream_bytes(hash_stream_bytes), .stream_ack(hash_stream_ack),
        .dout(hash_dout), .done(hash_done), .busy(hash_busy)
    );

    // --- 3.3 CBD Sampler ---
    reg cbd_start; reg [10:0] cbd_base_addr; reg cbd_eta3_mode;
    wire cbd_we, cbd_done; wire [10:0] cbd_ram_addr; wire signed [15:0] cbd_poly_out;
    cbd_sampler u_cbd (.clk(clk), .rst(rst), .start(cbd_start), .eta3_mode(cbd_eta3_mode), .prf_data_in(hash_dout), .base_addr(cbd_base_addr), .we(cbd_we), .ram_addr(cbd_ram_addr), .poly_coeffs_out(cbd_poly_out), .done(cbd_done));

    // --- 3.3.b Matrix Generator ---
    reg gm_start, gm_transposed; wire gm_we, gm_done; wire [11:0] gm_ram_addr; wire [15:0] gm_ram_din;
    gen_matrix u_gm (.clk(clk), .rst(rst), .start(gm_start), .rho(reg_rho), .mode_k(mode_k), .transposed(gm_transposed), .we(gm_we), .ram_addr(gm_ram_addr), .ram_dout(gm_ram_din), .done(gm_done), .busy());

    // --- 3.4 NTT Core ---
    reg ntt_start, ntt_mode; wire ntt_done; reg ntt_ext_we; reg [7:0] ntt_ext_addr; reg signed [15:0] ntt_ext_din;
    localparam [3:0] NTT_TAG_NONE    = 4'd0;
    localparam [3:0] NTT_TAG_ENC_U   = 4'd1;
    localparam [3:0] NTT_TAG_ENC_V   = 4'd2;
    localparam [3:0] NTT_TAG_DEC_U   = 4'd3;
    localparam [3:0] NTT_TAG_DEC_STU = 4'd4;
    localparam [3:0] NTT_TAG_RE_U    = 4'd5;
    localparam [3:0] NTT_TAG_RE_V    = 4'd6;
    wire [3:0] ntt_dbg_tag =
        (state == 8'd36) ? (dec_reenc_mode ? NTT_TAG_RE_U : NTT_TAG_ENC_U) :
        (state == 8'd38) ? (dec_reenc_mode ? NTT_TAG_RE_V : NTT_TAG_ENC_V) :
        (state == 8'd51 && dec_phase == 4'd2 && enc_ntt_phase == 2'd1) ? NTT_TAG_DEC_U :
        (state == 8'd54) ? NTT_TAG_DEC_STU :
        NTT_TAG_NONE;
    wire signed [15:0] ntt_ext_dout;
    wire signed [15:0] ntt_ext_dout_b; // ← MỚI: hệ số tại (ext_addr+1), dùng cho PWMA đọc s[2k+1]
    ntt_core u_ntt (.clk(clk), .rst(rst), .start(ntt_start), .mode(ntt_mode), .intt_gs_en(ntt_dec_intt_gs_en),
                    .dbg_tag(ntt_dbg_tag),
                    .ext_we(ntt_ext_we), .ext_addr(ntt_ext_addr), .ext_din(ntt_ext_din),
                    .ext_dout(ntt_ext_dout), .ext_dout_b(ntt_ext_dout_b), .done(ntt_done));

    // --- 3.5 PWMA ---
    reg pwma_start; wire pwma_done;
    wire [7:0] pwma_ram0_addr, pwma_ram1_addr;
    reg signed [15:0] pwma_ram0_dout_a0, pwma_ram0_dout_a1, pwma_ram0_dout_b0, pwma_ram0_dout_b1, pwma_ram1_dout_c0, pwma_ram1_dout_c1;
    wire signed [15:0] pwma_ram1_din_c0, pwma_ram1_din_c1;
    wire pwma_ram1_we;
    wire [7:0] pwma_dbg_pair;
    wire signed [15:0] pwma_dbg_a0, pwma_dbg_a1, pwma_dbg_b0, pwma_dbg_b1;
    wire signed [15:0] pwma_dbg_zeta, pwma_dbg_base_c0, pwma_dbg_base_c1;
    wire signed [15:0] pwma_dbg_t_old0, pwma_dbg_t_old1, pwma_dbg_t_new0, pwma_dbg_t_new1;
    
    // Đọc Twiddle Factor cho PWMA (Xử lý Item #17)
    wire [15:0] pwma_zeta_real;
    wire [6:0]  pwma_zeta_addr;
    twiddle_rom #(.MEMFILE("/home/lucas_pham/Kyber_Reference/src/zeta_values_pwma.mem")) u_twiddle_pwma ( 
        .clk(clk), .addr(pwma_zeta_addr), .dout(pwma_zeta_real)
    );

    pwma_top u_pwma (
        .clk(clk), .rst(rst), .start(pwma_start),
        .ram0_addr(pwma_ram0_addr),
        .ram0_dout_a0(pwma_ram0_dout_a0), .ram0_dout_a1(pwma_ram0_dout_a1),
        .ram0_dout_b0(pwma_ram0_dout_b0), .ram0_dout_b1(pwma_ram0_dout_b1),
        .zeta_addr(pwma_zeta_addr), .zeta_in(pwma_zeta_real), .use_tomont(pwma_use_tomont),
        .ram1_addr(pwma_ram1_addr),
        .ram1_dout_c0(pwma_ram1_dout_c0), .ram1_dout_c1(pwma_ram1_dout_c1),
        .ram1_din_c0(pwma_ram1_din_c0), .ram1_din_c1(pwma_ram1_din_c1),
        .ram1_we(pwma_ram1_we), .done(pwma_done),
        .dbg_pair(pwma_dbg_pair),
        .dbg_a0(pwma_dbg_a0), .dbg_a1(pwma_dbg_a1), .dbg_b0(pwma_dbg_b0), .dbg_b1(pwma_dbg_b1),
        .dbg_zeta(pwma_dbg_zeta), .dbg_base_c0(pwma_dbg_base_c0), .dbg_base_c1(pwma_dbg_base_c1),
        .dbg_t_old0(pwma_dbg_t_old0), .dbg_t_old1(pwma_dbg_t_old1), .dbg_t_new0(pwma_dbg_t_new0), .dbg_t_new1(pwma_dbg_t_new1)
    );

    // --- 3.6 Comparator & 3.7 Compressor (Giữ nguyên) ---
    reg cmp_start; wire cmp_done, cmp_not_equal; reg [10:0] cmp_len; wire [10:0] cmp_addr_c, cmp_addr_c_prime; reg [31:0] cmp_data_c, cmp_data_c_prime;
    kyber_comparator u_cmp (.clk(clk), .rst(rst), .start(cmp_start), .data_len(cmp_len), .addr_c(cmp_addr_c), .data_c(cmp_data_c), .addr_c_prime(cmp_addr_c_prime), .data_c_prime(cmp_data_c_prime), .not_equal(cmp_not_equal), .done(cmp_done));
    reg comp_op; reg [3:0] comp_d; wire signed [15:0] comp_out; wire signed [15:0] comp_in;
    //kyber_compressor u_comp (.mode_k(mode_k), .mode_op(comp_op), .d_bits(comp_d), .in_val(comp_in), .out_val(comp_out));
    kyber_compressor u_comp (.mode_op(comp_op), .d_bits(comp_d), .in_val(comp_in), .out_val(comp_out));
	
    // =========================================================================
    // 4. ZERO-COPY ROUTING
    // =========================================================================
    reg [2:0] mux_sel, ntt_mux_sel;
    reg fsm_we_a, fsm_we_b; reg [11:0] fsm_addr_a, fsm_addr_b; reg signed [15:0] fsm_din_a, fsm_din_b;
    reg fsm_ntt_we; reg [7:0] fsm_ntt_addr; reg signed [15:0] fsm_ntt_din;
    reg [11:0] pwma_acc_base;
    // Put ENC/DEC temporary polys in upper half of expanded main RAM to avoid
    // overlap with keygen pk/sk windows [0 .. 2*k*256-1].
    localparam [11:0] ENC_U_BASE = 12'd2048;
    localparam [11:0] ENC_V_BASE = 12'd3072;
    //localparam DEBUG_CKPT = 1'b0;
    //localparam DEBUG_KDF = 1'b1;
    reg [15:0] dbg_pwma_u_pair_cnt, dbg_pwma_v_pair_cnt, dbg_pwma_dec_pair_cnt;
    reg [9:0] dec_group_idx;
    reg [3:0] dec_slot_idx;
    reg [11:0] ct_cap_idx;
    reg       dec_unpack_group_valid;
    reg [127:0] dec_unpack_coeff_latch;
    reg [2:0] dec_j_idx;
    reg [2:0] dec_j_work;
    reg [2:0] dec_codec_op_w;
    reg [87:0] dec_codec_bytes_w;
    wire signed [31:0] dec_invntt_mul = $signed(ntt_ext_dout) * 16'sd1441;
    wire signed [31:0] dec_invntt_mul_b = $signed(ntt_ext_dout_b) * 16'sd1441;
    wire signed [15:0] dec_invntt_scaled;
    wire signed [15:0] dec_invntt_scaled_b;
    wire [127:0] dec_codec_coeff_out;
    wire ct_pack_ext_ready;
    reg [2:0] pwma_sp_poly_idx;
    reg signed [15:0] add_main_d1, add_main_d2, add_main_d3, add_main_d4;
    /*wire [3:0] dec_u_group_sz      = (mode_k == 2'b10) ? 4'd8 : 4'd4;
    wire [3:0] dec_u_bytes_per_grp = (mode_k == 2'b10) ? 4'd11 : 4'd5;
    wire [6:0] dec_u_groups_per_poly = (mode_k == 2'b10) ? 7'd32 : 7'd64;*/
    wire [3:0] dec_u_group_sz      = (mode_k_locked == 2'b10) ? 4'd8 : 4'd4;
    wire [3:0] dec_u_bytes_per_grp = (mode_k_locked == 2'b10) ? 4'd11 : 4'd5;
    wire [6:0] dec_u_groups_per_poly = (mode_k_locked == 2'b10) ? 7'd32 : 7'd64;
    wire [9:0] dec_u_total_groups  = {3'd0, k_val} * {3'd0, dec_u_groups_per_poly};
    wire [3:0] dec_v_group_sz      = 4'd8;
    //wire [3:0] dec_v_bytes_per_grp = (mode_k == 2'b10) ? 4'd5 : 4'd4;
    wire [3:0] dec_v_bytes_per_grp = (mode_k_locked == 2'b10) ? 4'd5 : 4'd4;
    // Keep DEC accumulator away from pk coeff window [0..k*256-1].
    // Otherwise DEC decomp overwrites pk and DEC re-enc compare always fails.
    localparam [11:0] DEC_ACC_BASE = ENC_U_BASE;
    reg scratch_we_a, scratch_we_b;
    reg [11:0] scratch_addr_a, scratch_addr_b;
    reg signed [15:0] scratch_din_a, scratch_din_b;
    reg a_cache_we_fsm;
    reg [11:0] a_cache_addr_fsm;
    reg signed [15:0] a_cache_din_fsm;
    wire we_a, we_b; wire [11:0] addr_a, addr_b; wire signed [15:0] din_a, din_b, dout_a, dout_b;
    wire signed [15:0] a_cache_dout_a, a_cache_dout_b;
    wire signed [15:0] scratch_dout_a, scratch_dout_b;
    wire [11:0] pwma_sp_addr_even = SCR_SP_BASE + ({9'd0, pwma_sp_poly_idx} * 12'd256) + {3'd0, pwma_ram0_addr, 1'b0};
    wire [11:0] pwma_sp_addr_odd  = pwma_sp_addr_even + 12'd1;
    wire scratch_pwma_sel = (mux_sel == 3'd2) && pwma_sp_from_scratch;
    wire [11:0] scratch_addr_a_mux = scratch_pwma_sel ? pwma_sp_addr_even : scratch_addr_a;
    wire [11:0] scratch_addr_b_mux = scratch_pwma_sel ? pwma_sp_addr_odd  : scratch_addr_b;
    wire scratch_we_a_mux = scratch_pwma_sel ? 1'b0 : scratch_we_a;
    wire scratch_we_b_mux = scratch_pwma_sel ? 1'b0 : scratch_we_b;
    reg         ct_pack_start;
    wire        ct_pack_done;
    wire [10:0] ct_pack_u_addr;
    wire [7:0]  ct_pack_v_addr;
    reg signed [15:0] ct_pack_u_din, ct_pack_v_din;
    wire        ct_pack_ext_we;
    wire [31:0] ct_pack_ext_addr, ct_pack_ext_dout;
    assign comp_in = dout_a;

    // PWMA dùng cả 2 port của Main RAM để đọc/ghi cặp t[2k], t[2k+1]
    assign we_a   = (mux_sel == 3'd1) ? cbd_we           : (mux_sel == 3'd2) ? pwma_ram1_we     : fsm_we_a;
    assign we_b   = (mux_sel == 3'd2) ? pwma_ram1_we     : fsm_we_b;
    
    // t_i nằm ở Main RAM, mỗi hệ số 16-bit độc lập:
    // PWMA map pair index k -> địa chỉ (2k, 2k+1)
    assign addr_a = (mux_sel == 3'd1) ? {1'b0, cbd_ram_addr}
                 : (mux_sel == 3'd2) ? ( pwma_acc_base + ({8'd0, loop_i} * 12'd256) + {3'd0, pwma_ram1_addr, 1'b0} )
                 : fsm_addr_a;
    assign addr_b = (mux_sel == 3'd2) ? ( pwma_acc_base + ({8'd0, loop_i} * 12'd256) + {3'd0, pwma_ram1_addr, 1'b0} + 12'd1 )
                 : fsm_addr_b;
    assign din_a  = (mux_sel == 3'd1) ? cbd_poly_out
                 : (mux_sel == 3'd2) ? pwma_ram1_din_c0
                 : fsm_din_a;
    assign din_b  = (mux_sel == 3'd2) ? pwma_ram1_din_c1 : fsm_din_b;

    // A matrix cache (offset 0..1023 cho k=2): cho phép PWMA đọc cặp A[2k], A[2k+1]
    wire [11:0] a_ij_cache_offset = ( {9'd0, loop_i} * {9'd0, k_val} + {9'd0, loop_j} ) * 12'd256;
    wire [11:0] a_cache_addr_even = a_ij_cache_offset + {3'd0, pwma_ram0_addr, 1'b0};
    wire [11:0] a_cache_addr_odd  = a_ij_cache_offset + {3'd0, pwma_ram0_addr, 1'b0} + 12'd1;
    wire signed [15:0] pwma_zeta_eff_dbg = pwma_ram0_addr[0] ? -$signed(pwma_zeta_real) : $signed(pwma_zeta_real);

    kyber_memory_map #(.ADDR_W(12), .DEPTH(4096)) u_a_cache (
        .clk(clk),
        .we_a(a_cache_we_fsm ? 1'b1 : gm_we),
        .addr_a(a_cache_we_fsm ? a_cache_addr_fsm : ((mux_sel == 3'd2) ? a_cache_addr_even : gm_ram_addr)),
        .din_a(a_cache_we_fsm ? a_cache_din_fsm : $signed(gm_ram_din)),
        .dout_a(a_cache_dout_a),
        .we_b(1'b0),
        .addr_b((mux_sel == 3'd2) ? a_cache_addr_odd : 12'd0),
        .din_b(16'sd0),
        .dout_b(a_cache_dout_b)
    );

    kyber_memory_map #(.ADDR_W(12), .DEPTH(4096)) u_ram (
        .clk(clk), .we_a(we_a), .addr_a(addr_a), .din_a(din_a), .dout_a(dout_a),
        .we_b(we_b), .addr_b(addr_b), .din_b(din_b), .dout_b(dout_b)
    );
    kyber_memory_map #(.ADDR_W(12), .DEPTH(4096)) u_enc_scratch (
        .clk(clk),
        .we_a(scratch_we_a_mux), .addr_a(scratch_addr_a_mux), .din_a(scratch_din_a), .dout_a(scratch_dout_a),
        .we_b(scratch_we_b_mux), .addr_b(scratch_addr_b_mux), .din_b(scratch_din_b), .dout_b(scratch_dout_b)
    );
    assign ct_pack_ext_ready = dec_reenc_mode ? 1'b1 : ext_ready;

    kyber_ct_pack_engine u_ct_pack (
        .clk(clk),
        .rst(rst),
        .start(ct_pack_start),
        //.mode_k(mode_k),
        .ct_base_addr(CT_EXT_BASE),
        .u_addr(ct_pack_u_addr),
        .u_coeff_din(ct_pack_u_din),
        .v_addr(ct_pack_v_addr),
        .v_coeff_din(ct_pack_v_din),
        .ext_we(ct_pack_ext_we),
        .ext_addr(ct_pack_ext_addr),
        .ext_dout(ct_pack_ext_dout),
        .ext_ready(ct_pack_ext_ready),
        .done(ct_pack_done)
    );
    kyber_codec u_dec_codec (
        .op(dec_codec_op_w),
        .coeff_in(128'd0),
        .bytes_in(dec_codec_bytes_w),
        .coeff_out(dec_codec_coeff_out),
        .bytes_out()
    );
    montgomery_reduce u_dec_invntt_scale (
        .a(dec_invntt_mul),
        .t(dec_invntt_scaled)
    );
    montgomery_reduce u_dec_invntt_scale_b (
        .a(dec_invntt_mul_b),
        .t(dec_invntt_scaled_b)
    );

    always @(*) begin
        if (ntt_mux_sel == 3'd1) begin
            // CBD → NTT RAM (địa chỉ 1:1)
            ntt_ext_we = cbd_we; ntt_ext_addr = cbd_ram_addr[7:0]; ntt_ext_din = cbd_poly_out;
        end else if (ntt_mux_sel == 3'd2) begin
            // PWMA đọc s[j]: phát địa chỉ CHẴN = 2 * pwma_ram0_addr
            // → NTT RAM port A: s[2k]   = ntt_ext_dout
            // → NTT RAM port B: s[2k+1] = ntt_ext_dout_b  (addr tự động = 2k+1)
            ntt_ext_we = 1'b0;
            ntt_ext_addr = {pwma_ram0_addr[6:0], 1'b0}; // 2 * cnt, chẵn
            ntt_ext_din = 16'd0;
        end else begin
            ntt_ext_we = fsm_ntt_we; ntt_ext_addr = fsm_ntt_addr; ntt_ext_din = fsm_ntt_din;
        end
    end

    always @(*) begin
        // s[j][2k]   = ntt_ext_dout   (NTT RAM port A, addr = 2k)
        // s[j][2k+1] = ntt_ext_dout_b (NTT RAM port B, addr = 2k+1) ← FIX
        pwma_ram0_dout_a0 = pwma_sp_from_scratch ? scratch_dout_a : ntt_ext_dout;
        pwma_ram0_dout_a1 = pwma_sp_from_scratch ? scratch_dout_b : ntt_ext_dout_b;
        // A[i,j][2k], A[i,j][2k+1] lấy từ A cache dual-port
        pwma_ram0_dout_b0 = a_cache_dout_a;
        pwma_ram0_dout_b1 = a_cache_dout_b;
        pwma_ram1_dout_c0 = dout_a;
        pwma_ram1_dout_c1 = dout_b;
    end

    always @(*) begin
        ct_pack_u_din = dout_a;
        ct_pack_v_din = dout_b;
    end

    // Combinational codec feed for DEC unpack path.
    always @(*) begin
        dec_codec_op_w = 3'd0;
        base_u = 12'd0;
        base_v = 12'd0;
        if (state == S_DEC_DECOMP) begin
            if (dec_phase == 4'd0) begin
                //dec_codec_op_w = (mode_k == 2'b10) ? 3'd3 : 3'd1; // UNPACK_U11/U10
            	dec_codec_op_w = (mode_k_locked == 2'b10) ? 3'd3 : 3'd1; // UNPACK_U11/U10
            end else if (dec_phase == 4'd1) begin
                //dec_codec_op_w = (mode_k == 2'b10) ? 3'd7 : 3'd5; // UNPACK_V5/V4
                dec_codec_op_w = (mode_k_locked == 2'b10) ? 3'd7 : 3'd5; // UNPACK_V5/V4
            end
        end
    end

    // =========================================================================
    // 5. MAIN FSM
    // =========================================================================

    //reg trng_sent, hash_sent, cbd_sent, ntt_sent, pwma_sent, cmp_sent, gm_sent;
    reg hash_sent, cbd_sent, ntt_sent, pwma_sent, cmp_sent, gm_sent;
    reg ct_pack_sent;
    //wire eta1_is_3 = (mode_k == 2'b00);
    wire eta1_is_3 = (mode_k_locked == 2'b00);
    assign ntt_dec_intt_gs_en =
        ((state == S_DEC_DECOMP) && (dec_phase == 4'd5)) ||
        (state == S_ENC_INTT_U) ||
        (state == S_ENC_INTT_V);
    wire [11:0] sk_ram_base = {9'd0, k_val} * 12'd256; // after t[0..k-1]
    /*wire [11:0] ct_bytes_total = (mode_k == 2'b00) ? 12'd768 :
                                 (mode_k == 2'b01) ? 12'd1088 : 12'd1568;*/
    wire [11:0] ct_bytes_total = (mode_k_locked == 2'b00) ? 12'd768 :
                                 (mode_k_locked == 2'b01) ? 12'd1088 : 12'd1568;
    wire [11:0] enc_u_coeff_total = {9'd0, k_val} * 12'd256;

    // --- Key pack/hash helpers ---
    reg [1:0]  pack_phase;     // 0:pk_t, 1:pk_rho, 2:sk_s
    reg [2:0]  pack_poly;      // polynomial index inside polyvec
    reg [7:0]  pack_pair;      // 0..127 (2 coeff/pair)
    reg [2:0]  pack_step;      // micro-step in S_KG_PACK
    reg [31:0] pack_pk_addr;
    reg [31:0] pack_sk_addr;
    reg [31:0] pack_pk_byte_idx;
    reg [15:0] pack_c0, pack_c1;
    reg [7:0]  pack_b0, pack_b1, pack_b2;
    wire [11:0] pk_bytes_total = ({9'd0, k_val} * 12'd384) + 12'd32;
    wire [11:0] sk_polyvec_bytes_total = ({9'd0, k_val} * 12'd384);
    reg dec_sk_reload_done;
    reg [2:0] dec_sk_poly;
    reg [7:0] dec_sk_pair;
    reg [2:0] dec_sk_step;
    reg [7:0] dec_sk_b0, dec_sk_b1, dec_sk_b2;
    reg [15:0] dec_sk_c0, dec_sk_c1;
    // Vivado-synthesis friendly temporaries (moved out of unnamed blocks)
    reg hash_fetching;
    reg fetch_wait;
    reg [7:0] fetch_cnt;
    reg dec_fetch_done;
    integer bi, bi2, ci;
    reg [11:0] rem12, rem12b;
    reg signed [15:0] c0s, c1s;
    reg [11:0] c0n, c1n;
    reg [11:0] u_pair_base12, u_pair_base_b12, u_even_idx12, u_odd_idx12;
    reg [11:0] u_global_even_idx12, u_global_odd_idx12;
    reg [11:0] u_cand_off2_idx12, u_cand_off3_idx12;
    reg [11:0] v_pair_base12, v_pair_base_b12, v_even_idx12, v_odd_idx12;
    reg [11:0] v_cand_off2_idx12, v_cand_off3_idx12;
    reg [11:0] u_src_idx12, ep_src_idx12, ep_src_next12;
    reg signed [16:0] su, sv, v_c, su_c;
    reg signed [15:0] ep_term, epp_term_v;
    reg [11:0] uidx, v_src_idx12, epp_src_idx12, vidx_w;
    reg [8:0]  vidx, bitpos;
    reg [7:0]  mb, bytev, first_in, first_re;
    reg [4:0]  mbyte_idx, mbyte_idx_dec;
    reg [2:0]  mb_idx;
    reg mbit, all_eq;
    reg [11:0] first_mis, sk_coeff_base;
    reg [15:0] v_q, su_q, diff_q;
    reg [16:0] diff_q17;
    reg [31:0] tmsg32, sk_pair_base;

    always @(posedge clk) begin
        if (rst) begin
            state <= S_IDLE; mux_sel <= 0; ntt_mux_sel <= 0; done <= 0; busy <= 0;
            ext_we <= 0; ext_re <= 0; ext_addr <= 0; ext_dout <= 0;
            //trng_trigger <= 0; hash_start <= 0; cbd_start <= 0; ntt_start <= 0; pwma_start <= 0; cmp_start <= 0; gm_start <= 0; gm_transposed <= 1'b0;
            hash_start <= 0; cbd_start <= 0; ntt_start <= 0; pwma_start <= 0; cmp_start <= 0; gm_start <= 0; gm_transposed <= 1'b0;
            hash_stream_en <= 0; hash_stream_valid <= 0; hash_stream_last <= 0; hash_stream_din <= 1088'd0; hash_stream_bytes <= 8'd0;
            //trng_sent <= 0; hash_sent <= 0; cbd_sent <= 0; ntt_sent <= 0; pwma_sent <= 0; cmp_sent <= 0; gm_sent <= 0;
            hash_sent <= 0; cbd_sent <= 0; ntt_sent <= 0; pwma_sent <= 0; cmp_sent <= 0; gm_sent <= 0;
            ct_pack_sent <= 1'b0;
            fsm_we_a <= 0; fsm_we_b <= 0; fsm_ntt_we <= 0; hash_prf_eta3 <= 0; cbd_eta3_mode <= 0;
            pwma_acc_base <= 12'd0;
            ct_pack_start <= 1'b0;
            a_cache_we_fsm <= 1'b0;
            a_cache_addr_fsm <= 12'd0;
            a_cache_din_fsm <= 16'sd0;
            scratch_we_a <= 1'b0; scratch_we_b <= 1'b0;
            scratch_addr_a <= 12'd0; scratch_addr_b <= 12'd0;
            scratch_din_a <= 16'sd0; scratch_din_b <= 16'sd0;
            pwma_sp_from_scratch <= 1'b0;
            pwma_use_tomont <= 1'b1;
            pwma_sp_poly_idx <= loop_j;
            pack_phase <= 2'd0; pack_poly <= 3'd0; pack_pair <= 8'd0; pack_step <= 3'd0;
            pack_pk_addr <= PK_EXT_BASE; pack_sk_addr <= SK_EXT_BASE; pack_pk_byte_idx <= 32'd0;
            pack_c0 <= 16'd0; pack_c1 <= 16'd0; pack_b0 <= 8'd0; pack_b1 <= 8'd0; pack_b2 <= 8'd0;
            hpk_we <= 1'b0;
            ct_we <= 1'b0;
            ct_dec_we <= 1'b0;
            ct_reenc_we <= 1'b0;
            reg_H_c <= 256'd0;
            dec_ct_match <= 1'b0;
            dec_reenc_mode <= 1'b0;
            enc_kdf_ready <= 1'b0; dec_kdf_ready <= 1'b0;
            enc_noise_kind <= 2'd0;
            enc_ntt_phase <= 2'd0;
            dbg_pwma_u_pair_cnt <= 16'd0;
            dbg_pwma_v_pair_cnt <= 16'd0;
            dbg_pwma_dec_pair_cnt <= 16'd0;
            dec_unpack_group_valid <= 1'b0;
            dec_unpack_coeff_latch <= 128'd0;
            dec_phase <= 4'd0;
            dec_group_idx <= 10'd0;
            dec_slot_idx <= 4'd0;
            ct_cap_idx <= 12'd0;
            hash_fetching <= 1'b0;
            fetch_wait <= 1'b0;
            fetch_cnt <= 8'd0;
            dec_fetch_done <= 1'b0;
            dec_codec_bytes_w <= 88'd0;
            dec_j_idx <= 3'd0;
            dec_j_work <= 3'd0;
            dec_sk_reload_done <= 1'b0;
            dec_sk_poly <= 3'd0;
            dec_sk_pair <= 8'd0;
            dec_sk_step <= 3'd0;
            dec_sk_b0 <= 8'd0;
            dec_sk_b1 <= 8'd0;
            dec_sk_b2 <= 8'd0;
            dec_sk_c0 <= 16'd0;
            dec_sk_c1 <= 16'd0;
            pwma_sp_poly_idx <= 3'd0;
            add_main_d1 <= 16'sd0;
            add_main_d2 <= 16'sd0;
            add_main_d3 <= 16'sd0;
            add_main_d4 <= 16'sd0;
        end else if ((ext_we || ext_re) && !ext_ready) begin
            // FSM STALL: Waiting for external memory handshake.
            // Hold all FSM registers directly.
            add_main_d1 <= add_main_d1;
        end else begin
            add_main_d1 <= dout_a;
            add_main_d2 <= add_main_d1;
            add_main_d3 <= add_main_d2;
            add_main_d4 <= add_main_d3;
            //trng_trigger <= 0; hash_start <= 0; cbd_start <= 0; ntt_start <= 0; pwma_start <= 0; cmp_start <= 0; gm_start <= 0;
            hash_start <= 0; cbd_start <= 0; ntt_start <= 0; pwma_start <= 0; cmp_start <= 0; gm_start <= 0;
            hash_stream_en <= 0;
            if (hash_stream_ack) hash_stream_valid <= 0;
            ext_we <= 0; ext_re <= 0; fsm_we_a <= 0; fsm_we_b <= 0; fsm_ntt_we <= 0;
            hpk_we <= 1'b0; ct_we <= 1'b0; ct_dec_we <= 1'b0; ct_reenc_we <= 1'b0;
            ct_pack_start <= 1'b0;
            a_cache_we_fsm <= 1'b0;
            a_cache_addr_fsm <= 12'd0;
            a_cache_din_fsm <= 16'sd0;
            scratch_we_a <= 1'b0; scratch_we_b <= 1'b0;
            scratch_addr_a <= 12'd0; scratch_addr_b <= 12'd0;
            scratch_din_a <= 16'sd0; scratch_din_b <= 16'sd0;
            pwma_use_tomont <= 1'b1;
            pwma_sp_from_scratch <= 1'b0;

            case (state)
                S_IDLE: begin
                    done <= 0;
                    if (start) begin
                        busy <= 1; dma_cnt <= 0; loop_i <= 0; loop_j <= 0;
                        //trng_sent <= 0; hash_sent <= 0; cbd_sent <= 0; ntt_sent <= 0; pwma_sent <= 0; cmp_sent <= 0; gm_sent <= 0;
                        hash_sent <= 0; cbd_sent <= 0; ntt_sent <= 0; pwma_sent <= 0; cmp_sent <= 0; gm_sent <= 0;
                        hash_fetching <= 1'b0;
                        fetch_wait <= 1'b0;
                        fetch_cnt <= 8'd0;
                        hash_stream_valid <= 1'b0;
                        hash_stream_last <= 1'b0;
                        hash_stream_bytes <= 8'd0;
                        hash_stream_din <= 1088'd0;
                        ct_pack_sent <= 1'b0;
                        pwma_acc_base <= 12'd0;
                        pack_phase <= 2'd0; pack_poly <= 3'd0; pack_pair <= 8'd0; pack_step <= 3'd0;
                        pack_pk_addr <= PK_EXT_BASE; pack_sk_addr <= SK_EXT_BASE; pack_pk_byte_idx <= 32'd0;
                        hpk_we <= 1'b0;
                        ct_we <= 1'b0;
                        ct_dec_we <= 1'b0;
                        ct_reenc_we <= 1'b0;
                        dec_reenc_mode <= 1'b0;
                        dbg_pwma_u_pair_cnt <= 16'd0;
                        dbg_pwma_v_pair_cnt <= 16'd0;
                        dbg_pwma_dec_pair_cnt <= 16'd0;
                        dec_unpack_group_valid <= 1'b0;
                        dec_unpack_coeff_latch <= 128'd0;
                        dec_phase <= 4'd0;
                        dec_group_idx <= 10'd0;
                        dec_slot_idx <= 4'd0;
                        ct_cap_idx <= 12'd0;
                        dec_j_idx <= 3'd0;
                        dec_j_work <= 3'd0;
                        dec_sk_reload_done <= 1'b0;
                        dec_sk_poly <= 3'd0;
                        dec_sk_pair <= 8'd0;
                        dec_sk_step <= 3'd0;
                        dec_sk_b0 <= 8'd0;
                        dec_sk_b1 <= 8'd0;
                        dec_sk_b2 <= 8'd0;
                        dec_sk_c0 <= 16'd0;
                        dec_sk_c1 <= 16'd0;
                        pwma_sp_poly_idx <= 3'd0;
                        if      (opcode == 2'b01) state <= S_KG_TRNG;
                        else if (opcode == 2'b10) begin
                            pack_pk_addr <= PK_EXT_BASE;
                            pack_pk_byte_idx <= 32'd0;
                            dec_sk_reload_done <= 1'b0;
                            dec_sk_poly <= 3'd0;
                            dec_sk_pair <= 8'd0;
                            ext_addr <= PK_EXT_BASE;
                            state <= S_ENC_READ_PK;
                        end
                        else if (opcode == 2'b11) begin
                            pack_pk_addr <= SK_EXT_BASE;
                            dec_sk_reload_done <= 1'b0;
                            dec_sk_poly <= 3'd0;
                            dec_sk_pair <= 8'd0;
                            ext_addr <= SK_EXT_BASE;
                            state <= S_DEC_READ;
                        end
                    end else busy <= 0;
                end

                // ===========================================================
                // KEYGEN: Sinh ngẫu nhiên
                // ===========================================================
                S_KG_TRNG: begin
                    //trng_req_bytes <= 2'b01; 
                    //if (!trng_sent) begin trng_trigger <= 1; trng_sent <= 1; end
                    if (trng_valid) begin
                        reg_trng_seed <= trng_data;
                        reg_z <= trng_data[255:0];
                        // G input follows Kyber ref: coins || KYBER_K (2/3/4)
                        hash_din <= { 824'd0, {5'd0, k_val}, flip_bytes_32(trng_data[511:256]) };
                        dma_cnt <= 12'd0;
                        state <= S_KG_DMA_TRNG; hash_sent <= 0;
                    end
                end

                S_KG_DMA_TRNG: begin
                    // Dump 64 bytes of TRNG data (coins || z) out to TRNG_EXT_BASE
                    // ARM C-code can read this to test Kyber NIST reference vectors
                    ext_we <= 1'b1;
                    ext_addr <= TRNG_EXT_BASE + {20'd0, dma_cnt};
                    ext_dout <= {24'd0, reg_trng_seed[511 - (dma_cnt[5:0] * 8) -: 8]};
                    
                    if (ext_ready) begin
                        if (dma_cnt == 12'd63) begin
                            dma_cnt <= 12'd0;
                            state <= S_KG_HASH_G;
                        end else begin
                            dma_cnt <= dma_cnt + 12'd1;
                        end
                    end
                end

                S_KG_HASH_G: begin
                    hash_cmd <= 3'd3; hash_bytes <= 8'd33;
                    if (!hash_sent) begin hash_start <= 1; hash_sent <= 1; end
                    else if (!hash_busy && !hash_done) begin
                        hash_sent <= 1'b0;
                    end
                    if (hash_done) begin
                        reg_rho <= flip_bytes_32(hash_dout[255:0]);
                        reg_sigma <= flip_bytes_32(hash_dout[511:256]);
                        loop_i <= 0; hash_sent <= 0; state <= S_KG_PRF_E;
                    end
                end

                // ===========================================================
                // VÒNG LẶP E: Sinh e[i] -> NTT -> RAM offset 0x000 (Là t ban đầu)
                // ===========================================================
                S_KG_PRF_E: begin
                    hash_cmd <= 3'd1; hash_bytes <= 8'd33; hash_prf_eta3 <= eta1_is_3; // e dùng eta1 (giống s)
                    hash_din <= { 824'd0, {5'd0, loop_i + k_val}, flip_bytes_32(reg_sigma) };
                    if (!hash_sent) begin hash_start <= 1; hash_sent <= 1; end
                    else if (!hash_busy && !hash_done) begin
                        hash_sent <= 1'b0;
                    end
                    if (hash_done) begin cbd_sent <= 0; state <= S_KG_CBD_E; end
                end

                S_KG_CBD_E: begin
                    ntt_mux_sel <= 3'd1; cbd_base_addr <= 11'd0; cbd_eta3_mode <= eta1_is_3; // e dùng eta1
                    if (!cbd_sent) begin cbd_start <= 1; cbd_sent <= 1; end
                    if (cbd_done) begin ntt_sent <= 0; state <= S_KG_NTT_E; end
                end

                S_KG_NTT_E: begin
                    ntt_mux_sel <= 3'd0; ntt_mode <= 0;
                    if (!ntt_sent) begin ntt_start <= 1; ntt_sent <= 1; end
                    if (ntt_done) begin dma_cnt <= 0; state <= S_KG_DMA_E; end
                end

                S_KG_DMA_E: begin
                    mux_sel <= 3'd0; ntt_mux_sel <= 3'd0;
                    fsm_ntt_addr <= dma_cnt[7:0];
                    if (dma_cnt > 1) begin                                           // ← >0 → >1
                        fsm_we_a <= 1;
                        fsm_addr_a <= (loop_i * 11'd256) + dma_cnt[10:0] - 11'd2;   // ← -1 → -2
                        fsm_din_a  <= ntt_ext_dout;
                    end
                    if (dma_cnt == 12'd257) begin                                    // ← 256 → 257
                        dma_cnt <= 0;
                        if (loop_i == (k_val - 3'd1)) begin
                            loop_i <= 0;
                            state  <= S_KG_GEN_A;
                        end else begin
                            loop_i    <= loop_i + 1;
                            hash_sent <= 0;
                            state     <= S_KG_PRF_E;
                        end
                    end else dma_cnt <= dma_cnt + 1;
                end

                // ===========================================================
                // VÒNG LẶP S: Sinh s[i] -> NTT -> RAM offset 0x200 (Bảo lưu SK)
                // ===========================================================
                S_KG_PRF_S: begin
                    hash_cmd <= 3'd1; hash_bytes <= 8'd33; hash_prf_eta3 <= eta1_is_3;
                    hash_din <= { 824'd0, {5'd0, loop_j}, flip_bytes_32(reg_sigma) }; // ← loop_j
                    if (!hash_sent) begin hash_start <= 1; hash_sent <= 1; end
                    else if (!hash_busy && !hash_done) begin
                        hash_sent <= 1'b0;
                    end
                    if (hash_done) begin cbd_sent <= 0; state <= S_KG_CBD_S; end
                end

                S_KG_CBD_S: begin
                    ntt_mux_sel <= 3'd1; cbd_base_addr <= 11'd0; cbd_eta3_mode <= eta1_is_3;
                    if (!cbd_sent) begin cbd_start <= 1; cbd_sent <= 1; end
                    if (cbd_done) begin ntt_sent <= 0; state <= S_KG_NTT_S; end
                end

                S_KG_NTT_S: begin
                    ntt_mux_sel <= 3'd0; ntt_mode <= 0;
                    if (!ntt_sent) begin ntt_start <= 1; ntt_sent <= 1; end
                    if (ntt_done) begin dma_cnt <= 0; state <= S_KG_DMA_S; end
                end

                S_KG_DMA_S: begin
                    mux_sel <= 3'd0; ntt_mux_sel <= 3'd0;
                    fsm_ntt_addr <= dma_cnt[7:0];
                    if (dma_cnt > 1) begin                                           // ← đổi >0 thành >1
                        fsm_we_a   <= 1;
                        fsm_addr_a <= sk_ram_base + ({9'd0, loop_j} * 12'd256) + dma_cnt[11:0] - 12'd2; // s[j] after t region
                        fsm_din_a  <= ntt_ext_dout;
                    end
                    if (dma_cnt == 12'd257) begin                                    // ← đổi 256 thành 257
                        dma_cnt    <= 0;
                        loop_i     <= 0;
                        pwma_sent  <= 0;
                        state      <= S_KG_PWMA_A_S;
                    end else dma_cnt <= dma_cnt + 1;
                end

                // ===========================================================
                // TẠO MA TRẬN A: 1 lần duy nhất cho toàn bộ KxK
                // ===========================================================
                S_KG_GEN_A: begin
                    mux_sel <= 3'd3;
                    if (!gm_sent) begin gm_start <= 1; gm_sent <= 1; end
                    if (gm_done) begin
                        loop_j    <= 0;          // ← THÊM: reset loop_j
                        loop_i    <= 0;
                        hash_sent <= 0;
                        state     <= S_KG_PRF_S; // ← Bắt đầu vòng lặp s
                    end
                end

                // ===========================================================
                // COLUMN-MAJOR MATRIX MULTIPLICATION (A * s + e)
                // ===========================================================
                // S_KG_LOAD_S_INIT: begin
                //     dma_cnt <= 0; state <= S_KG_LOAD_S;
                // end

                // S_KG_LOAD_S: begin
                //     // Đọc s[loop_j] từ Main RAM (Port B), nạp lại vào bụng NTT Core
                //     mux_sel <= 3'd0; ntt_mux_sel <= 3'd0;
                //     fsm_addr_b <= 11'd512 + (loop_j * 11'd256) + dma_cnt[10:0];
                //     fsm_ntt_addr <= dma_cnt[7:0] - 8'd1; // Delay 1 cycle
                    
                //     if (dma_cnt > 0) begin
                //         fsm_ntt_we <= 1; fsm_ntt_din <= dout_b;
                //     end
                //     if (dma_cnt == 12'd256) begin
                //         dma_cnt <= 0; loop_i <= 0; pwma_sent <= 0; state <= S_KG_PWMA_A_S;
                //     end else dma_cnt <= dma_cnt + 1;
                // end

                S_KG_PWMA_A_S: begin
                    ntt_mux_sel <= 3'd2; mux_sel <= 3'd2;
                    pwma_acc_base <= 12'd0;
                    if (!pwma_sent) begin pwma_start <= 1; pwma_sent <= 1; end
                    if (pwma_done) begin
                        pwma_sent <= 0;
                        if (loop_i == (k_val - 3'd1)) begin
                            // Xong tất cả hàng i cho cột j này
                            if (loop_j == (k_val - 3'd1)) begin
                                // Xong toàn bộ A*s+e: chuyển sang pack bytes chuẩn
                                pack_phase <= 2'd0;
                                pack_poly  <= 3'd0;
                                pack_pair  <= 8'd0;
                                pack_step  <= 3'd0;
                                pack_pk_addr <= PK_EXT_BASE;
                                pack_sk_addr <= SK_EXT_BASE;
                                pack_pk_byte_idx <= 32'd0;
                                state <= S_KG_PACK;
                            end else begin
                                loop_j    <= loop_j + 1;   // Sang cột s tiếp theo
                                loop_i    <= 0;
                                hash_sent <= 0;
                                state     <= S_KG_PRF_S;   // Sinh s[j+1]
                            end
                        end else begin
                            loop_i <= loop_i + 1;          // Sang hàng tiếp theo
                            // Không cần reset pwma_sent, đã set = 0 ở trên
                        end
                    end
                end

                // ===========================================================
                // ĐÓNG GÓI
                // ===========================================================
                S_KG_HASH_PK: begin
                    hash_cmd <= 3'd2;
                    hash_stream_en <= 1'b1;
                    if (!hash_sent) begin
                        hash_sent <= 1'b1;
                        dma_cnt <= 12'd0;
                        hash_fetching <= 1'b0;
                        fetch_wait <= 1'b0;
                        fetch_cnt <= 8'd0;
                        hash_stream_valid <= 1'b0;
                    end else begin
                        if (!hash_stream_valid && dma_cnt < pk_bytes_total) begin
                            if (!hash_fetching) begin
                                rem12 = pk_bytes_total - dma_cnt;
                                hash_stream_bytes <= (rem12 > 12'd136) ? 8'd136 : rem12[7:0];
                                hash_stream_last  <= (rem12 <= 12'd136);
                                hash_stream_din   <= 1088'd0;
                                fetch_cnt <= 8'd0;
                                hash_fetching <= 1'b1;
                                hpk_addr_b <= dma_cnt[10:0]; // Req byte 0
                                fetch_wait <= 1'b1;
                            end else if (fetch_wait) begin
                                fetch_wait <= 1'b0;
                                hpk_addr_b <= dma_cnt[10:0] + 11'd1; // Req byte 1
                            end else begin
                                hash_stream_din[(fetch_cnt * 8) +: 8] <= hpk_dout;
                                if (fetch_cnt + 8'd1 == hash_stream_bytes) begin
                                    hash_fetching <= 1'b0;
                                    hash_stream_valid <= 1'b1;
                                end else begin
                                    fetch_cnt <= fetch_cnt + 8'd1;
                                    hpk_addr_b <= dma_cnt[10:0] + {3'd0, fetch_cnt} + 11'd2; // Req byte N+1
                                end
                            end
                        end
                        if (hash_stream_ack) begin
                            dma_cnt <= dma_cnt + {4'd0, hash_stream_bytes};
                        end
                        if (hash_done) begin
                            reg_H_pk <= flip_bytes_32(hash_dout[255:0]);
                            hash_sent <= 1'b0;
                            hash_fetching <= 1'b0;
                            fetch_wait <= 1'b0;
                            hash_stream_valid <= 1'b0;
                            if (opcode == 2'b10) begin
                                state <= S_ENC_TRNG;
                                //trng_sent <= 1'b0;
                            end else begin
                                state <= S_KG_WRITE_REST;
                                pack_phase <= 2'd0;
                                dma_cnt <= 12'd0;
                                // pack_sk_addr is already pointed to the end of s
                            end
                        end
                    end
                end

                S_KG_WRITE_REST: begin
                    // Build full SK layout (Round3 legacy):
                    // sk = s_polyvec || pk || H(pk) || z
                    // where pack_sk_addr currently points to end of s_polyvec.
                    if (pack_phase == 2'd0) begin
                        // Copy pk bytes from local hpk RAM into SK.
                        if (dma_cnt == 12'd0) begin
                            ext_we <= 1'b0;
                            hpk_addr_b <= 11'd0;
                            dma_cnt <= 12'd1;
                        end else if (dma_cnt == 12'd1) begin
                            ext_we <= 1'b0;
                            hpk_addr_b <= 11'd1;
                            dma_cnt <= 12'd2;
                        end else begin
                            ext_we <= 1'b1;
                            ext_dout <= {24'd0, hpk_dout};
                            ext_addr <= pack_sk_addr + ({20'd0, dma_cnt} - 32'd2);
                            if ((dma_cnt - 12'd2) < (pk_bytes_total - 12'd1)) begin
                                hpk_addr_b <= dma_cnt[10:0]; // Fetch next byte N+1 for next cycle
                                dma_cnt <= dma_cnt + 12'd1;
                            end else begin
                                pack_phase <= 2'd1;
                                dma_cnt <= 12'd0;
                            end
                        end
                    end else if (pack_phase == 2'd1) begin
                        // Append H(pk) after pk
                        ext_we <= 1'b1;
                        ext_addr <= pack_sk_addr + ({20'd0, pk_bytes_total}) + {20'd0, dma_cnt};
                        ext_dout <= {24'd0, reg_H_pk[255 - (dma_cnt[4:0] * 8) -: 8]};
                        if (ext_ready) begin
                            if (dma_cnt == 12'd31) begin
                                pack_phase <= 2'd2;
                                dma_cnt <= 12'd0;
                            end else begin
                                dma_cnt <= dma_cnt + 12'd1;
                            end
                        end
                    end else begin
                        // Append z after H(pk)
                        ext_we <= 1'b1;
                        ext_addr <= pack_sk_addr + ({20'd0, pk_bytes_total}) + 32'd32 + {20'd0, dma_cnt};
                        ext_dout <= {24'd0, reg_z[255 - (dma_cnt[4:0] * 8) -: 8]};
                        if (ext_ready) begin
                            if (dma_cnt == 12'd31) begin
                                state <= S_IDLE;
                                done <= 1'b1;
                            end else begin
                                dma_cnt <= dma_cnt + 12'd1;
                            end
                        end
                    end
                end

                S_KG_PACK: begin
                    mux_sel <= 3'd0;
                    case (pack_step)
                        3'd0: begin
                            // Issue read pair (2 coeff) from RAM
                            if (pack_phase == 2'd0) begin
                                fsm_addr_a <= ({8'd0, pack_poly} * 11'd256) + {2'd0, pack_pair, 1'b0};
                                fsm_addr_b <= ({8'd0, pack_poly} * 11'd256) + {2'd0, pack_pair, 1'b0} + 11'd1;
                            end else if (pack_phase == 2'd2) begin
                                fsm_addr_a <= sk_ram_base + ({8'd0, pack_poly} * 11'd256) + {2'd0, pack_pair, 1'b0};
                                fsm_addr_b <= sk_ram_base + ({8'd0, pack_poly} * 11'd256) + {2'd0, pack_pair, 1'b0} + 11'd1;
                            end
                            pack_step <= (pack_phase == 2'd1) ? 3'd4 : 3'd1;
                        end
                        3'd1: begin
                            // Wait 1 cycle for synchronous RAM read
                            pack_step <= 3'd2;
                        end
                        3'd2: begin
                            // Canonicalize signed coeffs to [0..q-1] before 12-bit Kyber packing.
                            c0s = dout_a;
                            c1s = dout_b;
                            if (c0s < 0) c0s = c0s + 16'sd3329;
                            if (c1s < 0) c1s = c1s + 16'sd3329;
                            c0n = c0s[11:0];
                            c1n = c1s[11:0];
                            if (c0n >= 12'd3329) c0n = c0n - 12'd3329;
                            if (c1n >= 12'd3329) c1n = c1n - 12'd3329;
                            pack_b0 <= c0n[7:0];
                            pack_b1 <= {c1n[3:0], c0n[11:8]};
                            pack_b2 <= c1n[11:4];
                            pack_step <= 3'd3;
                        end
                        3'd3: begin
                            // Emit 3 packed bytes (1 byte/word on ext bus)
                            ext_we <= 1'b1;
                            if (ext_ready) begin
                                if (dma_cnt == 12'd0) begin
                                    ext_addr <= (pack_phase == 2'd0) ? pack_pk_addr : pack_sk_addr;
                                    ext_dout <= {24'd0, pack_b0};
                                    if (pack_phase == 2'd0 && pack_pk_byte_idx < pk_bytes_total) begin
                                        hpk_we <= 1'b1; hpk_addr_a <= pack_pk_byte_idx[10:0]; hpk_din <= pack_b0;
                                    end
                                    if (pack_phase == 2'd0) begin pack_pk_addr <= pack_pk_addr + 32'd1; pack_pk_byte_idx <= pack_pk_byte_idx + 32'd1; end
                                    else pack_sk_addr <= pack_sk_addr + 32'd1;
                                    dma_cnt <= 12'd1;
                                end else if (dma_cnt == 12'd1) begin
                                    ext_addr <= (pack_phase == 2'd0) ? pack_pk_addr : pack_sk_addr;
                                    ext_dout <= {24'd0, pack_b1};
                                    if (pack_phase == 2'd0 && pack_pk_byte_idx < pk_bytes_total) begin
                                        hpk_we <= 1'b1; hpk_addr_a <= pack_pk_byte_idx[10:0]; hpk_din <= pack_b1;
                                    end
                                    if (pack_phase == 2'd0) begin pack_pk_addr <= pack_pk_addr + 32'd1; pack_pk_byte_idx <= pack_pk_byte_idx + 32'd1; end
                                    else pack_sk_addr <= pack_sk_addr + 32'd1;
                                    dma_cnt <= 12'd2;
                                end else begin
                                    ext_addr <= (pack_phase == 2'd0) ? pack_pk_addr : pack_sk_addr;
                                    ext_dout <= {24'd0, pack_b2};
                                    if (pack_phase == 2'd0 && pack_pk_byte_idx < pk_bytes_total) begin
                                        hpk_we <= 1'b1; hpk_addr_a <= pack_pk_byte_idx[10:0]; hpk_din <= pack_b2;
                                    end
                                    if (pack_phase == 2'd0) begin pack_pk_addr <= pack_pk_addr + 32'd1; pack_pk_byte_idx <= pack_pk_byte_idx + 32'd1; end
                                    else pack_sk_addr <= pack_sk_addr + 32'd1;
                                    dma_cnt <= 12'd0;

                                    if (pack_pair == 8'd127) begin
                                        pack_pair <= 8'd0;
                                        if (pack_poly + 3'd1 == k_val) begin
                                            pack_poly <= 3'd0;
                                            if (pack_phase == 2'd0) begin
                                                pack_phase <= 2'd1; // append rho to pk
                                                pack_step  <= 3'd4;
                                            end else begin
                                                state <= S_KG_HASH_PK;
                                                hash_sent <= 1'b0;
                                                pack_step <= 3'd0;
                                            end
                                        end else begin
                                            pack_poly <= pack_poly + 3'd1;
                                            pack_step <= 3'd0;
                                        end
                                    end else begin
                                        pack_pair <= pack_pair + 8'd1;
                                        pack_step <= 3'd0;
                                    end
                                end
                            end else begin
                                hpk_we <= 1'b0;
                                if (dma_cnt == 12'd0) begin
                                    ext_addr <= (pack_phase == 2'd0) ? pack_pk_addr : pack_sk_addr;
                                    ext_dout <= {24'd0, pack_b0};
                                end else if (dma_cnt == 12'd1) begin
                                    ext_addr <= (pack_phase == 2'd0) ? pack_pk_addr : pack_sk_addr;
                                    ext_dout <= {24'd0, pack_b1};
                                end else begin
                                    ext_addr <= (pack_phase == 2'd0) ? pack_pk_addr : pack_sk_addr;
                                    ext_dout <= {24'd0, pack_b2};
                                end
                            end
                        end
                        3'd4: begin
                            // Append rho (32 bytes) to PK
                            ext_we   <= 1'b1;
                            ext_addr <= pack_pk_addr;
                            ext_dout <= {24'd0, reg_rho[255 - (pack_pair[4:0] * 8) -: 8]};
                            if (ext_ready) begin
                                if (pack_pk_byte_idx < pk_bytes_total) begin
                                    hpk_we <= 1'b1; hpk_addr_a <= pack_pk_byte_idx[10:0]; hpk_din <= reg_rho[255 - (pack_pair[4:0] * 8) -: 8];
                                end
                                pack_pk_addr <= pack_pk_addr + 32'd1;
                                pack_pk_byte_idx <= pack_pk_byte_idx + 32'd1;
                                if (pack_pair == 8'd31) begin
                                    pack_pair <= 8'd0;
                                    pack_phase <= 2'd2; // switch to SK polyvec bytes
                                    pack_step <= 3'd0;
                                end else begin
                                    pack_pair <= pack_pair + 8'd1;
                                end
                            end else begin
                                hpk_we <= 1'b0;
                            end
                        end
                        default: pack_step <= 3'd0;
                    endcase
                end

                S_ENC_TRNG: begin
                    /*trng_req_bytes <= 2'b01;
                    if (!trng_sent) begin
                        trng_trigger <= 1'b1;
                        trng_sent <= 1'b1;
                    end*/
                    if (trng_valid) begin
                        // Align with C deterministic stream usage: encaps uses next 32 bytes window.
                        reg_m <= trng_data[511:256];
                        hash_sent <= 1'b0;
                        state <= S_ENC_PRF_R;
                    end
                end

                // G(m || H(pk)) -> (Kbar, r)
                S_ENC_PRF_R: begin
                    hash_cmd   <= 3'd3;  // SHA3-512 (G)
                    hash_bytes <= 8'd64;
                    hash_din   <= {576'd0, flip_bytes_32(reg_H_pk), flip_bytes_32(reg_m)};
                    if (!hash_sent) begin
                        hash_start <= 1'b1;
                        hash_sent  <= 1'b1;
                    end
                    if (hash_done) begin
                        reg_K_bar  <= flip_bytes_32(hash_dout[255:0]);   // Kbar
                        reg_r_seed <= flip_bytes_32(hash_dout[511:256]); // r
                        hash_sent  <= 1'b0;
                        cbd_sent   <= 1'b0;
                        ntt_sent   <= 1'b0;
                        loop_j     <= 3'd0;
                        enc_noise_kind <= 2'd0; // start with sp
                        dma_cnt    <= 12'd0;
                        state      <= S_ENC_CBD_R;
                    end
                end

                // Legacy state kept only for backward compatibility in state encoding.
                // Main ENC flow must not use this state.
                S_ENC_HASH_G: begin
                    hash_sent <= 1'b0;
                    state <= S_ENC_PRF_R;
                end

                // Generate sp/ep/epp into scratch with Kyber nonces:
                // sp: nonce=j, eta1 ; ep: nonce=k+j, eta2 ; epp: nonce=2k, eta2
                S_ENC_CBD_R: begin
                    ntt_mux_sel <= 3'd0;
                    mux_sel <= 3'd0;
                    // Stream CBD output directly into scratch.
                        if (cbd_we) begin
                            scratch_we_a <= 1'b1;
                            if (enc_noise_kind == 2'd0)
                                scratch_addr_a <= SCR_SP_BASE + ({9'd0, loop_j} * 12'd256) + {1'd0, cbd_ram_addr};
                            else if (enc_noise_kind == 2'd1)
                                scratch_addr_a <= SCR_EP_BASE + ({9'd0, loop_j} * 12'd256) + {1'd0, cbd_ram_addr};
                        else
                            scratch_addr_a <= SCR_EPP_BASE + {1'd0, cbd_ram_addr};
                        scratch_din_a <= cbd_poly_out;
                    end

                    if (!hash_sent) begin
                        hash_cmd <= 3'd1;   // PRF
                        hash_bytes <= 8'd33;
                        hash_prf_eta3 <= (enc_noise_kind == 2'd0) ? eta1_is_3 : 1'b0;
                        if (enc_noise_kind == 2'd0)
                            hash_din <= {824'd0, {5'd0, loop_j}, flip_bytes_32(reg_r_seed)};
                        else if (enc_noise_kind == 2'd1)
                            hash_din <= {824'd0, {5'd0, k_val + loop_j}, flip_bytes_32(reg_r_seed)};
                        else
                            // epp nonce must be 2*k; widen before shift to keep k=4 -> 8 (not 0).
                            hash_din <= {824'd0, ({5'd0, k_val} + {5'd0, k_val}), flip_bytes_32(reg_r_seed)};
                        hash_start <= 1'b1;
                        hash_sent  <= 1'b1;
                    end else if (hash_done && !cbd_sent) begin
                        cbd_base_addr <= 11'd0;
                        cbd_eta3_mode <= (enc_noise_kind == 2'd0) ? eta1_is_3 : 1'b0;
                        cbd_start <= 1'b1;
                        cbd_sent <= 1'b1;
                    end else if (cbd_done) begin
                        hash_sent <= 1'b0;
                        cbd_sent <= 1'b0;
                        if (enc_noise_kind == 2'd0) begin
                            // NTT(sp[j]) in-place in scratch.
                            enc_ntt_phase <= 2'd0;
                            dma_cnt <= 12'd0;
                            ntt_sent <= 1'b0;
                            state <= S_ENC_NTT_R;
                        end else if (enc_noise_kind == 2'd1) begin
                            if (loop_j + 3'd1 == k_val) begin
                                loop_j <= 3'd0;
                                enc_noise_kind <= 2'd2; // epp
                            end else begin
                                loop_j <= loop_j + 3'd1;
                            end
                        end else begin
                            // sp/ep/epp ready -> run real u/v datapath
                            loop_i <= 3'd0;
                            loop_j <= 3'd0;
                            dma_cnt <= 12'd0;
                            enc_ntt_phase <= 2'd0; // clear u-accumulator RAM first
                            pwma_acc_base <= ENC_U_BASE;
                            gm_sent <= 1'b0;
                            dbg_pwma_u_pair_cnt <= 16'd0;
                            dbg_pwma_v_pair_cnt <= 16'd0;
                            state <= S_ENC_PWMA_U;
                        end
                    end
                end

                // In-place NTT(sp[j]) using ntt_core load/run/dump through scratch.
                S_ENC_NTT_R: begin
                    ntt_mux_sel <= 3'd0;
                    mux_sel <= 3'd0;
                    if (enc_ntt_phase == 2'd0) begin
                        // load scratch -> ntt RAM
                        // scratch path is 2-cycle latent in this flow, so align as >1 / -2.
                        scratch_addr_a <= SCR_SP_BASE + ({9'd0, loop_j} * 12'd256) + dma_cnt[11:0];
                        if (dma_cnt > 1) begin
                            fsm_ntt_we   <= 1'b1;
                            fsm_ntt_addr <= dma_cnt[7:0] - 8'd2;
                            fsm_ntt_din  <= scratch_dout_a;
                        end
                        if (dma_cnt == 12'd257) begin
                            dma_cnt <= 12'd0;
                            enc_ntt_phase <= 2'd1;
                        end else begin
                            dma_cnt <= dma_cnt + 12'd1;
                        end
                    end else if (enc_ntt_phase == 2'd1) begin
                        // run NTT
                        ntt_mode <= 1'b0;
                        if (!ntt_sent) begin
                            ntt_start <= 1'b1;
                            ntt_sent <= 1'b1;
                        end
                        if (ntt_done) begin
                            ntt_sent <= 1'b0;
                            dma_cnt <= 12'd0;
                            enc_ntt_phase <= 2'd2;
                        end
                    end else begin
                        // dump ntt RAM -> scratch
                        fsm_ntt_addr <= dma_cnt[7:0];
                        if (dma_cnt > 1) begin
                            scratch_we_a <= 1'b1;
                            scratch_addr_a <= SCR_SP_BASE + ({9'd0, loop_j} * 12'd256) + dma_cnt[11:0] - 12'd2;
                            scratch_din_a  <= ntt_ext_dout;
                        end
                        if (dma_cnt == 12'd257) begin
                            dma_cnt <= 12'd0;
                            if (loop_j + 3'd1 == k_val) begin
                                loop_j <= 3'd0;
                                enc_noise_kind <= 2'd1; // move to ep
                            end else begin
                                loop_j <= loop_j + 3'd1;
                            end
                            state <= S_ENC_CBD_R;
                        end else begin
                            dma_cnt <= dma_cnt + 12'd1;
                        end
                    end
                end

                // u = A^T * sp (NTT domain), accumulator in main RAM [ENC_U_BASE..]
                S_ENC_PWMA_U: begin
                    if (enc_ntt_phase == 2'd0) begin
                        mux_sel <= 3'd0;
                        fsm_we_a <= 1'b1;
                        fsm_addr_a <= ENC_U_BASE + dma_cnt[11:0];
                        fsm_din_a <= 16'sd0;
                        if (dma_cnt + 12'd1 == enc_u_coeff_total) begin
                            dma_cnt <= 12'd0;
                            enc_ntt_phase <= 2'd1;
                            gm_sent <= 1'b0;
                        end else begin
                            dma_cnt <= dma_cnt + 12'd1;
                        end
                    end else if (enc_ntt_phase == 2'd1) begin
                        mux_sel <= 3'd3;
                        gm_transposed <= 1'b1;
                        if (!gm_sent) begin
                            gm_start <= 1'b1;
                            gm_sent <= 1'b1;
                        end
                        if (gm_done) begin
                            gm_sent <= 1'b0;
                            loop_i <= 3'd0;
                            loop_j <= 3'd0;
                            pwma_sent <= 1'b0;
                            enc_ntt_phase <= 2'd2;
                        end
                    end else begin
                        ntt_mux_sel <= 3'd2;
                        mux_sel <= 3'd2;
                        pwma_sp_from_scratch <= 1'b1;
                        pwma_use_tomont <= 1'b0;
                        pwma_sp_poly_idx <= loop_j;
                        pwma_acc_base <= ENC_U_BASE;
                        if (!pwma_sent) begin
                            pwma_start <= 1'b1;
                            pwma_sent <= 1'b1;
                        end
                        if (pwma_done) begin
                            pwma_sent <= 1'b0;
                            if (loop_i == (k_val - 3'd1)) begin
                                if (loop_j == (k_val - 3'd1)) begin
                                    loop_i <= 3'd0;
                                    loop_j <= 3'd0;
                                    dma_cnt <= 12'd0;
                                    enc_ntt_phase <= 2'd0;
                                    ntt_sent <= 1'b0;
                                    gm_transposed <= 1'b0;
                                    state <= S_ENC_INTT_U;
                                end else begin
                                    loop_i <= 3'd0;
                                    loop_j <= loop_j + 3'd1;
                                end
                            end else begin
                                loop_i <= loop_i + 3'd1;
                            end
                        end
                    end
                end

                // INTT for each u[i], write back to ENC_U_BASE
                S_ENC_INTT_U: begin
                    ntt_mux_sel <= 3'd0;
                    mux_sel <= 3'd0;
                    if (enc_ntt_phase == 2'd0) begin
                        // Preload to NTT RAM with 1-cycle read latency compensation.
                        // Keep source addr clamped at last coeff during drain cycle.
                        fsm_addr_a <= ENC_U_BASE + ({8'd0, loop_i} * 11'd256) +
                                      ((dma_cnt < 12'd256) ? dma_cnt[11:0] : 12'd255);
                        if (dma_cnt > 1) begin
                            fsm_ntt_we <= 1'b1;
                            // Tail drain fix: add one extra cycle so last coeff doesn't use stale dout.
                            if (dma_cnt >= 12'd258)
                                fsm_ntt_addr <= 8'd255;
                            else
                                fsm_ntt_addr <= dma_cnt[7:0] - 8'd2;
                            fsm_ntt_din <= dout_a;
                        end
                        if (dma_cnt == 12'd258) begin
                            dma_cnt <= 12'd0;
                            enc_ntt_phase <= 2'd1;
                        end else begin
                            dma_cnt <= dma_cnt + 12'd1;
                        end
                    end else if (enc_ntt_phase == 2'd1) begin
                        ntt_mode <= 1'b1;
                        if (!ntt_sent) begin
                            ntt_start <= 1'b1;
                            ntt_sent <= 1'b1;
                        end
                        if (ntt_done) begin
                            ntt_sent <= 1'b0;
                            dma_cnt <= 12'd0;
                            enc_ntt_phase <= 2'd2;
                        end
                    end else begin
                        // Dump INTT output by pairs: write even/odd in the same cycle.
                        // ntt_ext_dout  -> coeff[2p], ntt_ext_dout_b -> coeff[2p+1]
                        // Keep legacy stream addressing for body; fix only tail pair wrap.
                        // For the last two dump cycles, force 252/254 instead of wrapping to 0/2.
                        if (dma_cnt == 12'd128)
                            fsm_ntt_addr <= 8'd252;
                        else if (dma_cnt == 12'd129)
                            fsm_ntt_addr <= 8'd254;
                        else
                            fsm_ntt_addr <= {dma_cnt[6:0], 1'b0};
                        if (dma_cnt > 1) begin
                            u_pair_base12 = ENC_U_BASE + ({8'd0, loop_i} * 12'd256) + {3'd0, dma_cnt[7:0], 1'b0} - 12'd4;
                            u_pair_base_b12 = u_pair_base12 + 12'd1;
                            u_even_idx12 = {3'd0, dma_cnt[7:0], 1'b0} - 12'd4;
                            u_odd_idx12  = {3'd0, dma_cnt[7:0], 1'b0} - 12'd3;
                            u_global_even_idx12 = ({8'd0, loop_i} * 12'd256) + u_even_idx12;
                            u_global_odd_idx12  = ({8'd0, loop_i} * 12'd256) + u_odd_idx12;
                            // Two hypotheses for pair writeback base index:
                            // off2: base = 2*dma - 2 ; off3: base = 2*dma - 4
                            u_cand_off2_idx12 = {3'd0, dma_cnt[7:0], 1'b0} - 12'd2;
                            u_cand_off3_idx12 = {3'd0, dma_cnt[7:0], 1'b0} - 12'd4;
                            fsm_we_a <= 1'b1;
                            fsm_we_b <= 1'b1;
                            fsm_addr_a <= u_pair_base12;
                            fsm_addr_b <= u_pair_base_b12;
                            // ntt_core INTT path requires final invntt_tomont scale (f=1441)
                            // on both even/odd outputs.
                            fsm_din_a <= dec_invntt_scaled_b;
                            fsm_din_b <= dec_invntt_scaled;
                        end
                        if (dma_cnt == 12'd129) begin
                            dma_cnt <= 12'd0;
                            enc_ntt_phase <= 2'd0;
                            if (loop_i + 3'd1 == k_val) begin
                                loop_i <= 3'd0;
                                loop_j <= 3'd0;
                                state <= S_ENC_PWMA_V;
                            end else begin
                                loop_i <= loop_i + 3'd1;
                            end
                        end else begin
                            dma_cnt <= dma_cnt + 12'd1;
                        end
                    end
                end

                // v = <pk, sp> by reusing PWMA with a_cache loaded from pk vec.
                S_ENC_PWMA_V: begin
                    if (enc_ntt_phase == 2'd0) begin
                        mux_sel <= 3'd0;
                        fsm_we_a <= 1'b1;
                        fsm_addr_a <= ENC_V_BASE + dma_cnt[11:0];
                        fsm_din_a <= 16'sd0;
                        if (dma_cnt == 12'd255) begin
                            dma_cnt <= 12'd0;
                            enc_ntt_phase <= 2'd1;
                        end else begin
                            dma_cnt <= dma_cnt + 12'd1;
                        end
                    end else if (enc_ntt_phase == 2'd1) begin
                        mux_sel <= 3'd0;
                        // Main RAM read path here is 2-cycle aligned in this flow.
                        // Use >1 / -2 like other DMA-style copies to avoid stale first coeff.
                        fsm_addr_a <= (dma_cnt <= enc_u_coeff_total) ? dma_cnt[11:0] : enc_u_coeff_total[11:0];
                        if (dma_cnt > 1) begin
                            a_cache_we_fsm <= 1'b1;
                            a_cache_addr_fsm <= dma_cnt[11:0] - 12'd2;
                            a_cache_din_fsm <= dout_a;
                        end
                        if (dma_cnt == (enc_u_coeff_total + 12'd1)) begin
                            dma_cnt <= 12'd0;
                            loop_i <= 3'd0;
                            loop_j <= 3'd0;
                            enc_ntt_phase <= 2'd2;
                            pwma_sent <= 1'b0;
                        end else begin
                            dma_cnt <= dma_cnt + 12'd1;
                        end
                    end else begin
                        ntt_mux_sel <= 3'd2;
                        mux_sel <= 3'd2;
                        pwma_sp_from_scratch <= 1'b1;
                        pwma_use_tomont <= 1'b0;
                        pwma_sp_poly_idx <= loop_j;
                        pwma_acc_base <= ENC_V_BASE;
                        loop_i <= 3'd0;
                        if (!pwma_sent) begin
                            pwma_start <= 1'b1;
                            pwma_sent <= 1'b1;
                        end
                        if (pwma_done) begin
                            pwma_sent <= 1'b0;
                            if (loop_j == (k_val - 3'd1)) begin
                                loop_j <= 3'd0;
                                dma_cnt <= 12'd0;
                                enc_ntt_phase <= 2'd0;
                                ntt_sent <= 1'b0;
                                state <= S_ENC_INTT_V;
                            end else begin
                                loop_j <= loop_j + 3'd1;
                            end
                        end
                    end
                end

                // INTT for v, write back to ENC_V_BASE
                S_ENC_INTT_V: begin
                    ntt_mux_sel <= 3'd0;
                    mux_sel <= 3'd0;
                    if (enc_ntt_phase == 2'd0) begin
                        fsm_addr_a <= ENC_V_BASE + ((dma_cnt < 12'd256) ? dma_cnt[11:0] : 12'd255);
                        if (dma_cnt > 1) begin
                            fsm_ntt_we <= 1'b1;
                            fsm_ntt_addr <= dma_cnt[7:0] - 8'd2;
                            fsm_ntt_din <= dout_a;
                        end
                        if (dma_cnt == 12'd257) begin
                            dma_cnt <= 12'd0;
                            enc_ntt_phase <= 2'd1;
                        end else begin
                            dma_cnt <= dma_cnt + 12'd1;
                        end
                    end else if (enc_ntt_phase == 2'd1) begin
                        ntt_mode <= 1'b1;
                        if (!ntt_sent) begin
                            ntt_start <= 1'b1;
                            ntt_sent <= 1'b1;
                        end
                        if (ntt_done) begin
                            ntt_sent <= 1'b0;
                            dma_cnt <= 12'd0;
                            enc_ntt_phase <= 2'd2;
                        end
                    end else begin
                        // Dump INTT output by pairs for v path as well.
                        fsm_ntt_addr <= {dma_cnt[6:0], 1'b0};
                        if (dma_cnt > 1) begin
                            v_pair_base12 = ENC_V_BASE + {3'd0, dma_cnt[7:0], 1'b0} - 12'd4;
                            v_pair_base_b12 = v_pair_base12 + 12'd1;
                            v_even_idx12  = {3'd0, dma_cnt[7:0], 1'b0} - 12'd4;
                            v_odd_idx12   = {3'd0, dma_cnt[7:0], 1'b0} - 12'd3;
                            v_cand_off2_idx12 = {3'd0, dma_cnt[7:0], 1'b0} - 12'd2;
                            v_cand_off3_idx12 = {3'd0, dma_cnt[7:0], 1'b0} - 12'd4;
                            fsm_we_a <= 1'b1;
                            fsm_we_b <= 1'b1;
                            fsm_addr_a <= v_pair_base12;
                            fsm_addr_b <= v_pair_base_b12;
                            fsm_din_a <= dec_invntt_scaled_b;
                            fsm_din_b <= dec_invntt_scaled;
                        end
                        if (dma_cnt == 12'd129) begin
                            dma_cnt <= 12'd0;
                            enc_ntt_phase <= 2'd0;
                            state <= S_ENC_ADD_MATH;
                        end else begin
                            dma_cnt <= dma_cnt + 12'd1;
                        end
                    end
                end

                // Add ep/epp and message.
                S_ENC_ADD_MATH: begin
                    mux_sel <= 3'd0;
                    if (enc_ntt_phase == 2'd0) begin
                        // u += ep over k*256 coeffs (2-cycle addr->dout in this FSM path): write at idx=dma-3
                        u_src_idx12 = (dma_cnt < enc_u_coeff_total) ? dma_cnt : (enc_u_coeff_total - 12'd1);
                        // EP in scratch is currently rotated by +1 index per 256-coeff block.
                        // Compensate by reading (idx-1) on full 12-bit index.
                        // Do NOT split hi/lo bytes; split subtraction breaks borrow at poly boundaries.
                        ep_src_idx12 = (u_src_idx12 == 12'd0) ? 12'd0 : (u_src_idx12 - 12'd1);
                        ep_src_next12 = (ep_src_idx12 + 12'd1 < enc_u_coeff_total) ? (ep_src_idx12 + 12'd1) : ep_src_idx12;
                        fsm_addr_a <= ENC_U_BASE + u_src_idx12;
                        scratch_addr_a <= SCR_EP_BASE + ep_src_idx12;
                        scratch_addr_b <= SCR_EP_BASE + ep_src_next12;
                        if (dma_cnt > 2) begin
                            // Odd coeff currently observes main-path value +2 idx ahead.
                            // Compensate by taking 2-cycle delayed sample for odd positions.
                            uidx = dma_cnt - 12'd3;
                            ep_term = scratch_dout_a;
                            // Tail quirk: last coeff needs B-prefetch sample to avoid EP stale-by-1.
                            if (uidx == (enc_u_coeff_total - 12'd1))
                                ep_term = scratch_dout_b;
                            su = $signed(uidx[0] ? add_main_d2 : dout_a) + $signed(ep_term);
                            if (su < 0) su = su + 17'sd3329;
                            if (su >= 17'sd3329) su = su - 17'sd3329;
                            fsm_we_b <= 1'b1;
                            fsm_addr_b <= ENC_U_BASE + dma_cnt[11:0] - 12'd3;
                            fsm_din_b <= su[15:0];
                        end
                        if (dma_cnt == (enc_u_coeff_total + 12'd2)) begin
                            dma_cnt <= 12'd0;
                            enc_ntt_phase <= 2'd1;
                        end else begin
                            dma_cnt <= dma_cnt + 12'd1;
                        end
                    end else begin
                        // v += epp + m' (2-cycle addr->dout in this FSM path): write at idx=dma-3
                        v_src_idx12 = (dma_cnt < 12'd256) ? dma_cnt : 12'd255;
                        // EPP stream observed at add stage is +1 shifted, use idx-1 with byte wrap.
                        epp_src_idx12 = {v_src_idx12[11:8], (v_src_idx12[7:0] - 8'd1)};
                        fsm_addr_a <= ENC_V_BASE + v_src_idx12;
                        scratch_addr_a <= SCR_EPP_BASE + epp_src_idx12;
                        scratch_addr_b <= SCR_EPP_BASE + ((epp_src_idx12 < 12'd255) ? (epp_src_idx12 + 12'd1) : epp_src_idx12);
                        if (dma_cnt > 2) begin
                            vidx_w = dma_cnt - 12'd3;
                            // reg_m stores byte0 at MSB side (printed as 4041..5f),
                            // so map coeff byte index with reversed byte lane.
                            mbyte_idx = 5'd31 - vidx_w[7:3];
                            mb = reg_m[{mbyte_idx, 3'b000} +: 8];
                            mb_idx = vidx_w[2:0];
                            mbit = mb[mb_idx];
                            epp_term_v = scratch_dout_a;
                            // Tail quirk: last v coeff needs +1 prefetch lane.
                            if (vidx_w == 12'd255)
                                epp_term_v = scratch_dout_b;
                            sv = $signed(vidx_w[0] ? add_main_d2 : dout_a) + $signed(epp_term_v) + (mbit ? 17'sd1665 : 17'sd0);
                            sv = $signed(barrett_reduce_q(sv));
                            fsm_we_b <= 1'b1;
                            fsm_addr_b <= ENC_V_BASE + dma_cnt[11:0] - 12'd3;
                            fsm_din_b <= sv[15:0];
                            vidx   = vidx_w[8:0];
                        end
                        if (dma_cnt == 12'd258) begin
                            dma_cnt <= 12'd0;
                            enc_ntt_phase <= 2'd0;
                            ct_pack_sent <= 1'b0;
                            state <= S_ENC_PACK;
                        end else begin
                            dma_cnt <= dma_cnt + 12'd1;
                        end
                    end
                end

                // Pack ciphertext using kyber_ct_pack_engine (u at ENC_U_BASE, v at ENC_V_BASE).
                S_ENC_PACK: begin
                    mux_sel <= 3'd0;
                    fsm_addr_a <= ENC_U_BASE + ct_pack_u_addr;
                    fsm_addr_b <= ENC_V_BASE + {3'd0, ct_pack_v_addr};
                    if (!ct_pack_sent) begin
                        ct_pack_start <= 1'b1;
                        ct_pack_sent <= 1'b1;
                        ct_cap_idx <= 12'd0;
                    end
                    ext_we <= dec_reenc_mode ? 1'b0 : ct_pack_ext_we;
                    ext_addr <= ct_pack_ext_addr;
                    ext_dout <= ct_pack_ext_dout;
                    if (ct_pack_ext_we && (ct_cap_idx < ct_bytes_total)) begin
                        if (dec_reenc_mode) begin
                            ct_reenc_we <= 1'b1; ct_reenc_addr_a <= ct_cap_idx[10:0]; ct_reenc_din <= ct_pack_ext_dout[7:0];
                        end else begin
                            ct_we <= 1'b1; ct_addr_a <= ct_cap_idx[10:0]; ct_din <= ct_pack_ext_dout[7:0];
                        end
                        ct_cap_idx <= ct_cap_idx + 12'd1;
                    end
                    // ct_pack_done is sticky in engine; only leave pack state after
                    // we have captured the full ciphertext payload for this mode.
                    if (ct_pack_done && (ct_cap_idx >= ct_bytes_total)) begin
                        ct_pack_sent <= 1'b0;
                        hash_sent <= 1'b0;
                        hash_stream_valid <= 1'b0;
                        dma_cnt <= 12'd0;
                        if (dec_reenc_mode)
                            state <= S_DEC_CMP;
                        else
                            state <= S_ENC_HASH_C;
                    end
                end

                // H(ct)
                S_ENC_HASH_C: begin
                    hash_cmd <= 3'd2; // H
                    hash_stream_en <= 1'b1;
                    if (!hash_sent) begin
                        hash_sent <= 1'b1;
                        dma_cnt <= 12'd0;
                        hash_fetching <= 1'b0;
                        fetch_wait <= 1'b0;
                        fetch_cnt <= 8'd0;
                        hash_stream_valid <= 1'b0;
                    end else begin
                        if (!hash_stream_valid && dma_cnt < ct_bytes_total) begin
                            if (!hash_fetching) begin
                                rem12 = ct_bytes_total - dma_cnt;
                                hash_stream_bytes <= (rem12 > 12'd136) ? 8'd136 : rem12[7:0];
                                hash_stream_last <= (rem12 <= 12'd136);
                                hash_stream_din <= 1088'd0;
                                fetch_cnt <= 8'd0;
                                hash_fetching <= 1'b1;
                                ct_addr_b <= dma_cnt[10:0]; // Req byte 0
                                fetch_wait <= 1'b1;
                            end else if (fetch_wait) begin
                                fetch_wait <= 1'b0;
                                ct_addr_b <= dma_cnt[10:0] + 11'd1; // Req byte 1
                            end else begin
                                hash_stream_din[(fetch_cnt * 8) +: 8] <= ct_dout;
                                if (fetch_cnt + 1 == hash_stream_bytes) begin
                                    hash_fetching <= 1'b0;
                                    hash_stream_valid <= 1'b1;
                                end else begin
                                    fetch_cnt <= fetch_cnt + 8'd1;
                                    ct_addr_b <= dma_cnt[10:0] + {3'd0, fetch_cnt} + 11'd2; // Req byte N+1
                                end
                            end
                        end
                        if (hash_stream_ack) begin
                            dma_cnt <= dma_cnt + {4'd0, hash_stream_bytes};
                        end
                    end
                    if (hash_done) begin
                        reg_H_c <= flip_bytes_32(hash_dout[255:0]); // H(ct)
                        hash_sent <= 1'b0;
                        hash_fetching <= 1'b0;
                        fetch_wait <= 1'b0;
                        hash_stream_valid <= 1'b0;
                        enc_kdf_ready <= 1'b0;
                        state <= S_ENC_KDF;
                    end
                end

                // KDF(Kbar || H(ct)) then write SS
                S_ENC_KDF: begin
                    hash_cmd   <= 3'd4; // KDF
                    hash_bytes <= 8'd64;
                    hash_din   <= {576'd0, flip_bytes_32(reg_H_c), flip_bytes_32(reg_K_bar)};
                    if (!enc_kdf_ready) begin
                        if (!hash_sent) begin
                            hash_start <= 1'b1;
                            hash_sent  <= 1'b1;
                        end
                        if (hash_done) begin
                            reg_K_bar <= flip_bytes_32(hash_dout[255:0]);
                            hash_sent <= 1'b0;
                            enc_kdf_ready <= 1'b1;
                            dma_cnt <= 12'd0;
                        end
                    end else begin
                        ext_we   <= 1'b1;
                        ext_addr <= SS_EXT_BASE + {20'd0, dma_cnt};
                        ext_dout <= {24'd0, reg_K_bar[255 - (dma_cnt[4:0] * 8) -: 8]};
                        if (ext_ready) begin
                            if (dma_cnt == 12'd31) begin
                                state <= S_IDLE;
                                done  <= 1'b1;
                                enc_kdf_ready <= 1'b0;
                            end else begin
                                dma_cnt <= dma_cnt + 12'd1;
                            end
                        end
                    end
                end

                // Decaps:
                // 1) reload s polyvec from external SK bytes (SK_EXT_BASE, packed d=12)
                // 2) read ciphertext from CT_EXT_BASE
                S_DEC_READ: begin
                    ext_re <= 1'b1;
                    if (!dec_sk_reload_done) begin
                        sk_pair_base = pack_pk_addr + ({29'd0, dec_sk_poly} * 32'd384) + ({24'd0, dec_sk_pair} * 32'd3);
                        sk_coeff_base = ({9'd0, dec_sk_poly} * 12'd256) + {3'd0, dec_sk_pair, 1'b0};
                        case (dec_sk_step)
                            3'd0: begin
                                if (ext_ready) begin
                                    dec_sk_b0 <= ext_din[7:0];
                                    ext_addr <= sk_pair_base + 32'd1;
                                    dec_sk_step <= 3'd1;
                                end
                            end
                            3'd1: begin
                                if (ext_ready) begin
                                    dec_sk_b1 <= ext_din[7:0];
                                    ext_addr <= sk_pair_base + 32'd2;
                                    dec_sk_step <= 3'd2;
                                end
                            end
                            3'd2: begin
                                if (ext_ready) begin
                                    dec_sk_b2 <= ext_din[7:0];
                                    dec_sk_c0 <= {4'd0, dec_sk_b1[3:0], dec_sk_b0};
                                    dec_sk_c1 <= {4'd0, ext_din[7:0], dec_sk_b1[7:4]};
                                    dec_sk_step <= 3'd3;
                                end
                            end
                            3'd3: begin
                                scratch_we_a <= 1'b1;
                                scratch_addr_a <= SCR_SP_BASE + sk_coeff_base;
                                scratch_din_a <= dec_sk_c0;
                                dec_sk_step <= 3'd4;
                            end
                            default: begin
                                scratch_we_a <= 1'b1;
                                scratch_addr_a <= SCR_SP_BASE + sk_coeff_base + 12'd1;
                                scratch_din_a <= dec_sk_c1;
                                dec_sk_step <= 3'd0;
                                if (dec_sk_pair == 8'd127) begin
                                    dec_sk_pair <= 8'd0;
                                    if (dec_sk_poly + 3'd1 == k_val) begin
                                        dec_sk_poly <= 3'd0;
                                        dec_sk_reload_done <= 1'b1;
                                        pack_pk_addr <= pack_pk_addr + ({29'd0, k_val} * 32'd384);
                                        ext_addr <= pack_pk_addr + ({29'd0, k_val} * 32'd384);
                                    end else begin
                                        dec_sk_poly <= dec_sk_poly + 3'd1;
                                        ext_addr <= pack_pk_addr + ({29'd0, dec_sk_poly + 3'd1} * 32'd384);
                                    end
                                end else begin
                                    dec_sk_pair <= dec_sk_pair + 8'd1;
                                    ext_addr <= pack_pk_addr + ({29'd0, dec_sk_poly} * 32'd384) + ({24'd0, dec_sk_pair + 8'd1} * 32'd3);
                                end
                            end
                        endcase
                    end else begin
                        dec_sk_reload_done <= 1'b0;
                        state <= S_ENC_READ_PK;
                    end
                end

                S_ENC_READ_PK: begin
                    ext_re <= 1'b1;
                    if (!dec_sk_reload_done) begin
                        sk_pair_base = pack_pk_addr + ({29'd0, dec_sk_poly} * 32'd384) + ({24'd0, dec_sk_pair} * 32'd3);
                        sk_coeff_base = ({9'd0, dec_sk_poly} * 12'd256) + {3'd0, dec_sk_pair, 1'b0};
                        case (dec_sk_step)
                            3'd0: begin
                                if (ext_ready) begin
                                    dec_sk_b0 <= ext_din[7:0];
                                    hpk_we <= 1'b1; hpk_addr_a <= pack_pk_byte_idx[10:0]; hpk_din <= ext_din[7:0];
                                    pack_pk_byte_idx <= pack_pk_byte_idx + 32'd1;
                                    ext_addr <= sk_pair_base + 32'd1;
                                    dec_sk_step <= 3'd1;
                                end
                            end
                            3'd1: begin
                                if (ext_ready) begin
                                    dec_sk_b1 <= ext_din[7:0];
                                    hpk_we <= 1'b1; hpk_addr_a <= pack_pk_byte_idx[10:0]; hpk_din <= ext_din[7:0];
                                    pack_pk_byte_idx <= pack_pk_byte_idx + 32'd1;
                                    ext_addr <= sk_pair_base + 32'd2;
                                    dec_sk_step <= 3'd2;
                                end
                            end
                            3'd2: begin
                                if (ext_ready) begin
                                    dec_sk_b2 <= ext_din[7:0];
                                    hpk_we <= 1'b1; hpk_addr_a <= pack_pk_byte_idx[10:0]; hpk_din <= ext_din[7:0];
                                    pack_pk_byte_idx <= pack_pk_byte_idx + 32'd1;
                                    dec_sk_c0 <= {4'd0, dec_sk_b1[3:0], dec_sk_b0};
                                    dec_sk_c1 <= {4'd0, ext_din[7:0], dec_sk_b1[7:4]};
                                    dec_sk_step <= 3'd3;
                                end
                            end
                            3'd3: begin
                                fsm_we_a <= 1'b1;
                                fsm_addr_a <= sk_coeff_base;
                                fsm_din_a <= dec_sk_c0;
                                dec_sk_step <= 3'd4;
                            end
                            default: begin
                                fsm_we_a <= 1'b1;
                                fsm_addr_a <= sk_coeff_base + 12'd1;
                                fsm_din_a <= dec_sk_c1;
                                dec_sk_step <= 3'd0;
                                if (dec_sk_pair == 8'd127) begin
                                    dec_sk_pair <= 8'd0;
                                    if (dec_sk_poly + 3'd1 == k_val) begin
                                        dec_sk_poly <= 3'd0;
                                        dec_sk_reload_done <= 1'b1;
                                        dma_cnt <= 12'd0; // Initialize counter for rho
                                        pack_pk_addr <= pack_pk_addr + ({29'd0, k_val} * 32'd384);
                                        ext_addr <= pack_pk_addr + ({29'd0, k_val} * 32'd384);
                                    end else begin
                                        dec_sk_poly <= dec_sk_poly + 3'd1;
                                        ext_addr <= pack_pk_addr + ({29'd0, dec_sk_poly + 3'd1} * 32'd384);
                                    end
                                end else begin
                                    dec_sk_pair <= dec_sk_pair + 8'd1;
                                    ext_addr <= pack_pk_addr + ({29'd0, dec_sk_poly} * 32'd384) + ({24'd0, dec_sk_pair + 8'd1} * 32'd3);
                                end
                            end
                        endcase
                    end else if (dma_cnt < 12'd32) begin
                        if (ext_ready) begin
                            reg_rho[255 - (dma_cnt[4:0] * 8) -: 8] <= ext_din[7:0];
                            hpk_we <= 1'b1; hpk_addr_a <= pack_pk_byte_idx[10:0]; hpk_din <= ext_din[7:0];
                            pack_pk_byte_idx <= pack_pk_byte_idx + 32'd1;
                            if (dma_cnt == 12'd31) begin
                                pack_pk_addr <= pack_pk_addr + 32'd32;
                                if (opcode == 2'b10) begin
                                    state <= S_KG_HASH_PK;
                                    hash_sent <= 1'b0;
                                end else begin
                                    state <= S_DEC_READ_REST;
                                    dma_cnt <= 12'd0; // Reset for H(pk) and z
                                    ext_addr <= pack_pk_addr + 32'd32;
                                end
                            end else begin
                                dma_cnt <= dma_cnt + 12'd1;
                                ext_addr <= pack_pk_addr + {20'd0, dma_cnt} + 32'd1;
                            end
                        end
                    end
                end

                S_DEC_READ_REST: begin
                    ext_re <= 1'b1;
                    if (dma_cnt < 12'd32) begin
                        if (ext_ready) begin
                            reg_H_pk[255 - (dma_cnt[4:0] * 8) -: 8] <= ext_din[7:0];
                            dma_cnt <= dma_cnt + 12'd1;
                            ext_addr <= pack_pk_addr + {20'd0, dma_cnt} + 32'd1;
                        end
                    end else if (dma_cnt < 12'd64) begin
                        if (ext_ready) begin
                            reg_z[255 - (dma_cnt[4:0] * 8) -: 8] <= ext_din[7:0];
                            if (dma_cnt == 12'd63) begin
                                state <= S_DEC_READ_CT;
                                dma_cnt <= 12'd0;
                                hash_sent <= 1'b0;
                            end else begin
                                dma_cnt <= dma_cnt + 12'd1;
                                ext_addr <= pack_pk_addr + {20'd0, dma_cnt} + 32'd1;
                            end
                        end
                    end
                end

                S_DEC_READ_CT: begin
                    ext_re <= 1'b1;
                    if (!hash_sent) begin
                        ext_addr <= CT_EXT_BASE;
                        dma_cnt <= 12'd0;
                        hash_sent <= 1'b1;
                    end else begin
                        if (dma_cnt < ct_bytes_total) begin
                            if (ext_ready) begin
                                ct_we <= 1'b1; ct_addr_a <= dma_cnt[10:0]; ct_din <= ext_din[7:0];
                                ct_dec_we <= 1'b1; ct_dec_addr_a <= dma_cnt[10:0]; ct_dec_din <= ext_din[7:0];
                                if (dma_cnt + 12'd1 == ct_bytes_total) begin
                                    state     <= S_DEC_DECOMP; // Move out after last byte
                                    dma_cnt   <= 12'd0;
                                    hash_sent <= 1'b0;
                                    dec_phase <= 4'd0; dec_group_idx <= 10'd0; dec_slot_idx <= 4'd0;
                                    dec_unpack_group_valid <= 1'b0; dec_unpack_coeff_latch <= 128'd0;
                                    hash_fetching <= 1'b0; fetch_wait <= 1'b0; fetch_cnt <= 8'd0;
                                    dec_fetch_done <= 1'b0; dec_codec_bytes_w <= 88'd0; dec_j_idx <= 3'd0; reg_m <= 256'd0;
                                end else begin
                                    dma_cnt  <= dma_cnt + 12'd1;
                                    ext_addr <= CT_EXT_BASE + {20'd0, dma_cnt} + 32'd1;
                                end
                            end
                        end
                    end
                end

                S_DEC_DECOMP: begin
                    mux_sel <= 3'd0;
                    ntt_mux_sel <= 3'd0;

                    // dec_phase:
                    // 0 unpack u ; 1 unpack v ; 7/8 readback ckpt ; 2 NTT(u)
                    // 3 zero acc ; 4 dotprod (s from scratch preloaded in S_DEC_READ)
                    // 5 INTT(acc) ; 6 tomsg
                    if (dec_phase == 4'd0) begin
                        // unpack u groups (latched group decode -> per-slot writeback)
                        if (dec_group_idx < dec_u_total_groups) begin
                            if (!dec_unpack_group_valid) begin
                                if (!dec_fetch_done) begin
                                    if (!hash_fetching) begin
                                        hash_fetching <= 1'b1;
                                        fetch_cnt <= 8'd0;
                                        ct_dec_addr_b <= ({1'b0, dec_group_idx} * {7'd0, dec_u_bytes_per_grp});
                                        dec_codec_bytes_w <= 88'd0;
                                        fetch_wait <= 1'b1;
                                    end else if (fetch_wait) begin
                                        fetch_wait <= 1'b0;
                                        ct_dec_addr_b <= ({1'b0, dec_group_idx} * {7'd0, dec_u_bytes_per_grp}) + 11'd1;
                                    end else begin
                                        dec_codec_bytes_w[(fetch_cnt * 8) +: 8] <= ct_dec_dout;
                                        if (fetch_cnt + 8'd1 == {4'd0, dec_u_bytes_per_grp}) begin
                                            hash_fetching <= 1'b0;
                                            dec_fetch_done <= 1'b1;
                                        end else begin
                                            fetch_cnt <= fetch_cnt + 8'd1;
                                            ct_dec_addr_b <= ({1'b0, dec_group_idx} * {7'd0, dec_u_bytes_per_grp}) + {3'd0, fetch_cnt} + 11'd2;
                                        end
                                    end
                                end else begin
                                    dec_unpack_coeff_latch <= dec_codec_coeff_out;
                                    dec_unpack_group_valid <= 1'b1;
                                    dec_slot_idx <= 4'd0;
                                    dec_fetch_done <= 1'b0;
                                end
                            end else if (dec_slot_idx < dec_u_group_sz) begin
                                scratch_we_a <= 1'b1;
                                scratch_addr_a <= SCR_U_BASE + ({2'd0, dec_group_idx} * dec_u_group_sz) + {8'd0, dec_slot_idx};
                                scratch_din_a <= dec_unpack_coeff_latch[(dec_slot_idx*16) +: 16];
                                if (dec_slot_idx + 4'd1 == dec_u_group_sz) begin
                                    dec_slot_idx <= 4'd0;
                                    dec_group_idx <= dec_group_idx + 10'd1;
                                    dec_unpack_group_valid <= 1'b0;
                                end else begin
                                    dec_slot_idx <= dec_slot_idx + 4'd1;
                                end
                            end
                        end else begin
                            dec_group_idx <= 10'd0;
                            dec_slot_idx <= 4'd0;
                            dec_unpack_group_valid <= 1'b0;
                            dec_phase <= 4'd1;
                        end
                    end else if (dec_phase == 4'd1) begin
                        // unpack v groups (after u bytes), same latched-group flow
                        if (dec_group_idx < 10'd32) begin
                            if (!dec_unpack_group_valid) begin
                                if (!dec_fetch_done) begin
                                    if (!hash_fetching) begin
                                        hash_fetching <= 1'b1;
                                        fetch_cnt <= 8'd0;
                                        base_v = ({2'd0, dec_u_total_groups} * {8'd0, dec_u_bytes_per_grp}) + ({4'd0, dec_group_idx[7:0]} * {8'd0, dec_v_bytes_per_grp});
                                        ct_dec_addr_b <= base_v[10:0];
                                        dec_codec_bytes_w <= 88'd0;
                                        fetch_wait <= 1'b1;
                                    end else if (fetch_wait) begin
                                        fetch_wait <= 1'b0;
                                        ct_dec_addr_b <= base_v[10:0] + 11'd1;
                                    end else begin
                                        dec_codec_bytes_w[(fetch_cnt * 8) +: 8] <= ct_dec_dout;
                                        if (fetch_cnt + 8'd1 == {4'd0, dec_v_bytes_per_grp}) begin
                                            hash_fetching <= 1'b0;
                                            dec_fetch_done <= 1'b1;
                                        end else begin
                                            fetch_cnt <= fetch_cnt + 8'd1;
                                            ct_dec_addr_b <= base_v[10:0] + {3'd0, fetch_cnt} + 11'd2;
                                        end
                                    end
                                end else begin
                                    dec_unpack_coeff_latch <= dec_codec_coeff_out;
                                    dec_unpack_group_valid <= 1'b1;
                                    dec_slot_idx <= 4'd0;
                                    dec_fetch_done <= 1'b0;
                                end
                            end else if (dec_slot_idx < dec_v_group_sz) begin
                                scratch_we_a <= 1'b1;
                                scratch_addr_a <= SCR_V_BASE + ({4'd0, dec_group_idx[7:0]} * dec_v_group_sz) + {8'd0, dec_slot_idx};
                                scratch_din_a <= dec_unpack_coeff_latch[(dec_slot_idx*16) +: 16];
                                if (dec_slot_idx + 4'd1 == dec_v_group_sz) begin
                                    dec_slot_idx <= 4'd0;
                                    dec_group_idx <= dec_group_idx + 10'd1;
                                    dec_unpack_group_valid <= 1'b0;
                                end else begin
                                    dec_slot_idx <= dec_slot_idx + 4'd1;
                                end
                            end
                        end else begin
                            dec_group_idx <= 10'd0;
                            dec_slot_idx <= 4'd0;
                            dec_unpack_group_valid <= 1'b0;
                            dec_j_idx <= 3'd0;
                            dec_j_work <= 3'd0;
                            enc_ntt_phase <= 2'd0;
                            dma_cnt <= 12'd0;
                            dec_phase <= 4'd7;
                        end
                    end else if (dec_phase == 4'd7) begin
                        // Readback checkpoint after U unpack writeback (first 16 coeffs).
                        if (dma_cnt == 12'd0) begin
                            scratch_addr_a <= SCR_U_BASE;
                            dma_cnt <= 12'd1;
                        end else begin
                            scratch_addr_a <= SCR_U_BASE + dma_cnt[11:0];
                            if (dma_cnt == 12'd18) begin
                                dma_cnt <= 12'd0;
                                dec_phase <= 4'd8;
                            end else begin
                                dma_cnt <= dma_cnt + 12'd1;
                            end
                        end
                    end else if (dec_phase == 4'd8) begin
                        // Readback checkpoint after V unpack writeback (first 16 coeffs).
                        if (dma_cnt == 12'd0) begin
                            scratch_addr_a <= SCR_V_BASE;
                            dma_cnt <= 12'd1;
                        end else begin
                            scratch_addr_a <= SCR_V_BASE + dma_cnt[11:0];
                            if (dma_cnt == 12'd18) begin
                                dma_cnt <= 12'd0;
                                dec_j_idx <= 3'd0;
                                dec_j_work <= 3'd0;
                                enc_ntt_phase <= 2'd0;
                                dec_phase <= 4'd2;
                            end else begin
                                dma_cnt <= dma_cnt + 12'd1;
                            end
                        end
                    end else if (dec_phase == 4'd2) begin
                        // NTT(u[j]) in-place in scratch
                        if (enc_ntt_phase == 2'd0) begin
                            if (dma_cnt == 12'd0) begin
                                // Prime first read address; avoid stale data from previous phase.
                                dec_j_work <= dec_j_idx;
                                scratch_addr_a <= SCR_U_BASE + ({9'd0, dec_j_idx} * 12'd256);
                                dma_cnt <= 12'd1;
                            end else begin
                                // Effective 2-cycle latency from scratch_addr_a issue to value seen here.
                                // Stream read addresses continuously and start write-back at dma>=2.
                                scratch_addr_a <= SCR_U_BASE + ({9'd0, dec_j_work} * 12'd256) + dma_cnt[11:0];
                                if (dma_cnt > 1) begin
                                    fsm_ntt_we <= 1'b1;
                                    fsm_ntt_addr <= dma_cnt[7:0] - 8'd2;
                                    fsm_ntt_din <= scratch_dout_a;
                                end
                                if (dma_cnt == 12'd257) begin
                                    dma_cnt <= 12'd0;
                                    enc_ntt_phase <= 2'd1;
                                end else dma_cnt <= dma_cnt + 12'd1;
                            end
                        end else if (enc_ntt_phase == 2'd1) begin
                            ntt_mode <= 1'b0;
                            if (!ntt_sent) begin ntt_start <= 1'b1; ntt_sent <= 1'b1; end
                            if (ntt_done) begin
                                ntt_sent <= 1'b0;
                                dma_cnt <= 12'd0;
                                enc_ntt_phase <= 2'd2;
                            end
                        end else begin
                            fsm_ntt_addr <= dma_cnt[7:0];
                            if (dma_cnt > 1) begin
                                scratch_we_a <= 1'b1;
                                scratch_addr_a <= SCR_U_BASE + ({9'd0, dec_j_work} * 12'd256) + dma_cnt[11:0] - 12'd2;
                                scratch_din_a <= ntt_ext_dout;
                            end
                            if (dma_cnt == 12'd257) begin
                                dma_cnt <= 12'd0;
                                enc_ntt_phase <= 2'd0;
                                if (dec_j_idx + 3'd1 == k_val) begin
                                    dec_j_idx <= 3'd0;
                                    dec_phase <= 4'd3;
                                end else dec_j_idx <= dec_j_idx + 3'd1;
                            end else dma_cnt <= dma_cnt + 12'd1;
                        end
                    end else if (dec_phase == 4'd3) begin
                        // clear accumulator poly at DEC_ACC_BASE
                        fsm_we_a <= 1'b1;
                        fsm_addr_a <= DEC_ACC_BASE + dma_cnt[11:0];
                        fsm_din_a <= 16'sd0;
                        if (dma_cnt == 12'd255) begin
                            dma_cnt <= 12'd0;
                            dec_j_idx <= 3'd0;
                            enc_ntt_phase <= 2'd0;
                            dec_phase <= 4'd4;
                        end else dma_cnt <= dma_cnt + 12'd1;
                    end else if (dec_phase == 4'd4) begin
                        // dot product: acc += s[j] (*) u[j]
                        if (enc_ntt_phase == 2'd0) begin
                            // s is preloaded in dec_phase=9, skip per-j copy here.
                            dma_cnt <= 12'd0;
                            enc_ntt_phase <= 2'd1;
                        end else if (enc_ntt_phase == 2'd1) begin
                            // load u[j] from scratch to a_cache offset 0..255
                            if (dma_cnt == 12'd0) begin
                                // Prime first read address; keep one extra flush cycle to avoid
                                // stale first coefficient when switching from copy-S phase.
                                scratch_addr_a <= SCR_U_BASE + ({9'd0, dec_j_idx} * 12'd256);
                                dma_cnt <= 12'd1;
                            end else begin
                                scratch_addr_a <= SCR_U_BASE + ({9'd0, dec_j_idx} * 12'd256) + dma_cnt[11:0];
                                if (dma_cnt > 1) begin
                                    a_cache_we_fsm <= 1'b1;
                                    a_cache_addr_fsm <= dma_cnt[11:0] - 12'd2;
                                    a_cache_din_fsm <= scratch_dout_a;
                                end
                                if (dma_cnt == 12'd257) begin
                                    dma_cnt <= 12'd0;
                                    enc_ntt_phase <= 2'd2;
                                    pwma_sent <= 1'b0;
                                end else dma_cnt <= dma_cnt + 12'd1;
                            end
                        end else begin
                            mux_sel <= 3'd2;
                            pwma_sp_from_scratch <= 1'b1; // use s from scratch
                            pwma_use_tomont <= 1'b0;      // DEC s^T*u path is already in NTT domain
                            // s[j] is preloaded to scratch poly slots in dec_phase=9.
                            pwma_sp_poly_idx <= dec_j_idx;
                            loop_i <= 3'd0;
                            loop_j <= 3'd0;               // use a_cache block [0,0]
                            pwma_acc_base <= DEC_ACC_BASE;
                            if (!pwma_sent) begin pwma_start <= 1'b1; pwma_sent <= 1'b1; end
                            if (pwma_done) begin
                                pwma_sent <= 1'b0;
                                enc_ntt_phase <= 2'd0;
                                if (dec_j_idx + 3'd1 == k_val) begin
                                    dec_phase <= 4'd5;
                                    dec_j_idx <= 3'd0;
                                    dma_cnt <= 12'd0;
                                    ntt_sent <= 1'b0;
                                end else begin
                                    dbg_pwma_dec_pair_cnt <= 16'd0;
                                    dec_j_idx <= dec_j_idx + 3'd1;
                                end
                            end
                        end
                    end else if (dec_phase == 4'd5) begin
                        // INTT(acc)
                        if (enc_ntt_phase == 2'd0) begin
                            fsm_addr_a <= DEC_ACC_BASE + dma_cnt[11:0];
                            if (dma_cnt > 1) begin
                                fsm_ntt_we <= 1'b1;
                                fsm_ntt_addr <= dma_cnt[7:0] - 8'd2;
                                fsm_ntt_din <= dout_a;
                            end
                            if (dma_cnt == 12'd257) begin
                                dma_cnt <= 12'd0;
                                enc_ntt_phase <= 2'd1;
                            end else dma_cnt <= dma_cnt + 12'd1;
                        end else if (enc_ntt_phase == 2'd1) begin
                            ntt_mode <= 1'b1;
                            if (!ntt_sent) begin ntt_start <= 1'b1; ntt_sent <= 1'b1; end
                            if (ntt_done) begin
                                ntt_sent <= 1'b0;
                                dma_cnt <= 12'd0;
                                enc_ntt_phase <= 2'd2;
                            end
                        end else begin
                            fsm_ntt_addr <= dma_cnt[7:0];
                            if (dma_cnt > 1) begin
                                fsm_we_a <= 1'b1;
                                fsm_addr_a <= DEC_ACC_BASE + dma_cnt[11:0] - 12'd2;
                                // invntt_tomont final scale by f=1441 (Kyber ref).
                                fsm_din_a <= dec_invntt_scaled;
                            end
                            if (dma_cnt == 12'd257) begin
                                dma_cnt <= 12'd0;
                                enc_ntt_phase <= 2'd0;
                                dec_phase <= 4'd6;
                            end else dma_cnt <= dma_cnt + 12'd1;
                        end
                    end else begin
                        // poly_tomsg: m'[i] bit from (v - acc)
                        // RAM read path here is effectively 2-cycle from issued addr to usable dout.
                        // Use the same >1 / -2 alignment used in other DEC/ENC DMA paths.
                        scratch_addr_a <= SCR_V_BASE + ((dma_cnt < 12'd256) ? dma_cnt[11:0] : 12'd255);
                        fsm_addr_a <= DEC_ACC_BASE + ((dma_cnt < 12'd256) ? dma_cnt[11:0] : 12'd255);
                        if (dma_cnt > 12'd1 && dma_cnt <= 12'd257) begin
                            // Match Kyber ref path:
                            // mp = poly_tomsg(poly_reduce(v - sTu)).
                            // So diff must be in [0..q-1] before quantization.
                            v_c = {scratch_dout_a[15], scratch_dout_a};
                            su_c = {dout_a[15], dout_a};
                            if (v_c < 0) v_c = v_c + 17'sd3329;
                            if (su_c < 0) su_c = su_c + 17'sd3329;
                            if (v_c >= 17'sd3329) v_c = v_c - 17'sd3329;
                            if (su_c >= 17'sd3329) su_c = su_c - 17'sd3329;
                            v_q = v_c[15:0];
                            su_q = su_c[15:0];
                            if (v_q >= su_q)
                                diff_q17 = {1'b0, v_q} - {1'b0, su_q};
                            else
                                diff_q17 = {1'b0, v_q} + 17'd3329 - {1'b0, su_q};
                            diff_q = diff_q17[15:0];

                            tmsg32 = {16'd0, diff_q};
                            tmsg32 = (tmsg32 << 1) + 32'd1665;
                            tmsg32 = tmsg32 * 32'd80635;
                            bitpos = dma_cnt[8:0] - 9'd2;
                            mbyte_idx_dec = 5'd31 - bitpos[7:3];
                            bytev = reg_m[{mbyte_idx_dec, 3'b000} +: 8];
                            if (((tmsg32 >> 28) & 32'd1) != 0)
                                bytev[bitpos[2:0]] = 1'b1;
                            else
                                bytev[bitpos[2:0]] = 1'b0;
                            reg_m[{mbyte_idx_dec, 3'b000} +: 8] <= bytev;
                        end
                        if (dma_cnt == 12'd257) begin
                            dec_phase <= 4'd0;
                            dec_group_idx <= 10'd0;
                            dec_slot_idx <= 4'd0;
                            hash_sent <= 1'b0;
                            state <= S_DEC_NTT_U;
                        end else dma_cnt <= dma_cnt + 12'd1;
                    end
                end

                // G(m' || H(pk)) -> candidate (Kbar', r')
                S_DEC_NTT_U: begin
                    hash_cmd   <= 3'd3;
                    hash_bytes <= 8'd64;
                    hash_din   <= {576'd0, flip_bytes_32(reg_H_pk), flip_bytes_32(reg_m)};
                    if (!hash_sent) begin
                        hash_start <= 1'b1;
                        hash_sent  <= 1'b1;
                    end
                    if (hash_done) begin
                        reg_K_bar  <= flip_bytes_32(hash_dout[255:0]);   // Kbar'
                        reg_r_seed <= flip_bytes_32(hash_dout[511:256]); // r'
                        hash_sent  <= 1'b0;
                        // Re-encrypt with recovered (m', r') using full ENC datapath.
                        dec_reenc_mode <= 1'b1;
                        ct_reenc_we <= 1'b0;
                        cbd_sent   <= 1'b0;
                        ntt_sent   <= 1'b0;
                        pwma_sent  <= 1'b0;
                        loop_j     <= 3'd0;
                        enc_noise_kind <= 2'd0;
                        enc_ntt_phase <= 2'd0;
                        dma_cnt    <= 12'd0;
                        state      <= S_ENC_CBD_R;
                    end
                end

                // Select Kbar' on match, else z
                S_DEC_CMP: begin
                    if (!hash_sent) begin
                        hash_sent <= 1'b1;
                        dma_cnt   <= 12'd0;
                        all_eq    <= 1'b1;
                        hash_fetching <= 1'b0; // Reused as "compare-valid" flag
                        ct_addr_b <= 11'd0;
                        ct_reenc_addr_b <= 11'd0;
                    end else begin
                        /*
                         * BRAM read path is synchronous (1-cycle latency):
                         * - If hash_fetching=1, ct_dout/ct_reenc_dout are valid now for
                         *   the address requested in the previous cycle.
                         * - In the same cycle we can request the next byte (if any).
                         */
                        /*if (hash_fetching) begin
                            if (ct_dout != ct_reenc_dout) begin
                                all_eq <= 1'b0;
                                $display("[DEBUG] CT Mismatch! index=%d in=%x reenc=%x", dma_cnt - 12'd1, ct_dout, ct_reenc_dout);
                            end
                        end*/

                        if (dma_cnt < ct_bytes_total) begin
                            ct_addr_b <= dma_cnt[10:0];
                            ct_reenc_addr_b <= dma_cnt[10:0];
                            dma_cnt <= dma_cnt + 12'd1;
                            hash_fetching <= 1'b1;
                        end else if (hash_fetching) begin
                            // No more requests; just consumed the final compared byte.
                            dec_ct_match <= all_eq && (ct_dout == ct_reenc_dout);
                            if (!all_eq || (ct_dout != ct_reenc_dout)) begin
                                reg_K_bar <= reg_z; // Fallback
                            end
                            dec_reenc_mode <= 1'b0;
                            dma_cnt <= 12'd0;
                            hash_sent <= 1'b0;
                            hash_fetching <= 1'b0;
                            hash_stream_valid <= 1'b0;
                            state <= S_DEC_KDF;
                        end
                    end
                end

                // H(ct)
                S_DEC_KDF: begin
                    hash_cmd <= 3'd2; // H
                    hash_stream_en <= 1'b1;
                    if (!hash_sent) begin
                        hash_sent <= 1'b1;
                        dma_cnt <= 12'd0;
                        hash_fetching <= 1'b0;
                        fetch_wait <= 1'b0;
                        fetch_cnt <= 8'd0;
                        hash_stream_valid <= 1'b0;
                    end else begin
                        if (!hash_stream_valid && dma_cnt < ct_bytes_total) begin
                            if (!hash_fetching) begin
                                rem12b = ct_bytes_total - dma_cnt;
                                hash_stream_bytes <= (rem12b > 12'd136) ? 8'd136 : rem12b[7:0];
                                hash_stream_last <= (rem12b <= 12'd136);
                                hash_stream_din <= 1088'd0;
                                fetch_cnt <= 8'd0;
                                hash_fetching <= 1'b1;
                                ct_addr_b <= dma_cnt[10:0]; // Req byte 0
                                fetch_wait <= 1'b1;
                            end else if (fetch_wait) begin
                                fetch_wait <= 1'b0;
                                ct_addr_b <= dma_cnt[10:0] + 11'd1; // Req byte 1
                            end else begin
                                hash_stream_din[(fetch_cnt * 8) +: 8] <= ct_dout;
                                if (fetch_cnt + 1 == hash_stream_bytes) begin
                                    hash_fetching <= 1'b0;
                                    hash_stream_valid <= 1'b1;
                                end else begin
                                    fetch_cnt <= fetch_cnt + 8'd1;
                                    ct_addr_b <= dma_cnt[10:0] + {3'd0, fetch_cnt} + 11'd2; // Req byte N+1
                                end
                            end
                        end
                        if (hash_stream_ack) begin
                            dma_cnt <= dma_cnt + {4'd0, hash_stream_bytes};
                        end
                    end
                    if (hash_done) begin
                        reg_H_c <= flip_bytes_32(hash_dout[255:0]); // H(ct)
                        hash_sent <= 1'b0;
                        hash_fetching <= 1'b0;
                        fetch_wait <= 1'b0;
                        hash_stream_valid <= 1'b0;
                        dec_kdf_ready <= 1'b0;
                        state <= S_DEC_PACK;
                    end
                end

                // KDF(selected_key || H(ct)) and write SS
                S_DEC_PACK: begin
                    hash_cmd   <= 3'd4; // KDF
                    hash_bytes <= 8'd64;
                    hash_din   <= {576'd0, flip_bytes_32(reg_H_c), flip_bytes_32(reg_K_bar)};
                    if (!dec_kdf_ready) begin
                        if (!hash_sent) begin
                            hash_start <= 1'b1;
                            hash_sent  <= 1'b1;
                        end
                        if (hash_done) begin
                            reg_K_bar <= flip_bytes_32(hash_dout[255:0]);
                            hash_sent <= 1'b0;
                            dec_kdf_ready <= 1'b1;
                            dma_cnt <= 12'd0;
                        end
                    end else begin
                        ext_we   <= 1'b1;
                        ext_addr <= SS_EXT_BASE + {20'd0, dma_cnt};
                        ext_dout <= {24'd0, reg_K_bar[255 - (dma_cnt[4:0] * 8) -: 8]};
                        if (ext_ready) begin
                            if (dma_cnt == 12'd31) begin
                                state <= S_IDLE;
                                done  <= 1'b1;
                                dec_kdf_ready <= 1'b0;
                            end else begin
                                dma_cnt <= dma_cnt + 12'd1;
                            end
                        end
                    end
                end
                default: state <= S_IDLE;
            endcase
        end
    end

    assign state_dbg = state;

endmodule
