// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave__Syms.h"
#include "Vahb_slave_std.h"

void Vahb_slave_std___ctor_var_reset(Vahb_slave_std* vlSelf);

Vahb_slave_std::Vahb_slave_std(Vahb_slave__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vahb_slave_std___ctor_var_reset(this);
}

void Vahb_slave_std::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vahb_slave_std::~Vahb_slave_std() {
}
