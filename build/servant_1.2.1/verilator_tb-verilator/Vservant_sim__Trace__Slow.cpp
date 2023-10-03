// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vservant_sim__Syms.h"


//======================

void Vservant_sim::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vservant_sim::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vservant_sim__Syms* __restrict vlSymsp = static_cast<Vservant_sim__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vservant_sim::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vservant_sim::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vservant_sim__Syms* __restrict vlSymsp = static_cast<Vservant_sim__Syms*>(userp);
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vservant_sim::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vservant_sim__Syms* __restrict vlSymsp = static_cast<Vservant_sim__Syms*>(userp);
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+240,"wb_clk", false,-1);
        tracep->declBit(c+241,"wb_rst", false,-1);
        tracep->declBit(c+242,"i_data", false,-1);
        tracep->declBit(c+243,"o_data", false,-1);
        tracep->declBit(c+244,"to_pc", false,-1);
        tracep->declBit(c+245,"q", false,-1);
        tracep->declBit(c+240,"servant_sim wb_clk", false,-1);
        tracep->declBit(c+241,"servant_sim wb_rst", false,-1);
        tracep->declBit(c+242,"servant_sim i_data", false,-1);
        tracep->declBit(c+1,"servant_sim o_data", false,-1);
        tracep->declBit(c+2,"servant_sim to_pc", false,-1);
        tracep->declBit(c+3,"servant_sim q", false,-1);
        tracep->declBus(c+246,"servant_sim memfile", false,-1, 0,0);
        tracep->declBus(c+247,"servant_sim compressed", false,-1, 31,0);
        tracep->declBus(c+247,"servant_sim align", false,-1, 31,0);
        tracep->declBit(c+240,"servant_sim dut i_clk", false,-1);
        tracep->declBit(c+3,"servant_sim dut q", false,-1);
        tracep->declBit(c+2,"servant_sim dut to_pc", false,-1);
        tracep->declBit(c+242,"servant_sim dut i_data", false,-1);
        tracep->declBit(c+1,"servant_sim dut o_data", false,-1);
        tracep->declBus(c+246,"servant_sim dut memfile", false,-1, 0,0);
        tracep->declBus(c+248,"servant_sim dut memsize", false,-1, 31,0);
        tracep->declBus(c+249,"servant_sim dut PLL", false,-1, 31,0);
        tracep->declBus(c+250,"servant_sim dut reset_strategy", false,-1, 31,0);
        tracep->declBus(c+251,"servant_sim dut sim", false,-1, 31,0);
        tracep->declBus(c+252,"servant_sim dut with_csr", false,-1, 31,0);
        tracep->declBus(c+246,"servant_sim dut compress", false,-1, 0,0);
        tracep->declBus(c+246,"servant_sim dut align", false,-1, 0,0);
        tracep->declBus(c+253,"servant_sim dut BITS", false,-1, 31,0);
        tracep->declBus(c+254,"servant_sim dut adr_LL", false,-1, 31,0);
        tracep->declBus(c+255,"servant_sim dut adr_UL", false,-1, 31,0);
        tracep->declBus(c+4,"servant_sim dut wb_mem_adr", false,-1, 31,0);
        tracep->declBit(c+5,"servant_sim dut wb_mem_cyc", false,-1);
        tracep->declBit(c+6,"servant_sim dut wb_mem_we", false,-1);
        tracep->declBus(c+7,"servant_sim dut wb_mem_sel", false,-1, 3,0);
        tracep->declBus(c+8,"servant_sim dut wb_mem_dat", false,-1, 31,0);
        tracep->declBus(c+9,"servant_sim dut wb_mem_rdt", false,-1, 31,0);
        tracep->declBit(c+10,"servant_sim dut wb_mem_ack", false,-1);
        tracep->declBit(c+240,"servant_sim dut wb_clk", false,-1);
        tracep->declBit(c+11,"servant_sim dut wb_rst", false,-1);
        tracep->declBit(c+12,"servant_sim dut rx_done", false,-1);
        tracep->declBit(c+13,"servant_sim dut rx_active", false,-1);
        tracep->declBus(c+14,"servant_sim dut from_ble", false,-1, 7,0);
        tracep->declBit(c+15,"servant_sim dut tx_active", false,-1);
        tracep->declBus(c+16,"servant_sim dut data_to_ble", false,-1, 7,0);
        tracep->declBit(c+17,"servant_sim dut tx_done", false,-1);
        tracep->declBit(c+18,"servant_sim dut pc_active", false,-1);
        tracep->declBus(c+256,"servant_sim dut pc_data", false,-1, 7,0);
        tracep->declBit(c+19,"servant_sim dut pc_done", false,-1);
        tracep->declBus(c+20,"servant_sim dut data_to", false,-1, 7,0);
        tracep->declBus(c+21,"servant_sim dut ble_data_adr", false,-1, 31,0);
        tracep->declBit(c+22,"servant_sim dut cyc", false,-1);
        tracep->declBit(c+23,"servant_sim dut we", false,-1);
        tracep->declBus(c+24,"servant_sim dut sel", false,-1, 3,0);
        tracep->declBus(c+25,"servant_sim dut dat", false,-1, 31,0);
        tracep->declBus(c+26,"servant_sim dut adr", false,-1, 31,0);
        tracep->declBit(c+240,"servant_sim dut clock_gen i_clk", false,-1);
        tracep->declBit(c+240,"servant_sim dut clock_gen o_clk", false,-1);
        tracep->declBit(c+11,"servant_sim dut clock_gen o_rst", false,-1);
        tracep->declArray(c+257,"servant_sim dut clock_gen PLL", false,-1, 79,0);
        tracep->declBus(c+27,"servant_sim dut clock_gen genblk2 rst_reg", false,-1, 4,0);
        tracep->declBit(c+240,"servant_sim dut servant wb_clk", false,-1);
        tracep->declBit(c+11,"servant_sim dut servant wb_rst", false,-1);
        tracep->declBit(c+10,"servant_sim dut servant i_wb_mem_ack", false,-1);
        tracep->declBus(c+4,"servant_sim dut servant i_wb_mem_adr", false,-1, 31,0);
        tracep->declBit(c+5,"servant_sim dut servant i_wb_mem_cyc", false,-1);
        tracep->declBit(c+6,"servant_sim dut servant i_wb_mem_we", false,-1);
        tracep->declBus(c+7,"servant_sim dut servant i_wb_mem_sel", false,-1, 3,0);
        tracep->declBus(c+8,"servant_sim dut servant i_wb_mem_dat", false,-1, 31,0);
        tracep->declBus(c+9,"servant_sim dut servant i_wb_mem_rdt", false,-1, 31,0);
        tracep->declBit(c+3,"servant_sim dut servant q", false,-1);
        tracep->declBus(c+246,"servant_sim dut servant memfile", false,-1, 0,0);
        tracep->declBus(c+248,"servant_sim dut servant memsize", false,-1, 31,0);
        tracep->declBus(c+250,"servant_sim dut servant reset_strategy", false,-1, 31,0);
        tracep->declBus(c+247,"servant_sim dut servant sim", false,-1, 31,0);
        tracep->declBus(c+251,"servant_sim dut servant with_csr", false,-1, 31,0);
        tracep->declBus(c+246,"servant_sim dut servant compress", false,-1, 0,0);
        tracep->declBus(c+246,"servant_sim dut servant align", false,-1, 0,0);
        tracep->declBit(c+28,"servant_sim dut servant timer_irq", false,-1);
        tracep->declBus(c+29,"servant_sim dut servant wb_ibus_adr", false,-1, 31,0);
        tracep->declBit(c+30,"servant_sim dut servant wb_ibus_cyc", false,-1);
        tracep->declBus(c+9,"servant_sim dut servant wb_ibus_rdt", false,-1, 31,0);
        tracep->declBit(c+31,"servant_sim dut servant wb_ibus_ack", false,-1);
        tracep->declBus(c+32,"servant_sim dut servant wb_dbus_adr", false,-1, 31,0);
        tracep->declBus(c+8,"servant_sim dut servant wb_dbus_dat", false,-1, 31,0);
        tracep->declBus(c+7,"servant_sim dut servant wb_dbus_sel", false,-1, 3,0);
        tracep->declBit(c+33,"servant_sim dut servant wb_dbus_we", false,-1);
        tracep->declBit(c+34,"servant_sim dut servant wb_dbus_cyc", false,-1);
        tracep->declBus(c+35,"servant_sim dut servant wb_dbus_rdt", false,-1, 31,0);
        tracep->declBit(c+36,"servant_sim dut servant wb_dbus_ack", false,-1);
        tracep->declBus(c+32,"servant_sim dut servant wb_dmem_adr", false,-1, 31,0);
        tracep->declBus(c+8,"servant_sim dut servant wb_dmem_dat", false,-1, 31,0);
        tracep->declBus(c+7,"servant_sim dut servant wb_dmem_sel", false,-1, 3,0);
        tracep->declBit(c+33,"servant_sim dut servant wb_dmem_we", false,-1);
        tracep->declBit(c+37,"servant_sim dut servant wb_dmem_cyc", false,-1);
        tracep->declBus(c+9,"servant_sim dut servant wb_dmem_rdt", false,-1, 31,0);
        tracep->declBit(c+38,"servant_sim dut servant wb_dmem_ack", false,-1);
        tracep->declBus(c+4,"servant_sim dut servant wb_mem_adr", false,-1, 31,0);
        tracep->declBus(c+8,"servant_sim dut servant wb_mem_dat", false,-1, 31,0);
        tracep->declBus(c+7,"servant_sim dut servant wb_mem_sel", false,-1, 3,0);
        tracep->declBit(c+6,"servant_sim dut servant wb_mem_we", false,-1);
        tracep->declBit(c+5,"servant_sim dut servant wb_mem_cyc", false,-1);
        tracep->declBus(c+9,"servant_sim dut servant wb_mem_rdt", false,-1, 31,0);
        tracep->declBit(c+10,"servant_sim dut servant wb_mem_ack", false,-1);
        tracep->declBit(c+39,"servant_sim dut servant wb_gpio_dat", false,-1);
        tracep->declBit(c+33,"servant_sim dut servant wb_gpio_we", false,-1);
        tracep->declBit(c+40,"servant_sim dut servant wb_gpio_cyc", false,-1);
        tracep->declBit(c+41,"servant_sim dut servant wb_gpio_rdt", false,-1);
        tracep->declBus(c+8,"servant_sim dut servant wb_timer_dat", false,-1, 31,0);
        tracep->declBit(c+33,"servant_sim dut servant wb_timer_we", false,-1);
        tracep->declBit(c+42,"servant_sim dut servant wb_timer_cyc", false,-1);
        tracep->declBus(c+43,"servant_sim dut servant wb_timer_rdt", false,-1, 31,0);
        tracep->declBus(c+44,"servant_sim dut servant mdu_rs1", false,-1, 31,0);
        tracep->declBus(c+8,"servant_sim dut servant mdu_rs2", false,-1, 31,0);
        tracep->declBus(c+45,"servant_sim dut servant mdu_op", false,-1, 2,0);
        tracep->declBit(c+260,"servant_sim dut servant mdu_valid", false,-1);
        tracep->declBus(c+261,"servant_sim dut servant mdu_rd", false,-1, 31,0);
        tracep->declBit(c+260,"servant_sim dut servant mdu_ready", false,-1);
        tracep->declBus(c+32,"servant_sim dut servant arbiter i_wb_cpu_dbus_adr", false,-1, 31,0);
        tracep->declBus(c+8,"servant_sim dut servant arbiter i_wb_cpu_dbus_dat", false,-1, 31,0);
        tracep->declBus(c+7,"servant_sim dut servant arbiter i_wb_cpu_dbus_sel", false,-1, 3,0);
        tracep->declBit(c+33,"servant_sim dut servant arbiter i_wb_cpu_dbus_we", false,-1);
        tracep->declBit(c+37,"servant_sim dut servant arbiter i_wb_cpu_dbus_cyc", false,-1);
        tracep->declBus(c+9,"servant_sim dut servant arbiter o_wb_cpu_dbus_rdt", false,-1, 31,0);
        tracep->declBit(c+38,"servant_sim dut servant arbiter o_wb_cpu_dbus_ack", false,-1);
        tracep->declBus(c+29,"servant_sim dut servant arbiter i_wb_cpu_ibus_adr", false,-1, 31,0);
        tracep->declBit(c+30,"servant_sim dut servant arbiter i_wb_cpu_ibus_cyc", false,-1);
        tracep->declBus(c+9,"servant_sim dut servant arbiter o_wb_cpu_ibus_rdt", false,-1, 31,0);
        tracep->declBit(c+31,"servant_sim dut servant arbiter o_wb_cpu_ibus_ack", false,-1);
        tracep->declBus(c+4,"servant_sim dut servant arbiter o_wb_cpu_adr", false,-1, 31,0);
        tracep->declBus(c+8,"servant_sim dut servant arbiter o_wb_cpu_dat", false,-1, 31,0);
        tracep->declBus(c+7,"servant_sim dut servant arbiter o_wb_cpu_sel", false,-1, 3,0);
        tracep->declBit(c+6,"servant_sim dut servant arbiter o_wb_cpu_we", false,-1);
        tracep->declBit(c+5,"servant_sim dut servant arbiter o_wb_cpu_cyc", false,-1);
        tracep->declBus(c+9,"servant_sim dut servant arbiter i_wb_cpu_rdt", false,-1, 31,0);
        tracep->declBit(c+10,"servant_sim dut servant arbiter i_wb_cpu_ack", false,-1);
        tracep->declBit(c+240,"servant_sim dut servant servant_mux i_clk", false,-1);
        tracep->declBit(c+11,"servant_sim dut servant servant_mux i_rst", false,-1);
        tracep->declBus(c+32,"servant_sim dut servant servant_mux i_wb_cpu_adr", false,-1, 31,0);
        tracep->declBus(c+8,"servant_sim dut servant servant_mux i_wb_cpu_dat", false,-1, 31,0);
        tracep->declBus(c+7,"servant_sim dut servant servant_mux i_wb_cpu_sel", false,-1, 3,0);
        tracep->declBit(c+33,"servant_sim dut servant servant_mux i_wb_cpu_we", false,-1);
        tracep->declBit(c+34,"servant_sim dut servant servant_mux i_wb_cpu_cyc", false,-1);
        tracep->declBus(c+35,"servant_sim dut servant servant_mux o_wb_cpu_rdt", false,-1, 31,0);
        tracep->declBit(c+36,"servant_sim dut servant servant_mux o_wb_cpu_ack", false,-1);
        tracep->declBus(c+32,"servant_sim dut servant servant_mux o_wb_mem_adr", false,-1, 31,0);
        tracep->declBus(c+8,"servant_sim dut servant servant_mux o_wb_mem_dat", false,-1, 31,0);
        tracep->declBus(c+7,"servant_sim dut servant servant_mux o_wb_mem_sel", false,-1, 3,0);
        tracep->declBit(c+33,"servant_sim dut servant servant_mux o_wb_mem_we", false,-1);
        tracep->declBit(c+37,"servant_sim dut servant servant_mux o_wb_mem_cyc", false,-1);
        tracep->declBus(c+9,"servant_sim dut servant servant_mux i_wb_mem_rdt", false,-1, 31,0);
        tracep->declBit(c+39,"servant_sim dut servant servant_mux o_wb_gpio_dat", false,-1);
        tracep->declBit(c+33,"servant_sim dut servant servant_mux o_wb_gpio_we", false,-1);
        tracep->declBit(c+40,"servant_sim dut servant servant_mux o_wb_gpio_cyc", false,-1);
        tracep->declBit(c+41,"servant_sim dut servant servant_mux i_wb_gpio_rdt", false,-1);
        tracep->declBus(c+8,"servant_sim dut servant servant_mux o_wb_timer_dat", false,-1, 31,0);
        tracep->declBit(c+33,"servant_sim dut servant servant_mux o_wb_timer_we", false,-1);
        tracep->declBit(c+42,"servant_sim dut servant servant_mux o_wb_timer_cyc", false,-1);
        tracep->declBus(c+43,"servant_sim dut servant servant_mux i_wb_timer_rdt", false,-1, 31,0);
        tracep->declBus(c+247,"servant_sim dut servant servant_mux sim", false,-1, 31,0);
        tracep->declBus(c+46,"servant_sim dut servant servant_mux s", false,-1, 1,0);
        tracep->declBit(c+240,"servant_sim dut servant gpio i_wb_clk", false,-1);
        tracep->declBit(c+39,"servant_sim dut servant gpio i_wb_dat", false,-1);
        tracep->declBit(c+33,"servant_sim dut servant gpio i_wb_we", false,-1);
        tracep->declBit(c+40,"servant_sim dut servant gpio i_wb_cyc", false,-1);
        tracep->declBit(c+41,"servant_sim dut servant gpio o_wb_rdt", false,-1);
        tracep->declBit(c+3,"servant_sim dut servant gpio o_gpio", false,-1);
        tracep->declBus(c+261,"servant_sim dut servant cpu RESET_PC", false,-1, 31,0);
        tracep->declBus(c+246,"servant_sim dut servant cpu COMPRESSED", false,-1, 0,0);
        tracep->declBus(c+246,"servant_sim dut servant cpu ALIGN", false,-1, 0,0);
        tracep->declBus(c+246,"servant_sim dut servant cpu MDU", false,-1, 0,0);
        tracep->declBus(c+251,"servant_sim dut servant cpu PRE_REGISTER", false,-1, 31,0);
        tracep->declBus(c+250,"servant_sim dut servant cpu RESET_STRATEGY", false,-1, 31,0);
        tracep->declBus(c+251,"servant_sim dut servant cpu WITH_CSR", false,-1, 31,0);
        tracep->declBus(c+262,"servant_sim dut servant cpu RF_WIDTH", false,-1, 31,0);
        tracep->declBus(c+263,"servant_sim dut servant cpu RF_L2D", false,-1, 31,0);
        tracep->declBit(c+240,"servant_sim dut servant cpu clk", false,-1);
        tracep->declBit(c+11,"servant_sim dut servant cpu i_rst", false,-1);
        tracep->declBit(c+28,"servant_sim dut servant cpu i_timer_irq", false,-1);
        tracep->declBus(c+29,"servant_sim dut servant cpu o_ibus_adr", false,-1, 31,0);
        tracep->declBit(c+30,"servant_sim dut servant cpu o_ibus_cyc", false,-1);
        tracep->declBus(c+9,"servant_sim dut servant cpu i_ibus_rdt", false,-1, 31,0);
        tracep->declBit(c+31,"servant_sim dut servant cpu i_ibus_ack", false,-1);
        tracep->declBus(c+32,"servant_sim dut servant cpu o_dbus_adr", false,-1, 31,0);
        tracep->declBus(c+8,"servant_sim dut servant cpu o_dbus_dat", false,-1, 31,0);
        tracep->declBus(c+7,"servant_sim dut servant cpu o_dbus_sel", false,-1, 3,0);
        tracep->declBit(c+33,"servant_sim dut servant cpu o_dbus_we", false,-1);
        tracep->declBit(c+34,"servant_sim dut servant cpu o_dbus_cyc", false,-1);
        tracep->declBus(c+35,"servant_sim dut servant cpu i_dbus_rdt", false,-1, 31,0);
        tracep->declBit(c+36,"servant_sim dut servant cpu i_dbus_ack", false,-1);
        tracep->declBus(c+44,"servant_sim dut servant cpu o_ext_rs1", false,-1, 31,0);
        tracep->declBus(c+8,"servant_sim dut servant cpu o_ext_rs2", false,-1, 31,0);
        tracep->declBus(c+45,"servant_sim dut servant cpu o_ext_funct3", false,-1, 2,0);
        tracep->declBus(c+261,"servant_sim dut servant cpu i_ext_rd", false,-1, 31,0);
        tracep->declBit(c+260,"servant_sim dut servant cpu i_ext_ready", false,-1);
        tracep->declBit(c+260,"servant_sim dut servant cpu o_mdu_valid", false,-1);
        tracep->declBus(c+264,"servant_sim dut servant cpu CSR_REGS", false,-1, 31,0);
        tracep->declBit(c+47,"servant_sim dut servant cpu rf_wreq", false,-1);
        tracep->declBit(c+48,"servant_sim dut servant cpu rf_rreq", false,-1);
        tracep->declBus(c+49,"servant_sim dut servant cpu wreg0", false,-1, 5,0);
        tracep->declBus(c+50,"servant_sim dut servant cpu wreg1", false,-1, 5,0);
        tracep->declBit(c+51,"servant_sim dut servant cpu wen0", false,-1);
        tracep->declBit(c+52,"servant_sim dut servant cpu wen1", false,-1);
        tracep->declBit(c+53,"servant_sim dut servant cpu wdata0", false,-1);
        tracep->declBit(c+54,"servant_sim dut servant cpu wdata1", false,-1);
        tracep->declBus(c+55,"servant_sim dut servant cpu rreg0", false,-1, 5,0);
        tracep->declBus(c+56,"servant_sim dut servant cpu rreg1", false,-1, 5,0);
        tracep->declBit(c+57,"servant_sim dut servant cpu rf_ready", false,-1);
        tracep->declBit(c+58,"servant_sim dut servant cpu rdata0", false,-1);
        tracep->declBit(c+59,"servant_sim dut servant cpu rdata1", false,-1);
        tracep->declBus(c+60,"servant_sim dut servant cpu waddr", false,-1, 9,0);
        tracep->declBus(c+61,"servant_sim dut servant cpu wdata", false,-1, 1,0);
        tracep->declBit(c+62,"servant_sim dut servant cpu wen", false,-1);
        tracep->declBus(c+63,"servant_sim dut servant cpu raddr", false,-1, 9,0);
        tracep->declBus(c+64,"servant_sim dut servant cpu rdata", false,-1, 1,0);
        tracep->declBus(c+262,"servant_sim dut servant cpu rf_ram_if width", false,-1, 31,0);
        tracep->declBus(c+250,"servant_sim dut servant cpu rf_ram_if reset_strategy", false,-1, 31,0);
        tracep->declBus(c+264,"servant_sim dut servant cpu rf_ram_if csr_regs", false,-1, 31,0);
        tracep->declBus(c+265,"servant_sim dut servant cpu rf_ram_if depth", false,-1, 31,0);
        tracep->declBus(c+251,"servant_sim dut servant cpu rf_ram_if l2w", false,-1, 31,0);
        tracep->declBit(c+240,"servant_sim dut servant cpu rf_ram_if i_clk", false,-1);
        tracep->declBit(c+11,"servant_sim dut servant cpu rf_ram_if i_rst", false,-1);
        tracep->declBit(c+47,"servant_sim dut servant cpu rf_ram_if i_wreq", false,-1);
        tracep->declBit(c+48,"servant_sim dut servant cpu rf_ram_if i_rreq", false,-1);
        tracep->declBit(c+57,"servant_sim dut servant cpu rf_ram_if o_ready", false,-1);
        tracep->declBus(c+49,"servant_sim dut servant cpu rf_ram_if i_wreg0", false,-1, 5,0);
        tracep->declBus(c+50,"servant_sim dut servant cpu rf_ram_if i_wreg1", false,-1, 5,0);
        tracep->declBit(c+51,"servant_sim dut servant cpu rf_ram_if i_wen0", false,-1);
        tracep->declBit(c+52,"servant_sim dut servant cpu rf_ram_if i_wen1", false,-1);
        tracep->declBit(c+53,"servant_sim dut servant cpu rf_ram_if i_wdata0", false,-1);
        tracep->declBit(c+54,"servant_sim dut servant cpu rf_ram_if i_wdata1", false,-1);
        tracep->declBus(c+55,"servant_sim dut servant cpu rf_ram_if i_rreg0", false,-1, 5,0);
        tracep->declBus(c+56,"servant_sim dut servant cpu rf_ram_if i_rreg1", false,-1, 5,0);
        tracep->declBit(c+58,"servant_sim dut servant cpu rf_ram_if o_rdata0", false,-1);
        tracep->declBit(c+59,"servant_sim dut servant cpu rf_ram_if o_rdata1", false,-1);
        tracep->declBus(c+60,"servant_sim dut servant cpu rf_ram_if o_waddr", false,-1, 9,0);
        tracep->declBus(c+61,"servant_sim dut servant cpu rf_ram_if o_wdata", false,-1, 1,0);
        tracep->declBit(c+62,"servant_sim dut servant cpu rf_ram_if o_wen", false,-1);
        tracep->declBus(c+63,"servant_sim dut servant cpu rf_ram_if o_raddr", false,-1, 9,0);
        tracep->declBus(c+64,"servant_sim dut servant cpu rf_ram_if i_rdata", false,-1, 1,0);
        tracep->declBit(c+65,"servant_sim dut servant cpu rf_ram_if rgnt", false,-1);
        tracep->declBus(c+66,"servant_sim dut servant cpu rf_ram_if rcnt", false,-1, 4,0);
        tracep->declBus(c+67,"servant_sim dut servant cpu rf_ram_if wcnt", false,-1, 4,0);
        tracep->declBus(c+68,"servant_sim dut servant cpu rf_ram_if wdata0_r", false,-1, 0,0);
        tracep->declBus(c+69,"servant_sim dut servant cpu rf_ram_if wdata1_r", false,-1, 1,0);
        tracep->declBit(c+70,"servant_sim dut servant cpu rf_ram_if wen0_r", false,-1);
        tracep->declBit(c+71,"servant_sim dut servant cpu rf_ram_if wen1_r", false,-1);
        tracep->declBit(c+72,"servant_sim dut servant cpu rf_ram_if wtrig0", false,-1);
        tracep->declBit(c+73,"servant_sim dut servant cpu rf_ram_if wtrig1", false,-1);
        tracep->declBus(c+74,"servant_sim dut servant cpu rf_ram_if wreg", false,-1, 5,0);
        tracep->declBit(c+75,"servant_sim dut servant cpu rf_ram_if rtrig0", false,-1);
        tracep->declBit(c+76,"servant_sim dut servant cpu rf_ram_if rtrig1", false,-1);
        tracep->declBus(c+77,"servant_sim dut servant cpu rf_ram_if rreg", false,-1, 5,0);
        tracep->declBus(c+78,"servant_sim dut servant cpu rf_ram_if rdata0", false,-1, 1,0);
        tracep->declBus(c+79,"servant_sim dut servant cpu rf_ram_if rdata1", false,-1, 0,0);
        tracep->declBit(c+80,"servant_sim dut servant cpu rf_ram_if rreq_r", false,-1);
        tracep->declBus(c+262,"servant_sim dut servant cpu rf_ram width", false,-1, 31,0);
        tracep->declBus(c+264,"servant_sim dut servant cpu rf_ram csr_regs", false,-1, 31,0);
        tracep->declBus(c+265,"servant_sim dut servant cpu rf_ram depth", false,-1, 31,0);
        tracep->declBit(c+240,"servant_sim dut servant cpu rf_ram i_clk", false,-1);
        tracep->declBus(c+60,"servant_sim dut servant cpu rf_ram i_waddr", false,-1, 9,0);
        tracep->declBus(c+61,"servant_sim dut servant cpu rf_ram i_wdata", false,-1, 1,0);
        tracep->declBit(c+62,"servant_sim dut servant cpu rf_ram i_wen", false,-1);
        tracep->declBus(c+63,"servant_sim dut servant cpu rf_ram i_raddr", false,-1, 9,0);
        tracep->declBus(c+64,"servant_sim dut servant cpu rf_ram o_rdata", false,-1, 1,0);
        tracep->declBus(c+81,"servant_sim dut servant cpu rf_ram rdata", false,-1, 1,0);
        tracep->declBit(c+82,"servant_sim dut servant cpu rf_ram regzero", false,-1);
        tracep->declBus(c+251,"servant_sim dut servant cpu cpu WITH_CSR", false,-1, 31,0);
        tracep->declBus(c+251,"servant_sim dut servant cpu cpu PRE_REGISTER", false,-1, 31,0);
        tracep->declBus(c+250,"servant_sim dut servant cpu cpu RESET_STRATEGY", false,-1, 31,0);
        tracep->declBus(c+261,"servant_sim dut servant cpu cpu RESET_PC", false,-1, 31,0);
        tracep->declBus(c+246,"servant_sim dut servant cpu cpu MDU", false,-1, 0,0);
        tracep->declBus(c+246,"servant_sim dut servant cpu cpu COMPRESSED", false,-1, 0,0);
        tracep->declBus(c+246,"servant_sim dut servant cpu cpu ALIGN", false,-1, 0,0);
        tracep->declBit(c+240,"servant_sim dut servant cpu cpu clk", false,-1);
        tracep->declBit(c+11,"servant_sim dut servant cpu cpu i_rst", false,-1);
        tracep->declBit(c+28,"servant_sim dut servant cpu cpu i_timer_irq", false,-1);
        tracep->declBit(c+48,"servant_sim dut servant cpu cpu o_rf_rreq", false,-1);
        tracep->declBit(c+47,"servant_sim dut servant cpu cpu o_rf_wreq", false,-1);
        tracep->declBit(c+57,"servant_sim dut servant cpu cpu i_rf_ready", false,-1);
        tracep->declBus(c+49,"servant_sim dut servant cpu cpu o_wreg0", false,-1, 5,0);
        tracep->declBus(c+50,"servant_sim dut servant cpu cpu o_wreg1", false,-1, 5,0);
        tracep->declBit(c+51,"servant_sim dut servant cpu cpu o_wen0", false,-1);
        tracep->declBit(c+52,"servant_sim dut servant cpu cpu o_wen1", false,-1);
        tracep->declBit(c+53,"servant_sim dut servant cpu cpu o_wdata0", false,-1);
        tracep->declBit(c+54,"servant_sim dut servant cpu cpu o_wdata1", false,-1);
        tracep->declBus(c+55,"servant_sim dut servant cpu cpu o_rreg0", false,-1, 5,0);
        tracep->declBus(c+56,"servant_sim dut servant cpu cpu o_rreg1", false,-1, 5,0);
        tracep->declBit(c+58,"servant_sim dut servant cpu cpu i_rdata0", false,-1);
        tracep->declBit(c+59,"servant_sim dut servant cpu cpu i_rdata1", false,-1);
        tracep->declBus(c+29,"servant_sim dut servant cpu cpu o_ibus_adr", false,-1, 31,0);
        tracep->declBit(c+30,"servant_sim dut servant cpu cpu o_ibus_cyc", false,-1);
        tracep->declBus(c+9,"servant_sim dut servant cpu cpu i_ibus_rdt", false,-1, 31,0);
        tracep->declBit(c+31,"servant_sim dut servant cpu cpu i_ibus_ack", false,-1);
        tracep->declBus(c+32,"servant_sim dut servant cpu cpu o_dbus_adr", false,-1, 31,0);
        tracep->declBus(c+8,"servant_sim dut servant cpu cpu o_dbus_dat", false,-1, 31,0);
        tracep->declBus(c+7,"servant_sim dut servant cpu cpu o_dbus_sel", false,-1, 3,0);
        tracep->declBit(c+33,"servant_sim dut servant cpu cpu o_dbus_we", false,-1);
        tracep->declBit(c+34,"servant_sim dut servant cpu cpu o_dbus_cyc", false,-1);
        tracep->declBus(c+35,"servant_sim dut servant cpu cpu i_dbus_rdt", false,-1, 31,0);
        tracep->declBit(c+36,"servant_sim dut servant cpu cpu i_dbus_ack", false,-1);
        tracep->declBus(c+45,"servant_sim dut servant cpu cpu o_ext_funct3", false,-1, 2,0);
        tracep->declBit(c+260,"servant_sim dut servant cpu cpu i_ext_ready", false,-1);
        tracep->declBus(c+261,"servant_sim dut servant cpu cpu i_ext_rd", false,-1, 31,0);
        tracep->declBus(c+44,"servant_sim dut servant cpu cpu o_ext_rs1", false,-1, 31,0);
        tracep->declBus(c+8,"servant_sim dut servant cpu cpu o_ext_rs2", false,-1, 31,0);
        tracep->declBit(c+260,"servant_sim dut servant cpu cpu o_mdu_valid", false,-1);
        tracep->declBus(c+83,"servant_sim dut servant cpu cpu rd_addr", false,-1, 4,0);
        tracep->declBus(c+84,"servant_sim dut servant cpu cpu rs1_addr", false,-1, 4,0);
        tracep->declBus(c+85,"servant_sim dut servant cpu cpu rs2_addr", false,-1, 4,0);
        tracep->declBus(c+86,"servant_sim dut servant cpu cpu immdec_ctrl", false,-1, 3,0);
        tracep->declBus(c+87,"servant_sim dut servant cpu cpu immdec_en", false,-1, 3,0);
        tracep->declBit(c+88,"servant_sim dut servant cpu cpu sh_right", false,-1);
        tracep->declBit(c+89,"servant_sim dut servant cpu cpu bne_or_bge", false,-1);
        tracep->declBit(c+90,"servant_sim dut servant cpu cpu cond_branch", false,-1);
        tracep->declBit(c+91,"servant_sim dut servant cpu cpu two_stage_op", false,-1);
        tracep->declBit(c+92,"servant_sim dut servant cpu cpu e_op", false,-1);
        tracep->declBit(c+93,"servant_sim dut servant cpu cpu ebreak", false,-1);
        tracep->declBit(c+94,"servant_sim dut servant cpu cpu branch_op", false,-1);
        tracep->declBit(c+95,"servant_sim dut servant cpu cpu shift_op", false,-1);
        tracep->declBit(c+96,"servant_sim dut servant cpu cpu slt_or_branch", false,-1);
        tracep->declBit(c+97,"servant_sim dut servant cpu cpu rd_op", false,-1);
        tracep->declBit(c+260,"servant_sim dut servant cpu cpu mdu_op", false,-1);
        tracep->declBit(c+98,"servant_sim dut servant cpu cpu rd_alu_en", false,-1);
        tracep->declBit(c+99,"servant_sim dut servant cpu cpu rd_csr_en", false,-1);
        tracep->declBit(c+100,"servant_sim dut servant cpu cpu rd_mem_en", false,-1);
        tracep->declBit(c+101,"servant_sim dut servant cpu cpu ctrl_rd", false,-1);
        tracep->declBit(c+102,"servant_sim dut servant cpu cpu alu_rd", false,-1);
        tracep->declBit(c+103,"servant_sim dut servant cpu cpu mem_rd", false,-1);
        tracep->declBit(c+104,"servant_sim dut servant cpu cpu csr_rd", false,-1);
        tracep->declBit(c+94,"servant_sim dut servant cpu cpu mtval_pc", false,-1);
        tracep->declBit(c+105,"servant_sim dut servant cpu cpu ctrl_pc_en", false,-1);
        tracep->declBit(c+106,"servant_sim dut servant cpu cpu jump", false,-1);
        tracep->declBit(c+107,"servant_sim dut servant cpu cpu jal_or_jalr", false,-1);
        tracep->declBit(c+108,"servant_sim dut servant cpu cpu utype", false,-1);
        tracep->declBit(c+109,"servant_sim dut servant cpu cpu mret", false,-1);
        tracep->declBit(c+110,"servant_sim dut servant cpu cpu imm", false,-1);
        tracep->declBit(c+111,"servant_sim dut servant cpu cpu trap", false,-1);
        tracep->declBit(c+112,"servant_sim dut servant cpu cpu pc_rel", false,-1);
        tracep->declBit(c+260,"servant_sim dut servant cpu cpu iscomp", false,-1);
        tracep->declBit(c+113,"servant_sim dut servant cpu cpu init", false,-1);
        tracep->declBit(c+114,"servant_sim dut servant cpu cpu cnt_en", false,-1);
        tracep->declBit(c+115,"servant_sim dut servant cpu cpu cnt0to3", false,-1);
        tracep->declBit(c+116,"servant_sim dut servant cpu cpu cnt12to31", false,-1);
        tracep->declBit(c+117,"servant_sim dut servant cpu cpu cnt0", false,-1);
        tracep->declBit(c+118,"servant_sim dut servant cpu cpu cnt1", false,-1);
        tracep->declBit(c+119,"servant_sim dut servant cpu cpu cnt2", false,-1);
        tracep->declBit(c+120,"servant_sim dut servant cpu cpu cnt3", false,-1);
        tracep->declBit(c+121,"servant_sim dut servant cpu cpu cnt7", false,-1);
        tracep->declBit(c+122,"servant_sim dut servant cpu cpu cnt_done", false,-1);
        tracep->declBit(c+123,"servant_sim dut servant cpu cpu bufreg_en", false,-1);
        tracep->declBit(c+124,"servant_sim dut servant cpu cpu bufreg_sh_signed", false,-1);
        tracep->declBit(c+125,"servant_sim dut servant cpu cpu bufreg_rs1_en", false,-1);
        tracep->declBit(c+126,"servant_sim dut servant cpu cpu bufreg_imm_en", false,-1);
        tracep->declBit(c+127,"servant_sim dut servant cpu cpu bufreg_clr_lsb", false,-1);
        tracep->declBit(c+128,"servant_sim dut servant cpu cpu bufreg_q", false,-1);
        tracep->declBit(c+129,"servant_sim dut servant cpu cpu bufreg2_q", false,-1);
        tracep->declBus(c+35,"servant_sim dut servant cpu cpu dbus_rdt", false,-1, 31,0);
        tracep->declBit(c+36,"servant_sim dut servant cpu cpu dbus_ack", false,-1);
        tracep->declBit(c+130,"servant_sim dut servant cpu cpu alu_sub", false,-1);
        tracep->declBus(c+131,"servant_sim dut servant cpu cpu alu_bool_op", false,-1, 1,0);
        tracep->declBit(c+132,"servant_sim dut servant cpu cpu alu_cmp_eq", false,-1);
        tracep->declBit(c+133,"servant_sim dut servant cpu cpu alu_cmp_sig", false,-1);
        tracep->declBit(c+134,"servant_sim dut servant cpu cpu alu_cmp", false,-1);
        tracep->declBus(c+135,"servant_sim dut servant cpu cpu alu_rd_sel", false,-1, 2,0);
        tracep->declBit(c+58,"servant_sim dut servant cpu cpu rs1", false,-1);
        tracep->declBit(c+59,"servant_sim dut servant cpu cpu rs2", false,-1);
        tracep->declBit(c+136,"servant_sim dut servant cpu cpu rd_en", false,-1);
        tracep->declBit(c+137,"servant_sim dut servant cpu cpu op_b", false,-1);
        tracep->declBit(c+33,"servant_sim dut servant cpu cpu op_b_sel", false,-1);
        tracep->declBit(c+138,"servant_sim dut servant cpu cpu mem_signed", false,-1);
        tracep->declBit(c+139,"servant_sim dut servant cpu cpu mem_word", false,-1);
        tracep->declBit(c+89,"servant_sim dut servant cpu cpu mem_half", false,-1);
        tracep->declBus(c+140,"servant_sim dut servant cpu cpu mem_bytecnt", false,-1, 1,0);
        tracep->declBit(c+141,"servant_sim dut servant cpu cpu sh_done", false,-1);
        tracep->declBit(c+142,"servant_sim dut servant cpu cpu sh_done_r", false,-1);
        tracep->declBit(c+143,"servant_sim dut servant cpu cpu byte_valid", false,-1);
        tracep->declBit(c+144,"servant_sim dut servant cpu cpu mem_misalign", false,-1);
        tracep->declBit(c+145,"servant_sim dut servant cpu cpu bad_pc", false,-1);
        tracep->declBit(c+146,"servant_sim dut servant cpu cpu csr_mstatus_en", false,-1);
        tracep->declBit(c+147,"servant_sim dut servant cpu cpu csr_mie_en", false,-1);
        tracep->declBit(c+148,"servant_sim dut servant cpu cpu csr_mcause_en", false,-1);
        tracep->declBus(c+131,"servant_sim dut servant cpu cpu csr_source", false,-1, 1,0);
        tracep->declBit(c+149,"servant_sim dut servant cpu cpu csr_imm", false,-1);
        tracep->declBit(c+88,"servant_sim dut servant cpu cpu csr_d_sel", false,-1);
        tracep->declBit(c+150,"servant_sim dut servant cpu cpu csr_en", false,-1);
        tracep->declBus(c+151,"servant_sim dut servant cpu cpu csr_addr", false,-1, 1,0);
        tracep->declBit(c+59,"servant_sim dut servant cpu cpu csr_pc", false,-1);
        tracep->declBit(c+152,"servant_sim dut servant cpu cpu csr_imm_en", false,-1);
        tracep->declBit(c+153,"servant_sim dut servant cpu cpu csr_in", false,-1);
        tracep->declBit(c+154,"servant_sim dut servant cpu cpu rf_csr_out", false,-1);
        tracep->declBit(c+155,"servant_sim dut servant cpu cpu dbus_en", false,-1);
        tracep->declBit(c+156,"servant_sim dut servant cpu cpu new_irq", false,-1);
        tracep->declBus(c+157,"servant_sim dut servant cpu cpu lsb", false,-1, 1,0);
        tracep->declBus(c+9,"servant_sim dut servant cpu cpu i_wb_rdt", false,-1, 31,0);
        tracep->declBus(c+29,"servant_sim dut servant cpu cpu wb_ibus_adr", false,-1, 31,0);
        tracep->declBit(c+30,"servant_sim dut servant cpu cpu wb_ibus_cyc", false,-1);
        tracep->declBus(c+9,"servant_sim dut servant cpu cpu wb_ibus_rdt", false,-1, 31,0);
        tracep->declBit(c+31,"servant_sim dut servant cpu cpu wb_ibus_ack", false,-1);
        tracep->declBus(c+250,"servant_sim dut servant cpu cpu state RESET_STRATEGY", false,-1, 31,0);
        tracep->declBus(c+266,"servant_sim dut servant cpu cpu state WITH_CSR", false,-1, 0,0);
        tracep->declBus(c+246,"servant_sim dut servant cpu cpu state ALIGN", false,-1, 0,0);
        tracep->declBus(c+246,"servant_sim dut servant cpu cpu state MDU", false,-1, 0,0);
        tracep->declBit(c+240,"servant_sim dut servant cpu cpu state i_clk", false,-1);
        tracep->declBit(c+11,"servant_sim dut servant cpu cpu state i_rst", false,-1);
        tracep->declBit(c+156,"servant_sim dut servant cpu cpu state i_new_irq", false,-1);
        tracep->declBit(c+134,"servant_sim dut servant cpu cpu state i_alu_cmp", false,-1);
        tracep->declBit(c+113,"servant_sim dut servant cpu cpu state o_init", false,-1);
        tracep->declBit(c+114,"servant_sim dut servant cpu cpu state o_cnt_en", false,-1);
        tracep->declBit(c+115,"servant_sim dut servant cpu cpu state o_cnt0to3", false,-1);
        tracep->declBit(c+116,"servant_sim dut servant cpu cpu state o_cnt12to31", false,-1);
        tracep->declBit(c+117,"servant_sim dut servant cpu cpu state o_cnt0", false,-1);
        tracep->declBit(c+118,"servant_sim dut servant cpu cpu state o_cnt1", false,-1);
        tracep->declBit(c+119,"servant_sim dut servant cpu cpu state o_cnt2", false,-1);
        tracep->declBit(c+120,"servant_sim dut servant cpu cpu state o_cnt3", false,-1);
        tracep->declBit(c+121,"servant_sim dut servant cpu cpu state o_cnt7", false,-1);
        tracep->declBit(c+122,"servant_sim dut servant cpu cpu state o_cnt_done", false,-1);
        tracep->declBit(c+123,"servant_sim dut servant cpu cpu state o_bufreg_en", false,-1);
        tracep->declBit(c+105,"servant_sim dut servant cpu cpu state o_ctrl_pc_en", false,-1);
        tracep->declBit(c+106,"servant_sim dut servant cpu cpu state o_ctrl_jump", false,-1);
        tracep->declBit(c+111,"servant_sim dut servant cpu cpu state o_ctrl_trap", false,-1);
        tracep->declBit(c+158,"servant_sim dut servant cpu cpu state i_ctrl_misalign", false,-1);
        tracep->declBit(c+141,"servant_sim dut servant cpu cpu state i_sh_done", false,-1);
        tracep->declBit(c+142,"servant_sim dut servant cpu cpu state i_sh_done_r", false,-1);
        tracep->declBus(c+140,"servant_sim dut servant cpu cpu state o_mem_bytecnt", false,-1, 1,0);
        tracep->declBit(c+144,"servant_sim dut servant cpu cpu state i_mem_misalign", false,-1);
        tracep->declBit(c+89,"servant_sim dut servant cpu cpu state i_bne_or_bge", false,-1);
        tracep->declBit(c+90,"servant_sim dut servant cpu cpu state i_cond_branch", false,-1);
        tracep->declBit(c+155,"servant_sim dut servant cpu cpu state i_dbus_en", false,-1);
        tracep->declBit(c+91,"servant_sim dut servant cpu cpu state i_two_stage_op", false,-1);
        tracep->declBit(c+94,"servant_sim dut servant cpu cpu state i_branch_op", false,-1);
        tracep->declBit(c+95,"servant_sim dut servant cpu cpu state i_shift_op", false,-1);
        tracep->declBit(c+88,"servant_sim dut servant cpu cpu state i_sh_right", false,-1);
        tracep->declBit(c+96,"servant_sim dut servant cpu cpu state i_slt_or_branch", false,-1);
        tracep->declBit(c+92,"servant_sim dut servant cpu cpu state i_e_op", false,-1);
        tracep->declBit(c+97,"servant_sim dut servant cpu cpu state i_rd_op", false,-1);
        tracep->declBit(c+260,"servant_sim dut servant cpu cpu state i_mdu_op", false,-1);
        tracep->declBit(c+260,"servant_sim dut servant cpu cpu state o_mdu_valid", false,-1);
        tracep->declBit(c+260,"servant_sim dut servant cpu cpu state i_mdu_ready", false,-1);
        tracep->declBit(c+34,"servant_sim dut servant cpu cpu state o_dbus_cyc", false,-1);
        tracep->declBit(c+36,"servant_sim dut servant cpu cpu state i_dbus_ack", false,-1);
        tracep->declBit(c+30,"servant_sim dut servant cpu cpu state o_ibus_cyc", false,-1);
        tracep->declBit(c+31,"servant_sim dut servant cpu cpu state i_ibus_ack", false,-1);
        tracep->declBit(c+48,"servant_sim dut servant cpu cpu state o_rf_rreq", false,-1);
        tracep->declBit(c+47,"servant_sim dut servant cpu cpu state o_rf_wreq", false,-1);
        tracep->declBit(c+57,"servant_sim dut servant cpu cpu state i_rf_ready", false,-1);
        tracep->declBit(c+136,"servant_sim dut servant cpu cpu state o_rf_rd_en", false,-1);
        tracep->declBit(c+159,"servant_sim dut servant cpu cpu state stage_two_req", false,-1);
        tracep->declBit(c+160,"servant_sim dut servant cpu cpu state init_done", false,-1);
        tracep->declBit(c+161,"servant_sim dut servant cpu cpu state misalign_trap_sync", false,-1);
        tracep->declBus(c+162,"servant_sim dut servant cpu cpu state o_cnt", false,-1, 4,2);
        tracep->declBus(c+163,"servant_sim dut servant cpu cpu state o_cnt_r", false,-1, 3,0);
        tracep->declBit(c+164,"servant_sim dut servant cpu cpu state ibus_cyc", false,-1);
        tracep->declBit(c+165,"servant_sim dut servant cpu cpu state take_branch", false,-1);
        tracep->declBit(c+161,"servant_sim dut servant cpu cpu state genblk1 misalign_trap_sync_r", false,-1);
        tracep->declBit(c+166,"servant_sim dut servant cpu cpu state genblk1 trap_pending", false,-1);
        tracep->declBus(c+266,"servant_sim dut servant cpu cpu decode PRE_REGISTER", false,-1, 0,0);
        tracep->declBus(c+246,"servant_sim dut servant cpu cpu decode MDU", false,-1, 0,0);
        tracep->declBit(c+240,"servant_sim dut servant cpu cpu decode clk", false,-1);
        tracep->declBus(c+167,"servant_sim dut servant cpu cpu decode i_wb_rdt", false,-1, 31,2);
        tracep->declBit(c+31,"servant_sim dut servant cpu cpu decode i_wb_en", false,-1);
        tracep->declBit(c+88,"servant_sim dut servant cpu cpu decode o_sh_right", false,-1);
        tracep->declBit(c+89,"servant_sim dut servant cpu cpu decode o_bne_or_bge", false,-1);
        tracep->declBit(c+90,"servant_sim dut servant cpu cpu decode o_cond_branch", false,-1);
        tracep->declBit(c+92,"servant_sim dut servant cpu cpu decode o_e_op", false,-1);
        tracep->declBit(c+93,"servant_sim dut servant cpu cpu decode o_ebreak", false,-1);
        tracep->declBit(c+94,"servant_sim dut servant cpu cpu decode o_branch_op", false,-1);
        tracep->declBit(c+95,"servant_sim dut servant cpu cpu decode o_shift_op", false,-1);
        tracep->declBit(c+96,"servant_sim dut servant cpu cpu decode o_slt_or_branch", false,-1);
        tracep->declBit(c+97,"servant_sim dut servant cpu cpu decode o_rd_op", false,-1);
        tracep->declBit(c+91,"servant_sim dut servant cpu cpu decode o_two_stage_op", false,-1);
        tracep->declBit(c+155,"servant_sim dut servant cpu cpu decode o_dbus_en", false,-1);
        tracep->declBit(c+260,"servant_sim dut servant cpu cpu decode o_mdu_op", false,-1);
        tracep->declBus(c+45,"servant_sim dut servant cpu cpu decode o_ext_funct3", false,-1, 2,0);
        tracep->declBit(c+125,"servant_sim dut servant cpu cpu decode o_bufreg_rs1_en", false,-1);
        tracep->declBit(c+126,"servant_sim dut servant cpu cpu decode o_bufreg_imm_en", false,-1);
        tracep->declBit(c+127,"servant_sim dut servant cpu cpu decode o_bufreg_clr_lsb", false,-1);
        tracep->declBit(c+124,"servant_sim dut servant cpu cpu decode o_bufreg_sh_signed", false,-1);
        tracep->declBit(c+107,"servant_sim dut servant cpu cpu decode o_ctrl_jal_or_jalr", false,-1);
        tracep->declBit(c+108,"servant_sim dut servant cpu cpu decode o_ctrl_utype", false,-1);
        tracep->declBit(c+112,"servant_sim dut servant cpu cpu decode o_ctrl_pc_rel", false,-1);
        tracep->declBit(c+109,"servant_sim dut servant cpu cpu decode o_ctrl_mret", false,-1);
        tracep->declBit(c+130,"servant_sim dut servant cpu cpu decode o_alu_sub", false,-1);
        tracep->declBus(c+131,"servant_sim dut servant cpu cpu decode o_alu_bool_op", false,-1, 1,0);
        tracep->declBit(c+132,"servant_sim dut servant cpu cpu decode o_alu_cmp_eq", false,-1);
        tracep->declBit(c+133,"servant_sim dut servant cpu cpu decode o_alu_cmp_sig", false,-1);
        tracep->declBus(c+135,"servant_sim dut servant cpu cpu decode o_alu_rd_sel", false,-1, 2,0);
        tracep->declBit(c+138,"servant_sim dut servant cpu cpu decode o_mem_signed", false,-1);
        tracep->declBit(c+139,"servant_sim dut servant cpu cpu decode o_mem_word", false,-1);
        tracep->declBit(c+89,"servant_sim dut servant cpu cpu decode o_mem_half", false,-1);
        tracep->declBit(c+33,"servant_sim dut servant cpu cpu decode o_mem_cmd", false,-1);
        tracep->declBit(c+150,"servant_sim dut servant cpu cpu decode o_csr_en", false,-1);
        tracep->declBus(c+151,"servant_sim dut servant cpu cpu decode o_csr_addr", false,-1, 1,0);
        tracep->declBit(c+146,"servant_sim dut servant cpu cpu decode o_csr_mstatus_en", false,-1);
        tracep->declBit(c+147,"servant_sim dut servant cpu cpu decode o_csr_mie_en", false,-1);
        tracep->declBit(c+148,"servant_sim dut servant cpu cpu decode o_csr_mcause_en", false,-1);
        tracep->declBus(c+131,"servant_sim dut servant cpu cpu decode o_csr_source", false,-1, 1,0);
        tracep->declBit(c+88,"servant_sim dut servant cpu cpu decode o_csr_d_sel", false,-1);
        tracep->declBit(c+152,"servant_sim dut servant cpu cpu decode o_csr_imm_en", false,-1);
        tracep->declBit(c+94,"servant_sim dut servant cpu cpu decode o_mtval_pc", false,-1);
        tracep->declBus(c+86,"servant_sim dut servant cpu cpu decode o_immdec_ctrl", false,-1, 3,0);
        tracep->declBus(c+87,"servant_sim dut servant cpu cpu decode o_immdec_en", false,-1, 3,0);
        tracep->declBit(c+33,"servant_sim dut servant cpu cpu decode o_op_b_source", false,-1);
        tracep->declBit(c+100,"servant_sim dut servant cpu cpu decode o_rd_mem_en", false,-1);
        tracep->declBit(c+99,"servant_sim dut servant cpu cpu decode o_rd_csr_en", false,-1);
        tracep->declBit(c+98,"servant_sim dut servant cpu cpu decode o_rd_alu_en", false,-1);
        tracep->declBus(c+168,"servant_sim dut servant cpu cpu decode opcode", false,-1, 4,0);
        tracep->declBus(c+45,"servant_sim dut servant cpu cpu decode funct3", false,-1, 2,0);
        tracep->declBit(c+93,"servant_sim dut servant cpu cpu decode op20", false,-1);
        tracep->declBit(c+169,"servant_sim dut servant cpu cpu decode op21", false,-1);
        tracep->declBit(c+170,"servant_sim dut servant cpu cpu decode op22", false,-1);
        tracep->declBit(c+171,"servant_sim dut servant cpu cpu decode op26", false,-1);
        tracep->declBit(c+172,"servant_sim dut servant cpu cpu decode imm25", false,-1);
        tracep->declBit(c+124,"servant_sim dut servant cpu cpu decode imm30", false,-1);
        tracep->declBit(c+260,"servant_sim dut servant cpu cpu decode co_mdu_op", false,-1);
        tracep->declBit(c+91,"servant_sim dut servant cpu cpu decode co_two_stage_op", false,-1);
        tracep->declBit(c+95,"servant_sim dut servant cpu cpu decode co_shift_op", false,-1);
        tracep->declBit(c+96,"servant_sim dut servant cpu cpu decode co_slt_or_branch", false,-1);
        tracep->declBit(c+94,"servant_sim dut servant cpu cpu decode co_branch_op", false,-1);
        tracep->declBit(c+155,"servant_sim dut servant cpu cpu decode co_dbus_en", false,-1);
        tracep->declBit(c+94,"servant_sim dut servant cpu cpu decode co_mtval_pc", false,-1);
        tracep->declBit(c+139,"servant_sim dut servant cpu cpu decode co_mem_word", false,-1);
        tracep->declBit(c+98,"servant_sim dut servant cpu cpu decode co_rd_alu_en", false,-1);
        tracep->declBit(c+100,"servant_sim dut servant cpu cpu decode co_rd_mem_en", false,-1);
        tracep->declBus(c+45,"servant_sim dut servant cpu cpu decode co_ext_funct3", false,-1, 2,0);
        tracep->declBit(c+125,"servant_sim dut servant cpu cpu decode co_bufreg_rs1_en", false,-1);
        tracep->declBit(c+126,"servant_sim dut servant cpu cpu decode co_bufreg_imm_en", false,-1);
        tracep->declBit(c+127,"servant_sim dut servant cpu cpu decode co_bufreg_clr_lsb", false,-1);
        tracep->declBit(c+90,"servant_sim dut servant cpu cpu decode co_cond_branch", false,-1);
        tracep->declBit(c+108,"servant_sim dut servant cpu cpu decode co_ctrl_utype", false,-1);
        tracep->declBit(c+107,"servant_sim dut servant cpu cpu decode co_ctrl_jal_or_jalr", false,-1);
        tracep->declBit(c+112,"servant_sim dut servant cpu cpu decode co_ctrl_pc_rel", false,-1);
        tracep->declBit(c+97,"servant_sim dut servant cpu cpu decode co_rd_op", false,-1);
        tracep->declBit(c+88,"servant_sim dut servant cpu cpu decode co_sh_right", false,-1);
        tracep->declBit(c+89,"servant_sim dut servant cpu cpu decode co_bne_or_bge", false,-1);
        tracep->declBit(c+99,"servant_sim dut servant cpu cpu decode csr_op", false,-1);
        tracep->declBit(c+93,"servant_sim dut servant cpu cpu decode co_ebreak", false,-1);
        tracep->declBit(c+109,"servant_sim dut servant cpu cpu decode co_ctrl_mret", false,-1);
        tracep->declBit(c+92,"servant_sim dut servant cpu cpu decode co_e_op", false,-1);
        tracep->declBit(c+124,"servant_sim dut servant cpu cpu decode co_bufreg_sh_signed", false,-1);
        tracep->declBit(c+130,"servant_sim dut servant cpu cpu decode co_alu_sub", false,-1);
        tracep->declBit(c+173,"servant_sim dut servant cpu cpu decode csr_valid", false,-1);
        tracep->declBit(c+99,"servant_sim dut servant cpu cpu decode co_rd_csr_en", false,-1);
        tracep->declBit(c+150,"servant_sim dut servant cpu cpu decode co_csr_en", false,-1);
        tracep->declBit(c+146,"servant_sim dut servant cpu cpu decode co_csr_mstatus_en", false,-1);
        tracep->declBit(c+147,"servant_sim dut servant cpu cpu decode co_csr_mie_en", false,-1);
        tracep->declBit(c+148,"servant_sim dut servant cpu cpu decode co_csr_mcause_en", false,-1);
        tracep->declBus(c+131,"servant_sim dut servant cpu cpu decode co_csr_source", false,-1, 1,0);
        tracep->declBit(c+88,"servant_sim dut servant cpu cpu decode co_csr_d_sel", false,-1);
        tracep->declBit(c+152,"servant_sim dut servant cpu cpu decode co_csr_imm_en", false,-1);
        tracep->declBus(c+151,"servant_sim dut servant cpu cpu decode co_csr_addr", false,-1, 1,0);
        tracep->declBit(c+132,"servant_sim dut servant cpu cpu decode co_alu_cmp_eq", false,-1);
        tracep->declBit(c+133,"servant_sim dut servant cpu cpu decode co_alu_cmp_sig", false,-1);
        tracep->declBit(c+33,"servant_sim dut servant cpu cpu decode co_mem_cmd", false,-1);
        tracep->declBit(c+138,"servant_sim dut servant cpu cpu decode co_mem_signed", false,-1);
        tracep->declBit(c+89,"servant_sim dut servant cpu cpu decode co_mem_half", false,-1);
        tracep->declBus(c+131,"servant_sim dut servant cpu cpu decode co_alu_bool_op", false,-1, 1,0);
        tracep->declBus(c+86,"servant_sim dut servant cpu cpu decode co_immdec_ctrl", false,-1, 3,0);
        tracep->declBus(c+87,"servant_sim dut servant cpu cpu decode co_immdec_en", false,-1, 3,0);
        tracep->declBus(c+135,"servant_sim dut servant cpu cpu decode co_alu_rd_sel", false,-1, 2,0);
        tracep->declBit(c+33,"servant_sim dut servant cpu cpu decode co_op_b_source", false,-1);
        tracep->declBus(c+251,"servant_sim dut servant cpu cpu immdec SHARED_RFADDR_IMM_REGS", false,-1, 31,0);
        tracep->declBit(c+240,"servant_sim dut servant cpu cpu immdec i_clk", false,-1);
        tracep->declBit(c+114,"servant_sim dut servant cpu cpu immdec i_cnt_en", false,-1);
        tracep->declBit(c+122,"servant_sim dut servant cpu cpu immdec i_cnt_done", false,-1);
        tracep->declBus(c+87,"servant_sim dut servant cpu cpu immdec i_immdec_en", false,-1, 3,0);
        tracep->declBit(c+152,"servant_sim dut servant cpu cpu immdec i_csr_imm_en", false,-1);
        tracep->declBus(c+86,"servant_sim dut servant cpu cpu immdec i_ctrl", false,-1, 3,0);
        tracep->declBus(c+83,"servant_sim dut servant cpu cpu immdec o_rd_addr", false,-1, 4,0);
        tracep->declBus(c+84,"servant_sim dut servant cpu cpu immdec o_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+85,"servant_sim dut servant cpu cpu immdec o_rs2_addr", false,-1, 4,0);
        tracep->declBit(c+149,"servant_sim dut servant cpu cpu immdec o_csr_imm", false,-1);
        tracep->declBit(c+110,"servant_sim dut servant cpu cpu immdec o_imm", false,-1);
        tracep->declBit(c+31,"servant_sim dut servant cpu cpu immdec i_wb_en", false,-1);
        tracep->declBus(c+174,"servant_sim dut servant cpu cpu immdec i_wb_rdt", false,-1, 31,7);
        tracep->declBit(c+175,"servant_sim dut servant cpu cpu immdec imm31", false,-1);
        tracep->declBus(c+176,"servant_sim dut servant cpu cpu immdec imm19_12_20", false,-1, 8,0);
        tracep->declBit(c+177,"servant_sim dut servant cpu cpu immdec imm7", false,-1);
        tracep->declBus(c+178,"servant_sim dut servant cpu cpu immdec imm30_25", false,-1, 5,0);
        tracep->declBus(c+85,"servant_sim dut servant cpu cpu immdec imm24_20", false,-1, 4,0);
        tracep->declBus(c+83,"servant_sim dut servant cpu cpu immdec imm11_7", false,-1, 4,0);
        tracep->declBit(c+179,"servant_sim dut servant cpu cpu immdec signbit", false,-1);
        tracep->declBus(c+246,"servant_sim dut servant cpu cpu bufreg MDU", false,-1, 0,0);
        tracep->declBit(c+240,"servant_sim dut servant cpu cpu bufreg i_clk", false,-1);
        tracep->declBit(c+117,"servant_sim dut servant cpu cpu bufreg i_cnt0", false,-1);
        tracep->declBit(c+118,"servant_sim dut servant cpu cpu bufreg i_cnt1", false,-1);
        tracep->declBit(c+123,"servant_sim dut servant cpu cpu bufreg i_en", false,-1);
        tracep->declBit(c+113,"servant_sim dut servant cpu cpu bufreg i_init", false,-1);
        tracep->declBit(c+260,"servant_sim dut servant cpu cpu bufreg i_mdu_op", false,-1);
        tracep->declBus(c+157,"servant_sim dut servant cpu cpu bufreg o_lsb", false,-1, 1,0);
        tracep->declBit(c+125,"servant_sim dut servant cpu cpu bufreg i_rs1_en", false,-1);
        tracep->declBit(c+126,"servant_sim dut servant cpu cpu bufreg i_imm_en", false,-1);
        tracep->declBit(c+127,"servant_sim dut servant cpu cpu bufreg i_clr_lsb", false,-1);
        tracep->declBit(c+124,"servant_sim dut servant cpu cpu bufreg i_sh_signed", false,-1);
        tracep->declBit(c+58,"servant_sim dut servant cpu cpu bufreg i_rs1", false,-1);
        tracep->declBit(c+110,"servant_sim dut servant cpu cpu bufreg i_imm", false,-1);
        tracep->declBit(c+128,"servant_sim dut servant cpu cpu bufreg o_q", false,-1);
        tracep->declBus(c+32,"servant_sim dut servant cpu cpu bufreg o_dbus_adr", false,-1, 31,0);
        tracep->declBus(c+44,"servant_sim dut servant cpu cpu bufreg o_ext_rs1", false,-1, 31,0);
        tracep->declBit(c+180,"servant_sim dut servant cpu cpu bufreg c", false,-1);
        tracep->declBit(c+181,"servant_sim dut servant cpu cpu bufreg q", false,-1);
        tracep->declBit(c+182,"servant_sim dut servant cpu cpu bufreg c_r", false,-1);
        tracep->declBus(c+183,"servant_sim dut servant cpu cpu bufreg data", false,-1, 31,2);
        tracep->declBus(c+157,"servant_sim dut servant cpu cpu bufreg lsb", false,-1, 1,0);
        tracep->declBit(c+184,"servant_sim dut servant cpu cpu bufreg clr_lsb", false,-1);
        tracep->declBit(c+240,"servant_sim dut servant cpu cpu bufreg2 i_clk", false,-1);
        tracep->declBit(c+114,"servant_sim dut servant cpu cpu bufreg2 i_en", false,-1);
        tracep->declBit(c+113,"servant_sim dut servant cpu cpu bufreg2 i_init", false,-1);
        tracep->declBit(c+122,"servant_sim dut servant cpu cpu bufreg2 i_cnt_done", false,-1);
        tracep->declBus(c+157,"servant_sim dut servant cpu cpu bufreg2 i_lsb", false,-1, 1,0);
        tracep->declBit(c+143,"servant_sim dut servant cpu cpu bufreg2 i_byte_valid", false,-1);
        tracep->declBit(c+141,"servant_sim dut servant cpu cpu bufreg2 o_sh_done", false,-1);
        tracep->declBit(c+142,"servant_sim dut servant cpu cpu bufreg2 o_sh_done_r", false,-1);
        tracep->declBit(c+33,"servant_sim dut servant cpu cpu bufreg2 i_op_b_sel", false,-1);
        tracep->declBit(c+95,"servant_sim dut servant cpu cpu bufreg2 i_shift_op", false,-1);
        tracep->declBit(c+59,"servant_sim dut servant cpu cpu bufreg2 i_rs2", false,-1);
        tracep->declBit(c+110,"servant_sim dut servant cpu cpu bufreg2 i_imm", false,-1);
        tracep->declBit(c+137,"servant_sim dut servant cpu cpu bufreg2 o_op_b", false,-1);
        tracep->declBit(c+129,"servant_sim dut servant cpu cpu bufreg2 o_q", false,-1);
        tracep->declBus(c+8,"servant_sim dut servant cpu cpu bufreg2 o_dat", false,-1, 31,0);
        tracep->declBit(c+36,"servant_sim dut servant cpu cpu bufreg2 i_load", false,-1);
        tracep->declBus(c+35,"servant_sim dut servant cpu cpu bufreg2 i_dat", false,-1, 31,0);
        tracep->declBus(c+8,"servant_sim dut servant cpu cpu bufreg2 dat", false,-1, 31,0);
        tracep->declBit(c+185,"servant_sim dut servant cpu cpu bufreg2 dat_en", false,-1);
        tracep->declBus(c+186,"servant_sim dut servant cpu cpu bufreg2 dat_shamt", false,-1, 5,0);
        tracep->declBus(c+250,"servant_sim dut servant cpu cpu ctrl RESET_STRATEGY", false,-1, 31,0);
        tracep->declBus(c+261,"servant_sim dut servant cpu cpu ctrl RESET_PC", false,-1, 31,0);
        tracep->declBus(c+251,"servant_sim dut servant cpu cpu ctrl WITH_CSR", false,-1, 31,0);
        tracep->declBit(c+240,"servant_sim dut servant cpu cpu ctrl clk", false,-1);
        tracep->declBit(c+11,"servant_sim dut servant cpu cpu ctrl i_rst", false,-1);
        tracep->declBit(c+105,"servant_sim dut servant cpu cpu ctrl i_pc_en", false,-1);
        tracep->declBit(c+116,"servant_sim dut servant cpu cpu ctrl i_cnt12to31", false,-1);
        tracep->declBit(c+117,"servant_sim dut servant cpu cpu ctrl i_cnt0", false,-1);
        tracep->declBit(c+118,"servant_sim dut servant cpu cpu ctrl i_cnt1", false,-1);
        tracep->declBit(c+119,"servant_sim dut servant cpu cpu ctrl i_cnt2", false,-1);
        tracep->declBit(c+106,"servant_sim dut servant cpu cpu ctrl i_jump", false,-1);
        tracep->declBit(c+107,"servant_sim dut servant cpu cpu ctrl i_jal_or_jalr", false,-1);
        tracep->declBit(c+108,"servant_sim dut servant cpu cpu ctrl i_utype", false,-1);
        tracep->declBit(c+112,"servant_sim dut servant cpu cpu ctrl i_pc_rel", false,-1);
        tracep->declBit(c+187,"servant_sim dut servant cpu cpu ctrl i_trap", false,-1);
        tracep->declBit(c+260,"servant_sim dut servant cpu cpu ctrl i_iscomp", false,-1);
        tracep->declBit(c+110,"servant_sim dut servant cpu cpu ctrl i_imm", false,-1);
        tracep->declBit(c+128,"servant_sim dut servant cpu cpu ctrl i_buf", false,-1);
        tracep->declBit(c+59,"servant_sim dut servant cpu cpu ctrl i_csr_pc", false,-1);
        tracep->declBit(c+101,"servant_sim dut servant cpu cpu ctrl o_rd", false,-1);
        tracep->declBit(c+145,"servant_sim dut servant cpu cpu ctrl o_bad_pc", false,-1);
        tracep->declBus(c+29,"servant_sim dut servant cpu cpu ctrl o_ibus_adr", false,-1, 31,0);
        tracep->declBit(c+188,"servant_sim dut servant cpu cpu ctrl pc_plus_4", false,-1);
        tracep->declBit(c+189,"servant_sim dut servant cpu cpu ctrl pc_plus_4_cy", false,-1);
        tracep->declBit(c+190,"servant_sim dut servant cpu cpu ctrl pc_plus_4_cy_r", false,-1);
        tracep->declBit(c+191,"servant_sim dut servant cpu cpu ctrl pc_plus_offset", false,-1);
        tracep->declBit(c+192,"servant_sim dut servant cpu cpu ctrl pc_plus_offset_cy", false,-1);
        tracep->declBit(c+193,"servant_sim dut servant cpu cpu ctrl pc_plus_offset_cy_r", false,-1);
        tracep->declBit(c+145,"servant_sim dut servant cpu cpu ctrl pc_plus_offset_aligned", false,-1);
        tracep->declBit(c+119,"servant_sim dut servant cpu cpu ctrl plus_4", false,-1);
        tracep->declBit(c+194,"servant_sim dut servant cpu cpu ctrl pc", false,-1);
        tracep->declBit(c+195,"servant_sim dut servant cpu cpu ctrl new_pc", false,-1);
        tracep->declBit(c+196,"servant_sim dut servant cpu cpu ctrl offset_a", false,-1);
        tracep->declBit(c+197,"servant_sim dut servant cpu cpu ctrl offset_b", false,-1);
        tracep->declBit(c+240,"servant_sim dut servant cpu cpu alu clk", false,-1);
        tracep->declBit(c+114,"servant_sim dut servant cpu cpu alu i_en", false,-1);
        tracep->declBit(c+117,"servant_sim dut servant cpu cpu alu i_cnt0", false,-1);
        tracep->declBit(c+134,"servant_sim dut servant cpu cpu alu o_cmp", false,-1);
        tracep->declBit(c+130,"servant_sim dut servant cpu cpu alu i_sub", false,-1);
        tracep->declBus(c+131,"servant_sim dut servant cpu cpu alu i_bool_op", false,-1, 1,0);
        tracep->declBit(c+132,"servant_sim dut servant cpu cpu alu i_cmp_eq", false,-1);
        tracep->declBit(c+133,"servant_sim dut servant cpu cpu alu i_cmp_sig", false,-1);
        tracep->declBus(c+135,"servant_sim dut servant cpu cpu alu i_rd_sel", false,-1, 2,0);
        tracep->declBit(c+58,"servant_sim dut servant cpu cpu alu i_rs1", false,-1);
        tracep->declBit(c+137,"servant_sim dut servant cpu cpu alu i_op_b", false,-1);
        tracep->declBit(c+128,"servant_sim dut servant cpu cpu alu i_buf", false,-1);
        tracep->declBit(c+102,"servant_sim dut servant cpu cpu alu o_rd", false,-1);
        tracep->declBit(c+198,"servant_sim dut servant cpu cpu alu result_add", false,-1);
        tracep->declBit(c+199,"servant_sim dut servant cpu cpu alu cmp_r", false,-1);
        tracep->declBit(c+200,"servant_sim dut servant cpu cpu alu add_cy", false,-1);
        tracep->declBit(c+201,"servant_sim dut servant cpu cpu alu add_cy_r", false,-1);
        tracep->declBit(c+202,"servant_sim dut servant cpu cpu alu rs1_sx", false,-1);
        tracep->declBit(c+203,"servant_sim dut servant cpu cpu alu op_b_sx", false,-1);
        tracep->declBit(c+204,"servant_sim dut servant cpu cpu alu add_b", false,-1);
        tracep->declBit(c+205,"servant_sim dut servant cpu cpu alu result_lt", false,-1);
        tracep->declBit(c+206,"servant_sim dut servant cpu cpu alu result_eq", false,-1);
        tracep->declBit(c+207,"servant_sim dut servant cpu cpu alu result_bool", false,-1);
        tracep->declBus(c+251,"servant_sim dut servant cpu cpu rf_if WITH_CSR", false,-1, 31,0);
        tracep->declBit(c+114,"servant_sim dut servant cpu cpu rf_if i_cnt_en", false,-1);
        tracep->declBus(c+49,"servant_sim dut servant cpu cpu rf_if o_wreg0", false,-1, 5,0);
        tracep->declBus(c+50,"servant_sim dut servant cpu cpu rf_if o_wreg1", false,-1, 5,0);
        tracep->declBit(c+51,"servant_sim dut servant cpu cpu rf_if o_wen0", false,-1);
        tracep->declBit(c+52,"servant_sim dut servant cpu cpu rf_if o_wen1", false,-1);
        tracep->declBit(c+53,"servant_sim dut servant cpu cpu rf_if o_wdata0", false,-1);
        tracep->declBit(c+54,"servant_sim dut servant cpu cpu rf_if o_wdata1", false,-1);
        tracep->declBus(c+55,"servant_sim dut servant cpu cpu rf_if o_rreg0", false,-1, 5,0);
        tracep->declBus(c+56,"servant_sim dut servant cpu cpu rf_if o_rreg1", false,-1, 5,0);
        tracep->declBit(c+58,"servant_sim dut servant cpu cpu rf_if i_rdata0", false,-1);
        tracep->declBit(c+59,"servant_sim dut servant cpu cpu rf_if i_rdata1", false,-1);
        tracep->declBit(c+111,"servant_sim dut servant cpu cpu rf_if i_trap", false,-1);
        tracep->declBit(c+109,"servant_sim dut servant cpu cpu rf_if i_mret", false,-1);
        tracep->declBit(c+194,"servant_sim dut servant cpu cpu rf_if i_mepc", false,-1);
        tracep->declBit(c+94,"servant_sim dut servant cpu cpu rf_if i_mtval_pc", false,-1);
        tracep->declBit(c+128,"servant_sim dut servant cpu cpu rf_if i_bufreg_q", false,-1);
        tracep->declBit(c+145,"servant_sim dut servant cpu cpu rf_if i_bad_pc", false,-1);
        tracep->declBit(c+59,"servant_sim dut servant cpu cpu rf_if o_csr_pc", false,-1);
        tracep->declBit(c+150,"servant_sim dut servant cpu cpu rf_if i_csr_en", false,-1);
        tracep->declBus(c+151,"servant_sim dut servant cpu cpu rf_if i_csr_addr", false,-1, 1,0);
        tracep->declBit(c+153,"servant_sim dut servant cpu cpu rf_if i_csr", false,-1);
        tracep->declBit(c+154,"servant_sim dut servant cpu cpu rf_if o_csr", false,-1);
        tracep->declBit(c+136,"servant_sim dut servant cpu cpu rf_if i_rd_wen", false,-1);
        tracep->declBus(c+83,"servant_sim dut servant cpu cpu rf_if i_rd_waddr", false,-1, 4,0);
        tracep->declBit(c+101,"servant_sim dut servant cpu cpu rf_if i_ctrl_rd", false,-1);
        tracep->declBit(c+102,"servant_sim dut servant cpu cpu rf_if i_alu_rd", false,-1);
        tracep->declBit(c+98,"servant_sim dut servant cpu cpu rf_if i_rd_alu_en", false,-1);
        tracep->declBit(c+104,"servant_sim dut servant cpu cpu rf_if i_csr_rd", false,-1);
        tracep->declBit(c+99,"servant_sim dut servant cpu cpu rf_if i_rd_csr_en", false,-1);
        tracep->declBit(c+103,"servant_sim dut servant cpu cpu rf_if i_mem_rd", false,-1);
        tracep->declBit(c+100,"servant_sim dut servant cpu cpu rf_if i_rd_mem_en", false,-1);
        tracep->declBus(c+84,"servant_sim dut servant cpu cpu rf_if i_rs1_raddr", false,-1, 4,0);
        tracep->declBit(c+58,"servant_sim dut servant cpu cpu rf_if o_rs1", false,-1);
        tracep->declBus(c+85,"servant_sim dut servant cpu cpu rf_if i_rs2_raddr", false,-1, 4,0);
        tracep->declBit(c+59,"servant_sim dut servant cpu cpu rf_if o_rs2", false,-1);
        tracep->declBit(c+208,"servant_sim dut servant cpu cpu rf_if rd_wen", false,-1);
        tracep->declBit(c+209,"servant_sim dut servant cpu cpu rf_if genblk1 rd", false,-1);
        tracep->declBit(c+210,"servant_sim dut servant cpu cpu rf_if genblk1 mtval", false,-1);
        tracep->declBit(c+211,"servant_sim dut servant cpu cpu rf_if genblk1 sel_rs2", false,-1);
        tracep->declBus(c+266,"servant_sim dut servant cpu cpu mem_if WITH_CSR", false,-1, 0,0);
        tracep->declBit(c+240,"servant_sim dut servant cpu cpu mem_if i_clk", false,-1);
        tracep->declBus(c+140,"servant_sim dut servant cpu cpu mem_if i_bytecnt", false,-1, 1,0);
        tracep->declBus(c+157,"servant_sim dut servant cpu cpu mem_if i_lsb", false,-1, 1,0);
        tracep->declBit(c+143,"servant_sim dut servant cpu cpu mem_if o_byte_valid", false,-1);
        tracep->declBit(c+144,"servant_sim dut servant cpu cpu mem_if o_misalign", false,-1);
        tracep->declBit(c+138,"servant_sim dut servant cpu cpu mem_if i_signed", false,-1);
        tracep->declBit(c+139,"servant_sim dut servant cpu cpu mem_if i_word", false,-1);
        tracep->declBit(c+89,"servant_sim dut servant cpu cpu mem_if i_half", false,-1);
        tracep->declBit(c+260,"servant_sim dut servant cpu cpu mem_if i_mdu_op", false,-1);
        tracep->declBit(c+129,"servant_sim dut servant cpu cpu mem_if i_bufreg2_q", false,-1);
        tracep->declBit(c+103,"servant_sim dut servant cpu cpu mem_if o_rd", false,-1);
        tracep->declBus(c+7,"servant_sim dut servant cpu cpu mem_if o_wb_sel", false,-1, 3,0);
        tracep->declBit(c+212,"servant_sim dut servant cpu cpu mem_if signbit", false,-1);
        tracep->declBit(c+213,"servant_sim dut servant cpu cpu mem_if dat_valid", false,-1);
        tracep->declBus(c+250,"servant_sim dut servant cpu cpu genblk5 csr RESET_STRATEGY", false,-1, 31,0);
        tracep->declBit(c+240,"servant_sim dut servant cpu cpu genblk5 csr i_clk", false,-1);
        tracep->declBit(c+11,"servant_sim dut servant cpu cpu genblk5 csr i_rst", false,-1);
        tracep->declBit(c+113,"servant_sim dut servant cpu cpu genblk5 csr i_init", false,-1);
        tracep->declBit(c+114,"servant_sim dut servant cpu cpu genblk5 csr i_en", false,-1);
        tracep->declBit(c+115,"servant_sim dut servant cpu cpu genblk5 csr i_cnt0to3", false,-1);
        tracep->declBit(c+120,"servant_sim dut servant cpu cpu genblk5 csr i_cnt3", false,-1);
        tracep->declBit(c+121,"servant_sim dut servant cpu cpu genblk5 csr i_cnt7", false,-1);
        tracep->declBit(c+122,"servant_sim dut servant cpu cpu genblk5 csr i_cnt_done", false,-1);
        tracep->declBit(c+214,"servant_sim dut servant cpu cpu genblk5 csr i_mem_op", false,-1);
        tracep->declBit(c+28,"servant_sim dut servant cpu cpu genblk5 csr i_mtip", false,-1);
        tracep->declBit(c+111,"servant_sim dut servant cpu cpu genblk5 csr i_trap", false,-1);
        tracep->declBit(c+156,"servant_sim dut servant cpu cpu genblk5 csr o_new_irq", false,-1);
        tracep->declBit(c+92,"servant_sim dut servant cpu cpu genblk5 csr i_e_op", false,-1);
        tracep->declBit(c+93,"servant_sim dut servant cpu cpu genblk5 csr i_ebreak", false,-1);
        tracep->declBit(c+33,"servant_sim dut servant cpu cpu genblk5 csr i_mem_cmd", false,-1);
        tracep->declBit(c+146,"servant_sim dut servant cpu cpu genblk5 csr i_mstatus_en", false,-1);
        tracep->declBit(c+147,"servant_sim dut servant cpu cpu genblk5 csr i_mie_en", false,-1);
        tracep->declBit(c+148,"servant_sim dut servant cpu cpu genblk5 csr i_mcause_en", false,-1);
        tracep->declBus(c+131,"servant_sim dut servant cpu cpu genblk5 csr i_csr_source", false,-1, 1,0);
        tracep->declBit(c+109,"servant_sim dut servant cpu cpu genblk5 csr i_mret", false,-1);
        tracep->declBit(c+88,"servant_sim dut servant cpu cpu genblk5 csr i_csr_d_sel", false,-1);
        tracep->declBit(c+154,"servant_sim dut servant cpu cpu genblk5 csr i_rf_csr_out", false,-1);
        tracep->declBit(c+153,"servant_sim dut servant cpu cpu genblk5 csr o_csr_in", false,-1);
        tracep->declBit(c+149,"servant_sim dut servant cpu cpu genblk5 csr i_csr_imm", false,-1);
        tracep->declBit(c+58,"servant_sim dut servant cpu cpu genblk5 csr i_rs1", false,-1);
        tracep->declBit(c+104,"servant_sim dut servant cpu cpu genblk5 csr o_q", false,-1);
        tracep->declBus(c+267,"servant_sim dut servant cpu cpu genblk5 csr CSR_SOURCE_CSR", false,-1, 1,0);
        tracep->declBus(c+268,"servant_sim dut servant cpu cpu genblk5 csr CSR_SOURCE_EXT", false,-1, 1,0);
        tracep->declBus(c+269,"servant_sim dut servant cpu cpu genblk5 csr CSR_SOURCE_SET", false,-1, 1,0);
        tracep->declBus(c+270,"servant_sim dut servant cpu cpu genblk5 csr CSR_SOURCE_CLR", false,-1, 1,0);
        tracep->declBit(c+215,"servant_sim dut servant cpu cpu genblk5 csr mstatus_mie", false,-1);
        tracep->declBit(c+216,"servant_sim dut servant cpu cpu genblk5 csr mstatus_mpie", false,-1);
        tracep->declBit(c+217,"servant_sim dut servant cpu cpu genblk5 csr mie_mtie", false,-1);
        tracep->declBit(c+218,"servant_sim dut servant cpu cpu genblk5 csr mcause31", false,-1);
        tracep->declBus(c+219,"servant_sim dut servant cpu cpu genblk5 csr mcause3_0", false,-1, 3,0);
        tracep->declBit(c+220,"servant_sim dut servant cpu cpu genblk5 csr mcause", false,-1);
        tracep->declBit(c+153,"servant_sim dut servant cpu cpu genblk5 csr csr_in", false,-1);
        tracep->declBit(c+104,"servant_sim dut servant cpu cpu genblk5 csr csr_out", false,-1);
        tracep->declBit(c+221,"servant_sim dut servant cpu cpu genblk5 csr timer_irq_r", false,-1);
        tracep->declBit(c+222,"servant_sim dut servant cpu cpu genblk5 csr d", false,-1);
        tracep->declBit(c+223,"servant_sim dut servant cpu cpu genblk5 csr timer_irq", false,-1);
        tracep->declBus(c+271,"servant_sim dut servant genblk1 timer WIDTH", false,-1, 31,0);
        tracep->declBus(c+250,"servant_sim dut servant genblk1 timer RESET_STRATEGY", false,-1, 31,0);
        tracep->declBus(c+247,"servant_sim dut servant genblk1 timer DIVIDER", false,-1, 31,0);
        tracep->declBit(c+240,"servant_sim dut servant genblk1 timer i_clk", false,-1);
        tracep->declBit(c+11,"servant_sim dut servant genblk1 timer i_rst", false,-1);
        tracep->declBit(c+28,"servant_sim dut servant genblk1 timer o_irq", false,-1);
        tracep->declBus(c+8,"servant_sim dut servant genblk1 timer i_wb_dat", false,-1, 31,0);
        tracep->declBit(c+33,"servant_sim dut servant genblk1 timer i_wb_we", false,-1);
        tracep->declBit(c+42,"servant_sim dut servant genblk1 timer i_wb_cyc", false,-1);
        tracep->declBus(c+43,"servant_sim dut servant genblk1 timer o_wb_dat", false,-1, 31,0);
        tracep->declBus(c+272,"servant_sim dut servant genblk1 timer HIGH", false,-1, 31,0);
        tracep->declBus(c+43,"servant_sim dut servant genblk1 timer mtime", false,-1, 31,0);
        tracep->declBus(c+224,"servant_sim dut servant genblk1 timer mtimecmp", false,-1, 31,0);
        tracep->declBus(c+43,"servant_sim dut servant genblk1 timer mtimeslice", false,-1, 31,0);
        tracep->declBus(c+273,"servant_sim dut rx_from_ble clks_per_bit", false,-1, 31,0);
        tracep->declBus(c+253,"servant_sim dut rx_from_ble BITS", false,-1, 31,0);
        tracep->declBit(c+240,"servant_sim dut rx_from_ble i_wb_clk", false,-1);
        tracep->declBit(c+242,"servant_sim dut rx_from_ble i_wb_dat", false,-1);
        tracep->declBit(c+12,"servant_sim dut rx_from_ble rx_done", false,-1);
        tracep->declBit(c+13,"servant_sim dut rx_from_ble rx_active", false,-1);
        tracep->declBus(c+14,"servant_sim dut rx_from_ble o_wb_rdt", false,-1, 7,0);
        tracep->declBus(c+247,"servant_sim dut rx_from_ble IDLE", false,-1, 31,0);
        tracep->declBus(c+251,"servant_sim dut rx_from_ble START", false,-1, 31,0);
        tracep->declBus(c+262,"servant_sim dut rx_from_ble RECEIVE", false,-1, 31,0);
        tracep->declBus(c+274,"servant_sim dut rx_from_ble STOP", false,-1, 31,0);
        tracep->declBit(c+225,"servant_sim dut rx_from_ble r_Rx_temp", false,-1);
        tracep->declBit(c+226,"servant_sim dut rx_from_ble rx_bit", false,-1);
        tracep->declBit(c+13,"servant_sim dut rx_from_ble temp_active", false,-1);
        tracep->declBus(c+14,"servant_sim dut rx_from_ble rx_byte", false,-1, 7,0);
        tracep->declBit(c+12,"servant_sim dut rx_from_ble temp_done", false,-1);
        tracep->declBus(c+227,"servant_sim dut rx_from_ble data_index", false,-1, 2,0);
        tracep->declBus(c+228,"servant_sim dut rx_from_ble clock_count", false,-1, 6,0);
        tracep->declBus(c+229,"servant_sim dut rx_from_ble state", false,-1, 1,0);
        tracep->declBus(c+273,"servant_sim dut tx_to_ble clks_per_bit", false,-1, 31,0);
        tracep->declBus(c+253,"servant_sim dut tx_to_ble BITS", false,-1, 31,0);
        tracep->declBit(c+240,"servant_sim dut tx_to_ble i_wb_clk", false,-1);
        tracep->declBit(c+15,"servant_sim dut tx_to_ble tx_active", false,-1);
        tracep->declBus(c+16,"servant_sim dut tx_to_ble i_wb_dat", false,-1, 7,0);
        tracep->declBit(c+17,"servant_sim dut tx_to_ble tx_done", false,-1);
        tracep->declBit(c+1,"servant_sim dut tx_to_ble o_wb_rdt", false,-1);
        tracep->declBus(c+247,"servant_sim dut tx_to_ble IDLE", false,-1, 31,0);
        tracep->declBus(c+251,"servant_sim dut tx_to_ble START", false,-1, 31,0);
        tracep->declBus(c+262,"servant_sim dut tx_to_ble TRANSMIT", false,-1, 31,0);
        tracep->declBus(c+274,"servant_sim dut tx_to_ble STOP", false,-1, 31,0);
        tracep->declBit(c+17,"servant_sim dut tx_to_ble temp_done", false,-1);
        tracep->declBus(c+230,"servant_sim dut tx_to_ble temp_data", false,-1, 7,0);
        tracep->declBus(c+231,"servant_sim dut tx_to_ble state", false,-1, 1,0);
        tracep->declBus(c+232,"servant_sim dut tx_to_ble clock_count", false,-1, 6,0);
        tracep->declBus(c+233,"servant_sim dut tx_to_ble data_index", false,-1, 3,0);
        tracep->declBus(c+273,"servant_sim dut tx_to_pc clks_per_bit", false,-1, 31,0);
        tracep->declBus(c+253,"servant_sim dut tx_to_pc BITS", false,-1, 31,0);
        tracep->declBit(c+240,"servant_sim dut tx_to_pc i_wb_clk", false,-1);
        tracep->declBit(c+18,"servant_sim dut tx_to_pc tx_active", false,-1);
        tracep->declBus(c+20,"servant_sim dut tx_to_pc i_wb_dat", false,-1, 7,0);
        tracep->declBit(c+19,"servant_sim dut tx_to_pc tx_done", false,-1);
        tracep->declBit(c+2,"servant_sim dut tx_to_pc o_wb_rdt", false,-1);
        tracep->declBus(c+247,"servant_sim dut tx_to_pc IDLE", false,-1, 31,0);
        tracep->declBus(c+251,"servant_sim dut tx_to_pc START", false,-1, 31,0);
        tracep->declBus(c+262,"servant_sim dut tx_to_pc TRANSMIT", false,-1, 31,0);
        tracep->declBus(c+274,"servant_sim dut tx_to_pc STOP", false,-1, 31,0);
        tracep->declBit(c+19,"servant_sim dut tx_to_pc temp_done", false,-1);
        tracep->declBus(c+234,"servant_sim dut tx_to_pc temp_data", false,-1, 7,0);
        tracep->declBus(c+235,"servant_sim dut tx_to_pc state", false,-1, 1,0);
        tracep->declBus(c+236,"servant_sim dut tx_to_pc clock_count", false,-1, 6,0);
        tracep->declBus(c+237,"servant_sim dut tx_to_pc data_index", false,-1, 3,0);
        tracep->declBus(c+248,"servant_sim dut ram depth", false,-1, 31,0);
        tracep->declBus(c+275,"servant_sim dut ram aw", false,-1, 31,0);
        tracep->declBus(c+250,"servant_sim dut ram RESET_STRATEGY", false,-1, 31,0);
        tracep->declBus(c+246,"servant_sim dut ram memfile", false,-1, 0,0);
        tracep->declBit(c+240,"servant_sim dut ram i_wb_clk", false,-1);
        tracep->declBit(c+11,"servant_sim dut ram i_wb_rst", false,-1);
        tracep->declBus(c+238,"servant_sim dut ram i_wb_adr", false,-1, 12,2);
        tracep->declBus(c+25,"servant_sim dut ram i_wb_dat", false,-1, 31,0);
        tracep->declBus(c+24,"servant_sim dut ram i_wb_sel", false,-1, 3,0);
        tracep->declBit(c+23,"servant_sim dut ram i_wb_we", false,-1);
        tracep->declBit(c+22,"servant_sim dut ram i_wb_cyc", false,-1);
        tracep->declBus(c+9,"servant_sim dut ram o_wb_rdt", false,-1, 31,0);
        tracep->declBit(c+10,"servant_sim dut ram o_wb_ack", false,-1);
        tracep->declBus(c+239,"servant_sim dut ram we", false,-1, 3,0);
        tracep->declBus(c+238,"servant_sim dut ram addr", false,-1, 10,0);
        tracep->declBus(c+25,"servant_sim dut ram data", false,-1, 31,0);
    }
}

