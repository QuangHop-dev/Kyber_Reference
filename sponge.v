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
        end else begin
            done <= 1'b0;
            i_ack <= 1'b0;
            f_start <= 1'b0;

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
                
                /*SQUEEZE1: begin
		    // out_len_type:
		    // 0 -> 32 bytes  / 256 bits  : H, KDF
		    // 1 -> 64 bytes  / 512 bits  : G, XOF short
		    // 2 -> 128 bytes / 1024 bits : PRF eta2
		    // 3 -> 192 bytes / 1536 bits : PRF eta3

		    if (saved_out_len_type == 3'd0) begin
			dout[255:0] <= sponge_state[255:0];
			done <= 1'b1;
			state <= IDLE;
		    end else if (saved_out_len_type == 3'd1) begin
			dout[511:0] <= sponge_state[511:0];
			done <= 1'b1;
			state <= IDLE;
		    end else if (saved_out_len_type == 3'd2) begin
			dout[1023:0] <= sponge_state[1023:0];
			done <= 1'b1;
			state <= IDLE;
		    end else begin
			dout[1087:0] <= sponge_state[1087:0];
			f_start <= 1'b1;
			state <= SQUEEZE2P;
		    end
		end*/

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

                default: state <= IDLE;
            endcase
        end
    end

endmodule
