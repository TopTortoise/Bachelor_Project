// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vservant_sim.h for the primary calling header

#include "Vservant_sim_service__pi1.h"
#include "Vservant_sim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vservant_sim_service__pi1::_sequent__TOP__servant_sim__dut__2(Vservant_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vservant_sim_service__pi1::_sequent__TOP__servant_sim__dut__2\n"); );
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__tx_active;
    CData/*0:0*/ __Vdly__servant__DOT__wb_dbus_ack;
    CData/*1:0*/ __Vdly__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata1_r;
    CData/*4:0*/ __Vdly__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt;
    CData/*1:0*/ __Vdlyvval__servant__DOT__cpu__DOT__rf_ram__DOT__memory__v0;
    CData/*0:0*/ __Vdlyvset__servant__DOT__cpu__DOT__rf_ram__DOT__memory__v0;
    CData/*0:0*/ __Vdly__servant__DOT__cpu__DOT__cpu__DOT__cnt_done;
    CData/*3:0*/ __Vdly__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r;
    CData/*5:0*/ __Vdly__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25;
    CData/*4:0*/ __Vdly__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7;
    CData/*1:0*/ __Vdly__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb;
    CData/*0:0*/ __Vdly__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mstatus_mpie;
    CData/*3:0*/ __Vdly__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0;
    CData/*6:0*/ __Vdly__tx_to_ble__DOT__clock_count;
    CData/*3:0*/ __Vdly__tx_to_ble__DOT__data_index;
    CData/*7:0*/ __Vdly__tx_to_ble__DOT__temp_data;
    CData/*1:0*/ __Vdly__tx_to_ble__DOT__state;
    CData/*6:0*/ __Vdly__tx_to_pc__DOT__clock_count;
    CData/*3:0*/ __Vdly__tx_to_pc__DOT__data_index;
    CData/*7:0*/ __Vdly__tx_to_pc__DOT__temp_data;
    CData/*1:0*/ __Vdly__tx_to_pc__DOT__state;
    SData/*9:0*/ __Vdlyvdim0__servant__DOT__cpu__DOT__rf_ram__DOT__memory__v0;
    SData/*8:0*/ __Vdly__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20;
    IData/*31:0*/ __Vdly__ble_data_adr;
    IData/*29:0*/ __Vdly__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data;
    IData/*31:0*/ __Vdly__servant__DOT__genblk1__DOT__timer__DOT__mtime;
    // Body
    __Vdly__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt 
        = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt;
    vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__state 
        = vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__state;
    vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__clock_count 
        = vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__clock_count;
    vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__data_index 
        = vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__data_index;
    __Vdly__servant__DOT__genblk1__DOT__timer__DOT__mtime 
        = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__genblk1__DOT__timer__DOT__mtime;
    __Vdly__tx_active = vlSymsp->TOP__servant_sim__dut.__PVT__tx_active;
    __Vdly__servant__DOT__wb_dbus_ack = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_ack;
    __Vdly__tx_to_ble__DOT__state = vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__state;
    __Vdly__tx_to_ble__DOT__temp_data = vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__temp_data;
    __Vdly__tx_to_ble__DOT__data_index = vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__data_index;
    __Vdly__tx_to_ble__DOT__clock_count = vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__clock_count;
    __Vdly__ble_data_adr = vlSymsp->TOP__servant_sim__dut.__PVT__ble_data_adr;
    vlSymsp->TOP__servant_sim__dut.__Vdly__clock_gen__DOT__genblk2__DOT__rst_reg 
        = vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg;
    __Vdly__tx_to_pc__DOT__state = vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__state;
    __Vdly__tx_to_pc__DOT__temp_data = vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__temp_data;
    __Vdly__tx_to_pc__DOT__data_index = vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__data_index;
    __Vdly__tx_to_pc__DOT__clock_count = vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__clock_count;
    __Vdly__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata1_r 
        = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata1_r;
    __Vdly__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mstatus_mpie 
        = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mstatus_mpie;
    __Vdly__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
        = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data;
    __Vdly__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb 
        = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb;
    __Vdlyvset__servant__DOT__cpu__DOT__rf_ram__DOT__memory__v0 = 0U;
    __Vdly__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r 
        = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r;
    __Vdly__servant__DOT__cpu__DOT__cpu__DOT__cnt_done 
        = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done;
    __Vdly__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25 
        = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25;
    __Vdly__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20 
        = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20;
    __Vdly__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7 
        = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7;
    vlSymsp->TOP__servant_sim__dut.__Vdly__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
        = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat;
    __Vdly__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0 
        = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0;
    if (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__imm25 
            = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                     >> 0x19U));
    }
    __Vdly__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt 
        = (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt)));
    if (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_rreq) {
        __Vdly__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt = 0U;
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_wreq) {
        __Vdly__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt = 2U;
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit 
            = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2_q;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl_pc_en) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy));
    __Vdly__servant__DOT__genblk1__DOT__timer__DOT__mtime 
        = ((IData)(1U) + vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__genblk1__DOT__timer__DOT__mtime);
    if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg))) {
        __Vdly__servant__DOT__genblk1__DOT__timer__DOT__mtime = 0U;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl_pc_en) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy));
    if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg))) {
        __Vdly__tx_active = 0U;
    } else {
        if ((0xa00000U != vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_mem_adr)) {
            if ((0xf00000U == vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_mem_adr)) {
                __Vdly__tx_active = 1U;
            }
        }
        if (vlSymsp->TOP__servant_sim__dut.__PVT__tx_active) {
            __Vdly__tx_active = 0U;
        }
    }
    __Vdly__servant__DOT__wb_dbus_ack = 0U;
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_cyc) 
         & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_ack)))) {
        __Vdly__servant__DOT__wb_dbus_ack = 1U;
    }
    if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg))) {
        __Vdly__servant__DOT__wb_dbus_ack = 0U;
    }
    if ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__state))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__o_data = 1U;
        vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__temp_done = 0U;
        __Vdly__tx_to_ble__DOT__clock_count = 0U;
        __Vdly__tx_to_ble__DOT__data_index = 0U;
        __Vdly__tx_to_ble__DOT__temp_data = vlSymsp->TOP__servant_sim__dut.__PVT__data_to_ble;
        __Vdly__tx_to_ble__DOT__state = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_active)
                                          ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__state))) {
            vlSymsp->TOP__servant_sim__dut.__PVT__o_data = 0U;
            if ((0x67U > (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__clock_count))) {
                __Vdly__tx_to_ble__DOT__clock_count 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__clock_count)));
                __Vdly__tx_to_ble__DOT__temp_data = vlSymsp->TOP__servant_sim__dut.__PVT__data_to_ble;
                __Vdly__tx_to_ble__DOT__state = 1U;
            } else {
                __Vdly__tx_to_ble__DOT__clock_count = 0U;
                __Vdly__tx_to_ble__DOT__state = 2U;
            }
        } else {
            if ((2U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__state))) {
                vlSymsp->TOP__servant_sim__dut.__PVT__o_data 
                    = (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__temp_data) 
                             >> (7U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__data_index))));
                if ((0x67U > (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__clock_count))) {
                    __Vdly__tx_to_ble__DOT__clock_count 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__clock_count)));
                    __Vdly__tx_to_ble__DOT__state = 2U;
                } else {
                    __Vdly__tx_to_ble__DOT__clock_count = 0U;
                    if ((7U > (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__data_index))) {
                        __Vdly__tx_to_ble__DOT__data_index 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__data_index)));
                        __Vdly__tx_to_ble__DOT__state = 2U;
                    } else {
                        __Vdly__tx_to_ble__DOT__data_index = 0U;
                        __Vdly__tx_to_ble__DOT__state = 3U;
                    }
                }
            } else {
                if ((3U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__state))) {
                    vlSymsp->TOP__servant_sim__dut.__PVT__o_data = 1U;
                    if ((0x67U > (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__clock_count))) {
                        __Vdly__tx_to_ble__DOT__clock_count 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__clock_count)));
                        __Vdly__tx_to_ble__DOT__state = 3U;
                    } else {
                        vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__temp_done = 1U;
                        __Vdly__tx_to_ble__DOT__clock_count = 0U;
                        __Vdly__tx_to_ble__DOT__state = 0U;
                    }
                } else {
                    __Vdly__tx_to_ble__DOT__state = 0U;
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg)))) {
        if ((0xc10000U < vlSymsp->TOP__servant_sim__dut.__PVT__ble_data_adr)) {
            __Vdly__ble_data_adr = 0xc00000U;
        }
        __Vdly__ble_data_adr = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done)
                                 ? ((IData)(4U) + vlSymsp->TOP__servant_sim__dut.__PVT__ble_data_adr)
                                 : vlSymsp->TOP__servant_sim__dut.__PVT__ble_data_adr);
    }
    vlSymsp->TOP__servant_sim__dut.__Vdly__clock_gen__DOT__genblk2__DOT__rst_reg 
        = (0xfU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg) 
                   >> 1U));
    if ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__state))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__to_pc = 1U;
        vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__temp_done = 0U;
        __Vdly__tx_to_pc__DOT__clock_count = 0U;
        __Vdly__tx_to_pc__DOT__data_index = 0U;
        __Vdly__tx_to_pc__DOT__temp_data = vlSymsp->TOP__servant_sim__dut.__PVT__data_to;
        __Vdly__tx_to_pc__DOT__state = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__pc_active)
                                         ? 1U : 0U);
    } else {
        if ((1U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__state))) {
            vlSymsp->TOP__servant_sim__dut.__PVT__to_pc = 0U;
            if ((0x67U > (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__clock_count))) {
                __Vdly__tx_to_pc__DOT__clock_count 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__clock_count)));
                __Vdly__tx_to_pc__DOT__temp_data = vlSymsp->TOP__servant_sim__dut.__PVT__data_to;
                __Vdly__tx_to_pc__DOT__state = 1U;
            } else {
                __Vdly__tx_to_pc__DOT__clock_count = 0U;
                __Vdly__tx_to_pc__DOT__state = 2U;
            }
        } else {
            if ((2U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__state))) {
                vlSymsp->TOP__servant_sim__dut.__PVT__to_pc 
                    = (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__temp_data) 
                             >> (7U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__data_index))));
                if ((0x67U > (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__clock_count))) {
                    __Vdly__tx_to_pc__DOT__clock_count 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__clock_count)));
                    __Vdly__tx_to_pc__DOT__state = 2U;
                } else {
                    __Vdly__tx_to_pc__DOT__clock_count = 0U;
                    if ((7U > (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__data_index))) {
                        __Vdly__tx_to_pc__DOT__data_index 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__data_index)));
                        __Vdly__tx_to_pc__DOT__state = 2U;
                    } else {
                        __Vdly__tx_to_pc__DOT__data_index = 0U;
                        __Vdly__tx_to_pc__DOT__state = 3U;
                    }
                }
            } else {
                if ((3U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__state))) {
                    vlSymsp->TOP__servant_sim__dut.__PVT__to_pc = 1U;
                    if ((0x67U > (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__clock_count))) {
                        __Vdly__tx_to_pc__DOT__clock_count 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__clock_count)));
                        __Vdly__tx_to_pc__DOT__state = 3U;
                    } else {
                        vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__temp_done = 1U;
                        __Vdly__tx_to_pc__DOT__clock_count = 0U;
                        __Vdly__tx_to_pc__DOT__state = 0U;
                    }
                } else {
                    __Vdly__tx_to_pc__DOT__state = 0U;
                }
            }
        }
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__c) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_en));
    if ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__cmp_r 
            = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu_cmp;
    }
    __Vdly__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata1_r 
        = ((2U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)
                    ? vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_adr
                    : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_in)) 
                  << 1U)) | (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata1_r) 
                                   >> 1U)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r 
        = ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r))
            ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_cy)
            : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_sub));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0 
        = (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                 >> 1U));
    if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0 
            = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rdata;
    }
    if ((((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__csr_op) 
            & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op26))) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op22)) 
          & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op20))) 
         & ((1U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
            & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
               >> 3U)))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mie_mtie 
            = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_in;
    }
    if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mie_mtie = 0U;
    }
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
         & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done))) {
        __Vdly__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mstatus_mpie 
            = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mstatus_mie;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram__DOT__regzero 
        = (1U & (~ (IData)((0U != (0x3fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__raddr) 
                                            >> 4U))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram__DOT__rdata 
        = ((0x23fU >= (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__raddr))
            ? vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram__DOT__memory
           [vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__raddr]
            : 0U);
    if (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_en) {
        __Vdly__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
            = ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init)
                  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__q)
                  : ((vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                      >> 0x1dU) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__imm30))) 
                << 0x1dU) | (0x1fffffffU & (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                            >> 1U)));
    }
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init)
          ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt0) 
             | ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
                & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
                   >> 1U))) : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_en))) {
        __Vdly__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb 
            = ((2U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init)
                        ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__q)
                        : vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data) 
                      << 1U)) | (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                       >> 1U)));
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__misalign_trap_sync_r 
            = ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__take_branch) 
                 & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                    >> 1U)) | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_dbus_en) 
                               & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_misalign))) 
               & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init));
    }
    if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__misalign_trap_sync_r = 0U;
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm31 
            = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                     >> 0x1fU));
    }
    if ((((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt) 
              - (IData)(1U))) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wen0_r)) 
         | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt) 
             - (IData)(1U)) & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wen1_r)))) {
        vlSymsp->TOP__servant_sim__dut.servant__DOT__cpu__DOT__rf_ram__DOT____Vlvbound1 
            = ((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                      - (IData)(1U))) ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata1_r)
                : (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__wdata0) 
                    << 1U) | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata0_r)));
        if ((0x23fU >= (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__waddr))) {
            __Vdlyvval__servant__DOT__cpu__DOT__rf_ram__DOT__memory__v0 
                = vlSymsp->TOP__servant_sim__dut.servant__DOT__cpu__DOT__rf_ram__DOT____Vlvbound1;
            __Vdlyvset__servant__DOT__cpu__DOT__rf_ram__DOT__memory__v0 = 1U;
            __Vdlyvdim0__servant__DOT__cpu__DOT__rf_ram__DOT__memory__v0 
                = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__waddr;
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op21 
            = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                     >> 0x15U));
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rtrig1) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata1 
            = (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rdata) 
                     >> 1U));
    }
    if ((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl_pc_en) 
               | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg)))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_adr 
            = ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg))
                ? 0U : (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
                           | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret))
                           ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rdata1) 
                              & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt0)))
                           : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__jump)
                               ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                               : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4))) 
                         << 0x1fU) | (0x7fffffffU & 
                                      (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_adr 
                                       >> 1U))));
    }
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack) 
         | ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r)) 
            & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_en) 
               >> 1U)))) {
        __Vdly__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20 
            = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack)
                ? ((0x1feU & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                              >> 0xbU)) | (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                                                 >> 0x14U)))
                : ((0x100U & (((8U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl))
                                ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__signbit)
                                : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20)) 
                              << 8U)) | (0xffU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                                                  >> 1U))));
    }
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack) 
         | ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r)) 
            & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_en) 
               >> 3U)))) {
        __Vdly__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25 
            = (0x3fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack)
                         ? (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                            >> 0x19U) : ((0x20U & (
                                                   ((4U 
                                                     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl))
                                                     ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm7)
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl))
                                                      ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__signbit)
                                                      : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20))) 
                                                   << 5U)) 
                                         | (0x1fU & 
                                            ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25) 
                                             >> 1U)))));
    }
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack) 
         | ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r)) 
            & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_en) 
               >> 2U)))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20 
            = (0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack)
                         ? (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                            >> 0x14U) : ((0x10U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25) 
                                                   << 4U)) 
                                         | (0xfU & 
                                            ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20) 
                                             >> 1U)))));
    }
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack) 
         | ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r)) 
            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_en)))) {
        __Vdly__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7 
            = (0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack)
                         ? (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                            >> 7U) : ((0x10U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25) 
                                                << 4U)) 
                                      | (0xfU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7) 
                                                 >> 1U)))));
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3 
            = (7U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                     >> 0xcU));
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__timer_irq 
        = (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__genblk1__DOT__timer__DOT__mtime 
           >= vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__genblk1__DOT__timer__DOT__mtimecmp);
    if ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op) 
          | ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r)) 
             & ((((((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb)) 
                    & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                          >> 1U))) | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                          >> 1U)) & 
                                      (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                          >> 2U)))) 
                  | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                         >> 2U)) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                       >> 1U)))) | 
                 ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                      >> 2U)) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb)))) 
                | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                       >> 1U)) & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                     >> 1U)))))) | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_ack))) {
        vlSymsp->TOP__servant_sim__dut.__Vdly__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
            = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_ack)
                ? ((0x20000000U & vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data)
                    ? vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__genblk1__DOT__timer__DOT__mtime
                    : ((0x10000000U & vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data)
                        ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_gpio_rdt)
                        : vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))
                : (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b) 
                    << 0x1fU) | ((0x7fffffc0U & (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
                                                 >> 1U)) 
                                 | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat_shamt))));
    }
    if (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en) 
           & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r))) 
          & (0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt))) 
         | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done)))) {
        __Vdly__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0 
            = ((7U & (IData)(__Vdly__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0)) 
               | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_e_op) 
                    & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op20))) 
                   | ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)) 
                      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_in))) 
                  << 3U));
        __Vdly__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0 
            = ((0xbU & (IData)(__Vdly__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0)) 
               | (4U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__new_irq) 
                          | (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                >> 4U))) << 2U) | (0x7ffffffcU 
                                                   & (((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)) 
                                                       << 2U) 
                                                      & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0) 
                                                         >> 1U))))));
        __Vdly__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0 
            = ((0xdU & (IData)(__Vdly__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0)) 
               | (2U & (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__new_irq) 
                           | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_e_op)) 
                          << 1U) | (0x3ffffffeU & (
                                                   ((~ 
                                                     ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                      >> 4U)) 
                                                    << 1U) 
                                                   & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                      >> 2U)))) 
                        | (0x7ffffffeU & (((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)) 
                                           << 1U) & 
                                          ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0) 
                                           >> 1U))))));
        __Vdly__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0 
            = ((0xeU & (IData)(__Vdly__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0)) 
               | (1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__new_irq) 
                         | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_e_op)) 
                        | ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)) 
                           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0) 
                              >> 1U)))));
    }
    if ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en) 
          & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done)) 
         | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause31 
            = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)
                ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__new_irq)
                : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_in));
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__tx_active 
        = __Vdly__tx_active;
    vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__state 
        = __Vdly__tx_to_ble__DOT__state;
    vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__clock_count 
        = __Vdly__tx_to_ble__DOT__clock_count;
    vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__temp_data 
        = __Vdly__tx_to_ble__DOT__temp_data;
    vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__data_index 
        = __Vdly__tx_to_ble__DOT__data_index;
    vlSymsp->TOP__servant_sim__dut.__PVT__ble_data_adr 
        = __Vdly__ble_data_adr;
    vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__state 
        = __Vdly__tx_to_pc__DOT__state;
    vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__clock_count 
        = __Vdly__tx_to_pc__DOT__clock_count;
    vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__temp_data 
        = __Vdly__tx_to_pc__DOT__temp_data;
    vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__data_index 
        = __Vdly__tx_to_pc__DOT__data_index;
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata1_r 
        = __Vdly__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata1_r;
    if (__Vdlyvset__servant__DOT__cpu__DOT__rf_ram__DOT__memory__v0) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram__DOT__memory[__Vdlyvdim0__servant__DOT__cpu__DOT__rf_ram__DOT__memory__v0] 
            = __Vdlyvval__servant__DOT__cpu__DOT__rf_ram__DOT__memory__v0;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25 
        = __Vdly__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25;
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20 
        = __Vdly__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20;
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__genblk1__DOT__timer__DOT__mtime 
        = __Vdly__servant__DOT__genblk1__DOT__timer__DOT__mtime;
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_ack 
        = __Vdly__servant__DOT__wb_dbus_ack;
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb 
        = __Vdly__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb;
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0 
        = __Vdly__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0;
    if ((1U & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg)))) {
        if ((0xa00000U != vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_mem_adr)) {
            if ((0xf00000U == vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_mem_adr)) {
                vlSymsp->TOP__servant_sim__dut.__PVT__data_to_ble 
                    = (0xffU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt);
            }
        }
    }
    if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__pc_active = 0U;
    } else {
        vlSymsp->TOP__servant_sim__dut.__PVT__pc_active = 0U;
        if ((0xa00000U == vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_mem_adr)) {
            vlSymsp->TOP__servant_sim__dut.__PVT__pc_active = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg)))) {
        if ((0xa00000U == vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_mem_adr)) {
            vlSymsp->TOP__servant_sim__dut.__PVT__data_to 
                = (0xffU & vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt);
        }
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op22 
            = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                     >> 0x16U));
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op26 
            = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                     >> 0x1aU));
    }
    if (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done)) 
          | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en) 
             & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt3))) 
         | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mstatus_mie 
            = ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)) 
               & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret)
                   ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mstatus_mpie)
                   : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_in)));
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rdata 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram__DOT__rdata) 
           & (~ (- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram__DOT__regzero)))));
    if (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__imm30 
            = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                     >> 0x1eU));
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata0_r 
        = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__wdata0;
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wen1_r 
        = ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r)) 
           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
              | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wen0_r 
        = ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r)) 
           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
              | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op) 
                  & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init))) 
                 & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rtrig1 
        = (1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt));
    if ((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack) 
                | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done)) 
               | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg)))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__ibus_cyc 
            = (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl_pc_en) 
                     | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg)));
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__init_done 
            = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init) 
               & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__init_done)));
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__jump 
            = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init) 
               & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__take_branch));
    }
    __Vdly__servant__DOT__cpu__DOT__cpu__DOT__cnt_done 
        = ((7U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
              >> 2U));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt 
        = (7U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                 + (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
                          >> 3U))));
    __Vdly__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r 
        = ((0xeU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
                    << 1U)) | (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
                                       >> 3U) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done))) 
                                     | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rgnt) 
                                         | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_wreq)) 
                                        & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_en))))));
    if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__init_done = 0U;
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt = 0U;
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__jump = 0U;
        __Vdly__servant__DOT__cpu__DOT__cpu__DOT__cnt_done = 0U;
        __Vdly__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r = 0U;
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req = 0U;
    }
    if (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack) 
         | (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r)))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm7 
            = (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack)
                      ? (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                         >> 7U) : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__signbit)));
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__d 
        = (1U & ((4U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3))
                  ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                     >> 4U) : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0)));
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
    if ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_cyc) 
          & (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
             >> 0x1dU)) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                           >> 3U))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__genblk1__DOT__timer__DOT__mtimecmp 
            = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat;
    }
    if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__genblk1__DOT__timer__DOT__mtimecmp = 0U;
    }
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
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_misalign 
        = (1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                  & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                      >> 1U) | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
                 | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                     >> 1U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                               >> 1U))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_gpio_rdt 
        = vlSymsp->TOP__servant_sim__dut.__PVT__q;
    if (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op20 
            = (1U & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                     >> 0x14U));
    }
    if (((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init)) 
         & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__new_irq 
            = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__timer_irq) 
               & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__timer_irq_r)));
    }
    if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__new_irq = 0U;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mstatus_mpie 
        = __Vdly__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mstatus_mpie;
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7 
        = __Vdly__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7;
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt 
        = __Vdly__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt;
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r 
        = __Vdly__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r;
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rdata1 
        = (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rtrig1)
                  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rdata)
                  : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata1)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rgnt 
        = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rreq_r;
    if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rgnt = 0U;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid 
        = (1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                   >> 1U) | (0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                          >> 1U)))) 
                 | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                    & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                          >> 2U)))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_en 
        = (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r));
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
    if ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_cyc) 
          & (1U == (3U & (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                          >> 0x1cU)))) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                          >> 3U))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__q = (1U 
                                                   & vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat);
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr 
        = ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op26) 
             & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op20)) 
            << 1U) | (1U & ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op26)) 
                            | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op21))));
    if (((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init)) 
         & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__timer_irq_r 
            = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__timer_irq;
    }
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy 
        = (1U & ((((1U & vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_adr) 
                   + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt2)) 
                  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r)) 
                 >> 1U));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4 
        = (1U & ((vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_adr 
                  + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt2)) 
                 + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r)));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
        = __Vdly__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data;
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__timer_irq 
        = (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__timer_irq) 
            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mstatus_mie)) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mie_mtie));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done 
        = __Vdly__servant__DOT__cpu__DOT__cpu__DOT__cnt_done;
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rreq_r 
        = vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_rreq;
    if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rreq_r = 0U;
    }
    if (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack) {
        vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode 
            = (0x1fU & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                        >> 2U));
    }
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
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt0) 
           & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
               >> 4U) & ((0U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                         | (3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))))));
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
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__imm 
        = (1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done)
                  ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__signbit)
                  : ((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl))
                      ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7)
                      : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20))));
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
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_b 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b) 
           ^ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_sub));
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
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__take_branch 
        = (1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                  >> 4U) & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                            | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu_cmp) 
                               ^ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3)))));
}

