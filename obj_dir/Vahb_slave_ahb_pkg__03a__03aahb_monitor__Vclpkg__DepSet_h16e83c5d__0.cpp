// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave__Syms.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_monitor__Vclpkg.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_seq_item__Vclpkg.h"
#include "Vahb_slave_std__03a__03amailbox__Tz1__Vclpkg.h"

VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_monitor::__VnoInFunc_run(Vahb_slave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vahb_slave_ahb_pkg__03a__03aahb_monitor::__VnoInFunc_run\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_seq_item> pkt;
    while (1U) {
        CData/*0:0*/ __VdynTrigger_hf82b78e1__0;
        __VdynTrigger_hf82b78e1__0 = 0;
        __VdynTrigger_hf82b78e1__0 = 0U;
        CData/*0:0*/ __Vtrigprevexpr_hce446c53__0;
        __Vtrigprevexpr_hce446c53__0 = 0;
        __Vtrigprevexpr_hce446c53__0 = VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_mon.sv", 23)
            ->hclk;
        while ((1U & (~ (IData)(__VdynTrigger_hf82b78e1__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@(posedge ahb_pkg::ahb_monitor.intf.hclk)", 
                                                         "tb/ahb_mon.sv", 
                                                         23);
            __VdynTrigger_hf82b78e1__0 = (VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_mon.sv", 23)
                                          ->hclk & 
                                          (~ (IData)(__Vtrigprevexpr_hce446c53__0)));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hf82b78e1__0);
            __Vtrigprevexpr_hce446c53__0 = VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_mon.sv", 23)
                ->hclk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@(posedge ahb_pkg::ahb_monitor.intf.hclk)", 
                                                     "tb/ahb_mon.sv", 
                                                     23);
        if (((VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_mon.sv", 25)
              ->hsel && VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_mon.sv", 25)
              ->hready) && (1U & (VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_mon.sv", 25)
                                  ->htrans >> 1U)))) {
            pkt = VL_NEW(Vahb_slave_ahb_pkg__03a__03aahb_seq_item, vlSymsp);
            VL_NULL_CHECK(pkt, "tb/ahb_mon.sv", 29)->__PVT__haddr 
                = VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_mon.sv", 29)
                ->haddr;
            VL_NULL_CHECK(pkt, "tb/ahb_mon.sv", 30)->__PVT__hwrite 
                = VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_mon.sv", 30)
                ->hwrite;
            CData/*0:0*/ __VdynTrigger_hf82b78e1__1;
            __VdynTrigger_hf82b78e1__1 = 0;
            __VdynTrigger_hf82b78e1__1 = 0U;
            CData/*0:0*/ __Vtrigprevexpr_hce446c53__1;
            __Vtrigprevexpr_hce446c53__1 = 0;
            __Vtrigprevexpr_hce446c53__1 = VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_mon.sv", 32)
                ->hclk;
            while ((1U & (~ (IData)(__VdynTrigger_hf82b78e1__1)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@(posedge ahb_pkg::ahb_monitor.intf.hclk)", 
                                                             "tb/ahb_mon.sv", 
                                                             32);
                __VdynTrigger_hf82b78e1__1 = (VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_mon.sv", 32)
                                              ->hclk 
                                              & (~ (IData)(__Vtrigprevexpr_hce446c53__1)));
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hf82b78e1__1);
                __Vtrigprevexpr_hce446c53__1 = VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_mon.sv", 32)
                    ->hclk;
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@(posedge ahb_pkg::ahb_monitor.intf.hclk)", 
                                                         "tb/ahb_mon.sv", 
                                                         32);
            if (VL_NULL_CHECK(pkt, "tb/ahb_mon.sv", 34)
                ->__PVT__hwrite) {
                VL_NULL_CHECK(pkt, "tb/ahb_mon.sv", 35)->__PVT__hwdata 
                    = VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_mon.sv", 35)
                    ->hwdata;
            } else {
                co_await vlSymsp->TOP.__VdlySched.delay(0x3e8ULL, 
                                                        nullptr, 
                                                        "tb/ahb_mon.sv", 
                                                        37);
                VL_NULL_CHECK(pkt, "tb/ahb_mon.sv", 38)->__PVT__hrdata 
                    = VL_NULL_CHECK(this->__PVT__intf, "tb/ahb_mon.sv", 38)
                    ->hrdata;
            }
            co_await VL_NULL_CHECK(this->__PVT__mon2sb, "tb/ahb_mon.sv", 41)->__VnoInFunc_put(vlSymsp, pkt);
        }
    }
}
