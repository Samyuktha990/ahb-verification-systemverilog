// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg.h"

void Vahb_slave_ahb_pkg__03a__03aahb_env::__VnoInFunc_run(Vahb_slave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_env::__VnoInFunc_run\n"); );
    // Body
    this->__VnoInFunc_run____Vfork_1__0(vlSymsp);
    this->__VnoInFunc_run____Vfork_1__1(vlSymsp);
}

Vahb_slave_ahb_pkg__03a__03aahb_env::~Vahb_slave_ahb_pkg__03a__03aahb_env() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_env::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_env>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_env::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vahb_slave_ahb_pkg__03a__03aahb_env::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_env::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vahb_slave_ahb_pkg__03a__03aahb_env::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_env::to_string_middle\n"); );
    // Body
    std::string out;
    out += "drv:" + VL_TO_STRING(__PVT__drv);
    out += ", mon:" + VL_TO_STRING(__PVT__mon);
    out += ", sb:" + VL_TO_STRING(__PVT__sb);
    out += ", mon2sb:" + VL_TO_STRING(__PVT__mon2sb);
    out += ", intf:" + VL_TO_STRING(__PVT__intf);
    return out;
}
