// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave__Syms.h"
#include "Vahb_slave___024root.h"

VL_ATTR_COLD void Vahb_slave___024root___eval_initial__TOP(Vahb_slave___024root* vlSelf);
VlCoroutine Vahb_slave___024root___eval_initial__TOP__Vtiming__0(Vahb_slave___024root* vlSelf);
VlCoroutine Vahb_slave___024root___eval_initial__TOP__Vtiming__1(Vahb_slave___024root* vlSelf);
VlCoroutine Vahb_slave___024root___eval_initial__TOP__Vtiming__2(Vahb_slave___024root* vlSelf);

void Vahb_slave___024root___eval_initial(Vahb_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb_slave___024root___eval_initial\n"); );
    // Body
    Vahb_slave___024root___eval_initial__TOP(vlSelf);
    Vahb_slave___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vahb_slave___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vahb_slave___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__ahb_top__DOT__intf__hclk__0 
        = vlSymsp->TOP__ahb_top__DOT__intf.hclk;
}

VL_INLINE_OPT VlCoroutine Vahb_slave___024root___eval_initial__TOP__Vtiming__0(Vahb_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb_slave___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSymsp->TOP__ahb_top__DOT__intf.hclk = 0U;
    vlSelf->__VvifTrigger_h7eb1d4e8__0 = 1U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/ahb_top.sv", 
                                           30);
        vlSymsp->TOP__ahb_top__DOT__intf.hclk = (1U 
                                                 & (~ (IData)(vlSymsp->TOP__ahb_top__DOT__intf.hclk)));
        vlSelf->__VvifTrigger_h7eb1d4e8__0 = 1U;
    }
}

VL_INLINE_OPT VlCoroutine Vahb_slave___024root___eval_initial__TOP__Vtiming__1(Vahb_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb_slave___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    vlSymsp->TOP__ahb_top__DOT__intf.hrst = 0U;
    vlSymsp->TOP__ahb_top__DOT__intf.hsel = 0U;
    vlSelf->__VvifTrigger_h7eb1d4e8__0 = 1U;
    vlSymsp->TOP__ahb_top__DOT__intf.hwrite = 0U;
    vlSymsp->TOP__ahb_top__DOT__intf.haddr = 0U;
    vlSymsp->TOP__ahb_top__DOT__intf.hwdata = 0U;
    vlSymsp->TOP__ahb_top__DOT__intf.htrans = 0U;
    vlSymsp->TOP__ahb_top__DOT__intf.hready = 1U;
    co_await vlSelf->__VdlySched.delay(0x4e20ULL, nullptr, 
                                       "tb/ahb_top.sv", 
                                       44);
    vlSymsp->TOP__ahb_top__DOT__intf.hrst = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb_slave___024root___dump_triggers__act(Vahb_slave___024root* vlSelf);
#endif  // VL_DEBUG

void Vahb_slave___024root___eval_triggers__act(Vahb_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb_slave___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__VvifTrigger_h7eb1d4e8__0));
    vlSelf->__VvifTrigger_h7eb1d4e8__0 = 0U;
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSymsp->TOP__ahb_top__DOT__intf.hclk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ahb_top__DOT__intf__hclk__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(3U, vlSelf->__VdynSched.evaluate());
    vlSelf->__Vtrigprevexpr___TOP__ahb_top__DOT__intf__hclk__0 
        = vlSymsp->TOP__ahb_top__DOT__intf.hclk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vahb_slave___024root___dump_triggers__act(vlSelf);
    }
#endif
    vlSelf->__VdynSched.doPostUpdates();
}

VL_INLINE_OPT void Vahb_slave___024root___nba_sequent__TOP__0(Vahb_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb_slave___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__ahb_top__DOT__dut__DOT__MemoryArray__v0;
    __Vdlyvdim0__ahb_top__DOT__dut__DOT__MemoryArray__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ahb_top__DOT__dut__DOT__MemoryArray__v0;
    __Vdlyvval__ahb_top__DOT__dut__DOT__MemoryArray__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ahb_top__DOT__dut__DOT__MemoryArray__v0;
    __Vdlyvset__ahb_top__DOT__dut__DOT__MemoryArray__v0 = 0;
    // Body
    __Vdlyvset__ahb_top__DOT__dut__DOT__MemoryArray__v0 = 0U;
    if (vlSymsp->TOP__ahb_top__DOT__intf.hrst) {
        if (vlSelf->ahb_top__DOT__dut__DOT__valid_r) {
            if (VL_LIKELY(vlSelf->ahb_top__DOT__dut__DOT__write_r)) {
                __Vdlyvval__ahb_top__DOT__dut__DOT__MemoryArray__v0 
                    = vlSelf->ahb_top__DOT__dut__DOT__wdata_r;
                __Vdlyvset__ahb_top__DOT__dut__DOT__MemoryArray__v0 = 1U;
                __Vdlyvdim0__ahb_top__DOT__dut__DOT__MemoryArray__v0 
                    = vlSelf->ahb_top__DOT__dut__DOT__addr_r;
            } else {
                vlSelf->ahb_top__DOT____Vcellout__dut__hrdata 
                    = vlSelf->ahb_top__DOT__dut__DOT__MemoryArray
                    [vlSelf->ahb_top__DOT__dut__DOT__addr_r];
                VL_WRITEF("[DUT READ ] addr=%0x data=%0x\n",
                          10,vlSelf->ahb_top__DOT__dut__DOT__addr_r,
                          32,vlSelf->ahb_top__DOT__dut__DOT__MemoryArray
                          [vlSelf->ahb_top__DOT__dut__DOT__addr_r]);
            }
        }
        vlSelf->ahb_top__DOT__dut__DOT__addr_r = vlSymsp->TOP__ahb_top__DOT__intf.haddr;
        vlSelf->ahb_top__DOT__dut__DOT__write_r = vlSymsp->TOP__ahb_top__DOT__intf.hwrite;
        vlSelf->ahb_top__DOT__dut__DOT__valid_r = (
                                                   ((IData)(vlSymsp->TOP__ahb_top__DOT__intf.hsel) 
                                                    & (IData)(vlSymsp->TOP__ahb_top__DOT__intf.hready)) 
                                                   & ((IData)(vlSymsp->TOP__ahb_top__DOT__intf.htrans) 
                                                      >> 1U));
        vlSelf->ahb_top__DOT__dut__DOT__wdata_r = vlSymsp->TOP__ahb_top__DOT__intf.hwdata;
    } else {
        vlSelf->ahb_top__DOT__dut__DOT__addr_r = 0U;
        vlSelf->ahb_top__DOT__dut__DOT__write_r = 0U;
        vlSelf->ahb_top__DOT__dut__DOT__valid_r = 0U;
        vlSelf->ahb_top__DOT__dut__DOT__wdata_r = 0U;
        vlSelf->ahb_top__DOT____Vcellout__dut__hrdata = 0U;
    }
    if (__Vdlyvset__ahb_top__DOT__dut__DOT__MemoryArray__v0) {
        vlSelf->ahb_top__DOT__dut__DOT__MemoryArray[__Vdlyvdim0__ahb_top__DOT__dut__DOT__MemoryArray__v0] 
            = __Vdlyvval__ahb_top__DOT__dut__DOT__MemoryArray__v0;
    }
    vlSymsp->TOP__ahb_top__DOT__intf.hrdata = vlSelf->ahb_top__DOT____Vcellout__dut__hrdata;
    vlSelf->__VvifTrigger_h7eb1d4e8__0 = 1U;
}
