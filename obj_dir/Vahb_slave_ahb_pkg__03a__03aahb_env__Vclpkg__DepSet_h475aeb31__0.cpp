// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg.h"

VL_INLINE_OPT VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_env::__VnoInFunc_run____Vfork_1__1(Vahb_slave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_env::__VnoInFunc_run____Vfork_1__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    co_await VL_NULL_CHECK(this->__PVT__sb, "tb/ahb_env.sv", 27)->__VnoInFunc_run(vlSymsp);
}
