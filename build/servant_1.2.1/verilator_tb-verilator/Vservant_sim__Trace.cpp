// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vservant_sim__Syms.h"


void Vservant_sim::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vservant_sim__Syms* __restrict vlSymsp = static_cast<Vservant_sim__Syms*>(userp);
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vservant_sim::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vservant_sim__Syms* __restrict vlSymsp = static_cast<Vservant_sim__Syms*>(userp);
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSymsp->TOP__servant_sim__dut.__PVT__o_data));
            tracep->chgBit(oldp+1,(vlSymsp->TOP__servant_sim__dut.__PVT__to_pc));
            tracep->chgBit(oldp+2,(vlSymsp->TOP__servant_sim__dut.__PVT__q));
            tracep->chgIData(oldp+3,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_mem_adr),32);
            tracep->chgBit(oldp+4,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc) 
                                    | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_cyc) 
                                       & (0U == (3U 
                                                 & (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                    >> 0x1cU)))))));
            tracep->chgBit(oldp+5,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                           >> 3U) & 
                                          (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc))))));
            tracep->chgCData(oldp+6,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_sel),4);
            tracep->chgIData(oldp+7,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat),32);
            tracep->chgIData(oldp+8,(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt),32);
            tracep->chgBit(oldp+9,(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_ack));
            tracep->chgBit(oldp+10,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg))));
            tracep->chgBit(oldp+11,(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done));
            tracep->chgBit(oldp+12,(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_active));
            tracep->chgCData(oldp+13,(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__rx_byte),8);
            tracep->chgBit(oldp+14,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_active));
            tracep->chgCData(oldp+15,(vlSymsp->TOP__servant_sim__dut.__PVT__data_to_ble),8);
            tracep->chgBit(oldp+16,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__temp_done));
            tracep->chgBit(oldp+17,(vlSymsp->TOP__servant_sim__dut.__PVT__pc_active));
            tracep->chgBit(oldp+18,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__temp_done));
            tracep->chgCData(oldp+19,(vlSymsp->TOP__servant_sim__dut.__PVT__data_to),8);
            tracep->chgIData(oldp+20,(vlSymsp->TOP__servant_sim__dut.__PVT__ble_data_adr),32);
            tracep->chgBit(oldp+21,(vlSymsp->TOP__servant_sim__dut.__PVT__cyc));
            tracep->chgBit(oldp+22,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done) 
                                           | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                               >> 3U) 
                                              & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc)))))));
            tracep->chgCData(oldp+23,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done)
                                        ? 0xfU : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_sel))),4);
            tracep->chgIData(oldp+24,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__temp_done)
                                        ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__rx_byte)
                                        : vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat)),32);
            tracep->chgIData(oldp+25,(vlSymsp->TOP__servant_sim__dut.__PVT__adr),32);
            tracep->chgCData(oldp+26,(vlSymsp->TOP__servant_sim__dut.__PVT__clock_gen__DOT__genblk2__DOT__rst_reg),5);
            tracep->chgBit(oldp+27,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__timer_irq));
            tracep->chgIData(oldp+28,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_adr),32);
            tracep->chgBit(oldp+29,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc));
            tracep->chgBit(oldp+30,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_ibus_ack));
            tracep->chgIData(oldp+31,((vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                       << 2U)),32);
            tracep->chgBit(oldp+32,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                           >> 3U))));
            tracep->chgBit(oldp+33,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_cyc));
            tracep->chgIData(oldp+34,(((0x20000000U 
                                        & vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data)
                                        ? vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__genblk1__DOT__timer__DOT__mtime
                                        : ((0x10000000U 
                                            & vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data)
                                            ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_gpio_rdt)
                                            : vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt))),32);
            tracep->chgBit(oldp+35,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_ack));
            tracep->chgBit(oldp+36,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_cyc) 
                                     & (0U == (3U & 
                                               (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                >> 0x1cU))))));
            tracep->chgBit(oldp+37,(((IData)(vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_ack) 
                                     & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_cyc)))));
            tracep->chgBit(oldp+38,((1U & vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat)));
            tracep->chgBit(oldp+39,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_cyc) 
                                     & (1U == (3U & 
                                               (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                                >> 0x1cU))))));
            tracep->chgBit(oldp+40,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_gpio_rdt));
            tracep->chgBit(oldp+41,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__wb_dbus_cyc) 
                                     & (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                        >> 0x1dU))));
            tracep->chgIData(oldp+42,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__genblk1__DOT__timer__DOT__mtime),32);
            tracep->chgIData(oldp+43,(((vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                        << 2U) | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb))),32);
            tracep->chgCData(oldp+44,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3),3);
            tracep->chgCData(oldp+45,((3U & (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data 
                                             >> 0x1cU))),2);
            tracep->chgBit(oldp+46,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_wreq));
            tracep->chgBit(oldp+47,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_rreq));
            tracep->chgCData(oldp+48,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)
                                        ? 0x23U : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7))),6);
            tracep->chgCData(oldp+49,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)
                                        ? 0x22U : (0x20U 
                                                   | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr)))),6);
            tracep->chgBit(oldp+50,(((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r)) 
                                     & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
                                        | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op) 
                                            & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init))) 
                                           & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7)))))));
            tracep->chgBit(oldp+51,(((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r)) 
                                     & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
                                        | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en)))));
            tracep->chgBit(oldp+52,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__wdata0));
            tracep->chgBit(oldp+53,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)
                                            ? vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_adr
                                            : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_in)))));
            tracep->chgCData(oldp+54,((0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                                                >> 4U))),6);
            tracep->chgCData(oldp+55,(((0x20U & ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__sel_rs2)) 
                                                 << 5U)) 
                                       | ((0x1cU & 
                                           ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20) 
                                            & ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__sel_rs2))) 
                                               << 2U))) 
                                          | (3U & (
                                                   (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
                                                     | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret) 
                                                        << 1U)) 
                                                    | ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en))) 
                                                       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr))) 
                                                   | ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__sel_rs2))) 
                                                      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20))))))),6);
            tracep->chgBit(oldp+56,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rgnt) 
                                     | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_wreq))));
            tracep->chgBit(oldp+57,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0))));
            tracep->chgBit(oldp+58,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rdata1));
            tracep->chgSData(oldp+59,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__waddr),10);
            tracep->chgCData(oldp+60,(((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                                              - (IData)(1U)))
                                        ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata1_r)
                                        : (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__wdata0) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata0_r)))),2);
            tracep->chgBit(oldp+61,((((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                                          - (IData)(1U))) 
                                      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wen0_r)) 
                                     | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                                         - (IData)(1U)) 
                                        & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wen1_r)))));
            tracep->chgSData(oldp+62,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__raddr),10);
            tracep->chgCData(oldp+63,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rdata),2);
            tracep->chgBit(oldp+64,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rgnt));
            tracep->chgCData(oldp+65,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt),5);
            tracep->chgCData(oldp+66,((0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                                                - (IData)(3U)))),5);
            tracep->chgBit(oldp+67,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata0_r));
            tracep->chgCData(oldp+68,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wdata1_r),2);
            tracep->chgBit(oldp+69,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wen0_r));
            tracep->chgBit(oldp+70,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__wen1_r));
            tracep->chgBit(oldp+71,((1U & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                                              - (IData)(1U))))));
            tracep->chgBit(oldp+72,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                                           - (IData)(1U)))));
            tracep->chgCData(oldp+73,(((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt) 
                                              - (IData)(1U)))
                                        ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)
                                            ? 0x22U
                                            : (0x20U 
                                               | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr)))
                                        : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap)
                                            ? 0x23U
                                            : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7)))),6);
            tracep->chgBit(oldp+74,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt))));
            tracep->chgBit(oldp+75,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rtrig1));
            tracep->chgCData(oldp+76,(((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rcnt))
                                        ? ((0x20U & 
                                            ((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__sel_rs2)) 
                                             << 5U)) 
                                           | ((0x1cU 
                                               & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20) 
                                                  & ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__sel_rs2))) 
                                                     << 2U))) 
                                              | (3U 
                                                 & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
                                                      | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret) 
                                                         << 1U)) 
                                                     | ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en))) 
                                                        & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr))) 
                                                    | ((- (IData)((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__sel_rs2))) 
                                                       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20))))))
                                        : (0x1fU & 
                                           ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                                            >> 4U)))),6);
            tracep->chgCData(oldp+77,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0),2);
            tracep->chgBit(oldp+78,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata1));
            tracep->chgBit(oldp+79,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rreq_r));
            tracep->chgCData(oldp+80,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram__DOT__rdata),2);
            tracep->chgBit(oldp+81,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram__DOT__regzero));
            tracep->chgCData(oldp+82,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7),5);
            tracep->chgCData(oldp+83,((0x1fU & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                                                >> 4U))),5);
            tracep->chgCData(oldp+84,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm24_20),5);
            tracep->chgCData(oldp+85,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_ctrl),4);
            tracep->chgCData(oldp+86,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_immdec_en),4);
            tracep->chgBit(oldp+87,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                           >> 2U))));
            tracep->chgBit(oldp+88,((1U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3))));
            tracep->chgBit(oldp+89,((1U & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))));
            tracep->chgBit(oldp+90,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_two_stage_op));
            tracep->chgBit(oldp+91,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_e_op));
            tracep->chgBit(oldp+92,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op20));
            tracep->chgBit(oldp+93,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                           >> 4U))));
            tracep->chgBit(oldp+94,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op));
            tracep->chgBit(oldp+95,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                             >> 4U) 
                                            | (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                                >> 1U) 
                                               & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                  >> 2U))) 
                                           | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__imm30) 
                                                & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                   >> 2U)) 
                                               & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                  >> 3U)) 
                                              & (~ 
                                                 ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                                  >> 2U)))))));
            tracep->chgBit(oldp+96,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op));
            tracep->chgBit(oldp+97,((1U & (((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode)) 
                                            & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                               >> 2U)) 
                                           & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                 >> 4U))))));
            tracep->chgBit(oldp+98,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__csr_op));
            tracep->chgBit(oldp+99,((1U & ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                               >> 2U)) 
                                           & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))))));
            tracep->chgBit(oldp+100,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_utype) 
                                       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)) 
                                      | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4) 
                                         & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                             >> 4U) 
                                            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))))));
            tracep->chgBit(oldp+101,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_q) 
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
            tracep->chgBit(oldp+102,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid)
                                       ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2_q)
                                       : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit) 
                                          & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                                >> 2U))))));
            tracep->chgBit(oldp+103,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_out));
            tracep->chgBit(oldp+104,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl_pc_en));
            tracep->chgBit(oldp+105,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__jump));
            tracep->chgBit(oldp+106,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                             >> 4U) 
                                            & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))));
            tracep->chgBit(oldp+107,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_utype));
            tracep->chgBit(oldp+108,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret));
            tracep->chgBit(oldp+109,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__imm));
            tracep->chgBit(oldp+110,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap));
            tracep->chgBit(oldp+111,(((((0U == (7U 
                                                & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                                        | (3U == (3U 
                                                  & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))) 
                                       | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                            >> 4U) 
                                           & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                              >> 2U)) 
                                          & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op20))) 
                                      | (0U == (3U 
                                                & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                   >> 3U))))));
            tracep->chgBit(oldp+112,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init));
            tracep->chgBit(oldp+113,((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r))));
            tracep->chgBit(oldp+114,((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt))));
            tracep->chgBit(oldp+115,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                             >> 2U) 
                                            | (3U == 
                                               (3U 
                                                & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)))))));
            tracep->chgBit(oldp+116,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt0));
            tracep->chgBit(oldp+117,(((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
                                      & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
                                         >> 1U))));
            tracep->chgBit(oldp+118,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt2));
            tracep->chgBit(oldp+119,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt3));
            tracep->chgBit(oldp+120,(((1U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt)) 
                                      & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r) 
                                         >> 3U))));
            tracep->chgBit(oldp+121,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done));
            tracep->chgBit(oldp+122,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_en));
            tracep->chgBit(oldp+123,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__imm30));
            tracep->chgBit(oldp+124,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en));
            tracep->chgBit(oldp+125,((1U & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                               >> 2U)))));
            tracep->chgBit(oldp+126,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                       >> 4U) & ((0U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))) 
                                                 | (3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode)))))));
            tracep->chgBit(oldp+127,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_q));
            tracep->chgBit(oldp+128,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2_q));
            tracep->chgBit(oldp+129,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_sub));
            tracep->chgCData(oldp+130,((3U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3))),2);
            tracep->chgBit(oldp+131,((0U == (3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                                   >> 1U)))));
            tracep->chgBit(oldp+132,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig));
            tracep->chgBit(oldp+133,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu_cmp));
            tracep->chgCData(oldp+134,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_rd_sel),3);
            tracep->chgBit(oldp+135,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op) 
                                      & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init)))));
            tracep->chgBit(oldp+136,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b));
            tracep->chgBit(oldp+137,((1U & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                               >> 2U)))));
            tracep->chgBit(oldp+138,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                            >> 1U))));
            tracep->chgCData(oldp+139,((3U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                              >> 1U))),2);
            tracep->chgBit(oldp+140,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat_shamt) 
                                            >> 5U))));
            tracep->chgBit(oldp+141,((1U & (vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat 
                                            >> 5U))));
            tracep->chgBit(oldp+142,((1U & ((((((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb)) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                                    >> 1U))) 
                                               | ((~ 
                                                   ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                    >> 1U)) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                      >> 2U)))) 
                                              | ((~ 
                                                  ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                   >> 2U)) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                                     >> 1U)))) 
                                             | ((~ 
                                                 ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                  >> 2U)) 
                                                & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb)))) 
                                            | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                   >> 1U)) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                                   >> 1U)))))));
            tracep->chgBit(oldp+143,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_misalign));
            tracep->chgBit(oldp+144,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned));
            tracep->chgBit(oldp+145,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mstatus_en));
            tracep->chgBit(oldp+146,(((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__csr_op) 
                                        & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op26))) 
                                       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op22)) 
                                      & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op20)))));
            tracep->chgBit(oldp+147,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_mcause_en));
            tracep->chgBit(oldp+148,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20) 
                                            >> 4U))));
            tracep->chgBit(oldp+149,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en));
            tracep->chgCData(oldp+150,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_addr),2);
            tracep->chgBit(oldp+151,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_imm_en));
            tracep->chgBit(oldp+152,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__csr_in));
            tracep->chgBit(oldp+153,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rdata1) 
                                      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_csr_en))));
            tracep->chgBit(oldp+154,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_dbus_en));
            tracep->chgBit(oldp+155,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__new_irq));
            tracep->chgCData(oldp+156,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb),2);
            tracep->chgBit(oldp+157,((1U & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                            >> 1U))));
            tracep->chgBit(oldp+158,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__stage_two_req));
            tracep->chgBit(oldp+159,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__init_done));
            tracep->chgBit(oldp+160,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__genblk1__DOT__misalign_trap_sync_r));
            tracep->chgCData(oldp+161,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt),3);
            tracep->chgCData(oldp+162,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r),4);
            tracep->chgBit(oldp+163,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__ibus_cyc));
            tracep->chgBit(oldp+164,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__take_branch));
            tracep->chgBit(oldp+165,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__take_branch) 
                                       & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                          >> 1U)) | 
                                      ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_dbus_en) 
                                       & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_misalign)))));
            tracep->chgIData(oldp+166,((0x3fffffffU 
                                        & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                                           >> 2U))),30);
            tracep->chgCData(oldp+167,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode),5);
            tracep->chgBit(oldp+168,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op21));
            tracep->chgBit(oldp+169,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op22));
            tracep->chgBit(oldp+170,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op26));
            tracep->chgBit(oldp+171,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__imm25));
            tracep->chgBit(oldp+172,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op20) 
                                      | ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op26) 
                                         & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__op21))))));
            tracep->chgIData(oldp+173,((0x1ffffffU 
                                        & (vlSymsp->TOP__servant_sim__dut__ram.__PVT__o_wb_rdt 
                                           >> 7U))),25);
            tracep->chgBit(oldp+174,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm31));
            tracep->chgSData(oldp+175,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm19_12_20),9);
            tracep->chgBit(oldp+176,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm7));
            tracep->chgCData(oldp+177,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm30_25),6);
            tracep->chgBit(oldp+178,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__signbit));
            tracep->chgBit(oldp+179,((1U & (((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                                               & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_bufreg_rs1_en)) 
                                              + (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__imm) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                                      >> 2U))) 
                                                 & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb)))) 
                                             + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r)) 
                                            >> 1U))));
            tracep->chgBit(oldp+180,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__q));
            tracep->chgBit(oldp+181,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__c_r));
            tracep->chgIData(oldp+182,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__data),30);
            tracep->chgBit(oldp+183,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__clr_lsb));
            tracep->chgBit(oldp+184,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_shift_op) 
                                      | ((0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt_r)) 
                                         & ((((((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb)) 
                                                & (~ 
                                                   ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                                    >> 1U))) 
                                               | ((~ 
                                                   ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                    >> 1U)) 
                                                  & (~ 
                                                     ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                      >> 2U)))) 
                                              | ((~ 
                                                  ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                   >> 2U)) 
                                                 & (~ 
                                                    ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                                     >> 1U)))) 
                                             | ((~ 
                                                 ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                  >> 2U)) 
                                                & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb)))) 
                                            | ((~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt) 
                                                   >> 1U)) 
                                               & (~ 
                                                  ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg__DOT__lsb) 
                                                   >> 1U))))))));
            tracep->chgCData(oldp+185,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg2__DOT__dat_shamt),6);
            tracep->chgBit(oldp+186,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
                                      | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret))));
            tracep->chgBit(oldp+187,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4));
            tracep->chgBit(oldp+188,((1U & ((((1U & vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_adr) 
                                              + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt2)) 
                                             + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r)) 
                                            >> 1U))));
            tracep->chgBit(oldp+189,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4_cy_r));
            tracep->chgBit(oldp+190,((1U & (((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                                             + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b)) 
                                            + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r)))));
            tracep->chgBit(oldp+191,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a) 
                                              + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b)) 
                                             + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r)) 
                                            >> 1U))));
            tracep->chgBit(oldp+192,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_cy_r));
            tracep->chgBit(oldp+193,((1U & vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__wb_ibus_adr)));
            tracep->chgBit(oldp+194,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__trap) 
                                       | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_ctrl_mret))
                                       ? ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rdata1) 
                                          & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt0)))
                                       : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__jump)
                                           ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                                           : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_4)))));
            tracep->chgBit(oldp+195,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_a));
            tracep->chgBit(oldp+196,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__offset_b));
            tracep->chgBit(oldp+197,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__result_add));
            tracep->chgBit(oldp+198,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__cmp_r));
            tracep->chgBit(oldp+199,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_cy));
            tracep->chgBit(oldp+200,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_cy_r));
            tracep->chgBit(oldp+201,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                                      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig))));
            tracep->chgBit(oldp+202,(((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b) 
                                      & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig))));
            tracep->chgBit(oldp+203,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_b));
            tracep->chgBit(oldp+204,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                                              & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig)) 
                                             + (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b) 
                                                   & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_alu_cmp_sig)))) 
                                            + (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__add_cy)))));
            tracep->chgBit(oldp+205,(((~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__result_add)) 
                                      & ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__alu__DOT__cmp_r) 
                                         | (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt0)))));
            tracep->chgBit(oldp+206,((1U & ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0) 
                                              ^ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b)) 
                                             & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3))) 
                                            | ((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__funct3) 
                                                 >> 1U) 
                                                & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__op_b)) 
                                               & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__rf_ram_if__DOT__rdata0))))));
            tracep->chgBit(oldp+207,((((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__co_rd_op) 
                                       & (~ (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__init))) 
                                      & (0U != (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__immdec__DOT__imm11_7)))));
            tracep->chgBit(oldp+208,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__rd));
            tracep->chgBit(oldp+209,(((0x10U & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode))
                                       ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__pc_plus_offset_aligned)
                                       : (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__bufreg_q))));
            tracep->chgBit(oldp+210,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__rf_if__DOT__genblk1__DOT__sel_rs2));
            tracep->chgBit(oldp+211,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_if__DOT__signbit));
            tracep->chgBit(oldp+212,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__mem_if__DOT__dat_valid));
            tracep->chgBit(oldp+213,((1U & (~ ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__decode__DOT__opcode) 
                                               >> 4U)))));
            tracep->chgBit(oldp+214,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mstatus_mie));
            tracep->chgBit(oldp+215,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mstatus_mpie));
            tracep->chgBit(oldp+216,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mie_mtie));
            tracep->chgBit(oldp+217,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause31));
            tracep->chgCData(oldp+218,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0),4);
            tracep->chgBit(oldp+219,((1U & ((0U == (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__state__DOT__o_cnt))
                                             ? (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause3_0)
                                             : ((IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__cnt_done) 
                                                & (IData)(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__mcause31))))));
            tracep->chgBit(oldp+220,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__timer_irq_r));
            tracep->chgBit(oldp+221,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__d));
            tracep->chgBit(oldp+222,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__cpu__DOT__cpu__DOT__genblk5__DOT__csr__DOT__timer_irq));
            tracep->chgIData(oldp+223,(vlSymsp->TOP__servant_sim__dut.__PVT__servant__DOT__genblk1__DOT__timer__DOT__mtimecmp),32);
            tracep->chgBit(oldp+224,(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__r_Rx_temp));
            tracep->chgBit(oldp+225,(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__rx_bit));
            tracep->chgCData(oldp+226,(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__data_index),3);
            tracep->chgCData(oldp+227,(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__clock_count),7);
            tracep->chgCData(oldp+228,(vlSymsp->TOP__servant_sim__dut.__PVT__rx_from_ble__DOT__state),2);
            tracep->chgCData(oldp+229,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__temp_data),8);
            tracep->chgCData(oldp+230,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__state),2);
            tracep->chgCData(oldp+231,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__clock_count),7);
            tracep->chgCData(oldp+232,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_ble__DOT__data_index),4);
            tracep->chgCData(oldp+233,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__temp_data),8);
            tracep->chgCData(oldp+234,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__state),2);
            tracep->chgCData(oldp+235,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__clock_count),7);
            tracep->chgCData(oldp+236,(vlSymsp->TOP__servant_sim__dut.__PVT__tx_to_pc__DOT__data_index),4);
            tracep->chgSData(oldp+237,((0x7ffU & (vlSymsp->TOP__servant_sim__dut.__PVT__adr 
                                                  >> 2U))),11);
            tracep->chgCData(oldp+238,(vlSymsp->TOP__servant_sim__dut__ram.__PVT__we),4);
        }
        tracep->chgBit(oldp+239,(vlTOPp->wb_clk));
        tracep->chgBit(oldp+240,(vlTOPp->wb_rst));
        tracep->chgBit(oldp+241,(vlTOPp->i_data));
        tracep->chgBit(oldp+242,(vlTOPp->o_data));
        tracep->chgBit(oldp+243,(vlTOPp->to_pc));
        tracep->chgBit(oldp+244,(vlTOPp->q));
    }
}

void Vservant_sim::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vservant_sim__Syms* __restrict vlSymsp = static_cast<Vservant_sim__Syms*>(userp);
    Vservant_sim* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
