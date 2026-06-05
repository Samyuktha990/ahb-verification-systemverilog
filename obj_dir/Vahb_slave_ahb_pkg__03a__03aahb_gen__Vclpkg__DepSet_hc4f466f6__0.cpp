// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave__Syms.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_gen__Vclpkg.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_seq_item__Vclpkg.h"
#include "Vahb_slave_std__03a__03amailbox__Tz1__Vclpkg.h"

VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_gen::__VnoInFunc_run(Vahb_slave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_gen::__VnoInFunc_run\n"); );
    // Init
    VL_KEEP_THIS;
    IData/*31:0*/ __Vrepeat0;
    __Vrepeat0 = 0;
    // Body
    VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_seq_item> pkt;
    SData/*9:0*/ addr;
    addr = 0;
    IData/*31:0*/ data;
    data = 0;
    __Vrepeat0 = this->__PVT__loop_count;
    while (VL_LTS_III(32, 0U, __Vrepeat0)) {
        addr = (0x3ffU & VL_URANDOM_RANGE_I(0U, 0x3ffU));
        data = VL_RANDOM_I();
        pkt = VL_NEW(Vahb_slave_ahb_pkg__03a__03aahb_seq_item, vlSymsp);
        VL_NULL_CHECK(pkt, "tb/ahb_gen.sv", 25)->__PVT__haddr 
            = addr;
        VL_NULL_CHECK(pkt, "tb/ahb_gen.sv", 26)->__PVT__hwdata 
            = data;
        VL_NULL_CHECK(pkt, "tb/ahb_gen.sv", 27)->__PVT__hwrite = 1U;
        co_await VL_NULL_CHECK(this->__PVT__gen2drv, "tb/ahb_gen.sv", 29)->__VnoInFunc_put(vlSymsp, pkt);
        pkt = VL_NEW(Vahb_slave_ahb_pkg__03a__03aahb_seq_item, vlSymsp);
        VL_NULL_CHECK(pkt, "tb/ahb_gen.sv", 34)->__PVT__haddr 
            = addr;
        VL_NULL_CHECK(pkt, "tb/ahb_gen.sv", 35)->__PVT__hwrite = 0U;
        co_await VL_NULL_CHECK(this->__PVT__gen2drv, "tb/ahb_gen.sv", 37)->__VnoInFunc_put(vlSymsp, pkt);
        __Vrepeat0 = (__Vrepeat0 - (IData)(1U));
    }
    this->__PVT__ended.fire();
}
