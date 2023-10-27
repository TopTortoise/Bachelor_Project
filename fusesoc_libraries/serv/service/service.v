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

   parameter memfile = "";
   parameter memsize = 8192;
   parameter PLL = "NONE";
   parameter reset_strategy = "MINI";
   parameter sim = 0;
   parameter with_csr = 1;
   parameter [0:0] compress = 0;
   parameter [0:0] align = compress;

   parameter BITS = 8;
   parameter adr_LL = 'h800;//lower limit allows 192 instructions
   parameter adr_UL = 'h1FFC;//upper limit also biggest possible address
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
     (.wb_clk (i_clk),
      .wb_rst (wb_rst),
      .i_wb_mem_ack (wb_mem_ack),
      .i_wb_mem_adr (wb_mem_adr),
      .i_wb_mem_cyc (wb_mem_cyc),
      .i_wb_mem_we (wb_mem_we),
      .i_wb_mem_sel (wb_mem_sel),
      .i_wb_mem_dat (wb_mem_dat),
      .i_wb_mem_rdt (wb_mem_rdt),
      .q      (q));
  
  servant_ram
  #(.memfile(memfile), .depth (memsize), .RESET_STRATEGY("MINI"))
    ram
    ( .i_wb_clk (i_clk),
      .i_wb_rst (wb_rst),
      .i_wb_adr (adr[$clog2(memsize)-1:2]),
      .i_wb_cyc (cyc),
      .i_wb_we  (we) ,
      .i_wb_sel (sel),
      .i_wb_dat (dat),
      .o_wb_rdt (wb_mem_rdt),
      .o_wb_ack (wb_mem_ack)
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
  reg tx_active;
  reg [BITS-1:0]data_to_ble;
  wire tx_done;

  uart_tx tx_to_ble (
    .i_wb_clk(i_clk),
    .i_wb_dat(data_to_ble),
    .tx_done(tx_done),
    .tx_active(tx_active),
    .o_wb_rdt(o_data)
  );

  //pc uart
  reg pc_active;
  wire [BITS-1:0]pc_data;
  wire pc_done;
  reg [7:0] data_to;


  uart_tx tx_to_pc (
    .i_wb_clk(i_clk),
    .i_wb_dat(data_to),
    .tx_done(pc_done),
    .tx_active(pc_active),
    .o_wb_rdt(to_pc)
  );

  //queue queue (
  //   .i_wb_clk(i_clk),
  //   .i_wb_dat(from_ble),
  //   .i_wb_mem_cyc(wb_mem_cyc),
  //   .i_wb_mem_we(wb_mem_we),
  //   .i_rx_done(rx_done),
  //   .i_wb_rst(wb_rst),
  //   .o_wb_rdt(queue_dat)
//
  //);
  //assign to_pc = i_data;

  reg [31:0] ble_data_adr = adr_LL;

  //united ram signals
  wire cyc;
  wire we;
  wire [3:0] sel;
  wire [31:0] dat;
  wire [31:0] adr;

  reg [3:0] ble_sel = 1;


  //wire [7:0] queue_dat;
  //wire write_queue;

  always @(posedge i_clk) begin
    if(wb_rst)begin
      pc_active <= 0;
      tx_active <= 0;
      ble_data_adr <= adr_LL;
    end
    else
    begin
    case (wb_mem_adr)
      'h00A00000:// tx -> pc
        begin
          if (wb_mem_cyc) begin
            data_to <= wb_mem_rdt[7:0];
            pc_active <= 1;
          end
        end
      'h00F00000:// tx -> BLE
        begin
          if (wb_mem_cyc) begin
            data_to <= wb_mem_rdt[7:0];
            pc_active <= 1;
            data_to_ble <= wb_mem_rdt[7:0];
            tx_active <= 1;
          end
        end
      default:
        begin
          tx_active <= 0;
          pc_active <= 0;
        end
    endcase


   //keep adress in range
    ble_data_adr <= rx_done? ble_data_adr+4 : ble_data_adr>adr_UL? adr_LL : ble_data_adr;
    //ble_sel      <= rx_done?ble_sel+ble_sel:ble_sel==0?1:ble_sel;
 
    end
  end
  
    assign  adr = rx_done? ble_data_adr           : wb_mem_adr;
    assign  cyc = rx_done? 1'b1                   : wb_mem_cyc;
    assign  we  = rx_done? 1'b1                   : wb_mem_we;
    assign  sel = rx_done? 4'b1111                : wb_mem_sel;
    assign  dat = rx_done? {{24{1'b0}},from_ble}  : wb_mem_dat;

   // assign  write_queue = rx_done|!wb_mem_we&!wb_mem_cyc?

    assign q1 = 4'b0101;
  

endmodule
