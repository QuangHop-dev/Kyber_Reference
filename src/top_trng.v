`timescale 1ns / 1ps

module top_trng (
    input  wire clk,
    input  wire rst,
    input  wire trigger,
    input  wire [1:0] req_bytes,   // 01: 64 bytes, 00: 32 bytes
    output reg  [511:0] rand_data,
    output reg  valid
);

`ifdef VERILATOR
    // Deterministic seed for RTL simulation / C-reference alignment.
    // Latest board seed provided by user.
    localparam [511:0] DUMMY_SEED = 512'hDC2B7E600737237106DD6CC82E51B2902F3DFFCA0065D5FD0241719AA64102347244A29AB856B06AA36DEBC747B42B016732A6642FC91657E21CB302FB257850;

    reg [2:0] delay_cnt;

    always @(posedge clk) begin
        if (rst) begin
            rand_data <= 512'd0;
            valid <= 1'b0;
            delay_cnt <= 3'd0;
        end else begin
            if (trigger) begin
                delay_cnt <= 3'd1;
                valid <= 1'b0;
            end else if (delay_cnt > 0) begin
                if (delay_cnt == 3'd5) begin
                    // Match real top_trng behavior:
                    // req_bytes==00 -> upper 32-byte random, lower 32-byte zero.
                    if (req_bytes == 2'b00)
                        rand_data <= {DUMMY_SEED[511:256], 256'd0};
                    else
                        rand_data <= DUMMY_SEED;
                    valid <= 1'b1;
                    delay_cnt <= 3'd0;
                end else begin
                    delay_cnt <= delay_cnt + 1'b1;
                end
            end else begin
                valid <= 1'b0;
            end
        end
    end

`else
    // Background accumulation of 512-bit random data
    reg [511:0] shift_reg;
    reg [4:0] word_cnt;        // 0 to 16
    reg [511:0] fifo_data;
    reg fifo_ready;
    wire [31:0] trng_word;
    wire        trng_valid;
    
    // Instantiate the hardware random number generator core
    catching_random_number catching_random_number (
        .clk(clk),
        .rst(rst),
        .data_out(trng_word),
        .data_valid(trng_valid)
    );

    // To prevent data tearing, we clear fifo_ready from the consumer side,
    // and the producer side sets it.
    reg pop_fifo;

    always @(posedge clk) begin
        if (rst) begin
            shift_reg <= 512'd0;
            word_cnt <= 5'd0;
            fifo_data <= 512'd0;
            fifo_ready <= 1'b0;
        end else begin
            if (pop_fifo) begin
                fifo_ready <= 1'b0; // Consumer popped the data
            end

            if (trng_valid) begin
                shift_reg <= {shift_reg[479:0], trng_word};
                if (word_cnt == 5'd15) begin
                    word_cnt <= 5'd0;
                    fifo_data <= {shift_reg[479:0], trng_word};
                    fifo_ready <= 1'b1; // Produce new data (overrides pop_fifo if simultaneous)
                end else begin
                    word_cnt <= word_cnt + 1'b1;
                end
            end
        end
    end

    // FSM interface mimicking the dummy TRNG behavior
    reg [2:0] delay_cnt;

    always @(posedge clk) begin
        if (rst) begin
            rand_data <= 512'd0;
            valid <= 1'b0;
            delay_cnt <= 3'd0;
            pop_fifo <= 1'b0;
        end else begin
            pop_fifo <= 1'b0; // default state is 0 (pulse)
            
            if (trigger) begin
                delay_cnt <= 3'd1;
                valid <= 1'b0;
            end else if (delay_cnt > 0) begin
                if (delay_cnt == 3'd5) begin
                    if (fifo_ready) begin
                        if (req_bytes == 2'b00) begin
                            // 32 bytes mode: take the upper half and pad with zeros
                            rand_data <= {fifo_data[511:256], 256'd0};
                        end else begin
                            // 64 bytes mode
                            rand_data <= fifo_data;
                        end
                        valid <= 1'b1;
                        pop_fifo <= 1'b1; // Pop the FIFO so it starts preparing the next 512 bits
                        delay_cnt <= 3'd0;
                    end else begin
                        // Wait here until fifo_ready is true
                    end
                end else begin
                    delay_cnt <= delay_cnt + 1'b1;
                end
            end else begin
                valid <= 1'b0;
            end
        end
    end
`endif
endmodule
