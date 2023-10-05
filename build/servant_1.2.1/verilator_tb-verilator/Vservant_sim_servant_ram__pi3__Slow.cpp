// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vservant_sim.h for the primary calling header

#include "Vservant_sim_servant_ram__pi3.h"
#include "Vservant_sim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vservant_sim_servant_ram__pi3) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vservant_sim_servant_ram__pi3::__Vconfigure(Vservant_sim__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vservant_sim_servant_ram__pi3::~Vservant_sim_servant_ram__pi3() {
}

void Vservant_sim_servant_ram__pi3::_initial__TOP__servant_sim__dut__ram__1(Vservant_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vservant_sim_servant_ram__pi3::_initial__TOP__servant_sim__dut__ram__1\n"); );
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*543:0*/ __Vtemp1[17];
    // Body
    VL_WRITEF("Preloading %Nservant_sim.dut.ram from /home/paul/Bachelor_Project/fusesoc_libraries/serv/sw/simple_BLE.hex\n",
              vlSymsp->name());
    __Vtemp1[0U] = 0x2e686578U;
    __Vtemp1[1U] = 0x5f424c45U;
    __Vtemp1[2U] = 0x6d706c65U;
    __Vtemp1[3U] = 0x772f7369U;
    __Vtemp1[4U] = 0x72762f73U;
    __Vtemp1[5U] = 0x732f7365U;
    __Vtemp1[6U] = 0x61726965U;
    __Vtemp1[7U] = 0x6c696272U;
    __Vtemp1[8U] = 0x736f635fU;
    __Vtemp1[9U] = 0x66757365U;
    __Vtemp1[0xaU] = 0x6563742fU;
    __Vtemp1[0xbU] = 0x50726f6aU;
    __Vtemp1[0xcU] = 0x6c6f725fU;
    __Vtemp1[0xdU] = 0x61636865U;
    __Vtemp1[0xeU] = 0x756c2f42U;
    __Vtemp1[0xfU] = 0x652f7061U;
    __Vtemp1[0x10U] = 0x2f686f6dU;
    VL_READMEM_N(true, 32, 2048, 0, VL_CVT_PACK_STR_NW(17, __Vtemp1)
                 , vlSymsp->TOP__servant_sim__dut__ram.mem
                 , 0, ~0ULL);
}

void Vservant_sim_servant_ram__pi3::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vservant_sim_servant_ram__pi3::_ctor_var_reset\n"); );
    // Body
    __PVT__i_wb_clk = VL_RAND_RESET_I(1);
    __PVT__i_wb_rst = VL_RAND_RESET_I(1);
    __PVT__i_wb_adr = VL_RAND_RESET_I(11);
    __PVT__i_wb_dat = VL_RAND_RESET_I(32);
    __PVT__i_wb_sel = VL_RAND_RESET_I(4);
    __PVT__i_wb_we = VL_RAND_RESET_I(1);
    __PVT__i_wb_cyc = VL_RAND_RESET_I(1);
    __PVT__o_wb_rdt = VL_RAND_RESET_I(32);
    __PVT__o_wb_ack = VL_RAND_RESET_I(1);
    __PVT__we = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<2048; ++__Vi0) {
            mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
}
