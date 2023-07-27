`default_nettype none
module servant_ram
  #(//Memory parameters wb = wishbone
    parameter depth = 256,
    parameter aw    = $clog2(depth),
    parameter RESET_STRATEGY = "",
    parameter memfile = "")
   (input wire 		i_wb_clk,
    input wire    uart_clk,//
    input wire 		i_wb_rst,
    input wire [aw-1:2] i_wb_adr,
    input wire [31:0] 	i_wb_dat,
    input wire [3:0] 	i_wb_sel,
    input wire 		i_wb_we,
    input wire 		i_wb_cyc,
    input wire i_uart_dat,//
    output reg [31:0] 	o_wb_rdt,
    //output wire o_uart,
    output reg 		o_wb_ack);

   wire [3:0] 		we = ({4{i_wb_we & i_wb_cyc}} & i_wb_sel);//&(!recieve) | 4'b1111&(recieve);

   reg [31:0] 		mem [0:depth/4-1] /* verilator public */;

   wire [aw-3:0] 	addr = i_wb_adr[aw-1:2];//&(!recieve) | my_adr[aw-1:2]&recieve ;

   wire[31:0] data = i_wb_dat;//&(!recieve) | {{24{1'b0}},from_ble&(!recieve)};
    //uart_rx
    wire rx_done;
    wire rx_active;
    wire [8-1:0] from_ble;
                      //'hFFFFFFFF
    reg [31:0] my_adr = 'h00B00000;


    uart_rx rx_from_ble (//uart_rx in here make it work
      .i_wb_clk(uart_clk),
      .i_wb_dat(i_uart_dat),
      .rx_done(rx_done),
      .rx_active(rx_active),
      .o_wb_rdt(from_ble)
    );
    reg recieve = 0;
   always @(posedge i_wb_clk ) begin
    recieve <= rx_done;
   end

   always @(posedge i_wb_clk)begin
     if (i_wb_rst & (RESET_STRATEGY != "NONE"))
       o_wb_ack <= 1'b0;
     else
       o_wb_ack <= i_wb_cyc & !o_wb_ack;
   end

   always @(posedge i_wb_clk) begin
      if (we[0]) mem[addr][7:0]   <= data[7:0];
      if (we[1]) mem[addr][15:8]  <= data[15:8];
      if (we[2]) mem[addr][23:16] <= data[23:16];
      if (we[3]) mem[addr][31:24] <= data[31:24];
      if (recieve) my_adr <= my_adr+2;
      o_wb_rdt <= mem[addr];
   end

   initial
     if(|memfile) begin
`ifndef ISE
	$display("Preloading %m from %s", memfile);
`endif
	$readmemh(memfile, mem);
     end

endmodule
