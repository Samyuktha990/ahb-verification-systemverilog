vlib work

vlog rtl/ahb_s1.sv

vlog tb/ahb_if.sv
vlog tb/ahb_pkg.sv
vlog tb/ahb_test.sv
vlog tb/ahb_top.sv

vsim ahb_top

add wave sim:/ahb_top/intf/*

run -all