// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vahb_slave.h for the primary calling header

#ifndef VERILATED_VAHB_SLAVE_AHB_PKG__03A__03AAHB_SCOREBOARD__VCLPKG_H_
#define VERILATED_VAHB_SLAVE_AHB_PKG__03A__03AAHB_SCOREBOARD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vahb_slave_ahb_pkg__03a__03aahb_seq_item;
class Vahb_slave_std__03a__03amailbox__Tz1;


class Vahb_slave__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vahb_slave__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg(Vahb_slave__Syms* symsp, const char* v__name);
    ~Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg();
    VL_UNCOPYABLE(Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vahb_slave__Syms;

class Vahb_slave_ahb_pkg__03a__03aahb_scoreboard : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__pass_count;
    IData/*31:0*/ __PVT__fail_count;
    IData/*31:0*/ __PVT__write_count;
    IData/*31:0*/ __PVT__read_count;
    VlUnpacked<IData/*31:0*/, 1024> __PVT__mem_model;
    VlClassRef<Vahb_slave_std__03a__03amailbox__Tz1> __PVT__mon2sb;
    void __VnoInFunc_report(Vahb_slave__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_run(Vahb_slave__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vahb_slave__Syms* __restrict vlSymsp);
  public:
    Vahb_slave_ahb_pkg__03a__03aahb_scoreboard(Vahb_slave__Syms* __restrict vlSymsp, VlClassRef<Vahb_slave_std__03a__03amailbox__Tz1> mon2sb);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vahb_slave_ahb_pkg__03a__03aahb_scoreboard();
};

std::string VL_TO_STRING(const VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_scoreboard>& obj);

#endif  // guard
