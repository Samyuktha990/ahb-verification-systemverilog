// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_driver__Vclpkg.h"

Vahb_slave_ahb_pkg__03a__03aahb_driver::~Vahb_slave_ahb_pkg__03a__03aahb_driver() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_driver>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vahb_slave_ahb_pkg__03a__03aahb_driver::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vahb_slave_ahb_pkg__03a__03aahb_driver::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::to_string_middle\n"); );
    // Body
    std::string out;
    out += "intf:" + VL_TO_STRING(__PVT__intf);
    return out;
}
