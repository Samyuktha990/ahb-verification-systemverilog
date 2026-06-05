// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vahb_slave.h for the primary calling header

#ifndef VERILATED_VAHB_SLAVE___024ROOT_H_
#define VERILATED_VAHB_SLAVE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vahb_slave_ahb_if;
class Vahb_slave_ahb_pkg;
class Vahb_slave_ahb_pkg__03a__03aahb_driver;
class Vahb_slave_ahb_pkg__03a__03aahb_driver__Vclpkg;
class Vahb_slave_ahb_pkg__03a__03aahb_env;
class Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg;
class Vahb_slave_ahb_pkg__03a__03aahb_gen__Vclpkg;
class Vahb_slave_ahb_pkg__03a__03aahb_monitor__Vclpkg;
class Vahb_slave_ahb_pkg__03a__03aahb_scoreboard;
class Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg;
class Vahb_slave_ahb_pkg__03a__03aahb_seq_item__Vclpkg;
class Vahb_slave_std;
class Vahb_slave_std__03a__03amailbox__Tz1__Vclpkg;
class Vahb_slave_std__03a__03aprocess__Vclpkg;
class Vahb_slave_std__03a__03asemaphore__Vclpkg;


class Vahb_slave__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vahb_slave___024root final : public VerilatedModule {
  public:
    // CELLS
    Vahb_slave_std* __PVT__std;
    Vahb_slave_ahb_pkg* __PVT__ahb_pkg;
    Vahb_slave_ahb_if* __PVT__ahb_top__DOT__intf;
    Vahb_slave_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    Vahb_slave_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;
    Vahb_slave_std__03a__03amailbox__Tz1__Vclpkg* std__03a__03amailbox__Tz1__Vclpkg;
    Vahb_slave_ahb_pkg__03a__03aahb_seq_item__Vclpkg* ahb_pkg__03a__03aahb_seq_item__Vclpkg;
    Vahb_slave_ahb_pkg__03a__03aahb_gen__Vclpkg* ahb_pkg__03a__03aahb_gen__Vclpkg;
    Vahb_slave_ahb_pkg__03a__03aahb_driver__Vclpkg* ahb_pkg__03a__03aahb_driver__Vclpkg;
    Vahb_slave_ahb_pkg__03a__03aahb_monitor__Vclpkg* ahb_pkg__03a__03aahb_monitor__Vclpkg;
    Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg* ahb_pkg__03a__03aahb_scoreboard__Vclpkg;
    Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg* ahb_pkg__03a__03aahb_env__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ ahb_top__DOT__dut__DOT__write_r;
    CData/*0:0*/ ahb_top__DOT__dut__DOT__valid_r;
    CData/*0:0*/ __VnbaEventTrigger;
    CData/*0:0*/ __VvifTrigger_h7eb1d4e8__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ahb_top__DOT__intf__hclk__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ ahb_top__DOT__dut__DOT__addr_r;
    IData/*31:0*/ ahb_top__DOT____Vcellout__dut__hrdata;
    IData/*31:0*/ ahb_top__DOT__dut__DOT__wdata_r;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> ahb_top__DOT__dut__DOT__MemoryArray;
    VlDelayScheduler __VdlySched;
    VlDynamicTriggerScheduler __VdynSched;
    VlEvent __VnbaEvent;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vahb_slave__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vahb_slave___024root(Vahb_slave__Syms* symsp, const char* v__name);
    ~Vahb_slave___024root();
    VL_UNCOPYABLE(Vahb_slave___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
