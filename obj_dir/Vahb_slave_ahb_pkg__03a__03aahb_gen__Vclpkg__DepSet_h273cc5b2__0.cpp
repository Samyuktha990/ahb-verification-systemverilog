// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave__Syms.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_gen__Vclpkg.h"

Vahb_slave_ahb_pkg__03a__03aahb_gen::Vahb_slave_ahb_pkg__03a__03aahb_gen(Vahb_slave__Syms* __restrict vlSymsp, VlClassRef<Vahb_slave_std__03a__03amailbox__Tz1> gen2drv) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_gen::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__loop_count = 0xaU;
    this->__PVT__gen2drv = gen2drv;
}

void Vahb_slave_ahb_pkg__03a__03aahb_gen::_ctor_var_reset(Vahb_slave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_gen::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__loop_count = 0;
}
