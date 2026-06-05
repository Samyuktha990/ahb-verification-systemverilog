// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vahb_slave.h for the primary calling header

#ifndef VERILATED_VAHB_SLAVE_AHB_IF_H_
#define VERILATED_VAHB_SLAVE_AHB_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vahb_slave__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vahb_slave_ahb_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ hclk;
    CData/*0:0*/ hrst;
    CData/*0:0*/ hsel;
    CData/*0:0*/ hwrite;
    CData/*0:0*/ hready;
    CData/*1:0*/ htrans;
    SData/*9:0*/ haddr;
    IData/*31:0*/ hwdata;
    IData/*31:0*/ hrdata;

    // INTERNAL VARIABLES
    Vahb_slave__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vahb_slave_ahb_if(Vahb_slave__Syms* symsp, const char* v__name);
    ~Vahb_slave_ahb_if();
    VL_UNCOPYABLE(Vahb_slave_ahb_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vahb_slave_ahb_if* obj);

#endif  // guard
