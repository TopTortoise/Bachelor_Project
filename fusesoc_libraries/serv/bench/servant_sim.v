`default_nettype none
module servant_sim
  (input wire  wb_clk,
   input wire  wb_rst,
   input wire i_data,
   output wire o_data,
   output wire to_pc,
   output wire q,
   output wire [3:0] q1
   );

   parameter memfile = "";
   parameter memsize = 8192;
   parameter with_csr = 1;
   parameter compressed = 0;
   parameter align = compressed;

   reg [1023:0] firmware_file;
   initial
     if ($value$plusargs("firmware=%s", firmware_file)) begin
	$display("Loading RAM from %0s", firmware_file);
	$readmemh(firmware_file, dut.ram.mem);
  end
  reg [5:0] counter = 0;
  always @(posedge wb_clk ) begin
    counter <= counter +1;
    if(counter == 32) counter <= 0;
  end

   service
     #(.memfile  (memfile),
       .memsize  (memsize),
       .sim      (1),
       .with_csr (with_csr),
       .compress (compressed[0:0]),
       .align    (align[0:0]))
   dut(wb_clk, q, q1, to_pc, i_data, o_data);

endmodule
