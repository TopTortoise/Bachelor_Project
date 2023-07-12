`default_nettype none
module servant_ram
  #(//Memory parameters wb = wishbone
    parameter depth = 256,
    parameter aw    = $clog2(depth),
    parameter RESET_STRATEGY = "",
    parameter UART_addr = 'h00F00000,
    parameter memfile = "")
   (input wire 		i_wb_clk,
    input wire 		i_wb_rst,
    input wire [aw-1:2] i_wb_adr,
    input wire [31:0] 	i_wb_dat,
    input wire [3:0] 	i_wb_sel,
    input wire 		i_wb_we,
    input wire 		i_wb_cyc,
    output reg [31:0] 	o_wb_rdt,
    output reg 		o_wb_ack,
    output wire o_uart);

    wire [3:0] 		we = {4{i_wb_we & i_wb_cyc}} & i_wb_sel;

    reg [31:0] 		mem [0:depth/4-1] /* verilator public */;

    wire [aw-3:0] 	addr = i_wb_adr[aw-1:2];
    //UART_TX
    //signals
    wire tx_active;
    wire data_to_ble;//probably dont need that
    wire tx_done;
    //module
      uart_tx tx(
        .i_wb_clk(i_wb_clk),
        .i_wb_rst(i_wb_rst),
        .tx_active(tx_active),
        .i_wb_dat(i_wb_dat[7:0]),
        .tx_done(tx_done),
        .o_wb_rdt(o_uart)
      );





    always @(posedge i_wb_clk)begin
      if (i_wb_rst & (RESET_STRATEGY != "NONE"))
        o_wb_ack <= 1'b0;
      else
        o_wb_ack <= i_wb_cyc & !o_wb_ack;
    end 

    always @(posedge i_wb_clk) begin
      //stops sending data forever
      if (tx_active) begin
        tx_active <= 0;
      end
      //send data when this address is written to
      if(addr == UART_addr && we[1] )begin
        tx_active <= 1;
      end

      
    end

    always @(posedge i_wb_clk) begin
       if (we[0]) mem[addr][7:0]   <= i_wb_dat[7:0];
       if (we[1]) mem[addr][15:8]  <= i_wb_dat[15:8];
       if (we[2]) mem[addr][23:16] <= i_wb_dat[23:16];
       if (we[3]) mem[addr][31:24] <= i_wb_dat[31:24];
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
