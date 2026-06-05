// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vahb_slave.h for the primary calling header

#ifndef VERILATED_VAHB_SLAVE_AHB_PKG__03A__03AAHB_MONITOR__VCLPKG_H_
#define VERILATED_VAHB_SLAVE_AHB_PKG__03A__03AAHB_MONITOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vahb_slave_ahb_pkg__03a__03aahb_seq_item;
class Vahb_slave_std__03a__03amailbox__Tz1;


class Vahb_slave__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vahb_slave_ahb_pkg__03a__03aahb_monitor__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vahb_slave__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vahb_slave_ahb_pkg__03a__03aahb_monitor__Vclpkg(Vahb_slave__Syms* symsp, const char* v__name);
    ~Vahb_slave_ahb_pkg__03a__03aahb_monitor__Vclpkg();
    VL_UNCOPYABLE(Vahb_slave_ahb_pkg__03a__03aahb_monitor__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vahb_slave__Syms;

class Vahb_slave_ahb_pkg__03a__03aahb_monitor : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    Vahb_slave_ahb_if* __PVT__intf;
    VlClassRef<Vahb_slave_std__03a__03amailbox__Tz1> __PVT__mon2sb;
    VlCoroutine __VnoInFunc_run(Vahb_slave__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vahb_slave__Syms* __restrict vlSymsp);
  public:
    Vahb_slave_ahb_pkg__03a__03aahb_monitor(Vahb_slave__Syms* __restrict vlSymsp, Vahb_slave_ahb_if* intf, VlClassRef<Vahb_slave_std__03a__03amailbox__Tz1> mon2sb);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vahb_slave_ahb_pkg__03a__03aahb_monitor();
};

std::string VL_TO_STRING(const VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_monitor>& obj);

#endif  // guard
