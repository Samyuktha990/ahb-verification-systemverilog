// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave_ahb_if.h"

std::string VL_TO_STRING(const Vahb_slave_ahb_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vahb_slave_ahb_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
