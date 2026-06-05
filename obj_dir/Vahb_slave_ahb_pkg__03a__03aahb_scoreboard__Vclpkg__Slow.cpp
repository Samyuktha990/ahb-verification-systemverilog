// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave__Syms.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg.h"

void Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg___ctor_var_reset(Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg* vlSelf);

Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg::Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg(Vahb_slave__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg___ctor_var_reset(this);
}

void Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg::~Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg() {
}
