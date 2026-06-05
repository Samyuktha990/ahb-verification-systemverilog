// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vahb_slave.h for the primary calling header

#ifndef VERILATED_VAHB_SLAVE_AHB_PKG__03A__03AAHB_DRIVER__VCLPKG_H_
#define VERILATED_VAHB_SLAVE_AHB_PKG__03A__03AAHB_DRIVER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vahb_slave__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vahb_slave_ahb_pkg__03a__03aahb_driver__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vahb_slave__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vahb_slave_ahb_pkg__03a__03aahb_driver__Vclpkg(Vahb_slave__Syms* symsp, const char* v__name);
    ~Vahb_slave_ahb_pkg__03a__03aahb_driver__Vclpkg();
    VL_UNCOPYABLE(Vahb_slave_ahb_pkg__03a__03aahb_driver__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vahb_slave__Syms;

class Vahb_slave_ahb_pkg__03a__03aahb_driver : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    Vahb_slave_ahb_if* __PVT__intf;
    VlCoroutine __VnoInFunc_read(Vahb_slave__Syms* __restrict vlSymsp, SData/*9:0*/ addr);
  private:
    VlCoroutine __VnoInFunc_read____Vfork_10__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_he0a827e4__1);
    VlCoroutine __VnoInFunc_read____Vfork_11__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h864a16a8__1);
    VlCoroutine __VnoInFunc_read____Vfork_12__1(Vahb_slave__Syms* __restrict vlSymsp, SData/*9:0*/ __Vintraval_hdfb61adc__1);
    VlCoroutine __VnoInFunc_read____Vfork_13__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_h2710c310__1);
    VlCoroutine __VnoInFunc_read____Vfork_14__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h3b6af04e__1);
    VlCoroutine __VnoInFunc_read____Vfork_15__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_he0ad0558__1);
    VlCoroutine __VnoInFunc_read____Vfork_16__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_h2710e2eb__1);
  public:
    VlCoroutine __VnoInFunc_write(Vahb_slave__Syms* __restrict vlSymsp, SData/*9:0*/ addr, IData/*31:0*/ data);
  private:
    VlCoroutine __VnoInFunc_write____Vfork_1__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_he0a827e4__0);
    VlCoroutine __VnoInFunc_write____Vfork_2__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h864916b4__0);
    VlCoroutine __VnoInFunc_write____Vfork_3__1(Vahb_slave__Syms* __restrict vlSymsp, SData/*9:0*/ __Vintraval_hdfb61adc__0);
    VlCoroutine __VnoInFunc_write____Vfork_4__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_h2710c310__0);
    VlCoroutine __VnoInFunc_write____Vfork_5__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h3b6af04e__0);
    VlCoroutine __VnoInFunc_write____Vfork_6__1(Vahb_slave__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h9972aaad__0);
    VlCoroutine __VnoInFunc_write____Vfork_7__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_he0ad0558__0);
    VlCoroutine __VnoInFunc_write____Vfork_8__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*0:0*/ __Vintraval_h864a16a8__0);
    VlCoroutine __VnoInFunc_write____Vfork_9__1(Vahb_slave__Syms* __restrict vlSymsp, CData/*1:0*/ __Vintraval_h2710e2eb__0);
    void _ctor_var_reset(Vahb_slave__Syms* __restrict vlSymsp);
  public:
    Vahb_slave_ahb_pkg__03a__03aahb_driver(Vahb_slave__Syms* __restrict vlSymsp, Vahb_slave_ahb_if* intf);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vahb_slave_ahb_pkg__03a__03aahb_driver();
};

std::string VL_TO_STRING(const VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_driver>& obj);

#endif  // guard
