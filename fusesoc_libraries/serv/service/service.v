`default_nettype none
module service
(
 input wire  i_clk,
 output wire q,
 output wire[3:0] q1,
 
 //uart
 output wire to_pc,
 input wire i_data,
 output wire o_data
 );

   parameter memfile = "simple_BLE.hex";
   parameter memsize = 8192;
   parameter PLL = "NONE";
   parameter BITS = 8;
   parameter adr_LL = 'h00C00000;//lower limit
   parameter adr_UL = 'hC00F0000;//upper limit
   //ram
   wire [31:0]  wb_mem_adr;
   wire  wb_mem_cyc;
   wire  wb_mem_we;
   wire [3:0] wb_mem_sel;
   wire [31:0]  wb_mem_dat;
   wire [31:0] wb_mem_rdt;
   wire  wb_mem_ack;



  


  //servant wires
   wire  wb_clk;
   wire  wb_rst;
  //architecture 
   servant_clock_gen #(.PLL (PLL))
   clock_gen
     (.i_clk (i_clk),
      .o_clk (wb_clk),
      .o_rst (wb_rst));

   servant
     #(.memfile (memfile),
       .memsize (memsize))
   servant
     (.wb_clk (wb_clk),
      .wb_rst (wb_rst),
      
      .i_wb_mem_ack (wb_mem_ack),
      .wb_clk (wb_clk),
      .wb_rst (wb_rst),
      .i_wb_mem_adr (wb_mem_adr),
      .i_wb_mem_cyc (wb_mem_cyc),
      .i_wb_mem_we (wb_mem_we),
      .i_wb_mem_sel (wb_mem_sel),
      .i_wb_mem_dat (wb_mem_dat),
      .i_wb_mem_rdt (wb_mem_rdt),
      .q      (q));
  
  //keep for just in case
  //servant_ram
  //#(.memfile(memfile), .depth (memsize), .RESET_STRATEGY("MINI"))
  //  ram
  //  ( .i_wb_clk (wb_clk),
  //    .i_wb_rst (wb_rst),
  //    .i_wb_adr (wb_mem_adr[$clog2(memsize)-1:2]),
  //    .i_wb_cyc (wb_mem_cyc),
  //    .i_wb_we  (wb_mem_we) ,
  //    .i_wb_sel (wb_mem_sel),
  //    .i_wb_dat (wb_mem_dat),
  //    .o_wb_rdt (wb_mem_rdt),
  //    .o_wb_ack (wb_mem_ack)
  //  );

  servant_ram
  #(.memfile(memfile), .depth (memsize), .RESET_STRATEGY("MINI"))
    ram
    ( .i_wb_clk (wb_clk),
      .i_wb_rst (wb_rst),
      .i_wb_adr (adr[$clog2(memsize)-1:2]),
      .i_wb_cyc (cyc),
      .i_wb_we  (we) ,
      .i_wb_sel (sel),
      .i_wb_dat (dat),
      //.i_uart_dat(i_data),
      .o_wb_rdt (wb_mem_rdt),
      .o_wb_ack (wb_mem_ack),
     // .o_uart(o_data)
    );

  //uart_rx
  wire rx_done;
  wire rx_active;
  wire [BITS-1:0] from_ble;

  uart_rx rx_from_ble (
    .i_wb_clk(i_clk),
    .i_wb_dat(i_data),
    .rx_done(rx_done),
    .rx_active(rx_active),
    .o_wb_rdt(from_ble)
  );

  //uart_tx
  wire tx_active;
  wire [BITS-1:0]data_to_ble;
  wire tx_done;

  uart_tx tx_to_ble (
    .i_wb_clk(i_clk),
    .i_wb_dat(data_to_ble),
    .tx_done(tx_done),
    .tx_active(tx_active),
    .o_wb_rdt(o_data)
  );

  //only for testing
  //wire pc_active;
  //wire [BITS-1:0]pc_data;
  //wire pc_done;
  //reg [7:0] data_to;
  //
  //
  //uart_tx tx_to_pc (
  //  .clk(i_clk),
  //  .tx_data(data_to),
  //  .tx_done(pc_done),
  //  .tx_active(pc_active),
  //  .o_data(to_pc)
  //);

  assign to_pc = o_data;

  reg [31:0] my_adr = adr_LL;

  //united ram signals
  wire cyc;
  wire we;
  wire [3:0] sel;
  wire [31:0] dat;
  wire [31:0] adr;

  //choose when to save data into ram
  reg recieve = 0;

  always @(posedge wb_clk) begin
    //for testing sendnin data to pc
    //if (pc_active) begin
    //  pc_active <= 0;
    //end
    // if(recieve)begin
    //    pc_active <= 1;
    //    data_to <= wb_mem_rdt[7:0];
    //end

    //
    if(recieve) my_adr <= my_adr + 2;

    recieve <= rx_done;

    //if(adr == 'hC1000000)begin
    //  pc_active <= 1;
    //  data_to <= wb_mem_rdt[7:0];
    //end

    
    //so it doesnt send it forever
    if (tx_active) begin
      tx_active <= 0;
    end

    //tx
    if((adr == 'h00F00000))begin //send data to ble_tx_active
        data_to_ble <= wb_mem_rdt[7:0];
        tx_active <= 1;
    end

   //keep address in range
    if(my_adr>adr_UL)my_adr <= adr_LL;

    
  end
    //if recieve save BLE data if not recieve save dat from serv
     //assign recieve = rx_done;
     assign adr = wb_mem_adr&{32{!recieve}} | my_adr&{32{recieve}};
     assign cyc = wb_mem_cyc&{!recieve} | 1'b1&{recieve} ;
     assign we = wb_mem_we&{!recieve} | 1'b1&{recieve} ;
     assign sel = wb_mem_sel&{4{!recieve}} | 1'b1111&{4{recieve}} ;
     assign dat = wb_mem_dat&{32{!recieve}} | from_ble&{8{recieve}};

     assign q1 = 4'b1001;
  

endmodule
