`timescale 1ns/1ps

// =============================================================================
// keccak_f1600_64ls
// -----------------------------------------------------------------------------
// Keccak-f[1600] permutation core with a 64-bit load/store state interface.
//
// This core intentionally does NOT implement SHA3/SHAKE absorb, padding, domain
// separation, or squeeze. It only permutes a 1600-bit Keccak state that is loaded
// and read back as 25 lanes of 64 bits.
//
// Protocol:
//   1. While busy=0, write 25 lanes using load_we/load_addr/load_data.
//      Lane mapping is compatible with the original project:
//          lane i <=> state[i*64 +: 64], i = 0..24
//   2. Pulse start for one clock.
//   3. Wait for done pulse. busy goes low after the 24th round.
//   4. Read 25 lanes using read_addr/read_data.
//
// Latency after start: 24 clocks to done pulse.
// Total wrapper latency with load/read: about 25 + 24 + 25 clocks per permutation.
// =============================================================================

module keccak_f1600_64ls (
    input  wire        clk,
    input  wire        rst,       // active-high reset, same convention as old core

    input  wire        load_we,
    input  wire [4:0]  load_addr,
    input  wire [63:0] load_data,

    input  wire        start,

    input  wire [4:0]  read_addr,
    output wire [63:0] read_data,

    output reg         done,
    output wire        busy
);

    reg [63:0] lane [0:24];
    reg [4:0]  round_cnt;
    reg        running;

    wire [1599:0] round_in;
    wire [1599:0] round_out;
    reg  [63:0]   rc;

    integer i;
    genvar gi;

    assign busy      = running;
    assign read_data = lane[read_addr];

    generate
        for (gi = 0; gi < 25; gi = gi + 1) begin : GEN_PACK_ROUND_IN
            assign round_in[gi*64 +: 64] = lane[gi];
        end
    endgenerate

    keccak_round u_round (
        .in_state (round_in),
        .rc       (rc),
        .out_state(round_out)
    );

    // Keccak-f[1600] round constants.
    always @(*) begin
        case (round_cnt)
            5'd0:  rc = 64'h0000000000000001;
            5'd1:  rc = 64'h0000000000008082;
            5'd2:  rc = 64'h800000000000808a;
            5'd3:  rc = 64'h8000000080008000;
            5'd4:  rc = 64'h000000000000808b;
            5'd5:  rc = 64'h0000000080000001;
            5'd6:  rc = 64'h8000000080008081;
            5'd7:  rc = 64'h8000000000008009;
            5'd8:  rc = 64'h000000000000008a;
            5'd9:  rc = 64'h0000000000000088;
            5'd10: rc = 64'h0000000080008009;
            5'd11: rc = 64'h000000008000000a;
            5'd12: rc = 64'h000000008000808b;
            5'd13: rc = 64'h800000000000008b;
            5'd14: rc = 64'h8000000000008089;
            5'd15: rc = 64'h8000000000008003;
            5'd16: rc = 64'h8000000000008002;
            5'd17: rc = 64'h8000000000000080;
            5'd18: rc = 64'h000000000000800a;
            5'd19: rc = 64'h800000008000000a;
            5'd20: rc = 64'h8000000080008081;
            5'd21: rc = 64'h8000000000008080;
            5'd22: rc = 64'h0000000080000001;
            5'd23: rc = 64'h8000000080008008;
            default: rc = 64'h0000000000000000;
        endcase
    end

    always @(posedge clk) begin
        if (rst) begin
            for (i = 0; i < 25; i = i + 1)
                lane[i] <= 64'd0;
            round_cnt <= 5'd0;
            running   <= 1'b0;
            done      <= 1'b0;
        end else begin
            done <= 1'b0;

            if (!running) begin
                // Load/store interface is active only when the permutation core is idle.
                if (load_we)
                    lane[load_addr] <= load_data;

                if (start) begin
                    running   <= 1'b1;
                    round_cnt <= 5'd0;
                end
            end else begin
                // One full Keccak round per clock. The core is still round-parallel;
                // the low-power benefit here mainly comes from the 64-bit state I/O
                // and easier isolation around the permutation boundary.
                for (i = 0; i < 25; i = i + 1)
                    lane[i] <= round_out[i*64 +: 64];

                if (round_cnt == 5'd23) begin
                    running <= 1'b0;
                    done    <= 1'b1;
                end else begin
                    round_cnt <= round_cnt + 5'd1;
                end
            end
        end
    end

endmodule

