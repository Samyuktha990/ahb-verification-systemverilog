// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave__Syms.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_driver__Vclpkg.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_monitor__Vclpkg.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg.h"
#include "Vahb_slave_std__03a__03amailbox__Tz1__Vclpkg.h"

Vahb_slave_ahb_pkg__03a__03aahb_env::Vahb_slave_ahb_pkg__03a__03aahb_env(Vahb_slave__Syms* __restrict vlSymsp, Vahb_slave_ahb_if* intf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_env::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__intf = intf;
    this->__PVT__mon2sb = VL_NEW(Vahb_slave_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    this->__PVT__drv = VL_NEW(Vahb_slave_ahb_pkg__03a__03aahb_driver, vlSymsp, intf);
    this->__PVT__mon = VL_NEW(Vahb_slave_ahb_pkg__03a__03aahb_monitor, vlSymsp, intf, this->__PVT__mon2sb);
    this->__PVT__sb = VL_NEW(Vahb_slave_ahb_pkg__03a__03aahb_scoreboard, vlSymsp, this->__PVT__mon2sb);
}
