// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vahb_slave.h for the primary calling header

#ifndef VERILATED_VAHB_SLAVE_AHB_PKG__03A__03AAHB_ENV__VCLPKG_H_
#define VERILATED_VAHB_SLAVE_AHB_PKG__03A__03AAHB_ENV__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vahb_slave_ahb_pkg__03a__03aahb_driver;
class Vahb_slave_ahb_pkg__03a__03aahb_monitor;
class Vahb_slave_ahb_pkg__03a__03aahb_scoreboard;
class Vahb_slave_std__03a__03amailbox__Tz1;


class Vahb_slave__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vahb_slave__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg(Vahb_slave__Syms* symsp, const char* v__name);
    ~Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg();
    VL_UNCOPYABLE(Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vahb_slave__Syms;

class Vahb_slave_ahb_pkg__03a__03aahb_env : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    Vahb_slave_ahb_if* __PVT__intf;
    VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_driver> __PVT__drv;
    VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_monitor> __PVT__mon;
    VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_scoreboard> __PVT__sb;
    VlClassRef<Vahb_slave_std__03a__03amailbox__Tz1> __PVT__mon2sb;
    void __VnoInFunc_run(Vahb_slave__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_run____Vfork_1__0(Vahb_slave__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_run____Vfork_1__1(Vahb_slave__Syms* __restrict vlSymsp);
    void _ctor_var_reset(Vahb_slave__Syms* __restrict vlSymsp);
  public:
    Vahb_slave_ahb_pkg__03a__03aahb_env(Vahb_slave__Syms* __restrict vlSymsp, Vahb_slave_ahb_if* intf);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vahb_slave_ahb_pkg__03a__03aahb_env();
};

std::string VL_TO_STRING(const VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_env>& obj);

#endif  // guard
