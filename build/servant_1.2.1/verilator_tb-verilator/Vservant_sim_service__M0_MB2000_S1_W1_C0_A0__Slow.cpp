// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vservant_sim.h for the primary calling header

#include "Vservant_sim_service__M0_MB2000_S1_W1_C0_A0.h"
#include "Vservant_sim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vservant_sim_service__M0_MB2000_S1_W1_C0_A0) {
    VL_CELL(ram, Vservant_sim_servant_ram__pi1);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vservant_sim_service__M0_MB2000_S1_W1_C0_A0::__Vconfigure(Vservant_sim__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vservant_sim_service__M0_MB2000_S1_W1_C0_A0::~Vservant_sim_service__M0_MB2000_S1_W1_C0_A0() {
}

void Vservant_sim_service__M0_MB2000_S1_W1_C0_A0::_initial__TOP__servant_sim__dut__1(Vservant_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vservant_sim_service__M0_MB2000_S1_W1_C0_A0::_initial__TOP__servant_sim__dut__1\n"); );
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_active = 0U;
    vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__temp_done = 0U;
    vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__temp_done = 0U;
    vlSymsp->TOP__servant_sim__dut.__PVT__o_data = 1U;
    vlSymsp->TOP__servant_sim__dut.__PVT__to_pc = 1U;
    vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__rx_byte = 0U;
    vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__temp_data = 0xffU;
    vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__state = 0U;
    vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__clock_count = 0U;
    vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__data_index = 0U;
    vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__temp_data = 0xffU;
    vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__state = 0U;
    vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__clock_count = 0U;
    vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__data_index = 0U;
    vlSymsp->TOP__servant_sim__dut.__PVT__ble_data_adr = 0xc00000U;
    vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done = 0U;
    vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__rx_bit = 1U;
    vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__data_index = 0U;
    vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__clock_count = 0U;
    vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__state = 0U;
    vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__r_Rx_temp = 1U;
    vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg = 0x1fU;
}

void Vservant_sim_service__M0_MB2000_S1_W1_C0_A0::_settle__TOP__servant_sim__dut__4(Vservant_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vservant_sim_service__M0_MB2000_S1_W1_C0_A0::_settle__TOP__servant_sim__dut__4\n"); );
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__d 
        = (1U & ((4U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3))
                  ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                     >> 4U) : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_sel 
        = ((8U & ((((3U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb)) 
                    << 3U) | (0xfffffff8U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                             << 2U))) 
                  | (0xfffffff8U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                     << 3U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                               << 2U))))) 
           | ((4U & (((2U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb)) 
                      << 2U) | (0xfffffffcU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                               << 1U)))) 
              | ((2U & ((((1U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb)) 
                          << 1U) | (0xfffffffeU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
                        | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                            & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                  >> 1U))) << 1U))) 
                 | (0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig 
        = (1U & (~ (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                     & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                        >> 1U)) | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                    >> 1U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                              >> 2U)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel 
        = ((6U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel)) 
           | (0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel 
        = ((5U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel)) 
           | ((1U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                            >> 1U))) << 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel 
        = ((3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel)) 
           | (4U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_misalign 
        = (1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                  & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                      >> 1U) | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
                 | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                     >> 1U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                               >> 1U))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rdata 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram__DOT__rdata) 
           & (~ (- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram__DOT__regzero)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_en 
        = (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr 
        = ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op26) 
             & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op20)) 
            << 1U) | (1U & ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op26)) 
                            | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op21))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid 
        = (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                   >> 1U) | (0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                          >> 1U)))) 
                 | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                    & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                          >> 2U)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt2 
        = ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
              >> 2U));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt3 
        = ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
              >> 3U));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt0 
        = ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__timer_irq 
        = (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__timer_irq) 
            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mstatus_mie)) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mie_mtie));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2_q 
        = (((((3U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb)) 
              & (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
                 >> 0x18U)) | ((2U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb)) 
                               & (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
                                  >> 0x10U))) | ((1U 
                                                  == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb)) 
                                                 & (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
                                                    >> 8U))) 
           | ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb)) 
              & vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op 
        = (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                   >> 2U) | (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                  >> 2U)) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                             >> 4U)) 
                             & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                 | (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                         >> 2U)) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                       >> 3U))) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en 
        = (1U & ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 4U)) | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                    >> 1U)) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret 
        = (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
              >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                        >> 2U)) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op21)) 
           & (~ (IData)((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_dbus_en 
        = (1U & ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 2U)) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                   >> 4U))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a 
        = (((((0U == (7U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
              | (3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))) 
             | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                            >> 2U)) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op20))) 
            | (0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                            >> 3U)))) & vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_adr);
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_utype 
        = (1U & (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                      >> 4U)) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                 >> 2U)) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_sub 
        = (1U & (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                    >> 1U) | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3)) 
                  | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                      >> 3U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__imm30))) 
                 | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                    >> 4U)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__csr_op 
        = ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
             >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                       >> 2U)) & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op 
        = (1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 2U) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                               >> 1U))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl 
        = ((0xeU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl)) 
           | (8U == (0xfU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl 
        = ((0xdU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl)) 
           | (((0U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
               | (0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                               >> 1U)))) << 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl 
        = ((0xbU & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl)) 
           | (4U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                     >> 2U) & ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode)) 
                               << 2U))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl 
        = ((7U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl)) 
           | (8U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                    >> 1U)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_e_op 
        = (1U & (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                    >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                              >> 2U)) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op21))) 
                 & (~ (IData)((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_two_stage_op 
        = (1U & (((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                      >> 2U)) | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                   & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                         >> 1U))) & 
                                  (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                                 & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                       >> 4U)))) | 
                 (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                     >> 1U) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                  >> 2U))) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                  & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                        >> 4U)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_imm_en 
        = (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                   >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                             >> 2U)) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                        >> 2U)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__ibus_cyc) 
           & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rdata1 
        = (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rdata)
                  : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata1)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy 
        = (1U & ((((1U & vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_adr) 
                   + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt2)) 
                  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r)) 
                 >> 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4 
        = (1U & ((vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_adr 
                  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt2)) 
                 + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt0) 
           & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
               >> 4U) & ((0U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                         | (3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_cyc 
        = ((((~ (IData)((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r)))) 
             & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__init_done)) 
            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_dbus_en)) 
           & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_misalign)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en 
        = (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__csr_op) 
            & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op26))) 
           & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op22)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en 
        = (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__csr_op) 
            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op21)) 
           & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op20)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__csr_op) 
           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op20) 
              | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op26) 
                 & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op21)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap 
        = (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_e_op) 
            | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__new_irq)) 
           | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__misalign_trap_sync_r));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init 
        = (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_two_stage_op) 
            & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__new_irq))) 
           & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__init_done)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_en 
        = ((8U & ((((0x7ffffff8U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                    >> 1U)) | (0xfffffff8U 
                                               & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                   | (0xfffffff8U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                     << 1U))) | ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode)) 
                                                 << 3U))) 
           | ((4U & (((0x3ffffffcU & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                       >> 2U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                      | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                             >> 3U)) << 2U)) | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                << 2U))) 
              | ((2U & ((((1U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                        >> 1U))) << 1U) 
                         | (0x7ffffffeU & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                            >> 1U) 
                                           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                              << 1U)))) 
                        | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_imm_en) 
                           << 1U))) | (1U & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__signbit 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm31) 
           & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_imm_en)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack 
        = ((IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_ack) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_mem_adr 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc)
            ? vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_adr
            : (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
               << 2U));
    vlSymsp->TOP__servant_sim__dut.__PVT__cyc = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done) 
                                                 | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc) 
                                                    | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_cyc) 
                                                       & (0U 
                                                          == 
                                                          (3U 
                                                           & (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                              >> 0x1cU))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_out 
        = (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en) 
              & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mstatus_mie)) 
             & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt3)) 
            | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rdata1) 
               & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en))) 
           | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en) 
               & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r))) 
              & ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt))
                  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0)
                  : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done) 
                     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause31)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__waddr 
        = ((((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                    - (IData)(1U))) ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)
                                        ? 0x22U : (0x20U 
                                                   | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr)))
              : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)
                  ? 0x23U : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))) 
            << 4U) | (0xfU & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                               - (IData)(3U)) >> 1U)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__sel_rs2 
        = (1U & (~ (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
                     | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret)) 
                    | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl_pc_en 
        = ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r)) 
           & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat_shamt 
        = (0x3fU & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op) 
                     & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init)))
                     ? ((0x3fU & vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat) 
                        - (IData)(1U)) : ((0x20U & 
                                           ((vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
                                             >> 1U) 
                                            & ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op) 
                                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done))) 
                                               << 5U))) 
                                          | (0x1fU 
                                             & (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
                                                >> 1U)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_en 
        = (((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r)) 
            & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init) 
               | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
                   | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                      >> 4U)) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_two_stage_op)))) 
           | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op) 
                & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req))) 
               & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                   >> 2U) | (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
                             >> 5U))) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__init_done)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__imm 
        = (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done)
                  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__signbit)
                  : ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl))
                      ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7)
                      : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_rreq 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack) 
           | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req) 
              & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__misalign_trap_sync_r)));
    vlSymsp->TOP__servant_sim__dut.__PVT__adr = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done)
                                                  ? vlSymsp->TOP__servant_sim__dut.__PVT__ble_data_adr
                                                  : vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_mem_adr);
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_in 
        = ((1U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))
            ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__d)
            : ((2U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))
                ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_out) 
                   | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__d))
                : ((3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))
                    ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_out) 
                       & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__d)))
                    : ((0U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
                       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_out)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__raddr 
        = ((((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt))
              ? ((0x20U & ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__sel_rs2)) 
                           << 5U)) | ((0x1cU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20) 
                                                & ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__sel_rs2))) 
                                                   << 2U))) 
                                      | (3U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
                                                 | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret) 
                                                    << 1U)) 
                                                | ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en))) 
                                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr))) 
                                               | ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__sel_rs2))) 
                                                  & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20))))))
              : (0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                          >> 4U))) << 4U) | (0xfU & 
                                             ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                                              >> 1U)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_wreq 
        = ((((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__misalign_trap_sync_r)) 
             & (~ (IData)((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r))))) 
            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__init_done)) 
           & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op) 
                & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                    >> 5U) | (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                 >> 2U)))) | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_ack)) 
              | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                   >> 4U) | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                              >> 1U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                        >> 2U))) | 
                 ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__imm30) 
                    & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                       >> 2U)) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                  >> 3U)) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                                >> 2U))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_q 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_en));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__c 
        = (1U & (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                    & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en)) 
                   + (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__imm) 
                       & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                             >> 2U))) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb)))) 
                  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r)) 
                 >> 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__q 
        = (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en)) 
                  + (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__imm) 
                      & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                            >> 2U))) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb)))) 
                 + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b 
        = ((8U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))
            ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rdata1)
            : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__imm));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_utype)
            ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__imm) 
               & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                   >> 2U) | (3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)))))
            : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_q));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b) 
           ^ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_sub));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy 
        = (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                   + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b)) 
                  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r)) 
                 >> 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned 
        = (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                   + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b)) 
                  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r)) 
                 & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt0))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_cy 
        = (1U & ((((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0)) 
                   + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_b)) 
                  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r)) 
                 >> 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__result_add 
        = (1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_b)) 
                 + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu_cmp 
        = (1U & ((0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                               >> 1U))) ? ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__result_add)) 
                                           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__cmp_r) 
                                              | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt0)))
                  : ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig)) 
                      + (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b) 
                            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig)))) 
                     + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_cy))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__rd 
        = (1U & ((((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_utype) 
                     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
                    | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4) 
                       & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                           >> 4U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))) 
                   | (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_q) 
                         | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel) 
                            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__result_add))) 
                        | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel) 
                             >> 1U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__cmp_r)) 
                           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt0))) 
                       | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel) 
                           >> 2U) & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                                       ^ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b)) 
                                      & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
                                     | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                          >> 1U) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b)) 
                                        & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0))))) 
                      & (((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode)) 
                          & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                             >> 2U)) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                           >> 4U))))) 
                  | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_out) 
                     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__csr_op))) 
                 | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid)
                      ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2_q)
                      : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit) 
                         & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                               >> 2U)))) & ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                >> 2U)) 
                                            & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__take_branch 
        = (1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                            | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu_cmp) 
                               ^ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__wdata0 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)
            ? ((0x10U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))
                ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_q))
            : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__rd));
}

