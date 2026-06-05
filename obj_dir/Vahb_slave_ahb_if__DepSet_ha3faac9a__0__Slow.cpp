// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave_ahb_if.h"

VL_ATTR_COLD void Vahb_slave_ahb_if___ctor_var_reset(Vahb_slave_ahb_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vahb_slave_ahb_if___ctor_var_reset\n"); );
    // Body
    vlSelf->hclk = VL_RAND_RESET_I(1);
    vlSelf->hrst = VL_RAND_RESET_I(1);
    vlSelf->hsel = VL_RAND_RESET_I(1);
    vlSelf->hwrite = VL_RAND_RESET_I(1);
    vlSelf->hready = VL_RAND_RESET_I(1);
    vlSelf->haddr = VL_RAND_RESET_I(10);
    vlSelf->hwdata = VL_RAND_RESET_I(32);
    vlSelf->hrdata = VL_RAND_RESET_I(32);
    vlSelf->htrans = VL_RAND_RESET_I(2);
}
