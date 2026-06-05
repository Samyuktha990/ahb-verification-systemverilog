// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAHB_SLAVE__SYMS_H_
#define VERILATED_VAHB_SLAVE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vahb_slave.h"

// INCLUDE MODULE CLASSES
#include "Vahb_slave___024root.h"
#include "Vahb_slave___024unit.h"
#include "Vahb_slave_std.h"
#include "Vahb_slave_ahb_pkg.h"
#include "Vahb_slave_ahb_if.h"
#include "Vahb_slave_std__03a__03asemaphore__Vclpkg.h"
#include "Vahb_slave_std__03a__03aprocess__Vclpkg.h"
#include "Vahb_slave_std__03a__03amailbox__Tz1__Vclpkg.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_seq_item__Vclpkg.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_gen__Vclpkg.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_driver__Vclpkg.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_monitor__Vclpkg.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg.h"
#include "Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vahb_slave__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vahb_slave* const __Vm_modelp;
    std::vector<VlEvent*> __Vm_triggeredEvents;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vahb_slave___024root           TOP;
    Vahb_slave_ahb_pkg             TOP__ahb_pkg;
    Vahb_slave_ahb_if              TOP__ahb_top__DOT__intf;
    Vahb_slave_std                 TOP__std;
    Vahb_slave_ahb_pkg__03a__03aahb_driver__Vclpkg TOP__ahb_pkg__03a__03aahb_driver__Vclpkg;
    Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg TOP__ahb_pkg__03a__03aahb_env__Vclpkg;
    Vahb_slave_ahb_pkg__03a__03aahb_gen__Vclpkg TOP__ahb_pkg__03a__03aahb_gen__Vclpkg;
    Vahb_slave_ahb_pkg__03a__03aahb_monitor__Vclpkg TOP__ahb_pkg__03a__03aahb_monitor__Vclpkg;
    Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg TOP__ahb_pkg__03a__03aahb_scoreboard__Vclpkg;
    Vahb_slave_ahb_pkg__03a__03aahb_seq_item__Vclpkg TOP__ahb_pkg__03a__03aahb_seq_item__Vclpkg;
    Vahb_slave_std__03a__03amailbox__Tz1__Vclpkg TOP__std__03a__03amailbox__Tz1__Vclpkg;
    Vahb_slave_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    Vahb_slave_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;

    // SCOPE NAMES
    VerilatedScope __Vscope_std__process;
    VerilatedScope __Vscope_std__process__suspend;

    // CONSTRUCTORS
    Vahb_slave__Syms(VerilatedContext* contextp, const char* namep, Vahb_slave* modelp);
    ~Vahb_slave__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void enqueueTriggeredEventForClearing(VlEvent& event) {
#ifdef VL_DEBUG
        if (VL_UNLIKELY(!event.isTriggered())) {
            VL_FATAL_MT(__FILE__, __LINE__, __FILE__, "event passed to 'enqueueTriggeredEventForClearing' was not triggered");
        }
#endif
        __Vm_triggeredEvents.push_back(&event);
    }
    void clearTriggeredEvents() {
        for (const auto eventp : __Vm_triggeredEvents) eventp->clearTriggered();
        __Vm_triggeredEvents.clear();
    }
};

#endif  // guard
