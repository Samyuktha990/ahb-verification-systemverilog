// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave__Syms.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_driver__Vclpkg.h"

Vahb_slave_ahb_pkg__03a__03aahb_driver::Vahb_slave_ahb_pkg__03a__03aahb_driver(Vahb_slave__Syms* __restrict vlSymsp, Vahb_slave_ahb_if* intf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__intf = intf;
}

VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_write(Vahb_slave__Syms* __restrict vlSymsp, SData/*9:0*/ addr, IData/*31:0*/ data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_write\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_h835dbdc5__0;
    __VdynTrigger_h835dbdc5__0 = 0;
    __VdynTrigger_h835dbdc5__0 = 0U;
    CData/*0:0*/ __Vtrigprevexpr_h8112b4ff__0;
    __Vtrigprevexpr_h8112b4ff__0 = 0;
    __Vtrigprevexpr_h8112b4ff__0 = VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 14)
        ->hclk;
    while ((1U & (~ (IData)(__VdynTrigger_h835dbdc5__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@(posedge ahb_pkg::ahb_driver.intf.hclk)", 
                                                     "tb/ahb_driver.sv", 
                                                     14);
        __VdynTrigger_h835dbdc5__0 = (VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 14)
                                      ->hclk & (~ (IData)(__Vtrigprevexpr_h8112b4ff__0)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h835dbdc5__0);
        __Vtrigprevexpr_h8112b4ff__0 = VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 14)
            ->hclk;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@(posedge ahb_pkg::ahb_driver.intf.hclk)", 
                                                 "tb/ahb_driver.sv", 
                                                 14);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_he0a827e4__0;
    __Vintraval_he0a827e4__0 = 0;
    __Vintraval_he0a827e4__0 = 1U;
    this->__VnoInFunc_write____Vfork_1__1(vlSymsp, __Vintraval_he0a827e4__0);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_h864916b4__0;
    __Vintraval_h864916b4__0 = 0;
    __Vintraval_h864916b4__0 = 1U;
    this->__VnoInFunc_write____Vfork_2__1(vlSymsp, __Vintraval_h864916b4__0);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    SData/*9:0*/ __Vintraval_hdfb61adc__0;
    __Vintraval_hdfb61adc__0 = 0;
    __Vintraval_hdfb61adc__0 = addr;
    this->__VnoInFunc_write____Vfork_3__1(vlSymsp, __Vintraval_hdfb61adc__0);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*1:0*/ __Vintraval_h2710c310__0;
    __Vintraval_h2710c310__0 = 0;
    __Vintraval_h2710c310__0 = 2U;
    this->__VnoInFunc_write____Vfork_4__1(vlSymsp, __Vintraval_h2710c310__0);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_h3b6af04e__0;
    __Vintraval_h3b6af04e__0 = 0;
    __Vintraval_h3b6af04e__0 = 1U;
    this->__VnoInFunc_write____Vfork_5__1(vlSymsp, __Vintraval_h3b6af04e__0);
    CData/*0:0*/ __VdynTrigger_h835dbdc5__1;
    __VdynTrigger_h835dbdc5__1 = 0;
    __VdynTrigger_h835dbdc5__1 = 0U;
    CData/*0:0*/ __Vtrigprevexpr_h8112b4ff__1;
    __Vtrigprevexpr_h8112b4ff__1 = 0;
    __Vtrigprevexpr_h8112b4ff__1 = VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 22)
        ->hclk;
    while ((1U & (~ (IData)(__VdynTrigger_h835dbdc5__1)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@(posedge ahb_pkg::ahb_driver.intf.hclk)", 
                                                     "tb/ahb_driver.sv", 
                                                     22);
        __VdynTrigger_h835dbdc5__1 = (VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 22)
                                      ->hclk & (~ (IData)(__Vtrigprevexpr_h8112b4ff__1)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h835dbdc5__1);
        __Vtrigprevexpr_h8112b4ff__1 = VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 22)
            ->hclk;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@(posedge ahb_pkg::ahb_driver.intf.hclk)", 
                                                 "tb/ahb_driver.sv", 
                                                 22);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    IData/*31:0*/ __Vintraval_h9972aaad__0;
    __Vintraval_h9972aaad__0 = 0;
    __Vintraval_h9972aaad__0 = data;
    this->__VnoInFunc_write____Vfork_6__1(vlSymsp, __Vintraval_h9972aaad__0);
    CData/*0:0*/ __VdynTrigger_h835dbdc5__2;
    __VdynTrigger_h835dbdc5__2 = 0;
    __VdynTrigger_h835dbdc5__2 = 0U;
    CData/*0:0*/ __Vtrigprevexpr_h8112b4ff__2;
    __Vtrigprevexpr_h8112b4ff__2 = 0;
    __Vtrigprevexpr_h8112b4ff__2 = VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 26)
        ->hclk;
    while ((1U & (~ (IData)(__VdynTrigger_h835dbdc5__2)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@(posedge ahb_pkg::ahb_driver.intf.hclk)", 
                                                     "tb/ahb_driver.sv", 
                                                     26);
        __VdynTrigger_h835dbdc5__2 = (VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 26)
                                      ->hclk & (~ (IData)(__Vtrigprevexpr_h8112b4ff__2)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h835dbdc5__2);
        __Vtrigprevexpr_h8112b4ff__2 = VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 26)
            ->hclk;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@(posedge ahb_pkg::ahb_driver.intf.hclk)", 
                                                 "tb/ahb_driver.sv", 
                                                 26);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_he0ad0558__0;
    __Vintraval_he0ad0558__0 = 0;
    __Vintraval_he0ad0558__0 = 0U;
    this->__VnoInFunc_write____Vfork_7__1(vlSymsp, __Vintraval_he0ad0558__0);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_h864a16a8__0;
    __Vintraval_h864a16a8__0 = 0;
    __Vintraval_h864a16a8__0 = 0U;
    this->__VnoInFunc_write____Vfork_8__1(vlSymsp, __Vintraval_h864a16a8__0);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*1:0*/ __Vintraval_h2710e2eb__0;
    __Vintraval_h2710e2eb__0 = 0;
    __Vintraval_h2710e2eb__0 = 0U;
    this->__VnoInFunc_write____Vfork_9__1(vlSymsp, __Vintraval_h2710e2eb__0);
}

