// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave__Syms.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_monitor__Vclpkg.h"

Vahb_slave_ahb_pkg__03a__03aahb_monitor::Vahb_slave_ahb_pkg__03a__03aahb_monitor(Vahb_slave__Syms* __restrict vlSymsp, Vahb_slave_ahb_if* intf, VlClassRef<Vahb_slave_std__03a__03amailbox__Tz1> mon2sb) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_monitor::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__intf = intf;
    this->__PVT__mon2sb = mon2sb;
}

void Vahb_slave_ahb_pkg__03a__03aahb_monitor::_ctor_var_reset(Vahb_slave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_monitor::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__intf = nullptr;
    }
