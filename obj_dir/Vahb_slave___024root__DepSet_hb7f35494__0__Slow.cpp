// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave___024root.h"

VL_ATTR_COLD void Vahb_slave___024root___eval_static(Vahb_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb_slave___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vahb_slave___024root___eval_initial__TOP(Vahb_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb_slave___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ ahb_top__DOT__dut__DOT__i;
    ahb_top__DOT__dut__DOT__i = 0;
    // Body
    ahb_top__DOT__dut__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, ahb_top__DOT__dut__DOT__i)) {
        vlSelf->ahb_top__DOT__dut__DOT__MemoryArray[(0x3ffU 
                                                     & ahb_top__DOT__dut__DOT__i)] = 0U;
        ahb_top__DOT__dut__DOT__i = ((IData)(1U) + ahb_top__DOT__dut__DOT__i);
    }
    vlSelf->ahb_top__DOT____Vcellout__dut__hrdata = 0U;
}

VL_ATTR_COLD void Vahb_slave___024root___eval_final(Vahb_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb_slave___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb_slave___024root___dump_triggers__stl(Vahb_slave___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vahb_slave___024root___eval_phase__stl(Vahb_slave___024root* vlSelf);

VL_ATTR_COLD void Vahb_slave___024root___eval_settle(Vahb_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb_slave___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vahb_slave___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/ahb_top.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vahb_slave___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb_slave___024root___dump_triggers__stl(Vahb_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb_slave___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vahb_slave___024root___stl_sequent__TOP__0(Vahb_slave___024root* vlSelf);

VL_ATTR_COLD void Vahb_slave___024root___eval_stl(Vahb_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb_slave___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vahb_slave___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vahb_slave___024root___eval_triggers__stl(Vahb_slave___024root* vlSelf);

VL_ATTR_COLD bool Vahb_slave___024root___eval_phase__stl(Vahb_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb_slave___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vahb_slave___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vahb_slave___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb_slave___024root___dump_triggers__act(Vahb_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb_slave___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: Internal 'act' trigger - virtual interface: ahb_if\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge ahb_top.intf.hclk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdynSched.evaluate())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb_slave___024root___dump_triggers__nba(Vahb_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb_slave___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: Internal 'nba' trigger - virtual interface: ahb_if\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge ahb_top.intf.hclk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdynSched.evaluate())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vahb_slave___024root___ctor_var_reset(Vahb_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb_slave___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ahb_top__DOT____Vcellout__dut__hrdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->ahb_top__DOT__dut__DOT__MemoryArray[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ahb_top__DOT__dut__DOT__addr_r = VL_RAND_RESET_I(10);
    vlSelf->ahb_top__DOT__dut__DOT__write_r = VL_RAND_RESET_I(1);
    vlSelf->ahb_top__DOT__dut__DOT__valid_r = VL_RAND_RESET_I(1);
    vlSelf->ahb_top__DOT__dut__DOT__wdata_r = VL_RAND_RESET_I(32);
    vlSelf->__VnbaEventTrigger = 0;
    vlSelf->__VvifTrigger_h7eb1d4e8__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ahb_top__DOT__intf__hclk__0 = VL_RAND_RESET_I(1);
}
