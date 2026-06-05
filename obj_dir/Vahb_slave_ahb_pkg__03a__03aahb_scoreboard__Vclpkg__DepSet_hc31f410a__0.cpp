// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg.h"

void Vahb_slave_ahb_pkg__03a__03aahb_scoreboard::__VnoInFunc_report(Vahb_slave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_scoreboard::__VnoInFunc_report\n"); );
    // Body
    VL_WRITEF("\n-----------------------------------\n        SCOREBOARD REPORT\n-----------------------------------\nWrites      = %0d\nReads       = %0d\nPASS Count  = %0d\nFAIL Count  = %0d\n",
              32,this->__PVT__write_count,32,this->__PVT__read_count,
              32,this->__PVT__pass_count,32,this->__PVT__fail_count);
    if ((0U == this->__PVT__fail_count)) {
        VL_WRITEF("STATUS      = TEST PASSED\n");
    } else {
        VL_WRITEF("STATUS      = TEST FAILED\n");
    }
    VL_WRITEF("-----------------------------------\n\n");
}

Vahb_slave_ahb_pkg__03a__03aahb_scoreboard::~Vahb_slave_ahb_pkg__03a__03aahb_scoreboard() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_scoreboard::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_scoreboard>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_scoreboard::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vahb_slave_ahb_pkg__03a__03aahb_scoreboard::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_scoreboard::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vahb_slave_ahb_pkg__03a__03aahb_scoreboard::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_scoreboard::to_string_middle\n"); );
    // Body
    std::string out;
    out += "mon2sb:" + VL_TO_STRING(__PVT__mon2sb);
    out += ", mem_model:" + VL_TO_STRING(__PVT__mem_model);
    out += ", pass_count:" + VL_TO_STRING(__PVT__pass_count);
    out += ", fail_count:" + VL_TO_STRING(__PVT__fail_count);
    out += ", write_count:" + VL_TO_STRING(__PVT__write_count);
    out += ", read_count:" + VL_TO_STRING(__PVT__read_count);
    return out;
}