VL_INLINE_OPT VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_write____Vfork_9__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_h2710e2eb__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_write____Vfork_9__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_h72c70d24__8;
    __VdynTrigger_h72c70d24__8 = 0;
    __VdynTrigger_h72c70d24__8 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h72c70d24__8)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     30);
        __VdynTrigger_h72c70d24__8 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h72c70d24__8);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     30);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
            vlSymsp->enqueueTriggeredEventForClearing(vlSymsp->TOP.__VnbaEvent);
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/ahb_driver.sv", 
                                                 30);
    VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 30)->htrans 
        = __Vintraval_h2710e2eb__0;
    vlSymsp->TOP.__VvifTrigger_h7eb1d4e8__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_write____Vfork_8__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h864a16a8__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_write____Vfork_8__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_h72c70d24__7;
    __VdynTrigger_h72c70d24__7 = 0;
    __VdynTrigger_h72c70d24__7 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h72c70d24__7)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     29);
        __VdynTrigger_h72c70d24__7 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h72c70d24__7);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     29);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
            vlSymsp->enqueueTriggeredEventForClearing(vlSymsp->TOP.__VnbaEvent);
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/ahb_driver.sv", 
                                                 29);
    VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 29)->hwrite 
        = __Vintraval_h864a16a8__0;
    vlSymsp->TOP.__VvifTrigger_h7eb1d4e8__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_write____Vfork_7__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_he0ad0558__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_write____Vfork_7__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_h72c70d24__6;
    __VdynTrigger_h72c70d24__6 = 0;
    __VdynTrigger_h72c70d24__6 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h72c70d24__6)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     28);
        __VdynTrigger_h72c70d24__6 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h72c70d24__6);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     28);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
            vlSymsp->enqueueTriggeredEventForClearing(vlSymsp->TOP.__VnbaEvent);
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/ahb_driver.sv", 
                                                 28);
    VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 28)->hsel 
        = __Vintraval_he0ad0558__0;
    vlSymsp->TOP.__VvifTrigger_h7eb1d4e8__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_write____Vfork_6__1(Vahb_slave__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h9972aaad__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_write____Vfork_6__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_h72c70d24__5;
    __VdynTrigger_h72c70d24__5 = 0;
    __VdynTrigger_h72c70d24__5 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h72c70d24__5)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     24);
        __VdynTrigger_h72c70d24__5 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h72c70d24__5);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     24);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
            vlSymsp->enqueueTriggeredEventForClearing(vlSymsp->TOP.__VnbaEvent);
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/ahb_driver.sv", 
                                                 24);
    VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 24)->hwdata 
        = __Vintraval_h9972aaad__0;
    vlSymsp->TOP.__VvifTrigger_h7eb1d4e8__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_write____Vfork_5__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h3b6af04e__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_write____Vfork_5__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_h72c70d24__4;
    __VdynTrigger_h72c70d24__4 = 0;
    __VdynTrigger_h72c70d24__4 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h72c70d24__4)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     20);
        __VdynTrigger_h72c70d24__4 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h72c70d24__4);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     20);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
            vlSymsp->enqueueTriggeredEventForClearing(vlSymsp->TOP.__VnbaEvent);
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/ahb_driver.sv", 
                                                 20);
    VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 20)->hready 
        = __Vintraval_h3b6af04e__0;
    vlSymsp->TOP.__VvifTrigger_h7eb1d4e8__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_write____Vfork_4__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_h2710c310__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_write____Vfork_4__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_h72c70d24__3;
    __VdynTrigger_h72c70d24__3 = 0;
    __VdynTrigger_h72c70d24__3 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h72c70d24__3)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     19);
        __VdynTrigger_h72c70d24__3 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h72c70d24__3);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     19);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
            vlSymsp->enqueueTriggeredEventForClearing(vlSymsp->TOP.__VnbaEvent);
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/ahb_driver.sv", 
                                                 19);
    VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 19)->htrans 
        = __Vintraval_h2710c310__0;
    vlSymsp->TOP.__VvifTrigger_h7eb1d4e8__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_write____Vfork_3__1(Vahb_slave__Syms* __restrict vlSymsp, SData/*9:0*/ __Vintraval_hdfb61adc__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_write____Vfork_3__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_h72c70d24__2;
    __VdynTrigger_h72c70d24__2 = 0;
    __VdynTrigger_h72c70d24__2 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h72c70d24__2)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     18);
        __VdynTrigger_h72c70d24__2 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h72c70d24__2);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     18);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
            vlSymsp->enqueueTriggeredEventForClearing(vlSymsp->TOP.__VnbaEvent);
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/ahb_driver.sv", 
                                                 18);
    VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 18)->haddr 
        = __Vintraval_hdfb61adc__0;
    vlSymsp->TOP.__VvifTrigger_h7eb1d4e8__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_write____Vfork_2__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h864916b4__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_write____Vfork_2__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_h72c70d24__1;
    __VdynTrigger_h72c70d24__1 = 0;
    __VdynTrigger_h72c70d24__1 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h72c70d24__1)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     17);
        __VdynTrigger_h72c70d24__1 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h72c70d24__1);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     17);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
            vlSymsp->enqueueTriggeredEventForClearing(vlSymsp->TOP.__VnbaEvent);
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/ahb_driver.sv", 
                                                 17);
    VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 17)->hwrite 
        = __Vintraval_h864916b4__0;
    vlSymsp->TOP.__VvifTrigger_h7eb1d4e8__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_write____Vfork_1__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_he0a827e4__0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_write____Vfork_1__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_h72c70d24__0;
    __VdynTrigger_h72c70d24__0 = 0;
    __VdynTrigger_h72c70d24__0 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h72c70d24__0)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     16);
        __VdynTrigger_h72c70d24__0 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h72c70d24__0);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     16);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
            vlSymsp->enqueueTriggeredEventForClearing(vlSymsp->TOP.__VnbaEvent);
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/ahb_driver.sv", 
                                                 16);
    VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 16)->hsel 
        = __Vintraval_he0a827e4__0;
    vlSymsp->TOP.__VvifTrigger_h7eb1d4e8__0 = 1U;
}

VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_read(Vahb_slave__Syms* __restrict vlSymsp, SData/*9:0*/ addr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_read\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_h835dbdc5__3;
    __VdynTrigger_h835dbdc5__3 = 0;
    __VdynTrigger_h835dbdc5__3 = 0U;
    CData/*0:0*/ __Vtrigprevexpr_h8112b4ff__3;
    __Vtrigprevexpr_h8112b4ff__3 = 0;
    __Vtrigprevexpr_h8112b4ff__3 = VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 36)
        ->hclk;
    while ((1U & (~ (IData)(__VdynTrigger_h835dbdc5__3)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@(posedge ahb_pkg::ahb_driver.intf.hclk)", 
                                                     "tb/ahb_driver.sv", 
                                                     36);
        __VdynTrigger_h835dbdc5__3 = (VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 36)
                                      ->hclk & (~ (IData)(__Vtrigprevexpr_h8112b4ff__3)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h835dbdc5__3);
        __Vtrigprevexpr_h8112b4ff__3 = VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 36)
            ->hclk;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@(posedge ahb_pkg::ahb_driver.intf.hclk)", 
                                                 "tb/ahb_driver.sv", 
                                                 36);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_he0a827e4__1;
    __Vintraval_he0a827e4__1 = 0;
    __Vintraval_he0a827e4__1 = 1U;
    this->__VnoInFunc_read____Vfork_10__1(vlSymsp, __Vintraval_he0a827e4__1);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_h864a16a8__1;
    __Vintraval_h864a16a8__1 = 0;
    __Vintraval_h864a16a8__1 = 0U;
    this->__VnoInFunc_read____Vfork_11__1(vlSymsp, __Vintraval_h864a16a8__1);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    SData/*9:0*/ __Vintraval_hdfb61adc__1;
    __Vintraval_hdfb61adc__1 = 0;
    __Vintraval_hdfb61adc__1 = addr;
    this->__VnoInFunc_read____Vfork_12__1(vlSymsp, __Vintraval_hdfb61adc__1);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*1:0*/ __Vintraval_h2710c310__1;
    __Vintraval_h2710c310__1 = 0;
    __Vintraval_h2710c310__1 = 2U;
    this->__VnoInFunc_read____Vfork_13__1(vlSymsp, __Vintraval_h2710c310__1);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_h3b6af04e__1;
    __Vintraval_h3b6af04e__1 = 0;
    __Vintraval_h3b6af04e__1 = 1U;
    this->__VnoInFunc_read____Vfork_14__1(vlSymsp, __Vintraval_h3b6af04e__1);
    CData/*0:0*/ __VdynTrigger_h835dbdc5__4;
    __VdynTrigger_h835dbdc5__4 = 0;
    __VdynTrigger_h835dbdc5__4 = 0U;
    CData/*0:0*/ __Vtrigprevexpr_h8112b4ff__4;
    __Vtrigprevexpr_h8112b4ff__4 = 0;
    __Vtrigprevexpr_h8112b4ff__4 = VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 44)
        ->hclk;
    while ((1U & (~ (IData)(__VdynTrigger_h835dbdc5__4)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@(posedge ahb_pkg::ahb_driver.intf.hclk)", 
                                                     "tb/ahb_driver.sv", 
                                                     44);
        __VdynTrigger_h835dbdc5__4 = (VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 44)
                                      ->hclk & (~ (IData)(__Vtrigprevexpr_h8112b4ff__4)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h835dbdc5__4);
        __Vtrigprevexpr_h8112b4ff__4 = VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 44)
            ->hclk;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@(posedge ahb_pkg::ahb_driver.intf.hclk)", 
                                                 "tb/ahb_driver.sv", 
                                                 44);
    CData/*0:0*/ __VdynTrigger_h835dbdc5__5;
    __VdynTrigger_h835dbdc5__5 = 0;
    __VdynTrigger_h835dbdc5__5 = 0U;
    CData/*0:0*/ __Vtrigprevexpr_h8112b4ff__5;
    __Vtrigprevexpr_h8112b4ff__5 = 0;
    __Vtrigprevexpr_h8112b4ff__5 = VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 46)
        ->hclk;
    while ((1U & (~ (IData)(__VdynTrigger_h835dbdc5__5)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@(posedge ahb_pkg::ahb_driver.intf.hclk)", 
                                                     "tb/ahb_driver.sv", 
                                                     46);
        __VdynTrigger_h835dbdc5__5 = (VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 46)
                                      ->hclk & (~ (IData)(__Vtrigprevexpr_h8112b4ff__5)));
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h835dbdc5__5);
        __Vtrigprevexpr_h8112b4ff__5 = VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 46)
            ->hclk;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@(posedge ahb_pkg::ahb_driver.intf.hclk)", 
                                                 "tb/ahb_driver.sv", 
                                                 46);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*0:0*/ __Vintraval_he0ad0558__1;
    __Vintraval_he0ad0558__1 = 0;
    __Vintraval_he0ad0558__1 = 0U;
    this->__VnoInFunc_read____Vfork_15__1(vlSymsp, __Vintraval_he0ad0558__1);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    CData/*1:0*/ __Vintraval_h2710e2eb__1;
    __Vintraval_h2710e2eb__1 = 0;
    __Vintraval_h2710e2eb__1 = 0U;
    this->__VnoInFunc_read____Vfork_16__1(vlSymsp, __Vintraval_h2710e2eb__1);
}

