`default_nettype none
module queue
  #(
    parameter depth = 8,
    parameter aw = $clog2(depth)
    )
   (
    input wire i_wb_clk,
    input wire [7:0] i_wb_dat,
    input wire i_wb_mem_cyc,
    input wire i_wb_mem_we,
    input wire i_rx_done,
    input wire i_wb_rst,
    output wire [7:0] o_wb_rdt

   );

   reg [aw:0] addr = 5'b11111;
   reg [7:0] queue [0:8];

   always @(posedge i_wb_clk ) begin
    if(i_wb_rst)
    begin
      addr <= 5'b11111;
      o_wb_rdt <= 'hff;
    end
    else if(i_rx_done)begin
      addr <= addr-1;
      queue[addr][7:0] <= i_wb_dat;
    end
    else if(!i_wb_mem_we&!i_wb_mem_cyc)
    begin
      addr <= addr+1;
      
      //shift data to the left
      queue[0] <= 0;
      queue[1] <= queue[0];
      queue[2] <= queue[1];
      queue[3] <= queue[2];
      queue[4] <= queue[3];
      queue[5] <= queue[4];
      queue[6] <= queue[5];
      queue[7] <= queue[6];
      queue[8] <= queue[7];


    end
    o_wb_rdt <= queue[5'b11111][7:0];
   end


endmodule