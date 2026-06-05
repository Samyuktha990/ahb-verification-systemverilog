// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave__Syms.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_seq_item__Vclpkg.h"

Vahb_slave_ahb_pkg__03a__03aahb_seq_item::Vahb_slave_ahb_pkg__03a__03aahb_seq_item(Vahb_slave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_seq_item::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
}

void Vahb_slave_ahb_pkg__03a__03aahb_seq_item::_ctor_var_reset(Vahb_slave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_seq_item::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__haddr = 0;
    __PVT__hwrite = 0;
    __PVT__hwdata = 0;
    __PVT__hrdata = 0;
}
