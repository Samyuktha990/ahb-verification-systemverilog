// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vahb_slave.h for the primary calling header

#ifndef VERILATED_VAHB_SLAVE___024UNIT_H_
#define VERILATED_VAHB_SLAVE___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vahb_slave__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vahb_slave___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vahb_slave__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vahb_slave___024unit(Vahb_slave__Syms* symsp, const char* v__name);
    ~Vahb_slave___024unit();
    VL_UNCOPYABLE(Vahb_slave___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