void Vservant_sim_service__M0_MB2000_S1_W1_C0_A0::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vservant_sim_service__M0_MB2000_S1_W1_C0_A0::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__q = VL_RAND_RESET_I(1);
    __PVT__to_pc = VL_RAND_RESET_I(1);
    __PVT__i_data = VL_RAND_RESET_I(1);
    __PVT__o_data = VL_RAND_RESET_I(1);
    __PVT__tx_active = VL_RAND_RESET_I(1);
    __PVT__data_to_ble = VL_RAND_RESET_I(8);
    __PVT__pc_active = VL_RAND_RESET_I(1);
    __PVT__pc_data = VL_RAND_RESET_I(8);
    __PVT__data_to = VL_RAND_RESET_I(8);
    __PVT__ble_data_adr = VL_RAND_RESET_I(32);
    __PVT__cyc = VL_RAND_RESET_I(1);
    __PVT__adr = VL_RAND_RESET_I(32);
    __PVT__clock_gen__DOT__genblk2__DOT__rst_reg = VL_RAND_RESET_I(5);
    __PVT__servant__DOT__timer_irq = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__wb_ibus_ack = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__wb_dbus_sel = VL_RAND_RESET_I(4);
    __PVT__servant__DOT__wb_dbus_cyc = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__wb_dbus_ack = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__wb_mem_adr = VL_RAND_RESET_I(32);
    __PVT__servant__DOT__wb_gpio_rdt = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__rf_wreq = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__rf_rreq = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__wdata0 = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__rdata1 = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__waddr = VL_RAND_RESET_I(10);
    __PVT__servant__DOT__cpu__DOT__raddr = VL_RAND_RESET_I(10);
    __PVT__servant__DOT__cpu__DOT__rdata = VL_RAND_RESET_I(2);
    __PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rgnt = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt = VL_RAND_RESET_I(5);
    __PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata0_r = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata1_r = VL_RAND_RESET_I(2);
    __PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wen0_r = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wen1_r = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rtrig1 = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0 = VL_RAND_RESET_I(2);
    __PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata1 = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rreq_r = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<576; ++__Vi0) {
            __PVT__servant__DOT__cpu__DOT__rf_ram__DOT__memory[__Vi0] = VL_RAND_RESET_I(2);
    }}
    __PVT__servant__DOT__cpu__DOT__rf_ram__DOT__rdata = VL_RAND_RESET_I(2);
    __PVT__servant__DOT__cpu__DOT__rf_ram__DOT__regzero = VL_RAND_RESET_I(1);
    servant__DOT__cpu__DOT__rf_ram__DOT____Vlvbound1 = VL_RAND_RESET_I(2);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl_pc_en = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__jump = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__imm = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__trap = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__init = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_en = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt0 = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt2 = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt3 = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_en = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_q = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2_q = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__alu_cmp = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_misalign = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__new_irq = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_adr = VL_RAND_RESET_I(32);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__init_done = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt = VL_RAND_RESET_I(3);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r = VL_RAND_RESET_I(4);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__ibus_cyc = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__take_branch = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__misalign_trap_sync_r = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode = VL_RAND_RESET_I(5);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3 = VL_RAND_RESET_I(3);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op20 = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op21 = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op22 = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op26 = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__imm25 = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__imm30 = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_two_stage_op = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_dbus_en = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_utype = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__csr_op = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_e_op = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_sub = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_imm_en = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr = VL_RAND_RESET_I(2);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl = VL_RAND_RESET_I(4);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_en = VL_RAND_RESET_I(4);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel = VL_RAND_RESET_I(3);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm31 = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20 = VL_RAND_RESET_I(9);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm7 = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25 = VL_RAND_RESET_I(6);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20 = VL_RAND_RESET_I(5);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7 = VL_RAND_RESET_I(5);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__signbit = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__c = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__q = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data = VL_RAND_RESET_I(30);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb = VL_RAND_RESET_I(2);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat = VL_RAND_RESET_I(32);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat_shamt = VL_RAND_RESET_I(6);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4 = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__result_add = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__cmp_r = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_cy = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_b = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__rd = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__sel_rs2 = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mstatus_mie = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mstatus_mpie = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mie_mtie = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause31 = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0 = VL_RAND_RESET_I(4);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_in = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_out = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__timer_irq_r = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__d = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__timer_irq = VL_RAND_RESET_I(1);
    __PVT__servant__DOT__genblk1__DOT__timer__DOT__mtime = VL_RAND_RESET_I(32);
    __PVT__servant__DOT__genblk1__DOT__timer__DOT__mtimecmp = VL_RAND_RESET_I(32);
    __PVT__rx_from_ble__DOT__r_Rx_temp = VL_RAND_RESET_I(1);
    __PVT__rx_from_ble__DOT__rx_bit = VL_RAND_RESET_I(1);
    __PVT__rx_from_ble__DOT__temp_active = VL_RAND_RESET_I(1);
    __PVT__rx_from_ble__DOT__rx_byte = VL_RAND_RESET_I(8);
    __PVT__rx_from_ble__DOT__temp_done = VL_RAND_RESET_I(1);
    __PVT__rx_from_ble__DOT__data_index = VL_RAND_RESET_I(3);
    __PVT__rx_from_ble__DOT__clock_count = VL_RAND_RESET_I(7);
    __PVT__rx_from_ble__DOT__state = VL_RAND_RESET_I(2);
    __PVT__tx_to_ble__DOT__temp_done = VL_RAND_RESET_I(1);
    __PVT__tx_to_ble__DOT__temp_data = VL_RAND_RESET_I(8);
    __PVT__tx_to_ble__DOT__state = VL_RAND_RESET_I(2);
    __PVT__tx_to_ble__DOT__clock_count = VL_RAND_RESET_I(7);
    __PVT__tx_to_ble__DOT__data_index = VL_RAND_RESET_I(4);
    __PVT__tx_to_pc__DOT__temp_done = VL_RAND_RESET_I(1);
    __PVT__tx_to_pc__DOT__temp_data = VL_RAND_RESET_I(8);
    __PVT__tx_to_pc__DOT__state = VL_RAND_RESET_I(2);
    __PVT__tx_to_pc__DOT__clock_count = VL_RAND_RESET_I(7);
    __PVT__tx_to_pc__DOT__data_index = VL_RAND_RESET_I(4);
    __Vdly__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat = VL_RAND_RESET_I(32);
    __Vdly__rx_from_ble__DOT__data_index = VL_RAND_RESET_I(3);
    __Vdly__rx_from_ble__DOT__clock_count = VL_RAND_RESET_I(7);
    __Vdly__rx_from_ble__DOT__state = VL_RAND_RESET_I(2);
    __Vdly__clock_gen__DOT__genblk2__DOT__rst_reg = VL_RAND_RESET_I(5);
}
