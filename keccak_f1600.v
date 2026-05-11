`timescale 1ns/1ps

// =============================================================================
// Drop-in replacement for keccak_f1600.v
//
// Same external interface as the original project version:
//   - in_state/out_state are still 1600-bit, so sponge.v and
//     streaming_shake128.v do NOT need to change.
//
// Internal architecture is changed to a lane-split style:
//   - state is stored as 25 lanes x 64-bit
//   - one combinational Keccak round is applied per clock cycle
//   - 24 rounds total
//
// This is NOT a full SHA3/SHAKE sponge engine. It only replaces the
// Keccak-f[1600] permutation block. Padding/absorb/squeeze remain in sponge.v
// and streaming_shake128.v.
// =============================================================================

module keccak_f1600(
    input  wire          clk,
    input  wire          rst,        // active-high reset, same as original code
    input  wire          start,
    input  wire [1599:0] in_state,
    output reg  [1599:0] out_state,
    output reg           done,
    output wire          busy
);

    localparam IDLE    = 2'd0;
    localparam PROCESS = 2'd1;
    localparam FINISH  = 2'd2;

    reg [1:0] state;
    reg [4:0] round_cnt;

    // 25 lanes x 64-bit = 1600-bit Keccak state.
    // lane index follows the same mapping as the old keccak_round.v:
    //   lane_index = x + 5*y
    reg [63:0] lane [0:24];

    wire [1599:0] round_in_state;
    wire [1599:0] round_next_state;
    reg  [63:0]   rc;

    genvar gi;
    generate
        for (gi = 0; gi < 25; gi = gi + 1) begin : PACK_LANES
            assign round_in_state[gi*64 +: 64] = lane[gi];
        end
    endgenerate

    // Reuse the existing combinational Keccak round from the project.
    // This computes Theta + Rho + Pi + Chi + Iota for one round.
    keccak_round round_inst (
        .in_state (round_in_state),
        .rc       (rc),
        .out_state(round_next_state)
    );

    assign busy = (state != IDLE);

    // Round constants for Keccak-f[1600], 24 rounds.
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

    integer i;

    always @(posedge clk) begin
        if (rst) begin
            state     <= IDLE;
            round_cnt <= 5'd0;
            done      <= 1'b0;
            out_state <= 1600'd0;
            for (i = 0; i < 25; i = i + 1)
                lane[i] <= 64'd0;
        end else begin
            done <= 1'b0;

            case (state)
                IDLE: begin
                    round_cnt <= 5'd0;
                    if (start) begin
                        // Split 1600-bit input state into 25 lanes.
                        for (i = 0; i < 25; i = i + 1)
                            lane[i] <= in_state[i*64 +: 64];
                        state <= PROCESS;
                    end
                end

                PROCESS: begin
                    // One full Keccak round per clock.
                    // Store the 25-lane result back into the lane buffer.
                    for (i = 0; i < 25; i = i + 1)
                        lane[i] <= round_next_state[i*64 +: 64];

                    if (round_cnt == 5'd23) begin
                        state <= FINISH;
                    end else begin
                        round_cnt <= round_cnt + 5'd1;
                    end
                end

                FINISH: begin
                    // Merge 25 lanes back to a 1600-bit state.
                    // Because lane[] was updated in PROCESS of round 23 one clock
                    // earlier, it now contains the final Keccak-f[1600] result.
                    for (i = 0; i < 25; i = i + 1)
                        out_state[i*64 +: 64] <= lane[i];
                    done  <= 1'b1;
                    state <= IDLE;
                end

                default: begin
                    state <= IDLE;
                end
            endcase
        end
    end

endmodule
