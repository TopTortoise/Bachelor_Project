// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vservant_sim.h for the primary calling header

#ifndef _VSERVANT_SIM_SERVANT_SIM_H_
#define _VSERVANT_SIM_SERVANT_SIM_H_  // guard

#include "verilated.h"
#include "Vservant_sim__Dpi.h"

//==========

class Vservant_sim__Syms;
class Vservant_sim_VerilatedVcd;
class Vservant_sim_service__M0_MB2000_S1_W1_C0_A0;


//----------

VL_MODULE(Vservant_sim_servant_sim) {
  public:
    // CELLS
    Vservant_sim_service__M0_MB2000_S1_W1_C0_A0* dut;
    
    // PORTS
    VL_IN8(wb_clk,0,0);
    VL_IN8(wb_rst,0,0);
    VL_IN8(i_data,0,0);
    VL_OUT8(o_data,0,0);
    VL_OUT8(to_pc,0,0);
    VL_OUT8(q,0,0);
    
    // INTERNAL VARIABLES
  private:
    Vservant_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vservant_sim_servant_sim);  ///< Copying not allowed
  public:
    Vservant_sim_servant_sim(const char* name = "TOP");
    ~Vservant_sim_servant_sim();
    
    // INTERNAL METHODS
    void __Vconfigure(Vservant_sim__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
