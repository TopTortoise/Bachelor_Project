// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vservant_sim.h for the primary calling header

#ifndef _VSERVANT_SIM_SERVICE__PI1_H_
#define _VSERVANT_SIM_SERVICE__PI1_H_  // guard

#include "verilated_heavy.h"
#include "Vservant_sim__Dpi.h"

//==========

class Vservant_sim__Syms;
class Vservant_sim_VerilatedVcd;
class Vservant_sim_servant_ram__pi3;


//----------

VL_MODULE(Vservant_sim_service__pi1) {
  public:
    // CELLS
    Vservant_sim_servant_ram__pi3* ram;
    
    // PORTS
    VL_IN8(__PVT__i_clk,0,0);
    VL_OUT8(__PVT__q,0,0);
    VL_OUT8(__PVT__to_pc,0,0);
    VL_IN8(__PVT__i_data,0,0);
    VL_OUT8(__PVT__o_data,0,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__tx_active;
        CData/*7:0*/ __PVT__data_to_ble;
        CData/*0:0*/ __PVT__pc_active;
        CData/*7:0*/ __PVT__pc_data;
        CData/*7:0*/ __PVT__data_to;
        CData/*0:0*/ __PVT__cyc;
        CData/*4:0*/ __PVT__clock_gen__DOT__genblk2__DOT__rst_reg;
        CData/*0:0*/ __PVT__servant__DOT__timer_irq;
        CData/*0:0*/ __PVT__servant__DOT__wb_ibus_ack;
        CData/*3:0*/ __PVT__servant__DOT__wb_dbus_sel;
        CData/*0:0*/ __PVT__servant__DOT__wb_dbus_cyc;
        CData/*0:0*/ __PVT__servant__DOT__wb_dbus_ack;
        CData/*0:0*/ __PVT__servant__DOT__wb_gpio_rdt;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__rf_wreq;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__rf_rreq;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__wdata0;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__rdata1;
        CData/*1:0*/ __PVT__servant__DOT__cpu__DOT__rdata;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rgnt;
        CData/*4:0*/ __PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata0_r;
        CData/*1:0*/ __PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata1_r;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wen0_r;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wen1_r;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rtrig1;
        CData/*1:0*/ __PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata1;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rreq_r;
        CData/*1:0*/ __PVT__servant__DOT__cpu__DOT__rf_ram__DOT__rdata;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__rf_ram__DOT__regzero;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl_pc_en;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__jump;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__imm;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__trap;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__init;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_en;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt0;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt2;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt3;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_en;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_q;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2_q;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__alu_cmp;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_misalign;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__new_irq;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__init_done;
        CData/*2:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt;
        CData/*3:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__ibus_cyc;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__take_branch;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__misalign_trap_sync_r;
        CData/*4:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode;
        CData/*2:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op20;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op21;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op22;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op26;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__imm25;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__imm30;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_two_stage_op;
    };
    struct {
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_dbus_en;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_utype;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__csr_op;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_e_op;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_sub;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_imm_en;
        CData/*1:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig;
        CData/*3:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl;
        CData/*3:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_en;
        CData/*2:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm31;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm7;
        CData/*5:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25;
        CData/*4:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20;
        CData/*4:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__signbit;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__c;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__q;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r;
        CData/*1:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb;
        CData/*5:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat_shamt;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__result_add;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__cmp_r;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_cy;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_b;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__rd;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__sel_rs2;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mstatus_mie;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mstatus_mpie;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mie_mtie;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause31;
        CData/*3:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_in;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_out;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__timer_irq_r;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__d;
        CData/*0:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__timer_irq;
        CData/*0:0*/ __PVT__rx_from_ble__DOT__r_Rx_temp;
        CData/*0:0*/ __PVT__rx_from_ble__DOT__rx_bit;
        CData/*0:0*/ __PVT__rx_from_ble__DOT__temp_active;
        CData/*7:0*/ __PVT__rx_from_ble__DOT__rx_byte;
        CData/*0:0*/ __PVT__rx_from_ble__DOT__temp_done;
        CData/*3:0*/ __PVT__rx_from_ble__DOT__data_index;
        CData/*6:0*/ __PVT__rx_from_ble__DOT__clock_count;
    };
    struct {
        CData/*1:0*/ __PVT__rx_from_ble__DOT__state;
        CData/*0:0*/ __PVT__tx_to_ble__DOT__temp_done;
        CData/*7:0*/ __PVT__tx_to_ble__DOT__temp_data;
        CData/*1:0*/ __PVT__tx_to_ble__DOT__state;
        CData/*6:0*/ __PVT__tx_to_ble__DOT__clock_count;
        CData/*3:0*/ __PVT__tx_to_ble__DOT__data_index;
        CData/*0:0*/ __PVT__tx_to_pc__DOT__temp_done;
        CData/*7:0*/ __PVT__tx_to_pc__DOT__temp_data;
        CData/*1:0*/ __PVT__tx_to_pc__DOT__state;
        CData/*6:0*/ __PVT__tx_to_pc__DOT__clock_count;
        CData/*3:0*/ __PVT__tx_to_pc__DOT__data_index;
        SData/*9:0*/ __PVT__servant__DOT__cpu__DOT__waddr;
        SData/*9:0*/ __PVT__servant__DOT__cpu__DOT__raddr;
        SData/*8:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20;
        IData/*31:0*/ __PVT__ble_data_adr;
        IData/*31:0*/ __PVT__adr;
        IData/*31:0*/ __PVT__servant__DOT__wb_mem_adr;
        IData/*31:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_adr;
        IData/*29:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data;
        IData/*31:0*/ __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat;
        IData/*31:0*/ __PVT__servant__DOT__genblk1__DOT__timer__DOT__mtime;
        IData/*31:0*/ __PVT__servant__DOT__genblk1__DOT__timer__DOT__mtimecmp;
        CData/*1:0*/ __PVT__servant__DOT__cpu__DOT__rf_ram__DOT__memory[576];
    };
    
    // LOCAL VARIABLES
    CData/*1:0*/ servant__DOT__cpu__DOT__rf_ram__DOT____Vlvbound1;
    CData/*3:0*/ __Vdly__rx_from_ble__DOT__data_index;
    CData/*6:0*/ __Vdly__rx_from_ble__DOT__clock_count;
    CData/*1:0*/ __Vdly__rx_from_ble__DOT__state;
    CData/*4:0*/ __Vdly__clock_gen__DOT__genblk2__DOT__rst_reg;
    IData/*31:0*/ __Vdly__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat;
    
    // INTERNAL VARIABLES
  private:
    Vservant_sim__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vservant_sim_service__pi1);  ///< Copying not allowed
  public:
    Vservant_sim_service__pi1(const char* name = "TOP");
    ~Vservant_sim_service__pi1();
    
    // INTERNAL METHODS
    void __Vconfigure(Vservant_sim__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__servant_sim__dut__1(Vservant_sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__servant_sim__dut__2(Vservant_sim__Syms* __restrict vlSymsp);
    static void _sequent__TOP__servant_sim__dut__3(Vservant_sim__Syms* __restrict vlSymsp);
    static void _settle__TOP__servant_sim__dut__4(Vservant_sim__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
