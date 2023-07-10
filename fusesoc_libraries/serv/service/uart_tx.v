module uart_tx 
#(  parameter clks_per_bit = 104,
    parameter BITS = 8)
(
    input  clk,
    input tx_active,
    input wire [BITS-1:0] tx_data,
    output tx_done,
    output reg o_data = 8'hff
);

localparam  IDLE = 0;
localparam  START = 1;
localparam  TRANSMIT = 2;
localparam  STOP = 3;


reg temp_done = 0;

reg [BITS-1:0] temp_data= 8'hff;

reg[1:0] state = IDLE;
reg[6:0] clock_count = 0;// >= clks_per_bit
reg [2:0] data_index = 0;

always @(posedge clk) begin
    case (state)
        IDLE:
        begin
            o_data      <= 1'b1; // send 1's whend IDLE
            temp_done   <= 1'b0;
            clock_count <= 0;
            data_index  <=  0;
            temp_data <= tx_data;

            if(tx_active == 1'b1 )
                begin
                    state <= START;
                end
            else
                begin
                    state <= IDLE;
                end
        end 

        START:
        begin
            o_data <= 1'b0;

            if (clock_count < clks_per_bit - 1) 
                begin
                    temp_data <= tx_data;
                    clock_count <= clock_count + 1;
                    state <= START;
                end
            else
                begin
                    clock_count <= 0;
                    state <= TRANSMIT;
                end
        end

        TRANSMIT:
        begin
            o_data <= temp_data[data_index];// send bits for the byte
            if (clock_count < clks_per_bit - 1) 
                begin
                    clock_count <= clock_count + 1;
                    state <= TRANSMIT;
                end
            else
                begin
                    clock_count <= 0;

                    if(data_index < BITS-1)
                        begin
                            data_index <= data_index + 1;
                            state <= TRANSMIT;
                        end
                    else
                        begin
                            data_index <= 0;
                            state <= STOP;
                        end
                end
        end
        STOP:
        
        begin
            o_data <= 1'b1;
           // tx_active <=0;
            if (clock_count < clks_per_bit - 1) begin
                clock_count <= clock_count + 1;
                state <= STOP;
            end
            else
            begin
                temp_done   <= 1'b1;
                clock_count <= 0;
                state <= IDLE;
            end

        end
        default: 
            state <= IDLE;
    endcase
end
assign done = temp_done;
endmodule