// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vahb_slave.h for the primary calling header

#ifndef VERILATED_VAHB_SLAVE_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VAHB_SLAVE_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vahb_slave__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vahb_slave_std__03a__03asemaphore__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vahb_slave__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vahb_slave_std__03a__03asemaphore__Vclpkg(Vahb_slave__Syms* symsp, const char* v__name);
    ~Vahb_slave_std__03a__03asemaphore__Vclpkg();
    VL_UNCOPYABLE(Vahb_slave_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vahb_slave__Syms;

class Vahb_slave_std__03a__03asemaphore : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    VlCoroutine __VnoInFunc_get(Vahb_slave__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(Vahb_slave__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(Vahb_slave__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(Vahb_slave__Syms* __restrict vlSymsp);
  public:
    Vahb_slave_std__03a__03asemaphore(Vahb_slave__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vahb_slave_std__03a__03asemaphore();
};

std::string VL_TO_STRING(const VlClassRef<Vahb_slave_std__03a__03asemaphore>& obj);

#endif  // guard
