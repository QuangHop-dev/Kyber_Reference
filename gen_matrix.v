`timescale 1ns / 1ps

// =============================================================================
// MODULE: gen_matrix
// Kyber512-only matrix generator / uniform sampler.
//
// IMPORTANT ARCHITECTURAL CHANGE:
//   This version does NOT instantiate streaming_shake128 / keccak_f1600.
//   It requests SHAKE128 XOF words from the shared Hash-Core through a 32-bit
//   valid/ready interface, then performs rejection sampling locally.
//
// Data flow:
//   shared Hash-Core SHAKE128(rho || j || i) -> 32-bit words
//   -> sample_buf -> 12-bit candidate -> accept if candidate < q
// =============================================================================

module gen_matrix (
    input  wire        clk,
    input  wire        rst,
    input  wire        start,

    input  wire [255:0] rho,        // big-endian: rho[0] at bits[255:248]
    input  wire         transposed,

    // Request SHAKE128 XOF from shared Hash-Core.
    output reg          xof_req_valid,
    output reg  [271:0] xof_req_din,
    input  wire         xof_req_ready,
    output reg          xof_release,

    // 32-bit XOF stream returned by shared Hash-Core.
    input  wire [31:0]  xof_word_data,
    input  wire         xof_word_valid,
    output wire         xof_word_ready,

    output reg          we,
    output reg  [11:0]  ram_addr,
    output reg  [15:0]  ram_dout,

    output reg          done,
    output wire         busy
);

    localparam KYBER_Q = 12'd3329;
    localparam BASE_A  = 12'd0;

    function [255:0] flip_bytes_32;
        input [255:0] in_data;
        integer fi;
        begin
            for (fi = 0; fi < 32; fi = fi + 1)
                flip_bytes_32[(31-fi)*8 +: 8] = in_data[fi*8 +: 8];
        end
    endfunction

    reg [2:0]  loop_i, loop_j;
    reg [2:0]  k_val;
    reg [8:0]  coeff_cnt;     // 0..255
    reg [11:0] poly_base;     // Base address in RAM

    // Small sampler buffer instead of a 1344-bit SHAKE block bus.
    reg [63:0] sample_buf;
    reg [6:0]  sample_bits;

    localparam GM_IDLE       = 3'd0;
    localparam GM_XOF_INIT   = 3'd1;
    localparam GM_XOF_ACCEPT = 3'd2;
    localparam GM_WAIT_WORD  = 3'd3;
    localparam GM_NEED_WORD  = 3'd4;
    localparam GM_REJECT     = 3'd5;
    localparam GM_NEXT_POLY  = 3'd6;
    localparam GM_DONE       = 3'd7;

    reg [2:0] state;

    assign busy = (state != GM_IDLE);

    wire [11:0] candidate    = sample_buf[11:0];
    wire        candidate_ok = (candidate < KYBER_Q);

    // sample_buf is 64 bits; only accept another 32-bit word when there is room.
    // IMPORTANT: assert ready only in GM_NEED_WORD, after the new XOF request
    // has definitely been accepted and old xof_word_valid has been flushed.
    assign xof_word_ready = (state == GM_NEED_WORD) && (sample_bits <= 7'd32);

    always @(posedge clk) begin
        if (rst) begin
            state         <= GM_IDLE;
            we            <= 1'b0;
            ram_addr      <= 12'd0;
            ram_dout      <= 16'd0;
            done          <= 1'b0;
            xof_req_valid <= 1'b0;
            xof_req_din   <= 272'd0;
            xof_release   <= 1'b0;
            loop_i        <= 3'd0;
            loop_j        <= 3'd0;
            k_val         <= 3'd2;
            coeff_cnt     <= 9'd0;
            poly_base     <= 12'd0;
            sample_buf    <= 64'd0;
            sample_bits   <= 7'd0;
        end else begin
            // Auto-clear strobes
            xof_req_valid <= 1'b0;
            xof_release   <= 1'b0;
            we            <= 1'b0;

            case (state)
                GM_IDLE: begin
                    done <= 1'b0;
                    if (start) begin
                        k_val       <= 3'd2;
                        loop_i      <= 3'd0;
                        loop_j      <= 3'd0;
                        coeff_cnt   <= 9'd0;
                        poly_base   <= BASE_A;
                        sample_buf  <= 64'd0;
                        sample_bits <= 7'd0;
                        state       <= GM_XOF_INIT;
                    end
                end

                GM_XOF_INIT: begin
                    // XOF input little-endian for Keccak:
                    //   byte 0..31 = rho flipped from big-endian
                    //   byte 32    = j or i
                    //   byte 33    = i or j
                    if (!transposed) begin
                        xof_req_din <= {
                            {5'd0, loop_i},
                            {5'd0, loop_j},
                            flip_bytes_32(rho)
                        };
                    end else begin
                        xof_req_din <= {
                            {5'd0, loop_j},
                            {5'd0, loop_i},
                            flip_bytes_32(rho)
                        };
                    end

                    coeff_cnt   <= 9'd0;
                    sample_buf  <= 64'd0;
                    sample_bits <= 7'd0;

                    // Do not consume xof_word_valid immediately after request,
                    // because the shared Hash-Core may still be holding a word
                    // from the previous polynomial in XOF_WORD_OUT.
                    state <= GM_XOF_ACCEPT;
                end

                GM_XOF_ACCEPT: begin
                    // Hold request valid until the shared Hash-Core accepts it.
                    // The accept happens in the Hash-Core on this clock edge.
                    xof_req_valid <= 1'b1;
                    if (xof_req_ready) begin
                        state <= GM_WAIT_WORD;
                    end
                end

                GM_WAIT_WORD: begin
                    // One-cycle guard state. This avoids sampling the stale
                    // xof_word_valid/xof_word_data left from the previous
                    // polynomial when a new request is accepted from XOF_WORD_OUT.
                    state <= GM_NEED_WORD;
                end

                GM_NEED_WORD: begin
                    if (xof_word_valid) begin
                        sample_buf  <= sample_buf | ({32'd0, xof_word_data} << sample_bits);
                        sample_bits <= sample_bits + 7'd32;
                        state       <= GM_REJECT;
                    end
                end

                GM_REJECT: begin
                    if (coeff_cnt == 9'd256) begin
                        state <= GM_NEXT_POLY;

                    end else if (sample_bits < 7'd12) begin
                        state <= GM_NEED_WORD;

                    end else begin
                        sample_buf  <= sample_buf >> 12;
                        sample_bits <= sample_bits - 7'd12;

                        if (candidate_ok) begin
                            we        <= 1'b1;
                            ram_addr  <= poly_base + {3'd0, coeff_cnt[7:0]};
                            ram_dout  <= {4'd0, candidate};
                            coeff_cnt <= coeff_cnt + 9'd1;
                        end
                    end
                end

                GM_NEXT_POLY: begin
                    we <= 1'b0;

                    if (loop_j + 1 < k_val) begin
                        loop_j    <= loop_j + 1;
                        poly_base <= poly_base + 12'd256;
                        state     <= GM_XOF_INIT;
                    end else if (loop_i + 1 < k_val) begin
                        loop_i    <= loop_i + 1;
                        loop_j    <= 3'd0;
                        poly_base <= poly_base + 12'd256;
                        state     <= GM_XOF_INIT;
                    end else begin
                        state <= GM_DONE;
                    end
                end

                GM_DONE: begin
                    // Release shared Hash-Core back to IDLE.
                    xof_release <= 1'b1;
                    done        <= 1'b1;
                    state       <= GM_IDLE;
                end

                default: state <= GM_IDLE;
            endcase
        end
    end

endmodule

