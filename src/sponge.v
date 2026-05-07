`timescale 1ns/1ps

// =============================================================================
// sponge with 64-bit load/store Keccak-f[1600] backend
// -----------------------------------------------------------------------------
// External interface is kept identical to the original sponge.v, so shake_top and
// kyber_hash_wrapper do not need to change.
//
// Internally, this file no longer passes a 1600-bit state directly into
// keccak_f1600. It loads the state into keccak_f1600_64ls one 64-bit lane at a
// time, starts the permutation, then reads back the 25 lanes.
// =============================================================================

module sponge(
    input  wire clk,
    input  wire rst,

    input  wire [1087:0] din,
    input  wire [7:0]    byte_len,
    input  wire [2:0]    out_len_type,
    input  wire          i_valid,
    input  wire          i_last,
    input  wire          mode,      // 0: SHAKE128/SHA3-256, 1: SHAKE256/SHA3-512
    input  wire          is_sha3,   // 0: SHAKE, 1: SHA3
    output reg           i_ack,

    output reg [1535:0]  dout,
    output reg           done,
    output wire          busy
);

    localparam IDLE              = 4'd0;
    localparam ABSORB            = 4'd1;
    localparam PERMUTE_MORE_GO   = 4'd2;
    localparam WAIT_BLOCK        = 4'd3;
    localparam PADDING           = 4'd4;
    localparam PERMUTE_FIN_GO    = 4'd5;
    localparam SQUEEZE1          = 4'd6;
    localparam SQUEEZE2_GO       = 4'd7;
    localparam SQUEEZE2          = 4'd8;

    // Generic 64-bit load/store permutation sequencer states.
    localparam PERM_LOAD         = 4'd9;
    localparam PERM_START        = 4'd10;
    localparam PERM_WAIT         = 4'd11;
    localparam PERM_READ         = 4'd12;

    localparam RET_MORE          = 2'd0;
    localparam RET_FIN           = 2'd1;
    localparam RET_SQUEEZE2      = 2'd2;

    reg [3:0] state;
    reg [1599:0] sponge_state;
    reg [1087:0] beat_din;
    reg [7:0]    beat_len;
    reg          beat_last;
    reg          final_full_block;

    reg          saved_mode;
    reg          saved_is_sha3;
    reg [2:0]    saved_out_len_type;

    integer i;
    reg [1599:0] absorb_next;
    reg [10:0]   rate_bits;

    // -------------------------------------------------------------------------
    // 64-bit load/store Keccak permutation backend
    // -------------------------------------------------------------------------
    reg  [4:0] perm_idx;
    reg  [1:0] perm_return;

    wire        k_load_we   = (state == PERM_LOAD);
    wire [4:0]  k_load_addr = perm_idx;
    wire [63:0] k_load_data = sponge_state[perm_idx*64 +: 64];
    wire        k_start     = (state == PERM_START);
    wire [4:0]  k_read_addr = perm_idx;
    wire [63:0] k_read_data;
    wire        k_done;
    wire        k_busy;

    keccak_f1600_64ls u_keccak64 (
        .clk       (clk),
        .rst       (rst),
        .load_we   (k_load_we),
        .load_addr (k_load_addr),
        .load_data (k_load_data),
        .start     (k_start),
        .read_addr (k_read_addr),
        .read_data (k_read_data),
        .done      (k_done),
        .busy      (k_busy)
    );

    assign busy = (state != IDLE);

    // Original absorb behavior is preserved: this generic sponge still absorbs
    // up to 136 bytes from din because din is 1088 bits wide in the current
    // project. SHAKE128 matrix generation uses streaming_shake128 separately.
    always @(*) begin
        absorb_next = sponge_state;
        for (i = 0; i < 136; i = i + 1) begin
            if (i < beat_len) begin
                absorb_next[i*8 +: 8] = sponge_state[i*8 +: 8] ^ beat_din[i*8 +: 8];
            end
        end
    end

    always @(posedge clk) begin
        if (rst) begin
            state              <= IDLE;
            sponge_state       <= 1600'd0;
            beat_din           <= 1088'd0;
            beat_len           <= 8'd0;
            beat_last          <= 1'b0;
            final_full_block   <= 1'b0;
            saved_mode         <= 1'b0;
            saved_is_sha3      <= 1'b0;
            saved_out_len_type <= 3'd0;
            dout               <= 1536'd0;
            done               <= 1'b0;
            i_ack              <= 1'b0;
            perm_idx           <= 5'd0;
            perm_return        <= RET_MORE;
        end else begin
            done  <= 1'b0;
            i_ack <= 1'b0;

            case (state)
                IDLE: begin
                    if (i_valid) begin
                        sponge_state       <= 1600'd0;
                        beat_din           <= din;
                        beat_len           <= byte_len;
                        beat_last          <= i_last;
                        final_full_block   <= 1'b0;
                        saved_mode         <= mode;
                        saved_is_sha3      <= is_sha3;
                        saved_out_len_type <= out_len_type;
                        i_ack              <= 1'b1;
                        state              <= ABSORB;
                    end
                end

                ABSORB: begin
                    sponge_state <= absorb_next;
                    if (beat_last) begin
                        // Kept from the original file. This only handles the
                        // SHA3-256 full-rate final block specially.
                        if (saved_is_sha3 && !saved_mode && (beat_len == 8'd136)) begin
                            final_full_block <= 1'b1;
                            state <= PERMUTE_MORE_GO;
                        end else begin
                            state <= PADDING;
                        end
                    end else begin
                        state <= PERMUTE_MORE_GO;
                    end
                end

                PERMUTE_MORE_GO: begin
                    perm_return <= RET_MORE;
                    perm_idx    <= 5'd0;
                    state       <= PERM_LOAD;
                end

                WAIT_BLOCK: begin
                    if (i_valid) begin
                        beat_din  <= din;
                        beat_len  <= byte_len;
                        beat_last <= i_last;
                        i_ack     <= 1'b1;
                        state     <= ABSORB;
                    end
                end

                PADDING: begin
                    if (saved_is_sha3)
                        sponge_state[beat_len*8 +: 8] <= sponge_state[beat_len*8 +: 8] ^ 8'h06;
                    else
                        sponge_state[beat_len*8 +: 8] <= sponge_state[beat_len*8 +: 8] ^ 8'h1F;

                    if (saved_is_sha3) begin
                        if (saved_mode) rate_bits = 11'd576; else rate_bits = 11'd1088;
                    end else begin
                        if (saved_mode) rate_bits = 11'd1088; else rate_bits = 11'd1344;
                    end
                    sponge_state[rate_bits-1] <= sponge_state[rate_bits-1] ^ 1'b1;

                    state <= PERMUTE_FIN_GO;
                end

                PERMUTE_FIN_GO: begin
                    perm_return <= RET_FIN;
                    perm_idx    <= 5'd0;
                    state       <= PERM_LOAD;
                end

                SQUEEZE1: begin
                    // out_len_type:
                    // 0 -> 32 bytes  / 256 bits  : H, KDF
                    // 1 -> 64 bytes  / 512 bits  : G, XOF short
                    // 2 -> 128 bytes / 1024 bits : PRF eta2
                    // 3 -> 192 bytes / 1536 bits : PRF eta3
                    if (saved_out_len_type == 3'd0) begin
                        dout[255:0] <= sponge_state[255:0];
                        done        <= 1'b1;
                        state       <= IDLE;
                    end else if (saved_out_len_type == 3'd1) begin
                        dout[511:0] <= sponge_state[511:0];
                        done        <= 1'b1;
                        state       <= IDLE;
                    end else if (saved_out_len_type == 3'd2) begin
                        dout[1023:0] <= sponge_state[1023:0];
                        done         <= 1'b1;
                        state        <= IDLE;
                    end else begin
                        dout[1087:0] <= sponge_state[1087:0];
                        state        <= SQUEEZE2_GO;
                    end
                end

                SQUEEZE2_GO: begin
                    perm_return <= RET_SQUEEZE2;
                    perm_idx    <= 5'd0;
                    state       <= PERM_LOAD;
                end

                SQUEEZE2: begin
                    dout[1535:1088] <= sponge_state[447:0];
                    done            <= 1'b1;
                    state           <= IDLE;
                end

                // -------------------------------------------------------------
                // Generic permutation sequencer: load 25 lanes, start, wait,
                // read 25 lanes back.
                // -------------------------------------------------------------
                PERM_LOAD: begin
                    if (perm_idx == 5'd24) begin
                        perm_idx <= 5'd0;
                        state    <= PERM_START;
                    end else begin
                        perm_idx <= perm_idx + 5'd1;
                    end
                end

                PERM_START: begin
                    state <= PERM_WAIT;
                end

                PERM_WAIT: begin
                    if (k_done) begin
                        perm_idx <= 5'd0;
                        state    <= PERM_READ;
                    end
                end

                PERM_READ: begin
                    sponge_state[perm_idx*64 +: 64] <= k_read_data;
                    if (perm_idx == 5'd24) begin
                        perm_idx <= 5'd0;
                        case (perm_return)
                            RET_MORE: begin
                                if (final_full_block) begin
                                    beat_len         <= 8'd0;
                                    final_full_block <= 1'b0;
                                    state            <= PADDING;
                                end else begin
                                    state <= WAIT_BLOCK;
                                end
                            end
                            RET_FIN: begin
                                state <= SQUEEZE1;
                            end
                            RET_SQUEEZE2: begin
                                state <= SQUEEZE2;
                            end
                            default: state <= IDLE;
                        endcase
                    end else begin
                        perm_idx <= perm_idx + 5'd1;
                    end
                end

                default: state <= IDLE;
            endcase
        end
    end

endmodule

