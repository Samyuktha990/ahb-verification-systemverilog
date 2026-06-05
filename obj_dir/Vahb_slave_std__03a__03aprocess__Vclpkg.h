// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vahb_slave.h for the primary calling header

#ifndef VERILATED_VAHB_SLAVE_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VAHB_SLAVE_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vahb_slave_std__03a__03aprocess;


class Vahb_slave__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vahb_slave_std__03a__03aprocess__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vahb_slave__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vahb_slave_std__03a__03aprocess__Vclpkg(Vahb_slave__Syms* symsp, const char* v__name);
    ~Vahb_slave_std__03a__03aprocess__Vclpkg();
    VL_UNCOPYABLE(Vahb_slave_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_self(VlProcessRef vlProcess, Vahb_slave__Syms* __restrict vlSymsp, VlClassRef<Vahb_slave_std__03a__03aprocess> &self__Vfuncrtn);
};


class Vahb_slave__Syms;

class Vahb_slave_std__03a__03aprocess : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef __PVT__m_process;
    VlCoroutine __VnoInFunc_await(Vahb_slave__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(Vahb_slave__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(Vahb_slave__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(Vahb_slave__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(Vahb_slave__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(Vahb_slave__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_status(Vahb_slave__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(Vahb_slave__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vahb_slave__Syms* __restrict vlSymsp);
  public:
    Vahb_slave_std__03a__03aprocess(Vahb_slave__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vahb_slave_std__03a__03aprocess();
};

std::string VL_TO_STRING(const VlClassRef<Vahb_slave_std__03a__03aprocess>& obj);

#endif  // guard
