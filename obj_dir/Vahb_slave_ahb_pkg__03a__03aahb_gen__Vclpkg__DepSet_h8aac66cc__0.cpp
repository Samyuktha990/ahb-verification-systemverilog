// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_gen__Vclpkg.h"

Vahb_slave_ahb_pkg__03a__03aahb_gen::~Vahb_slave_ahb_pkg__03a__03aahb_gen() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_gen::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_gen>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_gen::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vahb_slave_ahb_pkg__03a__03aahb_gen::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_gen::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vahb_slave_ahb_pkg__03a__03aahb_gen::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_gen::to_string_middle\n"); );
    // Body
    std::string out;
    out += "gen2drv:" + VL_TO_STRING(__PVT__gen2drv);
    out += ", ended:" + VL_TO_STRING(__PVT__ended);
    out += ", loop_count:" + VL_TO_STRING(__PVT__loop_count);
    return out;
}
