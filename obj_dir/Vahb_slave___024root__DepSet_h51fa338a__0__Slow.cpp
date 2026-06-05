// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave__Syms.h"
#include "Vahb_slave___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vahb_slave___024root___dump_triggers__stl(Vahb_slave___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vahb_slave___024root___eval_triggers__stl(Vahb_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb_slave___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vahb_slave___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vahb_slave___024root___stl_sequent__TOP__0(Vahb_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb_slave___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSymsp->TOP__ahb_top__DOT__intf.hrdata = vlSelf->ahb_top__DOT____Vcellout__dut__hrdata;
    vlSelf->__VvifTrigger_h7eb1d4e8__0 = 1U;
}
