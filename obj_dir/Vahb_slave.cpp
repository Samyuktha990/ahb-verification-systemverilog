// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vahb_slave__pch.h"

//============================================================
// Constructors

Vahb_slave::Vahb_slave(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vahb_slave__Syms(contextp(), _vcname__, this)}
    , __PVT__std{vlSymsp->TOP.__PVT__std}
    , __PVT__ahb_pkg{vlSymsp->TOP.__PVT__ahb_pkg}
    , __PVT__ahb_top__DOT__intf{vlSymsp->TOP.__PVT__ahb_top__DOT__intf}
    , std__03a__03asemaphore__Vclpkg{vlSymsp->TOP.std__03a__03asemaphore__Vclpkg}
    , std__03a__03aprocess__Vclpkg{vlSymsp->TOP.std__03a__03aprocess__Vclpkg}
    , std__03a__03amailbox__Tz1__Vclpkg{vlSymsp->TOP.std__03a__03amailbox__Tz1__Vclpkg}
    , ahb_pkg__03a__03aahb_seq_item__Vclpkg{vlSymsp->TOP.ahb_pkg__03a__03aahb_seq_item__Vclpkg}
    , ahb_pkg__03a__03aahb_gen__Vclpkg{vlSymsp->TOP.ahb_pkg__03a__03aahb_gen__Vclpkg}
    , ahb_pkg__03a__03aahb_driver__Vclpkg{vlSymsp->TOP.ahb_pkg__03a__03aahb_driver__Vclpkg}
    , ahb_pkg__03a__03aahb_monitor__Vclpkg{vlSymsp->TOP.ahb_pkg__03a__03aahb_monitor__Vclpkg}
    , ahb_pkg__03a__03aahb_scoreboard__Vclpkg{vlSymsp->TOP.ahb_pkg__03a__03aahb_scoreboard__Vclpkg}
    , ahb_pkg__03a__03aahb_env__Vclpkg{vlSymsp->TOP.ahb_pkg__03a__03aahb_env__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vahb_slave::Vahb_slave(const char* _vcname__)
    : Vahb_slave(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vahb_slave::~Vahb_slave() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vahb_slave___024root___eval_debug_assertions(Vahb_slave___024root* vlSelf);
#endif  // VL_DEBUG
void Vahb_slave___024root___eval_static(Vahb_slave___024root* vlSelf);
void Vahb_slave___024root___eval_initial(Vahb_slave___024root* vlSelf);
void Vahb_slave___024root___eval_settle(Vahb_slave___024root* vlSelf);
void Vahb_slave___024root___eval(Vahb_slave___024root* vlSelf);

void Vahb_slave::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vahb_slave::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vahb_slave___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->clearTriggeredEvents();
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vahb_slave___024root___eval_static(&(vlSymsp->TOP));
        Vahb_slave___024root___eval_initial(&(vlSymsp->TOP));
        Vahb_slave___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vahb_slave___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vahb_slave::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vahb_slave::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vahb_slave::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vahb_slave___024root___eval_final(Vahb_slave___024root* vlSelf);

VL_ATTR_COLD void Vahb_slave::final() {
    Vahb_slave___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vahb_slave::hierName() const { return vlSymsp->name(); }
const char* Vahb_slave::modelName() const { return "Vahb_slave"; }
unsigned Vahb_slave::threads() const { return 1; }
void Vahb_slave::prepareClone() const { contextp()->prepareClone(); }
void Vahb_slave::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vahb_slave::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vahb_slave::trace()' called on model that was Verilated without --trace option");
}