void Vservant_sim::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vservant_sim::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vservant_sim__Syms* __restrict vlSymsp = static_cast<Vservant_sim__Syms*>(userp);
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vservant_sim::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vservant_sim__Syms* __restrict vlSymsp = static_cast<Vservant_sim__Syms*>(userp);
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp1[3];
    // Body
    {
        tracep->fullBit(oldp+1,(vlSymsp->TOP__servant_sim__dut.__PVT__o_data));
        tracep->fullBit(oldp+2,(vlSymsp->TOP__servant_sim__dut.__PVT__to_pc));
        tracep->fullBit(oldp+3,(vlSymsp->TOP__servant_sim__dut.__PVT__q));
        tracep->fullIData(oldp+4,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_mem_adr),32);
        tracep->fullBit(oldp+5,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc) 
                                 | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_cyc) 
                                    & (0U == (3U & 
                                              (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                               >> 0x1cU)))))));
        tracep->fullBit(oldp+6,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                        >> 3U) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc))))));
        tracep->fullCData(oldp+7,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_sel),4);
        tracep->fullIData(oldp+8,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat),32);
        tracep->fullIData(oldp+9,(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt),32);
        tracep->fullBit(oldp+10,(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_ack));
        tracep->fullBit(oldp+11,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg))));
        tracep->fullBit(oldp+12,(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done));
        tracep->fullBit(oldp+13,(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_active));
        tracep->fullCData(oldp+14,(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__rx_byte),8);
        tracep->fullBit(oldp+15,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_active));
        tracep->fullCData(oldp+16,(vlSymsp->TOP__servant_sim__dut.__PVT__data_to_ble),8);
        tracep->fullBit(oldp+17,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__temp_done));
        tracep->fullBit(oldp+18,(vlSymsp->TOP__servant_sim__dut.__PVT__pc_active));
        tracep->fullBit(oldp+19,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__temp_done));
        tracep->fullCData(oldp+20,(vlSymsp->TOP__servant_sim__dut.__PVT__data_to),8);
        tracep->fullIData(oldp+21,(vlSymsp->TOP__servant_sim__dut.__PVT__ble_data_adr),32);
        tracep->fullBit(oldp+22,(vlSymsp->TOP__servant_sim__dut.__PVT__cyc));
        tracep->fullBit(oldp+23,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done) 
                                        | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                            >> 3U) 
                                           & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc)))))));
        tracep->fullCData(oldp+24,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done)
                                     ? 0xfU : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_sel))),4);
        tracep->fullIData(oldp+25,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done)
                                     ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__rx_byte)
                                     : vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat)),32);
        tracep->fullIData(oldp+26,(vlSymsp->TOP__servant_sim__dut.__PVT__adr),32);
        tracep->fullCData(oldp+27,(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg),5);
        tracep->fullBit(oldp+28,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__timer_irq));
        tracep->fullIData(oldp+29,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_adr),32);
        tracep->fullBit(oldp+30,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc));
        tracep->fullBit(oldp+31,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack));
        tracep->fullIData(oldp+32,((vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                    << 2U)),32);
        tracep->fullBit(oldp+33,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                        >> 3U))));
        tracep->fullBit(oldp+34,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_cyc));
        tracep->fullIData(oldp+35,(((0x20000000U & vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data)
                                     ? vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__genblk1__DOT__timer__DOT__mtime
                                     : ((0x10000000U 
                                         & vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data)
                                         ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_gpio_rdt)
                                         : vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))),32);
        tracep->fullBit(oldp+36,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_ack));
        tracep->fullBit(oldp+37,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_cyc) 
                                  & (0U == (3U & (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                  >> 0x1cU))))));
        tracep->fullBit(oldp+38,(((IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_ack) 
                                  & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc)))));
        tracep->fullBit(oldp+39,((1U & vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat)));
        tracep->fullBit(oldp+40,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_cyc) 
                                  & (1U == (3U & (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                  >> 0x1cU))))));
        tracep->fullBit(oldp+41,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_gpio_rdt));
        tracep->fullBit(oldp+42,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_cyc) 
                                  & (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                     >> 0x1dU))));
        tracep->fullIData(oldp+43,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__genblk1__DOT__timer__DOT__mtime),32);
        tracep->fullIData(oldp+44,(((vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                     << 2U) | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb))),32);
        tracep->fullCData(oldp+45,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3),3);
        tracep->fullCData(oldp+46,((3U & (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                          >> 0x1cU))),2);
        tracep->fullBit(oldp+47,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_wreq));
        tracep->fullBit(oldp+48,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_rreq));
        tracep->fullCData(oldp+49,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)
                                     ? 0x23U : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))),6);
        tracep->fullCData(oldp+50,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)
                                     ? 0x22U : (0x20U 
                                                | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr)))),6);
        tracep->fullBit(oldp+51,(((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r)) 
                                  & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
                                     | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op) 
                                         & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init))) 
                                        & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7)))))));
        tracep->fullBit(oldp+52,(((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r)) 
                                  & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
                                     | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en)))));
        tracep->fullBit(oldp+53,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__wdata0));
        tracep->fullBit(oldp+54,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)
                                         ? vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_adr
                                         : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_in)))));
        tracep->fullCData(oldp+55,((0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                                             >> 4U))),6);
        tracep->fullCData(oldp+56,(((0x20U & ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__sel_rs2)) 
                                              << 5U)) 
                                    | ((0x1cU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20) 
                                                 & ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__sel_rs2))) 
                                                    << 2U))) 
                                       | (3U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
                                                  | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret) 
                                                     << 1U)) 
                                                 | ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en))) 
                                                    & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr))) 
                                                | ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__sel_rs2))) 
                                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20))))))),6);
        tracep->fullBit(oldp+57,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rgnt) 
                                  | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_wreq))));
        tracep->fullBit(oldp+58,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0))));
        tracep->fullBit(oldp+59,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rdata1));
        tracep->fullSData(oldp+60,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__waddr),10);
        tracep->fullCData(oldp+61,(((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                                           - (IData)(1U)))
                                     ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata1_r)
                                     : (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__wdata0) 
                                         << 1U) | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata0_r)))),2);
        tracep->fullBit(oldp+62,((((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                                       - (IData)(1U))) 
                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wen0_r)) 
                                  | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                                      - (IData)(1U)) 
                                     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wen1_r)))));
        tracep->fullSData(oldp+63,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__raddr),10);
        tracep->fullCData(oldp+64,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rdata),2);
        tracep->fullBit(oldp+65,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rgnt));
        tracep->fullCData(oldp+66,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt),5);
        tracep->fullCData(oldp+67,((0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                                             - (IData)(3U)))),5);
        tracep->fullBit(oldp+68,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata0_r));
        tracep->fullCData(oldp+69,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata1_r),2);
        tracep->fullBit(oldp+70,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wen0_r));
        tracep->fullBit(oldp+71,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wen1_r));
        tracep->fullBit(oldp+72,((1U & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                                           - (IData)(1U))))));
        tracep->fullBit(oldp+73,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                                        - (IData)(1U)))));
        tracep->fullCData(oldp+74,(((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                                           - (IData)(1U)))
                                     ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)
                                         ? 0x22U : 
                                        (0x20U | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr)))
                                     : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)
                                         ? 0x23U : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7)))),6);
        tracep->fullBit(oldp+75,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt))));
        tracep->fullBit(oldp+76,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rtrig1));
        tracep->fullCData(oldp+77,(((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt))
                                     ? ((0x20U & ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__sel_rs2)) 
                                                  << 5U)) 
                                        | ((0x1cU & 
                                            ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20) 
                                             & ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__sel_rs2))) 
                                                << 2U))) 
                                           | (3U & 
                                              ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
                                                 | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret) 
                                                    << 1U)) 
                                                | ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en))) 
                                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr))) 
                                               | ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__sel_rs2))) 
                                                  & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20))))))
                                     : (0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                                                 >> 4U)))),6);
        tracep->fullCData(oldp+78,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0),2);
        tracep->fullBit(oldp+79,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata1));
        tracep->fullBit(oldp+80,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rreq_r));
        tracep->fullCData(oldp+81,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram__DOT__rdata),2);
        tracep->fullBit(oldp+82,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram__DOT__regzero));
        tracep->fullCData(oldp+83,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7),5);
        tracep->fullCData(oldp+84,((0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                                             >> 4U))),5);
        tracep->fullCData(oldp+85,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20),5);
        tracep->fullCData(oldp+86,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl),4);
        tracep->fullCData(oldp+87,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_en),4);
        tracep->fullBit(oldp+88,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                        >> 2U))));
        tracep->fullBit(oldp+89,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3))));
        tracep->fullBit(oldp+90,((1U & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))));
        tracep->fullBit(oldp+91,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_two_stage_op));
        tracep->fullBit(oldp+92,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_e_op));
        tracep->fullBit(oldp+93,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op20));
        tracep->fullBit(oldp+94,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                        >> 4U))));
        tracep->fullBit(oldp+95,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op));
        tracep->fullBit(oldp+96,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                          >> 4U) | 
                                         (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                           >> 1U) & 
                                          ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                           >> 2U))) 
                                        | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__imm30) 
                                             & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                >> 2U)) 
                                            & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                               >> 3U)) 
                                           & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                                 >> 2U)))))));
        tracep->fullBit(oldp+97,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op));
        tracep->fullBit(oldp+98,((1U & (((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode)) 
                                         & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                            >> 2U)) 
                                        & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                              >> 4U))))));
        tracep->fullBit(oldp+99,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__csr_op));
        tracep->fullBit(oldp+100,((1U & ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                             >> 2U)) 
                                         & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))))));
        tracep->fullBit(oldp+101,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_utype) 
                                    & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
                                   | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4) 
                                      & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                          >> 4U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))))));
        tracep->fullBit(oldp+102,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_q) 
                                           | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel) 
                                              & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__result_add))) 
                                          | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel) 
                                               >> 1U) 
                                              & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__cmp_r)) 
                                             & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt0))) 
                                         | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel) 
                                             >> 2U) 
                                            & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                                                 ^ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b)) 
                                                & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
                                               | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                                    >> 1U) 
                                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b)) 
                                                  & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0))))))));
        tracep->fullBit(oldp+103,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid)
                                    ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2_q)
                                    : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit) 
                                       & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                             >> 2U))))));
        tracep->fullBit(oldp+104,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_out));
        tracep->fullBit(oldp+105,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl_pc_en));
        tracep->fullBit(oldp+106,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__jump));
        tracep->fullBit(oldp+107,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                          >> 4U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))));
        tracep->fullBit(oldp+108,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_utype));
        tracep->fullBit(oldp+109,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret));
        tracep->fullBit(oldp+110,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__imm));
        tracep->fullBit(oldp+111,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap));
        tracep->fullBit(oldp+112,(((((0U == (7U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                                     | (3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))) 
                                    | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                         >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                   >> 2U)) 
                                       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op20))) 
                                   | (0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                   >> 3U))))));
        tracep->fullBit(oldp+113,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init));
        tracep->fullBit(oldp+114,((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r))));
        tracep->fullBit(oldp+115,((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt))));
        tracep->fullBit(oldp+116,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                          >> 2U) | 
                                         (3U == (3U 
                                                 & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)))))));
        tracep->fullBit(oldp+117,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt0));
        tracep->fullBit(oldp+118,(((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
                                   & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
                                      >> 1U))));
        tracep->fullBit(oldp+119,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt2));
        tracep->fullBit(oldp+120,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt3));
        tracep->fullBit(oldp+121,(((1U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
                                   & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
                                      >> 3U))));
        tracep->fullBit(oldp+122,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done));
        tracep->fullBit(oldp+123,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_en));
        tracep->fullBit(oldp+124,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__imm30));
        tracep->fullBit(oldp+125,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en));
        tracep->fullBit(oldp+126,((1U & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                            >> 2U)))));
        tracep->fullBit(oldp+127,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                    >> 4U) & ((0U == 
                                               (3U 
                                                & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                                              | (3U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))))));
        tracep->fullBit(oldp+128,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_q));
        tracep->fullBit(oldp+129,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2_q));
        tracep->fullBit(oldp+130,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_sub));
        tracep->fullCData(oldp+131,((3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3))),2);
        tracep->fullBit(oldp+132,((0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                                >> 1U)))));
        tracep->fullBit(oldp+133,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig));
        tracep->fullBit(oldp+134,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu_cmp));
        tracep->fullCData(oldp+135,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel),3);
        tracep->fullBit(oldp+136,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op) 
                                   & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init)))));
        tracep->fullBit(oldp+137,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b));
        tracep->fullBit(oldp+138,((1U & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                            >> 2U)))));
        tracep->fullBit(oldp+139,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                         >> 1U))));
        tracep->fullCData(oldp+140,((3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                           >> 1U))),2);
        tracep->fullBit(oldp+141,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                                         >> 5U))));
        tracep->fullBit(oldp+142,((1U & (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
                                         >> 5U))));
        tracep->fullBit(oldp+143,((1U & ((((((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb)) 
                                             & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                                   >> 1U))) 
                                            | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                   >> 1U)) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                   >> 2U)))) 
                                           | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                  >> 2U)) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                                  >> 1U)))) 
                                          | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                 >> 2U)) 
                                             & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb)))) 
                                         | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                >> 1U)) 
                                            & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                                  >> 1U)))))));
        tracep->fullBit(oldp+144,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_misalign));
        tracep->fullBit(oldp+145,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned));
        tracep->fullBit(oldp+146,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en));
        tracep->fullBit(oldp+147,(((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__csr_op) 
                                     & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op26))) 
                                    & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op22)) 
                                   & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op20)))));
        tracep->fullBit(oldp+148,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en));
        tracep->fullBit(oldp+149,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                                         >> 4U))));
        tracep->fullBit(oldp+150,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en));
        tracep->fullCData(oldp+151,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr),2);
        tracep->fullBit(oldp+152,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_imm_en));
        tracep->fullBit(oldp+153,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_in));
        tracep->fullBit(oldp+154,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rdata1) 
                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en))));
        tracep->fullBit(oldp+155,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_dbus_en));
        tracep->fullBit(oldp+156,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__new_irq));
        tracep->fullCData(oldp+157,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb),2);
        tracep->fullBit(oldp+158,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                         >> 1U))));
        tracep->fullBit(oldp+159,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req));
        tracep->fullBit(oldp+160,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__init_done));
        tracep->fullBit(oldp+161,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__misalign_trap_sync_r));
        tracep->fullCData(oldp+162,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt),3);
        tracep->fullCData(oldp+163,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r),4);
        tracep->fullBit(oldp+164,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__ibus_cyc));
        tracep->fullBit(oldp+165,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__take_branch));
        tracep->fullBit(oldp+166,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__take_branch) 
                                    & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                       >> 1U)) | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_dbus_en) 
                                                  & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_misalign)))));
        tracep->fullIData(oldp+167,((0x3fffffffU & 
                                     (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                                      >> 2U))),30);
        tracep->fullCData(oldp+168,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode),5);
        tracep->fullBit(oldp+169,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op21));
        tracep->fullBit(oldp+170,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op22));
        tracep->fullBit(oldp+171,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op26));
        tracep->fullBit(oldp+172,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__imm25));
        tracep->fullBit(oldp+173,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op20) 
                                   | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op26) 
                                      & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op21))))));
        tracep->fullIData(oldp+174,((0x1ffffffU & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                                                   >> 7U))),25);
        tracep->fullBit(oldp+175,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm31));
        tracep->fullSData(oldp+176,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20),9);
        tracep->fullBit(oldp+177,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm7));
        tracep->fullCData(oldp+178,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25),6);
        tracep->fullBit(oldp+179,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__signbit));
        tracep->fullBit(oldp+180,((1U & (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                                            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en)) 
                                           + (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__imm) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                   >> 2U))) 
                                              & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb)))) 
                                          + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r)) 
                                         >> 1U))));
        tracep->fullBit(oldp+181,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__q));
        tracep->fullBit(oldp+182,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r));
        tracep->fullIData(oldp+183,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data),30);
        tracep->fullBit(oldp+184,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb));
        tracep->fullBit(oldp+185,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op) 
                                   | ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r)) 
                                      & ((((((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb)) 
                                             & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                                   >> 1U))) 
                                            | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                   >> 1U)) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                   >> 2U)))) 
                                           | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                  >> 2U)) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                                  >> 1U)))) 
                                          | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                 >> 2U)) 
                                             & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb)))) 
                                         | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                >> 1U)) 
                                            & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                                  >> 1U))))))));
        tracep->fullCData(oldp+186,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat_shamt),6);
        tracep->fullBit(oldp+187,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
                                   | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret))));
        tracep->fullBit(oldp+188,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4));
        tracep->fullBit(oldp+189,((1U & ((((1U & vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_adr) 
                                           + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt2)) 
                                          + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r)) 
                                         >> 1U))));
        tracep->fullBit(oldp+190,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r));
        tracep->fullBit(oldp+191,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                                          + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b)) 
                                         + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r)))));
        tracep->fullBit(oldp+192,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                                           + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b)) 
                                          + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r)) 
                                         >> 1U))));
        tracep->fullBit(oldp+193,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r));
        tracep->fullBit(oldp+194,((1U & vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_adr)));
        tracep->fullBit(oldp+195,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
                                    | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret))
                                    ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rdata1) 
                                       & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt0)))
                                    : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__jump)
                                        ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                                        : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)))));
        tracep->fullBit(oldp+196,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a));
        tracep->fullBit(oldp+197,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b));
        tracep->fullBit(oldp+198,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__result_add));
        tracep->fullBit(oldp+199,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__cmp_r));
        tracep->fullBit(oldp+200,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_cy));
        tracep->fullBit(oldp+201,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r));
        tracep->fullBit(oldp+202,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig))));
        tracep->fullBit(oldp+203,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b) 
                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig))));
        tracep->fullBit(oldp+204,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_b));
        tracep->fullBit(oldp+205,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                                           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig)) 
                                          + (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b) 
                                                & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig)))) 
                                         + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_cy)))));
        tracep->fullBit(oldp+206,(((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__result_add)) 
                                   & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__cmp_r) 
                                      | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt0)))));
        tracep->fullBit(oldp+207,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                                           ^ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b)) 
                                          & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
                                         | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                              >> 1U) 
                                             & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b)) 
                                            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0))))));
        tracep->fullBit(oldp+208,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op) 
                                    & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init))) 
                                   & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7)))));
        tracep->fullBit(oldp+209,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__rd));
        tracep->fullBit(oldp+210,(((0x10U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))
                                    ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                                    : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_q))));
        tracep->fullBit(oldp+211,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__sel_rs2));
        tracep->fullBit(oldp+212,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit));
        tracep->fullBit(oldp+213,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid));
        tracep->fullBit(oldp+214,((1U & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                            >> 4U)))));
        tracep->fullBit(oldp+215,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mstatus_mie));
        tracep->fullBit(oldp+216,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mstatus_mpie));
        tracep->fullBit(oldp+217,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mie_mtie));
        tracep->fullBit(oldp+218,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause31));
        tracep->fullCData(oldp+219,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0),4);
        tracep->fullBit(oldp+220,((1U & ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt))
                                          ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0)
                                          : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done) 
                                             & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause31))))));
        tracep->fullBit(oldp+221,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__timer_irq_r));
        tracep->fullBit(oldp+222,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__d));
        tracep->fullBit(oldp+223,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__timer_irq));
        tracep->fullIData(oldp+224,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__genblk1__DOT__timer__DOT__mtimecmp),32);
        tracep->fullBit(oldp+225,(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__r_Rx_temp));
        tracep->fullBit(oldp+226,(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__rx_bit));
        tracep->fullCData(oldp+227,(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__data_index),3);
        tracep->fullCData(oldp+228,(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__clock_count),7);
        tracep->fullCData(oldp+229,(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__state),2);
        tracep->fullCData(oldp+230,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__temp_data),8);
        tracep->fullCData(oldp+231,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__state),2);
        tracep->fullCData(oldp+232,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__clock_count),7);
        tracep->fullCData(oldp+233,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__data_index),4);
        tracep->fullCData(oldp+234,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__temp_data),8);
        tracep->fullCData(oldp+235,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__state),2);
        tracep->fullCData(oldp+236,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__clock_count),7);
        tracep->fullCData(oldp+237,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__data_index),4);
        tracep->fullSData(oldp+238,((0x7ffU & (vlSymsp->TOP__servant_sim__dut.__PVT__adr 
                                               >> 2U))),11);
        tracep->fullCData(oldp+239,(vlSymsp->TOP__servant_sim__dut__ram.__PVT__we),4);
        tracep->fullBit(oldp+240,(vlTOPp->wb_clk));
        tracep->fullBit(oldp+241,(vlTOPp->wb_rst));
        tracep->fullBit(oldp+242,(vlTOPp->i_data));
        tracep->fullBit(oldp+243,(vlTOPp->o_data));
        tracep->fullBit(oldp+244,(vlTOPp->to_pc));
        tracep->fullBit(oldp+245,(vlTOPp->q));
        tracep->fullBit(oldp+246,(0U));
        tracep->fullIData(oldp+247,(0U),32);
        tracep->fullIData(oldp+248,(0x2000U),32);
        tracep->fullIData(oldp+249,(0x4e4f4e45U),32);
        tracep->fullIData(oldp+250,(0x4d494e49U),32);
        tracep->fullIData(oldp+251,(1U),32);
        tracep->fullIData(oldp+252,(1U),32);
        tracep->fullIData(oldp+253,(8U),32);
        tracep->fullIData(oldp+254,(0xc00000U),32);
        tracep->fullIData(oldp+255,(0xc10000U),32);
        tracep->fullCData(oldp+256,(vlSymsp->TOP__servant_sim__dut.__PVT__pc_data),8);
        __Vtemp1[0U] = 0x4e4f4e45U;
        __Vtemp1[1U] = 0U;
        __Vtemp1[2U] = 0U;
        tracep->fullWData(oldp+257,(__Vtemp1),80);
        tracep->fullBit(oldp+260,(0U));
        tracep->fullIData(oldp+261,(0U),32);
        tracep->fullIData(oldp+262,(2U),32);
        tracep->fullIData(oldp+263,(0xaU),32);
        tracep->fullIData(oldp+264,(4U),32);
        tracep->fullIData(oldp+265,(0x240U),32);
        tracep->fullBit(oldp+266,(1U));
        tracep->fullCData(oldp+267,(0U),2);
        tracep->fullCData(oldp+268,(1U),2);
        tracep->fullCData(oldp+269,(2U),2);
        tracep->fullCData(oldp+270,(3U),2);
        tracep->fullIData(oldp+271,(0x20U),32);
        tracep->fullIData(oldp+272,(0x1fU),32);
        tracep->fullIData(oldp+273,(0x68U),32);
        tracep->fullIData(oldp+274,(3U),32);
        tracep->fullIData(oldp+275,(0xdU),32);
    }
}
