// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave__Syms.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg.h"

Vahb_slave_ahb_pkg__03a__03aahb_scoreboard::Vahb_slave_ahb_pkg__03a__03aahb_scoreboard(Vahb_slave__Syms* __restrict vlSymsp, VlClassRef<Vahb_slave_std__03a__03amailbox__Tz1> mon2sb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_scoreboard::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__mon2sb = mon2sb;
    this->__PVT__pass_count = 0U;
    this->__PVT__fail_count = 0U;
    this->__PVT__write_count = 0U;
    this->__PVT__read_count = 0U;
}

void Vahb_slave_ahb_pkg__03a__03aahb_scoreboard::_ctor_var_reset(Vahb_slave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_scoreboard::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        __PVT__mem_model[__Vi0] = 0;
    }
    __PVT__pass_count = 0;
    __PVT__fail_count = 0;
    __PVT__write_count = 0;
    __PVT__read_count = 0;
}
