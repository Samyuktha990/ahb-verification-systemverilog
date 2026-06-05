// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vahb_slave.h for the primary calling header

#ifndef VERILATED_VAHB_SLAVE_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_
#define VERILATED_VAHB_SLAVE_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vahb_slave_ahb_pkg__03a__03aahb_seq_item;


class Vahb_slave__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vahb_slave_std__03a__03amailbox__Tz1__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vahb_slave__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vahb_slave_std__03a__03amailbox__Tz1__Vclpkg(Vahb_slave__Syms* symsp, const char* v__name);
    ~Vahb_slave_std__03a__03amailbox__Tz1__Vclpkg();
    VL_UNCOPYABLE(Vahb_slave_std__03a__03amailbox__Tz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vahb_slave__Syms;

class Vahb_slave_std__03a__03amailbox__Tz1 : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_seq_item>> __PVT__m_queue;
    VlCoroutine __VnoInFunc_get(Vahb_slave__Syms* __restrict vlSymsp, VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_seq_item> &message);
    void __VnoInFunc_num(Vahb_slave__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vahb_slave__Syms* __restrict vlSymsp, VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_seq_item> &message);
    VlCoroutine __VnoInFunc_put(Vahb_slave__Syms* __restrict vlSymsp, VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_seq_item> message);
    void __VnoInFunc_try_get(Vahb_slave__Syms* __restrict vlSymsp, VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_seq_item> &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vahb_slave__Syms* __restrict vlSymsp, VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_seq_item> &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Vahb_slave__Syms* __restrict vlSymsp, VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_seq_item> message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vahb_slave__Syms* __restrict vlSymsp);
  public:
    Vahb_slave_std__03a__03amailbox__Tz1(Vahb_slave__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vahb_slave_std__03a__03amailbox__Tz1();
};

std::string VL_TO_STRING(const VlClassRef<Vahb_slave_std__03a__03amailbox__Tz1>& obj);

#endif  // guard