VL_INLINE_OPT VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_read____Vfork_16__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_h2710e2eb__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_read____Vfork_16__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_h72c70d24__15;
    __VdynTrigger_h72c70d24__15 = 0;
    __VdynTrigger_h72c70d24__15 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h72c70d24__15)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     49);
        __VdynTrigger_h72c70d24__15 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h72c70d24__15);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     49);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
            vlSymsp->enqueueTriggeredEventForClearing(vlSymsp->TOP.__VnbaEvent);
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/ahb_driver.sv", 
                                                 49);
    VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 49)->htrans 
        = __Vintraval_h2710e2eb__1;
    vlSymsp->TOP.__VvifTrigger_h7eb1d4e8__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_read____Vfork_15__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_he0ad0558__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_read____Vfork_15__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_h72c70d24__14;
    __VdynTrigger_h72c70d24__14 = 0;
    __VdynTrigger_h72c70d24__14 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h72c70d24__14)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     48);
        __VdynTrigger_h72c70d24__14 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h72c70d24__14);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     48);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
            vlSymsp->enqueueTriggeredEventForClearing(vlSymsp->TOP.__VnbaEvent);
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/ahb_driver.sv", 
                                                 48);
    VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 48)->hsel 
        = __Vintraval_he0ad0558__1;
    vlSymsp->TOP.__VvifTrigger_h7eb1d4e8__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_read____Vfork_14__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h3b6af04e__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_read____Vfork_14__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_h72c70d24__13;
    __VdynTrigger_h72c70d24__13 = 0;
    __VdynTrigger_h72c70d24__13 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h72c70d24__13)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     42);
        __VdynTrigger_h72c70d24__13 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h72c70d24__13);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     42);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
            vlSymsp->enqueueTriggeredEventForClearing(vlSymsp->TOP.__VnbaEvent);
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/ahb_driver.sv", 
                                                 42);
    VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 42)->hready 
        = __Vintraval_h3b6af04e__1;
    vlSymsp->TOP.__VvifTrigger_h7eb1d4e8__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_read____Vfork_13__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_h2710c310__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_read____Vfork_13__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_h72c70d24__12;
    __VdynTrigger_h72c70d24__12 = 0;
    __VdynTrigger_h72c70d24__12 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h72c70d24__12)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     41);
        __VdynTrigger_h72c70d24__12 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h72c70d24__12);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     41);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
            vlSymsp->enqueueTriggeredEventForClearing(vlSymsp->TOP.__VnbaEvent);
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/ahb_driver.sv", 
                                                 41);
    VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 41)->htrans 
        = __Vintraval_h2710c310__1;
    vlSymsp->TOP.__VvifTrigger_h7eb1d4e8__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_read____Vfork_12__1(Vahb_slave__Syms* __restrict vlSymsp, SData/*9:0*/ __Vintraval_hdfb61adc__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_read____Vfork_12__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_h72c70d24__11;
    __VdynTrigger_h72c70d24__11 = 0;
    __VdynTrigger_h72c70d24__11 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h72c70d24__11)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     40);
        __VdynTrigger_h72c70d24__11 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h72c70d24__11);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     40);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
            vlSymsp->enqueueTriggeredEventForClearing(vlSymsp->TOP.__VnbaEvent);
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/ahb_driver.sv", 
                                                 40);
    VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 40)->haddr 
        = __Vintraval_hdfb61adc__1;
    vlSymsp->TOP.__VvifTrigger_h7eb1d4e8__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_read____Vfork_11__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h864a16a8__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_read____Vfork_11__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_h72c70d24__10;
    __VdynTrigger_h72c70d24__10 = 0;
    __VdynTrigger_h72c70d24__10 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h72c70d24__10)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     39);
        __VdynTrigger_h72c70d24__10 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h72c70d24__10);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     39);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
            vlSymsp->enqueueTriggeredEventForClearing(vlSymsp->TOP.__VnbaEvent);
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/ahb_driver.sv", 
                                                 39);
    VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 39)->hwrite 
        = __Vintraval_h864a16a8__1;
    vlSymsp->TOP.__VvifTrigger_h7eb1d4e8__0 = 1U;
}

