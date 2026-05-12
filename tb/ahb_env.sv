`timescale 1ns/1ps

class ahb_env;

  ahb_driver     drv;
  ahb_monitor    mon;
  ahb_scoreboard sb;

  mailbox #(ahb_seq_item) mon2sb;

  virtual ahb_if intf;

  function new(virtual ahb_if intf);
    this.intf = intf;

    mon2sb = new();

    drv = new(intf);
    mon = new(intf, mon2sb);
    sb  = new(mon2sb);
  endfunction

  task run();

    fork
      mon.run();
      sb.run();
    join_none

  endtask

endclass