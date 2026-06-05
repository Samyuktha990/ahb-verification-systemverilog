# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vahb_slave.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vahb_slave \
	Vahb_slave___024root__DepSet_h51fa338a__0 \
	Vahb_slave___024root__DepSet_h2c4708c5__0 \
	Vahb_slave___024root__DepSet_hb7f35494__0 \
	Vahb_slave_ahb_if__DepSet_ha3faac9a__0 \
	Vahb_slave_std__03a__03asemaphore__Vclpkg__DepSet_h0043f488__0 \
	Vahb_slave_std__03a__03asemaphore__Vclpkg__DepSet_h697b9792__0 \
	Vahb_slave_std__03a__03aprocess__Vclpkg__DepSet_h338e8cd0__0 \
	Vahb_slave_std__03a__03aprocess__Vclpkg__DepSet_h963e9f6a__0 \
	Vahb_slave_std__03a__03amailbox__Tz1__Vclpkg__DepSet_h463b8243__0 \
	Vahb_slave_std__03a__03amailbox__Tz1__Vclpkg__DepSet_habb3a5db__0 \
	Vahb_slave_ahb_pkg__03a__03aahb_seq_item__Vclpkg__DepSet_hc758fa18__0 \
	Vahb_slave_ahb_pkg__03a__03aahb_seq_item__Vclpkg__DepSet_h2a908e22__0 \
	Vahb_slave_ahb_pkg__03a__03aahb_gen__Vclpkg__DepSet_h273cc5b2__0 \
	Vahb_slave_ahb_pkg__03a__03aahb_gen__Vclpkg__DepSet_hc4f466f6__0 \
	Vahb_slave_ahb_pkg__03a__03aahb_gen__Vclpkg__DepSet_h8aac66cc__0 \
	Vahb_slave_ahb_pkg__03a__03aahb_driver__Vclpkg__DepSet_ha30246cd__0 \
	Vahb_slave_ahb_pkg__03a__03aahb_driver__Vclpkg__DepSet_h06bae94d__0 \
	Vahb_slave_ahb_pkg__03a__03aahb_monitor__Vclpkg__DepSet_he3352364__0 \
	Vahb_slave_ahb_pkg__03a__03aahb_monitor__Vclpkg__DepSet_h16e83c5d__0 \
	Vahb_slave_ahb_pkg__03a__03aahb_monitor__Vclpkg__DepSet_h46a644f6__0 \
	Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg__DepSet_h5eae2f70__0 \
	Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg__DepSet_hc31f410a__0 \
	Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg__DepSet_h118df838__0 \
	Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg__DepSet_h5d444b23__0 \
	Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg__DepSet_h3a07ef1b__0 \
	Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg__DepSet_h9fb78123__0 \
	Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg__DepSet_hc3c3ecdd__0 \
	Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg__DepSet_h475aeb31__0 \
	Vahb_slave__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vahb_slave___024root__Slow \
	Vahb_slave___024root__DepSet_h51fa338a__0__Slow \
	Vahb_slave___024root__DepSet_hb7f35494__0__Slow \
	Vahb_slave___024unit__Slow \
	Vahb_slave___024unit__DepSet_h9d45a2bd__0__Slow \
	Vahb_slave_std__Slow \
	Vahb_slave_std__DepSet_h2153a847__0__Slow \
	Vahb_slave_ahb_pkg__Slow \
	Vahb_slave_ahb_pkg__DepSet_h97b624f5__0__Slow \
	Vahb_slave_ahb_if__Slow \
	Vahb_slave_ahb_if__DepSet_ha3faac9a__0__Slow \
	Vahb_slave_std__03a__03asemaphore__Vclpkg__Slow \
	Vahb_slave_std__03a__03asemaphore__Vclpkg__DepSet_h697b9792__0__Slow \
	Vahb_slave_std__03a__03aprocess__Vclpkg__Slow \
	Vahb_slave_std__03a__03aprocess__Vclpkg__DepSet_h963e9f6a__0__Slow \
	Vahb_slave_std__03a__03amailbox__Tz1__Vclpkg__Slow \
	Vahb_slave_std__03a__03amailbox__Tz1__Vclpkg__DepSet_habb3a5db__0__Slow \
	Vahb_slave_ahb_pkg__03a__03aahb_seq_item__Vclpkg__Slow \
	Vahb_slave_ahb_pkg__03a__03aahb_seq_item__Vclpkg__DepSet_h2a908e22__0__Slow \
	Vahb_slave_ahb_pkg__03a__03aahb_gen__Vclpkg__Slow \
	Vahb_slave_ahb_pkg__03a__03aahb_gen__Vclpkg__DepSet_h8aac66cc__0__Slow \
	Vahb_slave_ahb_pkg__03a__03aahb_driver__Vclpkg__Slow \
	Vahb_slave_ahb_pkg__03a__03aahb_driver__Vclpkg__DepSet_h06bae94d__0__Slow \
	Vahb_slave_ahb_pkg__03a__03aahb_monitor__Vclpkg__Slow \
	Vahb_slave_ahb_pkg__03a__03aahb_monitor__Vclpkg__DepSet_h46a644f6__0__Slow \
	Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg__Slow \
	Vahb_slave_ahb_pkg__03a__03aahb_scoreboard__Vclpkg__DepSet_hc31f410a__0__Slow \
	Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg__Slow \
	Vahb_slave_ahb_pkg__03a__03aahb_env__Vclpkg__DepSet_h9fb78123__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vahb_slave__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
