// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vahb_slave__pch.h"
#include "Vahb_slave.h"
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

// FUNCTIONS
Vahb_slave__Syms::~Vahb_slave__Syms()
{
}

Vahb_slave__Syms::Vahb_slave__Syms(VerilatedContext* contextp, const char* namep, Vahb_slave* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__ahb_pkg{this, Verilated::catName(namep, "ahb_pkg")}
    , TOP__ahb_top__DOT__intf{this, Verilated::catName(namep, "ahb_top.intf")}
    , TOP__std{this, Verilated::catName(namep, "std")}
    , TOP__ahb_pkg__03a__03aahb_driver__Vclpkg{this, Verilated::catName(namep, "ahb_pkg::ahb_driver__Vclpkg")}
    , TOP__ahb_pkg__03a__03aahb_env__Vclpkg{this, Verilated::catName(namep, "ahb_pkg::ahb_env__Vclpkg")}
    , TOP__ahb_pkg__03a__03aahb_gen__Vclpkg{this, Verilated::catName(namep, "ahb_pkg::ahb_gen__Vclpkg")}
    , TOP__ahb_pkg__03a__03aahb_monitor__Vclpkg{this, Verilated::catName(namep, "ahb_pkg::ahb_monitor__Vclpkg")}
    , TOP__ahb_pkg__03a__03aahb_scoreboard__Vclpkg{this, Verilated::catName(namep, "ahb_pkg::ahb_scoreboard__Vclpkg")}
    , TOP__ahb_pkg__03a__03aahb_seq_item__Vclpkg{this, Verilated::catName(namep, "ahb_pkg::ahb_seq_item__Vclpkg")}
    , TOP__std__03a__03amailbox__Tz1__Vclpkg{this, Verilated::catName(namep, "std::mailbox__Tz1__Vclpkg")}
    , TOP__std__03a__03aprocess__Vclpkg{this, Verilated::catName(namep, "std::process__Vclpkg")}
    , TOP__std__03a__03asemaphore__Vclpkg{this, Verilated::catName(namep, "std::semaphore__Vclpkg")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__ahb_pkg = &TOP__ahb_pkg;
    TOP.__PVT__ahb_top__DOT__intf = &TOP__ahb_top__DOT__intf;
    TOP.__PVT__std = &TOP__std;
    TOP.ahb_pkg__03a__03aahb_driver__Vclpkg = &TOP__ahb_pkg__03a__03aahb_driver__Vclpkg;
    TOP.ahb_pkg__03a__03aahb_env__Vclpkg = &TOP__ahb_pkg__03a__03aahb_env__Vclpkg;
    TOP.ahb_pkg__03a__03aahb_gen__Vclpkg = &TOP__ahb_pkg__03a__03aahb_gen__Vclpkg;
    TOP.ahb_pkg__03a__03aahb_monitor__Vclpkg = &TOP__ahb_pkg__03a__03aahb_monitor__Vclpkg;
    TOP.ahb_pkg__03a__03aahb_scoreboard__Vclpkg = &TOP__ahb_pkg__03a__03aahb_scoreboard__Vclpkg;
    TOP.ahb_pkg__03a__03aahb_seq_item__Vclpkg = &TOP__ahb_pkg__03a__03aahb_seq_item__Vclpkg;
    TOP.std__03a__03amailbox__Tz1__Vclpkg = &TOP__std__03a__03amailbox__Tz1__Vclpkg;
    TOP.std__03a__03aprocess__Vclpkg = &TOP__std__03a__03aprocess__Vclpkg;
    TOP.std__03a__03asemaphore__Vclpkg = &TOP__std__03a__03asemaphore__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__ahb_pkg.__Vconfigure(true);
    TOP__ahb_top__DOT__intf.__Vconfigure(true);
    TOP__std.__Vconfigure(true);
    TOP__ahb_pkg__03a__03aahb_driver__Vclpkg.__Vconfigure(true);
    TOP__ahb_pkg__03a__03aahb_env__Vclpkg.__Vconfigure(true);
    TOP__ahb_pkg__03a__03aahb_gen__Vclpkg.__Vconfigure(true);
    TOP__ahb_pkg__03a__03aahb_monitor__Vclpkg.__Vconfigure(true);
    TOP__ahb_pkg__03a__03aahb_scoreboard__Vclpkg.__Vconfigure(true);
    TOP__ahb_pkg__03a__03aahb_seq_item__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03amailbox__Tz1__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03aprocess__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03asemaphore__Vclpkg.__Vconfigure(true);
    // Setup scopes
    __Vscope_std__process.configure(this, name(), "std.process", "process", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_std__process__suspend.configure(this, name(), "std.process.suspend", "suspend", -9, VerilatedScope::SCOPE_OTHER);
}
