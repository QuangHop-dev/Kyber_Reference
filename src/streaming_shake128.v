`timescale 1ns/1ps

// =============================================================================
// streaming_shake128 with 64-bit load/store Keccak-f[1600] backend
// -----------------------------------------------------------------------------
// External interface is kept identical to the original streaming_shake128.v, so
// gen_matrix does not need to change.
//
// SHAKE128 rate = 1344 bit = 168 byte.
// Input is fixed to 34 byte: rho || x || y, already arranged by gen_matrix.
// =============================================================================

module streaming_shake128 (
    input  wire        clk,
    input  wire        rst,

    input  wire        absorb_start,
    input  wire [271:0] din,

    input  wire        squeeze_next,
    output reg  [1343:0] squeeze_data,
    output reg         squeeze_valid,

    output wire        busy
);

    localparam IDLE         = 3'd0;
    localparam PERM_LOAD    = 3'd1;
    localparam PERM_START   = 3'd2;
    localparam PERM_WAIT    = 3'd3;
    localparam PERM_READ    = 3'd4;
    localparam PERM_APPLY   = 3'd5;
    localparam SQUEEZE      = 3'd6;

    reg [2:0]    state;
    reg [1599:0] sponge_state;
    reg [1599:0] perm_result_state;
    reg [4:0]    perm_idx;

    // SHAKE128 fixed absorb block:
    //   bits[271:0]    = 34-byte input
    //   bits[279:272]  = 0x1F domain separator
    //   bits[1342:280] = 0
    //   bit[1343]      = 1 end-of-padding
    //   bits[1599:1344]= capacity zero
    wire [1599:0] absorbed_state;
    assign absorbed_state = {
        256'd0,
        1'b1,
        {1063{1'b0}},
        8'h1F,
        din
    };

    // 64-bit load/store Keccak backend.
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

    always @(posedge clk) begin
        if (rst) begin
            state             <= IDLE;
            sponge_state      <= 1600'd0;
            perm_result_state <= 1600'd0;
            perm_idx          <= 5'd0;
            squeeze_data      <= 1344'd0;
            squeeze_valid     <= 1'b0;
        end else begin
            squeeze_valid <= 1'b0;

            // Keep the original bug fix: absorb_start has priority in every
            // state, so gen_matrix can start a new polynomial even if this XOF
            // is currently sitting in SQUEEZE.
            if (absorb_start) begin
                sponge_state      <= absorbed_state;
                perm_result_state <= 1600'd0;
                perm_idx          <= 5'd0;
                state             <= PERM_LOAD;
            end else begin
                case (state)
                    IDLE: begin
                        // Wait for absorb_start.
                    end

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
                            perm_result_state <= 1600'd0;
                            perm_idx          <= 5'd0;
                            state             <= PERM_READ;
                        end
                    end

                    PERM_READ: begin
                        perm_result_state[perm_idx*64 +: 64] <= k_read_data;
                        if (perm_idx == 5'd24) begin
                            perm_idx <= 5'd0;
                            state    <= PERM_APPLY;
                        end else begin
                            perm_idx <= perm_idx + 5'd1;
                        end
                    end

                    PERM_APPLY: begin
                        sponge_state  <= perm_result_state;
                        squeeze_data  <= perm_result_state[1343:0];
                        squeeze_valid <= 1'b1;
                        state         <= SQUEEZE;
                    end

                    SQUEEZE: begin
                        if (squeeze_next) begin
                            perm_idx          <= 5'd0;
                            perm_result_state <= 1600'd0;
                            state             <= PERM_LOAD;
                        end
                    end

                    default: state <= IDLE;
                endcase
            end
        end
    end

endmodule

