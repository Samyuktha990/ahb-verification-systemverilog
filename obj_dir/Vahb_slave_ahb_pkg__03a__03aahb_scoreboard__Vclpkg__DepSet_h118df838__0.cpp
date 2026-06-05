// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_seq_item__Vclpkg.h"
#include "Vahb_slave_std__03a__03amailbox__Tz1__Vclpkg.h"

VlCoroutine Vahb_slave_ahb_pkg__03a__03aahb_scoreboard::__VnoInFunc_run(Vahb_slave__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vahb_slave_ahb_pkg__03a__03aahb_scoreboard::__VnoInFunc_run\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_seq_item> pkt;
    while (1U) {
        co_await VL_NULL_CHECK(this->__PVT__mon2sb, "tb/ahb_sb.sv", 34)->__VnoInFunc_get(vlSymsp, pkt);
        if (VL_UNLIKELY(VL_NULL_CHECK(pkt, "tb/ahb_sb.sv", 48)
                        ->__PVT__hwrite)) {
            this->__PVT__mem_model[VL_NULL_CHECK(pkt, "tb/ahb_sb.sv", 50)->__PVT__haddr] 
                = VL_NULL_CHECK(pkt, "tb/ahb_sb.sv", 50)
                ->__PVT__hwdata;
            this->__PVT__write_count = ((IData)(1U) 
                                        + this->__PVT__write_count);
            VL_WRITEF("[SB] WRITE | Addr=%0x Data=%0x\n",
                      10,VL_NULL_CHECK(pkt, "tb/ahb_sb.sv", 55)
                      ->__PVT__haddr,32,VL_NULL_CHECK(pkt, "tb/ahb_sb.sv", 56)
                      ->__PVT__hwdata);
        } else {
            this->__PVT__read_count = ((IData)(1U) 
                                       + this->__PVT__read_count);
            if ((this->__PVT__mem_model[VL_NULL_CHECK(pkt, "tb/ahb_sb.sv", 66)
                 ->__PVT__haddr] == VL_NULL_CHECK(pkt, "tb/ahb_sb.sv", 66)
                 ->__PVT__hrdata)) {
                this->__PVT__pass_count = ((IData)(1U) 
                                           + this->__PVT__pass_count);
                VL_WRITEF("[SB] PASS  | Addr=%0x Exp=%0x Act=%0x\n",
                          10,VL_NULL_CHECK(pkt, "tb/ahb_sb.sv", 71)
                          ->__PVT__haddr,32,this->__PVT__mem_model
                          [VL_NULL_CHECK(pkt, "tb/ahb_sb.sv", 72)
                          ->__PVT__haddr],32,VL_NULL_CHECK(pkt, "tb/ahb_sb.sv", 73)
                          ->__PVT__hrdata);
            } else {
                this->__PVT__fail_count = ((IData)(1U) 
                                           + this->__PVT__fail_count);
                VL_WRITEF("[SB] FAIL  | Addr=%0x Exp=%0x Act=%0x\n",
                          10,VL_NULL_CHECK(pkt, "tb/ahb_sb.sv", 82)
                          ->__PVT__haddr,32,this->__PVT__mem_model
                          [VL_NULL_CHECK(pkt, "tb/ahb_sb.sv", 83)
                          ->__PVT__haddr],32,VL_NULL_CHECK(pkt, "tb/ahb_sb.sv", 84)
                          ->__PVT__hrdata);
            }
        }
    }
}
