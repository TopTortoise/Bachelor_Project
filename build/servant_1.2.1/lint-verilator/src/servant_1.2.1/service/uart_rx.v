module uart_rx 
#( parameter clks_per_bit = 104,
    parameter BITS = 8 )
(
    input wire  i_wb_clk,
    //input wire  i_wb_rst,// not sure if reset is needed
    input wire  i_wb_dat,
    output wire rx_done,
    output wire rx_active,
    output wire [BITS-1:0]o_wb_rdt
);

//states
localparam  IDLE = 0;
localparam  START = 1;
localparam  RECEIVE = 2;
localparam  STOP = 3;
//localparam  CLEANUP = 4;

reg     r_Rx_temp = 1'b1;
reg     rx_bit   = 1'b1;
reg     temp_active = 1'b0;
//bytes
reg [BITS-1:0] rx_byte = 0; // temp storage for data output
//done signal
reg  temp_done = 0;

//states 
reg [3:0] data_index =0;
reg [6:0] clock_count = 0;
reg [1:0] state = IDLE;


//for metastabillity 
always @(posedge i_wb_clk) begin
    r_Rx_temp <= i_wb_dat;
    rx_bit <= r_Rx_temp; 
end

//RX statemachine
always @(posedge i_wb_clk) begin
    case (state)
        IDLE: 
        begin
            temp_done <= 1'b0;
            data_index <= 0;
            clock_count <= 0;
            temp_active <= 1'b0;

            if (rx_bit == 1'b0) 
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
        if(clock_count == ((clks_per_bit)/2)-1)//to get the middle of the RX bit value
            begin
                if(rx_bit == 1'b0) 
                    begin
                        temp_active <= 1'b1;
                        clock_count <= 0; //reset counter
                        state <= RECEIVE; //go to recieve state
                        rx_byte <= 0;
                    end           
                else
                    begin
                        state <= IDLE; // go back to idle
                    end
                end 
        else
            begin
                clock_count <= clock_count +1;
                state <= START;
            end
        end

        RECEIVE:
        begin
            if(clock_count < clks_per_bit-1)
                begin
                    clock_count <= clock_count+1;
                    state <= RECEIVE;
                end
            else
                begin
                    clock_count <= 0;

                    rx_byte[data_index[2:0]] <= rx_bit;
                    //check if all bist have been recieved
                    if(data_index < BITS-1)
                        begin
                            data_index <= data_index +1;
                            state <= RECEIVE;
                        end
                    //if all bits recievec got to stop state
                    else
                        begin
                            data_index <= 0;
                            state <= STOP;
                        end
                end          
        end
        STOP:
        begin
            if(clock_count < clks_per_bit-1)
                begin
                    clock_count <= clock_count + 1;
                    state <= STOP;
                end
            else
                begin
                    temp_done <= 1'b1;
                    temp_active <= 1'b0;
                    clock_count <= 0;
                    state <= IDLE;
                end
        end
        default:
            state <= IDLE;
    endcase
end
assign rx_active = temp_active;
assign o_wb_rdt = rx_byte;
assign rx_done = temp_done;
endmodule