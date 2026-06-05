// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vahb_slave.h for the primary calling header

#include "Vahb_slave__pch.h"
#include "Vahb_slave__Syms.h"
#include "Vahb_slave___024root.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_driver__Vclpkg.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg.h"

VL_INLINE_OPT VlCoroutine Vahb_slave___024root___eval_initial__TOP__Vtiming__2(Vahb_slave___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vahb_slave__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vahb_slave___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Init
    VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_env> ahb_top__DOT__test__DOT__env;
    SData/*9:0*/ ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr;
    ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr = 0;
    IData/*31:0*/ ahb_top__DOT__test__DOT__unnamedblk1__DOT__data;
    ahb_top__DOT__test__DOT__unnamedblk1__DOT__data = 0;
    // Body
    ahb_top__DOT__test__DOT__env = VL_NEW(Vahb_slave_ahb_pkg__03a__03aahb_env, vlSymsp, (&vlSymsp->TOP__ahb_top__DOT__intf));
    VL_WRITEF("[TEST] Starting AHB Test\n");
    VL_NULL_CHECK(ahb_top__DOT__test__DOT__env, "tb/ahb_test.sv", 15)->__VnoInFunc_run(vlSymsp);
    ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr 
        = (0x3ffU & VL_URANDOM_RANGE_I(0U, 0x3ffU));
    ahb_top__DOT__test__DOT__unnamedblk1__DOT__data 
        = VL_RANDOM_I();
    co_await VL_NULL_CHECK(VL_NULL_CHECK(ahb_top__DOT__test__DOT__env, "tb/ahb_test.sv", 25)
                           ->__PVT__drv, "tb/ahb_test.sv", 25)->__VnoInFunc_write(vlSymsp, ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr, ahb_top__DOT__test__DOT__unnamedblk1__DOT__data);
    co_await VL_NULL_CHECK(VL_NULL_CHECK(ahb_top__DOT__test__DOT__env, "tb/ahb_test.sv", 26)
                           ->__PVT__drv, "tb/ahb_test.sv", 26)->__VnoInFunc_read(vlSymsp, ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr);
    ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr 
        = (0x3ffU & VL_URANDOM_RANGE_I(0U, 0x3ffU));
    ahb_top__DOT__test__DOT__unnamedblk1__DOT__data 
        = VL_RANDOM_I();
    co_await VL_NULL_CHECK(VL_NULL_CHECK(ahb_top__DOT__test__DOT__env, "tb/ahb_test.sv", 25)
                           ->__PVT__drv, "tb/ahb_test.sv", 25)->__VnoInFunc_write(vlSymsp, ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr, ahb_top__DOT__test__DOT__unnamedblk1__DOT__data);
    co_await VL_NULL_CHECK(VL_NULL_CHECK(ahb_top__DOT__test__DOT__env, "tb/ahb_test.sv", 26)
                           ->__PVT__drv, "tb/ahb_test.sv", 26)->__VnoInFunc_read(vlSymsp, ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr);
    ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr 
        = (0x3ffU & VL_URANDOM_RANGE_I(0U, 0x3ffU));
    ahb_top__DOT__test__DOT__unnamedblk1__DOT__data 
        = VL_RANDOM_I();
    co_await VL_NULL_CHECK(VL_NULL_CHECK(ahb_top__DOT__test__DOT__env, "tb/ahb_test.sv", 25)
                           ->__PVT__drv, "tb/ahb_test.sv", 25)->__VnoInFunc_write(vlSymsp, ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr, ahb_top__DOT__test__DOT__unnamedblk1__DOT__data);
    co_await VL_NULL_CHECK(VL_NULL_CHECK(ahb_top__DOT__test__DOT__env, "tb/ahb_test.sv", 26)
                           ->__PVT__drv, "tb/ahb_test.sv", 26)->__VnoInFunc_read(vlSymsp, ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr);
    ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr 
        = (0x3ffU & VL_URANDOM_RANGE_I(0U, 0x3ffU));
    ahb_top__DOT__test__DOT__unnamedblk1__DOT__data 
        = VL_RANDOM_I();
    co_await VL_NULL_CHECK(VL_NULL_CHECK(ahb_top__DOT__test__DOT__env, "tb/ahb_test.sv", 25)
                           ->__PVT__drv, "tb/ahb_test.sv", 25)->__VnoInFunc_write(vlSymsp, ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr, ahb_top__DOT__test__DOT__unnamedblk1__DOT__data);
    co_await VL_NULL_CHECK(VL_NULL_CHECK(ahb_top__DOT__test__DOT__env, "tb/ahb_test.sv", 26)
                           ->__PVT__drv, "tb/ahb_test.sv", 26)->__VnoInFunc_read(vlSymsp, ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr);
    ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr 
        = (0x3ffU & VL_URANDOM_RANGE_I(0U, 0x3ffU));
    ahb_top__DOT__test__DOT__unnamedblk1__DOT__data 
        = VL_RANDOM_I();
    co_await VL_NULL_CHECK(VL_NULL_CHECK(ahb_top__DOT__test__DOT__env, "tb/ahb_test.sv", 25)
                           ->__PVT__drv, "tb/ahb_test.sv", 25)->__VnoInFunc_write(vlSymsp, ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr, ahb_top__DOT__test__DOT__unnamedblk1__DOT__data);
    co_await VL_NULL_CHECK(VL_NULL_CHECK(ahb_top__DOT__test__DOT__env, "tb/ahb_test.sv", 26)
                           ->__PVT__drv, "tb/ahb_test.sv", 26)->__VnoInFunc_read(vlSymsp, ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr);
    ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr 
        = (0x3ffU & VL_URANDOM_RANGE_I(0U, 0x3ffU));
    ahb_top__DOT__test__DOT__unnamedblk1__DOT__data 
        = VL_RANDOM_I();
    co_await VL_NULL_CHECK(VL_NULL_CHECK(ahb_top__DOT__test__DOT__env, "tb/ahb_test.sv", 25)
                           ->__PVT__drv, "tb/ahb_test.sv", 25)->__VnoInFunc_write(vlSymsp, ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr, ahb_top__DOT__test__DOT__unnamedblk1__DOT__data);
    co_await VL_NULL_CHECK(VL_NULL_CHECK(ahb_top__DOT__test__DOT__env, "tb/ahb_test.sv", 26)
                           ->__PVT__drv, "tb/ahb_test.sv", 26)->__VnoInFunc_read(vlSymsp, ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr);
    ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr 
        = (0x3ffU & VL_URANDOM_RANGE_I(0U, 0x3ffU));
    ahb_top__DOT__test__DOT__unnamedblk1__DOT__data 
        = VL_RANDOM_I();
    co_await VL_NULL_CHECK(VL_NULL_CHECK(ahb_top__DOT__test__DOT__env, "tb/ahb_test.sv", 25)
                           ->__PVT__drv, "tb/ahb_test.sv", 25)->__VnoInFunc_write(vlSymsp, ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr, ahb_top__DOT__test__DOT__unnamedblk1__DOT__data);
    co_await VL_NULL_CHECK(VL_NULL_CHECK(ahb_top__DOT__test__DOT__env, "tb/ahb_test.sv", 26)
                           ->__PVT__drv, "tb/ahb_test.sv", 26)->__VnoInFunc_read(vlSymsp, ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr);
    ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr 
        = (0x3ffU & VL_URANDOM_RANGE_I(0U, 0x3ffU));
    ahb_top__DOT__test__DOT__unnamedblk1__DOT__data 
        = VL_RANDOM_I();
    co_await VL_NULL_CHECK(VL_NULL_CHECK(ahb_top__DOT__test__DOT__env, "tb/ahb_test.sv", 25)
                           ->__PVT__drv, "tb/ahb_test.sv", 25)->__VnoInFunc_write(vlSymsp, ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr, ahb_top__DOT__test__DOT__unnamedblk1__DOT__data);
    co_await VL_NULL_CHECK(VL_NULL_CHECK(ahb_top__DOT__test__DOT__env, "tb/ahb_test.sv", 26)
                           ->__PVT__drv, "tb/ahb_test.sv", 26)->__VnoInFunc_read(vlSymsp, ahb_top__DOT__test__DOT__unnamedblk1__DOT__addr);
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb/ahb_test.sv", 
                                       30);
    VL_NULL_CHECK(VL_NULL_CHECK(ahb_top__DOT__test__DOT__env, "tb/ahb_test.sv", 31)
                  ->__PVT__sb, "tb/ahb_test.sv", 31)->__VnoInFunc_report(vlSymsp);
    VL_FINISH_MT("tb/ahb_test.sv", 32, "");
}
