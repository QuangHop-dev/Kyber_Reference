`timescale 1ns/1ps

// =============================================================================
// MODULE: streaming_shake128
// SHAKE128 XOF với on-demand squeeze.
//
// FIXES so với phiên bản cũ:
//   1. absorb_start được xử lý ở MỌI state (fix deadlock: khi gen_matrix
//      bắt đầu polynomial mới trong khi module đang ở SQUEEZE)
//   2. Dùng wire absorbed_state (combinatorial) thay vì multiple partial NBA
//      vào sponge_state → tránh lỗi Verilator
//
// Giao thức sử dụng:
//   1. Pulse absorb_start, giữ din[271:0] hợp lệ (34 byte little-endian)
//   2. Chờ squeeze_valid (pulse 1 chu kỳ) → squeeze_data[511:0] sẵn sàng
//   3. Để lấy block tiếp: pulse squeeze_next, chờ squeeze_valid
//
// SHAKE128 rate = 1344 bit = 168 byte
// Padding: 0x1F tại byte 34 (bits[279:272]), bit 1343 = end-of-pad
// =============================================================================

module streaming_shake128 (
    input  wire        clk,
    input  wire        rst,

    input  wire        absorb_start,   // Pulse - có thể gửi từ bất kỳ state nào
    input  wire [271:0] din,            // 34 byte XOF input (Keccak little-endian)

    input  wire        squeeze_next,   // Pulse: yêu cầu block 64-byte tiếp theo
    output reg  [1343:0] squeeze_data, // 168-byte output block (SHAKE128 rate)
    output reg         squeeze_valid,  // Pulse 1 chu kỳ

    output wire        busy
);

    localparam IDLE         = 2'd0;
    localparam KECCAK_START = 2'd1;
    localparam KECCAK_WAIT  = 2'd2;
    localparam SQUEEZE      = 2'd3;

    reg [1:0]    state;
    reg [1599:0] sponge_state;

    reg  f_start;
    wire f_done;
    wire [1599:0] f_out;

    keccak_f1600 keccak_inst (
        .clk     (clk),
        .rst     (rst),
        .start   (f_start),
        .in_state(sponge_state),
        .out_state(f_out),
        .done    (f_done),
        .busy    ()
    );

    assign busy = (state != IDLE);

    // -------------------------------------------------------------------------
    // Tính toán sponge state sau khi XOR input + padding (combinatorial)
    // SHAKE128, 34-byte input, rate=1344 bit:
    //   bits[271:0]   = din (34 bytes input)
    //   bits[279:272] = 8'h1F (domain separator)
    //   bits[1342:280]= 0
    //   bit[1343]     = 1 (end-of-padding)
    //   bits[1599:1344]= 0 (capacity)
    //
    // Khi sponge_state ban đầu = 0, XOR tương đương gán thẳng.
    // -------------------------------------------------------------------------
    wire [1599:0] absorbed_state;
    assign absorbed_state = {
        256'd0,              // capacity [1599:1344]
        1'b1,                // end-of-pad [1343]
        {1063{1'b0}},        // zero [1342:280]
        8'h1F,               // domain sep [279:272]
        din                  // input [271:0]
    };
    // Kiểm tra: 256 + 1 + 1063 + 8 + 272 = 1600 ✓

    // -------------------------------------------------------------------------
    // FSM
    // -------------------------------------------------------------------------
    always @(posedge clk) begin
        if (rst) begin
            state        <= IDLE;
            sponge_state <= 1600'd0;
            squeeze_data  <= 1344'd0;
            squeeze_valid <= 1'b0;
            f_start       <= 1'b0;
        end else begin
            f_start       <= 1'b0;
            squeeze_valid <= 1'b0;

            // -----------------------------------------------------------------
            // FIX BUG 1: absorb_start được ưu tiên xử lý ở MỌI state.
            // Khi gen_matrix bắt đầu polynomial mới, module đang ở SQUEEZE,
            // nếu không có điều kiện này sẽ deadlock.
            // -----------------------------------------------------------------
            if (absorb_start) begin
                sponge_state <= absorbed_state; // FIX BUG 2: single assignment
                state        <= KECCAK_START;
            end else begin
                case (state)
                    IDLE: begin
                        // Chờ absorb_start (đã xử lý ở trên)
                    end

                    KECCAK_START: begin
                        f_start <= 1'b1;
                        state   <= KECCAK_WAIT;
                    end

                    KECCAK_WAIT: begin
                        if (f_done) begin
                            sponge_state  <= f_out;
                            squeeze_data  <= f_out[1343:0];
                            squeeze_valid <= 1'b1;
                            state         <= SQUEEZE;
                        end
                    end

                    SQUEEZE: begin
                        if (squeeze_next) begin
                            // Permute lần tiếp (sponge_state đã có giá trị mới từ f_out)
                            state <= KECCAK_START;
                        end
                        // absorb_start đã xử lý ở nhánh if bên trên → không deadlock
                    end

                    default: state <= IDLE;
                endcase
            end
        end
    end

endmodule
