// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vservant_sim.h for the primary calling header

#include "Vservant_sim_servant_ram__pi3.h"
#include "Vservant_sim__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vservant_sim_servant_ram__pi3::_sequent__TOP__servant_sim__dut__ram__2(Vservant_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vservant_sim_servant_ram__pi3::_sequent__TOP__servant_sim__dut__ram__2\n"); );
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvlsb__mem__v0;
    CData/*7:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    CData/*4:0*/ __Vdlyvlsb__mem__v1;
    CData/*7:0*/ __Vdlyvval__mem__v1;
    CData/*0:0*/ __Vdlyvset__mem__v1;
    CData/*4:0*/ __Vdlyvlsb__mem__v2;
    CData/*7:0*/ __Vdlyvval__mem__v2;
    CData/*0:0*/ __Vdlyvset__mem__v2;
    CData/*4:0*/ __Vdlyvlsb__mem__v3;
    CData/*7:0*/ __Vdlyvval__mem__v3;
    CData/*0:0*/ __Vdlyvset__mem__v3;
    SData/*10:0*/ __Vdlyvdim0__mem__v0;
    SData/*10:0*/ __Vdlyvdim0__mem__v1;
    SData/*10:0*/ __Vdlyvdim0__mem__v2;
    SData/*10:0*/ __Vdlyvdim0__mem__v3;
    // Body
    __Vdlyvset__mem__v0 = 0U;
    __Vdlyvset__mem__v1 = 0U;
    __Vdlyvset__mem__v2 = 0U;
    __Vdlyvset__mem__v3 = 0U;
    vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
        = vlSymsp->TOP__servant_sim__dut__ram.mem[(0x7ffU 
                                                   & (vlSymsp->TOP__servant_sim__dut.__PVT__adr 
                                                      >> 2U))];
    vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_ack 
        = ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg)) 
           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cyc) 
              & (~ (IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_ack))));
    if ((1U & (IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__we))) {
        __Vdlyvval__mem__v0 = (0xffU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done)
                                         ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__rx_byte)
                                         : vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat));
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvlsb__mem__v0 = 0U;
        __Vdlyvdim0__mem__v0 = (0x7ffU & (vlSymsp->TOP__servant_sim__dut.__PVT__adr 
                                          >> 2U));
    }
    if ((2U & (IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__we))) {
        __Vdlyvval__mem__v1 = (0xffU & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done)
                                          ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__rx_byte)
                                          : vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat) 
                                        >> 8U));
        __Vdlyvset__mem__v1 = 1U;
        __Vdlyvlsb__mem__v1 = 8U;
        __Vdlyvdim0__mem__v1 = (0x7ffU & (vlSymsp->TOP__servant_sim__dut.__PVT__adr 
                                          >> 2U));
    }
    if ((4U & (IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__we))) {
        __Vdlyvval__mem__v2 = (0xffU & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done)
                                          ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__rx_byte)
                                          : vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat) 
                                        >> 0x10U));
        __Vdlyvset__mem__v2 = 1U;
        __Vdlyvlsb__mem__v2 = 0x10U;
        __Vdlyvdim0__mem__v2 = (0x7ffU & (vlSymsp->TOP__servant_sim__dut.__PVT__adr 
                                          >> 2U));
    }
    if ((8U & (IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__we))) {
        __Vdlyvval__mem__v3 = (0xffU & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done)
                                          ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__rx_byte)
                                          : vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat) 
                                        >> 0x18U));
        __Vdlyvset__mem__v3 = 1U;
        __Vdlyvlsb__mem__v3 = 0x18U;
        __Vdlyvdim0__mem__v3 = (0x7ffU & (vlSymsp->TOP__servant_sim__dut.__PVT__adr 
                                          >> 2U));
    }
    if (__Vdlyvset__mem__v0) {
        vlSymsp->TOP__servant_sim__dut__ram.mem[__Vdlyvdim0__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem__v0))) 
                & vlSymsp->TOP__servant_sim__dut__ram.mem
                [__Vdlyvdim0__mem__v0]) | ((IData)(__Vdlyvval__mem__v0) 
                                           << (IData)(__Vdlyvlsb__mem__v0)));
    }
    if (__Vdlyvset__mem__v1) {
        vlSymsp->TOP__servant_sim__dut__ram.mem[__Vdlyvdim0__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem__v1))) 
                & vlSymsp->TOP__servant_sim__dut__ram.mem
                [__Vdlyvdim0__mem__v1]) | ((IData)(__Vdlyvval__mem__v1) 
                                           << (IData)(__Vdlyvlsb__mem__v1)));
    }
    if (__Vdlyvset__mem__v2) {
        vlSymsp->TOP__servant_sim__dut__ram.mem[__Vdlyvdim0__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem__v2))) 
                & vlSymsp->TOP__servant_sim__dut__ram.mem
                [__Vdlyvdim0__mem__v2]) | ((IData)(__Vdlyvval__mem__v2) 
                                           << (IData)(__Vdlyvlsb__mem__v2)));
    }
    if (__Vdlyvset__mem__v3) {
        vlSymsp->TOP__servant_sim__dut__ram.mem[__Vdlyvdim0__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mem__v3))) 
                & vlSymsp->TOP__servant_sim__dut__ram.mem
                [__Vdlyvdim0__mem__v3]) | ((IData)(__Vdlyvval__mem__v3) 
                                           << (IData)(__Vdlyvlsb__mem__v3)));
    }
}

VL_INLINE_OPT void Vservant_sim_servant_ram__pi3::_sequent__TOP__servant_sim__dut__ram__3(Vservant_sim__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vservant_sim_servant_ram__pi3::_sequent__TOP__servant_sim__dut__ram__3\n"); );
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__servant_sim__dut__ram.__PVT__we = 
        ((- (IData)((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done) 
                      | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                          >> 3U) & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc)))) 
                     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__cyc)))) 
         & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done)
             ? 0xfU : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_sel)));
}
