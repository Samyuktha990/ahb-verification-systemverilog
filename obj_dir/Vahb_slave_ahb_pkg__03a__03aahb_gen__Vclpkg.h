// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vahb_slave.h for the primary calling header

#ifndef VERILATED_VAHB_SLAVE_AHB_PKG__03A__03AAHB_GEN__VCLPKG_H_
#define VERILATED_VAHB_SLAVE_AHB_PKG__03A__03AAHB_GEN__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vahb_slave_ahb_pkg__03a__03aahb_seq_item;
class Vahb_slave_std__03a__03amailbox__Tz1;


class Vahb_slave__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vahb_slave_ahb_pkg__03a__03aahb_gen__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vahb_slave__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vahb_slave_ahb_pkg__03a__03aahb_gen__Vclpkg(Vahb_slave__Syms* symsp, const char* v__name);
    ~Vahb_slave_ahb_pkg__03a__03aahb_gen__Vclpkg();
    VL_UNCOPYABLE(Vahb_slave_ahb_pkg__03a__03aahb_gen__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vahb_slave__Syms;

class Vahb_slave_ahb_pkg__03a__03aahb_gen : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__loop_count;
    VlEvent __PVT__ended;
    VlClassRef<Vahb_slave_std__03a__03amailbox__Tz1> __PVT__gen2drv;
    VlCoroutine __VnoInFunc_run(Vahb_slave__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vahb_slave__Syms* __restrict vlSymsp);
  public:
    Vahb_slave_ahb_pkg__03a__03aahb_gen(Vahb_slave__Syms* __restrict vlSymsp, VlClassRef<Vahb_slave_std__03a__03amailbox__Tz1> gen2drv);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vahb_slave_ahb_pkg__03a__03aahb_gen();
};

std::string VL_TO_STRING(const VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_gen>& obj);

#endif  // guard
