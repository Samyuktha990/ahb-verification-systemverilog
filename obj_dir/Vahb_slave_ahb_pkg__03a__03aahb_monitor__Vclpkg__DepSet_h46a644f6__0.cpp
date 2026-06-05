// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_monitor__Vclpkg.h"

Vahb_slave_ahb_pkg__03a__03aahb_monitor::~Vahb_slave_ahb_pkg__03a__03aahb_monitor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_monitor::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_monitor>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_monitor::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vahb_slave_ahb_pkg__03a__03aahb_monitor::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_monitor::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vahb_slave_ahb_pkg__03a__03aahb_monitor::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_monitor::to_string_middle\n"); );
    // Body
    std::string out;
    out += "intf:" + VL_TO_STRING(__PVT__intf);
    out += ", mon2sb:" + VL_TO_STRING(__PVT__mon2sb);
    return out;
}