VL_INLINE_OPT void Vservant_sim_service__pi1::_sequent__TOP__servant_sim__dut__3(Vservant_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vservant_sim_service__pi1::_sequent__TOP__servant_sim__dut__3\n"); );
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__clock_gen__DOT__genblk2__DOT__rst_reg;
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat;
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__ibus_cyc) 
           & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg)));
    if ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__state))) {
        vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done = 0U;
        vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__data_index = 0U;
        vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__clock_count = 0U;
        vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_active = 0U;
        vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__state 
            = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__rx_bit)
                ? 0U : 1U);
    } else {
        if ((1U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__state))) {
            if ((0x33U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__clock_count))) {
                if (vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__rx_bit) {
                    vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__state = 0U;
                } else {
                    vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_active = 1U;
                    vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__clock_count = 0U;
                    vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__state = 2U;
                    vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__rx_byte = 0U;
                }
            } else {
                vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__clock_count 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__clock_count)));
                vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__state = 1U;
            }
        } else {
            if ((2U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__state))) {
                if ((0x67U > (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__clock_count))) {
                    vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__clock_count 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__clock_count)));
                    vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__state = 2U;
                } else {
                    vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__clock_count = 0U;
                    vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__rx_byte 
                        = (((~ ((IData)(1U) << (7U 
                                                & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__data_index)))) 
                            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__rx_byte)) 
                           | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__rx_bit) 
                              << (7U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__data_index))));
                    if ((7U > (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__data_index))) {
                        vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__data_index 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__data_index)));
                        vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__state = 2U;
                    } else {
                        vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__data_index = 0U;
                        vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__state = 3U;
                    }
                }
            } else {
                if ((3U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__state))) {
                    if ((0x67U > (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__clock_count))) {
                        vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__clock_count 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__clock_count)));
                        vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__state = 3U;
                    } else {
                        vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done = 1U;
                        vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_active = 0U;
                        vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__clock_count = 0U;
                        vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__state = 0U;
                    }
                } else {
                    vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__state = 0U;
                }
            }
        }
    }
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
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack 
        = ((IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_ack) 
           & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_mem_adr 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc)
            ? vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_adr
            : (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
               << 2U));
    vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__state 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__state;
    vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__clock_count 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__clock_count;
    vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__data_index 
        = vlSymsp->TOP__servant_sim__dut.__Vdly__rx_from_ble__DOT__data_index;
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
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_rreq 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack) 
           | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req) 
              & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__misalign_trap_sync_r)));
    vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__rx_bit 
        = vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__r_Rx_temp;
    vlSymsp->TOP__servant_sim__dut.__PVT__adr = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done)
                                                  ? vlSymsp->TOP__servant_sim__dut.__PVT__ble_data_adr
                                                  : vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_mem_adr);
    vlSymsp->TOP__servant_sim__dut.__PVT__cyc = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done) 
                                                 | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc) 
                                                    | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_cyc) 
                                                       & (0U 
                                                          == 
                                                          (3U 
                                                           & (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                              >> 0x1cU))))));
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_utype)
            ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__imm) 
               & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                   >> 2U) | (3U == (3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)))))
            : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_q));
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
    vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__r_Rx_temp 
        = vlTOPp->i_data;
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
    vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__wdata0 
        = ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)
            ? ((0x10U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))
                ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_q))
            : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__rd));
}
