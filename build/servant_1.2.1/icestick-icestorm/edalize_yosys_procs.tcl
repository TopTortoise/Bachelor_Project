proc load_plugins {} {
}

proc read_files {} {
read_verilog {src/serv_1.2.1/rtl/serv_bufreg.v}
read_verilog {src/serv_1.2.1/rtl/serv_bufreg2.v}
read_verilog {src/serv_1.2.1/rtl/serv_alu.v}
read_verilog {src/serv_1.2.1/rtl/serv_csr.v}
read_verilog {src/serv_1.2.1/rtl/serv_ctrl.v}
read_verilog {src/serv_1.2.1/rtl/serv_decode.v}
read_verilog {src/serv_1.2.1/rtl/serv_immdec.v}
read_verilog {src/serv_1.2.1/rtl/serv_mem_if.v}
read_verilog {src/serv_1.2.1/rtl/serv_rf_if.v}
read_verilog {src/serv_1.2.1/rtl/serv_rf_ram_if.v}
read_verilog {src/serv_1.2.1/rtl/serv_rf_ram.v}
read_verilog {src/serv_1.2.1/rtl/serv_state.v}
read_verilog {src/serv_1.2.1/rtl/serv_top.v}
read_verilog {src/serv_1.2.1/rtl/serv_rf_top.v}
read_verilog {src/serv_1.2.1/rtl/serv_aligner.v}
read_verilog {src/serv_1.2.1/rtl/serv_compdec.v}
read_verilog {src/servant_1.2.1/servant/servant_clock_gen.v}
read_verilog {src/servant_1.2.1/servant/servant_timer.v}
read_verilog {src/servant_1.2.1/servant/servant_gpio.v}
read_verilog {src/servant_1.2.1/servant/servant_arbiter.v}
read_verilog {src/servant_1.2.1/servant/servant_mux.v}
read_verilog {src/servant_1.2.1/servant/uart_tx.v}
read_verilog {src/servant_1.2.1/servant/uart_rx.v}
read_verilog {src/servant_1.2.1/servant/servant_ram.v}
read_verilog {src/servant_1.2.1/servant/servant.v}
read_verilog {src/servant_1.2.1/servant/ice40_pll.v}
read_verilog {src/servant_1.2.1/servant/service.v}
}

proc set_defines {} {
set defines {}

foreach d ${defines} {
  set key [lindex $d 0]
  set val [lindex $d 1]
  verilog_defines "-D$key=$val"
}}

proc set_incdirs {} {
verilog_defaults -add -Isrc/servant-icestick_pll_1.2.1}

proc set_params {} {
chparam -set memfile {"/home/paul/serv/fusesoc_libraries/serv/sw/simple_BLE.hex"} service
chparam -set memsize 7168 service
chparam -set PLL {"ICE40_CORE"} service}

proc synth {top} {
synth_ice40  -top $top
}

set top service
set name servant_1.2.1