VL_INLINE_OPT VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_read____Vfork_10__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_he0a827e4__1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::__VnoInFunc_read____Vfork_10__1\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    CData/*0:0*/ __VdynTrigger_h72c70d24__9;
    __VdynTrigger_h72c70d24__9 = 0;
    __VdynTrigger_h72c70d24__9 = 0U;
    while ((1U & (~ (IData)(__VdynTrigger_h72c70d24__9)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     38);
        __VdynTrigger_h72c70d24__9 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h72c70d24__9);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     nullptr, 
                                                     "@([event] __VnbaEvent)", 
                                                     "tb/ahb_driver.sv", 
                                                     38);
        if (vlSymsp->TOP.__VnbaEvent.isFired()) {
            vlSymsp->TOP.__VnbaEvent.clearFired();
            vlSymsp->enqueueTriggeredEventForClearing(vlSymsp->TOP.__VnbaEvent);
        }
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(nullptr, 
                                                 "@([event] __VnbaEvent)", 
                                                 "tb/ahb_driver.sv", 
                                                 38);
    VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_driver.sv", 38)->hsel 
        = __Vintraval_he0a827e4__1;
    vlSymsp->TOP.__VvifTrigger_h7eb1d4e8__0 = 1U;
}

void Vahb_slave_ahb_pkg__03a__03aahb_driver::_ctor_var_reset(Vahb_slave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_driver::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__intf = nullptr;
}
