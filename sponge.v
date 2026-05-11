`timescale 1ns/1ps

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

    // Shared SHAKE128 XOF service for gen_matrix.
    // This uses the same keccak_f1600 instance inside sponge, so gen_matrix no
    // longer needs its own streaming_shake128/Keccak core.
    input  wire          xof_req_valid,
    input  wire [271:0]  xof_req_din,     // 34 bytes: rho || j || i, little-endian
    output wire          xof_req_ready,
    input  wire          xof_release,

    output reg  [31:0]   xof_word_data,
    output reg           xof_word_valid,
    input  wire          xof_word_ready,

    output reg [1535:0]  dout,
    output reg           done,
    output wire          busy
);

    localparam IDLE              = 4'd0;
    localparam ABSORB            = 4'd1;
    localparam PERMUTE_MORE_GO   = 4'd2;
    localparam PERMUTE_MORE_WAIT = 4'd3;
    localparam WAIT_BLOCK        = 4'd4;
    localparam PADDING           = 4'd5;
    localparam PERMUTE_FIN_GO    = 4'd6;
    localparam PERMUTE_FIN_WAIT  = 4'd7;
    localparam SQUEEZE1          = 4'd8;
    localparam SQUEEZE2P         = 4'd9;
    localparam SQUEEZE2          = 4'd10;

    // Extra states for shared SHAKE128 XOF word service.
    localparam XOF_PERMUTE_GO    = 4'd11;
    localparam XOF_PERMUTE_WAIT  = 4'd12;
    localparam XOF_WORD_OUT      = 4'd13;

    reg [3:0] state;
    reg [1599:0] sponge_state;
    reg [1087:0] beat_din;
    reg [7:0]    beat_len;
    reg          beat_last;
    reg          final_full_block;

    reg          saved_mode;
    reg          saved_is_sha3;
    reg [2:0]    saved_out_len_type;

    reg  f_start;
    wire f_done;
    wire [1599:0] f_out;

    integer i;
    reg [1599:0] absorb_next;
    reg [10:0] rate_bits;
    reg [5:0]  xof_word_idx; // 0..41, SHAKE128 rate = 1344 bits = 42 x 32-bit words

    keccak_f1600 f_inst(
        .clk(clk),
        .rst(rst),
        .start(f_start),
        .in_state(sponge_state),
        .out_state(f_out),
        .done(f_done),
        .busy()
    );

    assign busy = (state != IDLE);

    // Request is accepted only when sponge is idle, or when it is already in
    // XOF mode and gen_matrix wants to restart for the next polynomial.
    assign xof_req_ready = (state == IDLE) || (state == XOF_WORD_OUT);

    // SHAKE128 absorb for 34-byte input.
    // bits[271:0]      = xof_req_din
    // bits[279:272]    = 8'h1F domain separator
    // bits[1342:280]   = 0
    // bit [1343]       = final pad bit for SHAKE128 rate
    // bits[1599:1344]  = capacity = 0
    wire [1599:0] xof_absorbed_state;
    assign xof_absorbed_state = {
        256'd0,
        1'b1,
        {1063{1'b0}},
        8'h1F,
        xof_req_din
    };

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
            state <= IDLE;
            sponge_state <= 1600'd0;
            beat_din <= 1088'd0;
            beat_len <= 8'd0;
            beat_last <= 1'b0;
            final_full_block <= 1'b0;
            saved_mode <= 1'b0;
            saved_is_sha3 <= 1'b0;
            saved_out_len_type <= 3'd0;
            dout <= 1536'd0;
            done <= 1'b0;
            i_ack <= 1'b0;
            f_start <= 1'b0;
            xof_word_idx <= 6'd0;
            xof_word_data <= 32'd0;
            xof_word_valid <= 1'b0;
        end else begin
            done <= 1'b0;
            i_ack <= 1'b0;
            f_start <= 1'b0;

            // Release shared XOF service back to IDLE after gen_matrix is done.
            if (xof_release) begin
                xof_word_valid <= 1'b0;
                xof_word_idx   <= 6'd0;
                state          <= IDLE;

            // New shared SHAKE128 XOF request from gen_matrix.
            end else if (xof_req_valid && xof_req_ready) begin
                sponge_state   <= xof_absorbed_state;
                xof_word_valid <= 1'b0;
                xof_word_idx   <= 6'd0;
                state          <= XOF_PERMUTE_GO;

            end else begin
                case (state)
                    IDLE: begin
                        if (i_valid) begin
                            sponge_state <= 1600'd0;
                            beat_din <= din;
                            beat_len <= byte_len;
                            beat_last <= i_last;
                            final_full_block <= 1'b0;
                            saved_mode <= mode;
                            saved_is_sha3 <= is_sha3;
                            saved_out_len_type <= out_len_type;
                            i_ack <= 1'b1;
                            state <= ABSORB;
                        end
                    end

                    ABSORB: begin
                        sponge_state <= absorb_next;
                        if (beat_last) begin
                            // If the final beat exactly fills one rate block, padding
                            // must be applied on a fresh empty block after one permutation.
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
                        f_start <= 1'b1;
                        state <= PERMUTE_MORE_WAIT;
                    end

                    PERMUTE_MORE_WAIT: begin
                        if (f_done) begin
                            sponge_state <= f_out;
                            if (final_full_block) begin
                                beat_len <= 8'd0;
                                final_full_block <= 1'b0;
                                state <= PADDING;
                            end else begin
                                state <= WAIT_BLOCK;
                            end
                        end
                    end

                    WAIT_BLOCK: begin
                        if (i_valid) begin
                            beat_din <= din;
                            beat_len <= byte_len;
                            beat_last <= i_last;
                            i_ack <= 1'b1;
                            state <= ABSORB;
                        end
                    end

                    PADDING: begin
                        // Domain separation byte at message-end within the last block
                        if (saved_is_sha3) begin
                            sponge_state[beat_len*8 +: 8] <= sponge_state[beat_len*8 +: 8] ^ 8'h06;
                        end else begin
                            sponge_state[beat_len*8 +: 8] <= sponge_state[beat_len*8 +: 8] ^ 8'h1F;
                        end

                        // End bit at rate-1
                        if (saved_is_sha3) begin
                            if (saved_mode) rate_bits = 11'd576; else rate_bits = 11'd1088;
                        end else begin
                            if (saved_mode) rate_bits = 11'd1088; else rate_bits = 11'd1344;
                        end
                        sponge_state[rate_bits-1] <= sponge_state[rate_bits-1] ^ 1'b1;

                        state <= PERMUTE_FIN_GO;
                    end

                    PERMUTE_FIN_GO: begin
                        f_start <= 1'b1;
                        state <= PERMUTE_FIN_WAIT;
                    end

                    PERMUTE_FIN_WAIT: begin
                        if (f_done) begin
                            sponge_state <= f_out;
                            state <= SQUEEZE1;
                        end
                    end

                    SQUEEZE1: begin
                        if (saved_is_sha3 && saved_out_len_type == 3'd0) begin
                            dout[255:0] <= sponge_state[255:0];
                            done <= 1'b1;
                            state <= IDLE;
                        end else if (saved_is_sha3 || saved_out_len_type == 3'd1) begin
                            dout[511:0] <= sponge_state[511:0];
                            done <= 1'b1;
                            state <= IDLE;
                        end else if (saved_out_len_type == 3'd2) begin
                            dout[1023:0] <= sponge_state[1023:0];
                            done <= 1'b1;
                            state <= IDLE;
                        end else begin
                            // 1536-bit: first 1088 bits from current state
                            dout[1087:0] <= sponge_state[1087:0];
                            f_start <= 1'b1;
                            state <= SQUEEZE2P;
                        end
                    end

                    SQUEEZE2P: begin
                        if (f_done) begin
                            sponge_state <= f_out;
                            state <= SQUEEZE2;
                        end
                    end

                    SQUEEZE2: begin
                        dout[1535:1088] <= sponge_state[447:0];
                        done <= 1'b1;
                        state <= IDLE;
                    end

                    XOF_PERMUTE_GO: begin
                        f_start <= 1'b1;
                        state <= XOF_PERMUTE_WAIT;
                    end

                    XOF_PERMUTE_WAIT: begin
                        if (f_done) begin
                            sponge_state   <= f_out;
                            xof_word_idx   <= 6'd0;
                            xof_word_data  <= f_out[31:0];
                            xof_word_valid <= 1'b1;
                            state          <= XOF_WORD_OUT;
                        end
                    end

                    XOF_WORD_OUT: begin
                        if (xof_word_valid && xof_word_ready) begin
                            if (xof_word_idx == 6'd41) begin
                                // 42 words exhausted. SHAKE squeeze next block by permuting
                                // the current Keccak state again.
                                xof_word_valid <= 1'b0;
                                xof_word_idx   <= 6'd0;
                                state          <= XOF_PERMUTE_GO;
                            end else begin
                                xof_word_idx   <= xof_word_idx + 6'd1;
                                xof_word_data  <= sponge_state[((xof_word_idx + 6'd1) * 32) +: 32];
                                xof_word_valid <= 1'b1;
                            end
                        end
                    end

                    default: state <= IDLE;
                endcase
            end
        end
    end

endmodule

