// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VAHB_SLAVE_H_
#define VERILATED_VAHB_SLAVE_H_  // guard

#include "verilated.h"

class Vahb_slave__Syms;
class Vahb_slave___024root;
class Vahb_slave_ahb_if;
class Vahb_slave_ahb_pkg;
class Vahb_slave_ahb_pkg__03a__03aahb_driver;
class Vahb_slave_ahb_pkg__03a__03aahb_driver__Vclpkg;
class Vahb_slave_ahb_pkg__03a__03aahb_env;
class Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg;
class Vahb_slave_ahb_pkg__03a__03aahb_gen__Vclpkg;
class Vahb_slave_ahb_pkg__03a__03aahb_monitor__Vclpkg;
class Vahb_slave_ahb_pkg__03a__03aahb_scoreboard;
class Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg;
class Vahb_slave_ahb_pkg__03a__03aahb_seq_item__Vclpkg;
class Vahb_slave_std;
class Vahb_slave_std__03a__03amailbox__Tz1__Vclpkg;
class Vahb_slave_std__03a__03aprocess__Vclpkg;
class Vahb_slave_std__03a__03asemaphore__Vclpkg;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vahb_slave VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vahb_slave__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vahb_slave_std* const __PVT__std;
    Vahb_slave_ahb_pkg* const __PVT__ahb_pkg;
    Vahb_slave_ahb_if* const __PVT__ahb_top__DOT__intf;
    Vahb_slave_std__03a__03asemaphore__Vclpkg* const std__03a__03asemaphore__Vclpkg;
    Vahb_slave_std__03a__03aprocess__Vclpkg* const std__03a__03aprocess__Vclpkg;
    Vahb_slave_std__03a__03amailbox__Tz1__Vclpkg* const std__03a__03amailbox__Tz1__Vclpkg;
    Vahb_slave_ahb_pkg__03a__03aahb_seq_item__Vclpkg* const ahb_pkg__03a__03aahb_seq_item__Vclpkg;
    Vahb_slave_ahb_pkg__03a__03aahb_gen__Vclpkg* const ahb_pkg__03a__03aahb_gen__Vclpkg;
    Vahb_slave_ahb_pkg__03a__03aahb_driver__Vclpkg* const ahb_pkg__03a__03aahb_driver__Vclpkg;
    Vahb_slave_ahb_pkg__03a__03aahb_monitor__Vclpkg* const ahb_pkg__03a__03aahb_monitor__Vclpkg;
    Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg* const ahb_pkg__03a__03aahb_scoreboard__Vclpkg;
    Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg* const ahb_pkg__03a__03aahb_env__Vclpkg;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vahb_slave___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vahb_slave(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vahb_slave(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vahb_slave();
  private:
    VL_UNCOPYABLE(Vahb_slave);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
};

#endif  // guard
