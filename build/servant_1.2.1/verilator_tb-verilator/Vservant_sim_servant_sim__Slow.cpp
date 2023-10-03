// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vservant_sim.h for the primary calling header

#include "Vservant_sim_servant_sim.h"
#include "Vservant_sim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vservant_sim_servant_sim) {
    VL_CELL(dut, Vservant_sim_service__M0_MB2000_S1_W1_C0_A0);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vservant_sim_servant_sim::__Vconfigure(Vservant_sim__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vservant_sim_servant_sim::~Vservant_sim_servant_sim() {
}

void Vservant_sim_servant_sim::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vservant_sim_servant_sim::_ctor_var_reset\n"); );
    // Body
    wb_clk = VL_RAND_RESET_I(1);
    wb_rst = VL_RAND_RESET_I(1);
    i_data = VL_RAND_RESET_I(1);
    o_data = VL_RAND_RESET_I(1);
    to_pc = VL_RAND_RESET_I(1);
    q = VL_RAND_RESET_I(1);
}
