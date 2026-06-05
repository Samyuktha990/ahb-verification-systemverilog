// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vahb_slave.h for the primary calling header

#ifndef VERILATED_VAHB_SLAVE_AHB_PKG__03A__03AAHB_SEQ_ITEM__VCLPKG_H_
#define VERILATED_VAHB_SLAVE_AHB_PKG__03A__03AAHB_SEQ_ITEM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vahb_slave__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vahb_slave_ahb_pkg__03a__03aahb_seq_item__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vahb_slave__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vahb_slave_ahb_pkg__03a__03aahb_seq_item__Vclpkg(Vahb_slave__Syms* symsp, const char* v__name);
    ~Vahb_slave_ahb_pkg__03a__03aahb_seq_item__Vclpkg();
    VL_UNCOPYABLE(Vahb_slave_ahb_pkg__03a__03aahb_seq_item__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vahb_slave__Syms;

class Vahb_slave_ahb_pkg__03a__03aahb_seq_item : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__hwrite;
    SData/*9:0*/ __PVT__haddr;
    IData/*31:0*/ __PVT__hwdata;
    IData/*31:0*/ __PVT__hrdata;
  private:
    void _ctor_var_reset(Vahb_slave__Syms* __restrict vlSymsp);
  public:
    Vahb_slave_ahb_pkg__03a__03aahb_seq_item(Vahb_slave__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vahb_slave_ahb_pkg__03a__03aahb_seq_item();
};

std::string VL_TO_STRING(const VlClassRef<Vahb_slave_ahb_pkg__03a__03aahb_seq_item>& obj);

#endif  // guard
