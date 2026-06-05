// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_seq_item__Vclpkg.h"

Vahb_slave_ahb_pkg__03a__03aahb_seq_item::~Vahb_slave_ahb_pkg__03a__03aahb_seq_item() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_seq_item::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_seq_item>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_seq_item::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vahb_slave_ahb_pkg__03a__03aahb_seq_item::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_seq_item::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vahb_slave_ahb_pkg__03a__03aahb_seq_item::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_seq_item::to_string_middle\n"); );
    // Body
    std::string out;
    out += "haddr:" + VL_TO_STRING(__PVT__haddr);
    out += ", hwrite:" + VL_TO_STRING(__PVT__hwrite);
    out += ", hwdata:" + VL_TO_STRING(__PVT__hwdata);
    out += ", hrdata:" + VL_TO_STRING(__PVT__hrdata);
    return out;
}
