// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vahb_slave.h for the primary calling header

#ifndef VERILATED_VAHB_SLAVE_STD_H_
#define VERILATED_VAHB_SLAVE_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vahb_slave__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vahb_slave_std final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vahb_slave__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vahb_slave_std(Vahb_slave__Syms* symsp, const char* v__name);
    ~Vahb_slave_std();
    VL_UNCOPYABLE(Vahb_slave_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
