`timescale 1ns / 1ps

// Kyber codec primitives for IND-CPA ciphertext packing/unpacking.
// This module is combinational and operates on fixed-size groups:
// - u(d=10): 4 coeffs <-> 5 bytes   (Kyber512/768 polyvec_compress)
// - u(d=11): 8 coeffs <-> 11 bytes  (Kyber1024 polyvec_compress)
// - v(d=4):  8 coeffs <-> 4 bytes   (Kyber512/768 poly_compress)
// - v(d=5):  8 coeffs <-> 5 bytes   (Kyber1024 poly_compress)
module kyber_codec (
    input  wire [2:0]   op,
    input  wire [127:0] coeff_in, // coeff[i] at coeff_in[i*16 +: 16]
    input  wire [87:0]  bytes_in, // byte[i]  at bytes_in[i*8  +: 8]
    output reg  [127:0] coeff_out,
    output reg  [87:0]  bytes_out
);
    localparam OP_PACK_U10   = 3'd0;
    localparam OP_UNPACK_U10 = 3'd1;
    localparam OP_PACK_U11   = 3'd2;
    localparam OP_UNPACK_U11 = 3'd3;
    localparam OP_PACK_V4    = 3'd4;
    localparam OP_UNPACK_V4  = 3'd5;
    localparam OP_PACK_V5    = 3'd6;
    localparam OP_UNPACK_V5  = 3'd7;

    function [10:0] compress_d;
        input signed [15:0] c;
        input [3:0] d;
        reg signed [31:0] u;
        reg [31:0] t;
        reg [31:0] m;
        begin
            // Match Kyber C reference:
            // u = c; u += (u >> 15) & q;  // only lift negatives, no full modulo
            u = {{16{c[15]}}, c};
            u = u + ((u >>> 15) & 32'sd3329);
            // Use exact integer division to avoid rare off-by-1 errors from reciprocal approximation.
            t = ((u << d) + 32'd1664) / 32'd3329;
            m  = t & ((32'd1 << d) - 32'd1);
            compress_d = m[10:0];
        end
    endfunction

    function [15:0] decompress_d;
        input [10:0] x;
        input [3:0] d;
        reg [31:0] t;
        begin
            t = (({21'd0, x} * 32'd3329) + (32'd1 << (d - 1))) >> d;
            decompress_d = t[15:0];
        end
    endfunction

    reg [10:0] t0, t1, t2, t3, t4, t5, t6, t7;
    reg [10:0] w0, w1, w2, w3, w4;
    reg [7:0] b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10;

    always @(*) begin
        coeff_out = 128'd0;
        bytes_out = 88'd0;
        t0 = 0; t1 = 0; t2 = 0; t3 = 0; t4 = 0; t5 = 0; t6 = 0; t7 = 0;
        w0 = 0; w1 = 0; w2 = 0; w3 = 0; w4 = 0;
        b0 = 0; b1 = 0; b2 = 0; b3 = 0; b4 = 0; b5 = 0; b6 = 0; b7 = 0; b8 = 0; b9 = 0; b10 = 0;

        case (op)
            OP_PACK_U10: begin
                t0 = compress_d(coeff_in[15:0],   4'd10);
                t1 = compress_d(coeff_in[31:16],  4'd10);
                t2 = compress_d(coeff_in[47:32],  4'd10);
                t3 = compress_d(coeff_in[63:48],  4'd10);

                b0 = t0[7:0];
                b1 = {t1[5:0], t0[9:8]};
                b2 = {t2[3:0], t1[9:6]};
                b3 = {t3[1:0], t2[9:4]};
                b4 = t3[9:2];

                bytes_out[7:0]   = b0;
                bytes_out[15:8]  = b1;
                bytes_out[23:16] = b2;
                bytes_out[31:24] = b3;
                bytes_out[39:32] = b4;
            end

            OP_UNPACK_U10: begin
                b0 = bytes_in[7:0];
                b1 = bytes_in[15:8];
                b2 = bytes_in[23:16];
                b3 = bytes_in[31:24];
                b4 = bytes_in[39:32];

                t0 = {1'b0, b1[1:0], b0};
                t1 = {1'b0, b2[3:0], b1[7:2]};
                t2 = {1'b0, b3[5:0], b2[7:4]};
                t3 = {1'b0, b4, b3[7:6]};

                coeff_out[15:0]  = decompress_d(t0, 4'd10);
                coeff_out[31:16] = decompress_d(t1, 4'd10);
                coeff_out[47:32] = decompress_d(t2, 4'd10);
                coeff_out[63:48] = decompress_d(t3, 4'd10);
            end

            OP_PACK_U11: begin
                t0 = compress_d(coeff_in[15:0],    4'd11);
                t1 = compress_d(coeff_in[31:16],   4'd11);
                t2 = compress_d(coeff_in[47:32],   4'd11);
                t3 = compress_d(coeff_in[63:48],   4'd11);
                t4 = compress_d(coeff_in[79:64],   4'd11);
                t5 = compress_d(coeff_in[95:80],   4'd11);
                t6 = compress_d(coeff_in[111:96],  4'd11);
                t7 = compress_d(coeff_in[127:112], 4'd11);

                b0  = t0[7:0];
                b1  = {t1[4:0], t0[10:8]};
                b2  = {t2[1:0], t1[10:5]};
                b3  = t2[9:2];
                b4  = {t3[6:0], t2[10]};
                b5  = {t4[3:0], t3[10:7]};
                b6  = {t5[0], t4[10:4]};
                b7  = t5[8:1];
                b8  = {t6[5:0], t5[10:9]};
                b9  = {t7[2:0], t6[10:6]};
                b10 = t7[10:3];

                bytes_out[7:0]   = b0;
                bytes_out[15:8]  = b1;
                bytes_out[23:16] = b2;
                bytes_out[31:24] = b3;
                bytes_out[39:32] = b4;
                bytes_out[47:40] = b5;
                bytes_out[55:48] = b6;
                bytes_out[63:56] = b7;
                bytes_out[71:64] = b8;
                bytes_out[79:72] = b9;
                bytes_out[87:80] = b10;
            end

            OP_UNPACK_U11: begin
                b0  = bytes_in[7:0];
                b1  = bytes_in[15:8];
                b2  = bytes_in[23:16];
                b3  = bytes_in[31:24];
                b4  = bytes_in[39:32];
                b5  = bytes_in[47:40];
                b6  = bytes_in[55:48];
                b7  = bytes_in[63:56];
                b8  = bytes_in[71:64];
                b9  = bytes_in[79:72];
                b10 = bytes_in[87:80];

                t0 = {b1[2:0], b0};
                t1 = {b2[5:0], b1[7:3]};
                t2 = {b4[0], b3, b2[7:6]};
                t3 = {b5[3:0], b4[7:1]};
                t4 = {b6[6:0], b5[7:4]};
                t5 = {b8[1:0], b7, b6[7]};
                t6 = {b9[4:0], b8[7:2]};
                t7 = {b10, b9[7:5]};

                coeff_out[15:0]    = decompress_d(t0, 4'd11);
                coeff_out[31:16]   = decompress_d(t1, 4'd11);
                coeff_out[47:32]   = decompress_d(t2, 4'd11);
                coeff_out[63:48]   = decompress_d(t3, 4'd11);
                coeff_out[79:64]   = decompress_d(t4, 4'd11);
                coeff_out[95:80]   = decompress_d(t5, 4'd11);
                coeff_out[111:96]  = decompress_d(t6, 4'd11);
                coeff_out[127:112] = decompress_d(t7, 4'd11);
            end

            OP_PACK_V4: begin
                t0 = compress_d(coeff_in[15:0],    4'd4);
                t1 = compress_d(coeff_in[31:16],   4'd4);
                t2 = compress_d(coeff_in[47:32],   4'd4);
                t3 = compress_d(coeff_in[63:48],   4'd4);
                t4 = compress_d(coeff_in[79:64],   4'd4);
                t5 = compress_d(coeff_in[95:80],   4'd4);
                t6 = compress_d(coeff_in[111:96],  4'd4);
                t7 = compress_d(coeff_in[127:112], 4'd4);

                bytes_out[7:0]   = {t1[3:0], t0[3:0]};
                bytes_out[15:8]  = {t3[3:0], t2[3:0]};
                bytes_out[23:16] = {t5[3:0], t4[3:0]};
                bytes_out[31:24] = {t7[3:0], t6[3:0]};
            end

            OP_UNPACK_V4: begin
                b0 = bytes_in[7:0];
                b1 = bytes_in[15:8];
                b2 = bytes_in[23:16];
                b3 = bytes_in[31:24];

                coeff_out[15:0]    = decompress_d({7'd0, b0[3:0]}, 4'd4);
                coeff_out[31:16]   = decompress_d({7'd0, b0[7:4]}, 4'd4);
                coeff_out[47:32]   = decompress_d({7'd0, b1[3:0]}, 4'd4);
                coeff_out[63:48]   = decompress_d({7'd0, b1[7:4]}, 4'd4);
                coeff_out[79:64]   = decompress_d({7'd0, b2[3:0]}, 4'd4);
                coeff_out[95:80]   = decompress_d({7'd0, b2[7:4]}, 4'd4);
                coeff_out[111:96]  = decompress_d({7'd0, b3[3:0]}, 4'd4);
                coeff_out[127:112] = decompress_d({7'd0, b3[7:4]}, 4'd4);
            end

            OP_PACK_V5: begin
                t0 = compress_d(coeff_in[15:0],    4'd5);
                t1 = compress_d(coeff_in[31:16],   4'd5);
                t2 = compress_d(coeff_in[47:32],   4'd5);
                t3 = compress_d(coeff_in[63:48],   4'd5);
                t4 = compress_d(coeff_in[79:64],   4'd5);
                t5 = compress_d(coeff_in[95:80],   4'd5);
                t6 = compress_d(coeff_in[111:96],  4'd5);
                t7 = compress_d(coeff_in[127:112], 4'd5);

                w0 = ((t0 >> 0) | (t1 << 5)) & 11'h0ff;
                w1 = ((t1 >> 3) | (t2 << 2) | (t3 << 7)) & 11'h0ff;
                w2 = ((t3 >> 1) | (t4 << 4)) & 11'h0ff;
                w3 = ((t4 >> 4) | (t5 << 1) | (t6 << 6)) & 11'h0ff;
                w4 = ((t6 >> 2) | (t7 << 3)) & 11'h0ff;
                b0 = w0[7:0];
                b1 = w1[7:0];
                b2 = w2[7:0];
                b3 = w3[7:0];
                b4 = w4[7:0];

                bytes_out[7:0]   = b0;
                bytes_out[15:8]  = b1;
                bytes_out[23:16] = b2;
                bytes_out[31:24] = b3;
                bytes_out[39:32] = b4;
            end

            OP_UNPACK_V5: begin
                b0 = bytes_in[7:0];
                b1 = bytes_in[15:8];
                b2 = bytes_in[23:16];
                b3 = bytes_in[31:24];
                b4 = bytes_in[39:32];

                t0 = {6'd0, b0[4:0]};
                t1 = {6'd0, b1[1:0], b0[7:5]};
                t2 = {6'd0, b1[6:2]};
                t3 = {6'd0, b2[3:0], b1[7]};
                t4 = {6'd0, b3[0], b2[7:4]};
                t5 = {6'd0, b3[5:1]};
                t6 = {3'd0, (((b3 >> 6) | (b4 << 2)) & 8'h1f)};
                t7 = {6'd0, b4[7:3]};

                coeff_out[15:0]    = decompress_d(t0, 4'd5);
                coeff_out[31:16]   = decompress_d(t1, 4'd5);
                coeff_out[47:32]   = decompress_d(t2, 4'd5);
                coeff_out[63:48]   = decompress_d(t3, 4'd5);
                coeff_out[79:64]   = decompress_d(t4, 4'd5);
                coeff_out[95:80]   = decompress_d(t5, 4'd5);
                coeff_out[111:96]  = decompress_d(t6, 4'd5);
                coeff_out[127:112] = decompress_d(t7, 4'd5);
            end

            default: begin
                coeff_out = 128'd0;
                bytes_out = 88'd0;
            end
        endcase
    end

endmodule
