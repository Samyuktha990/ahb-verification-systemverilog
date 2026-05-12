`timescale 1ns/1ps

class ahb_driver;

  virtual ahb_if intf;

  function new(virtual ahb_if intf);
    this.intf = intf;
  endfunction

  task write(bit [9:0] addr,
             bit [31:0] data);

    @(posedge intf.hclk);

    intf.hsel   <= 1;
    intf.hwrite <= 1;
    intf.haddr  <= addr;
    intf.htrans <= 2'b10;
    intf.hready <= 1;

    @(posedge intf.hclk);

    intf.hwdata <= data;

    @(posedge intf.hclk);

    intf.hsel   <= 0;
    intf.hwrite <= 0;
    intf.htrans <= 0;

  endtask

  task read(bit [9:0] addr);

    @(posedge intf.hclk);

    intf.hsel   <= 1;
    intf.hwrite <= 0;
    intf.haddr  <= addr;
    intf.htrans <= 2'b10;
    intf.hready <= 1;

    @(posedge intf.hclk);

    @(posedge intf.hclk);

    intf.hsel   <= 0;
    intf.htrans <= 0;

  endtask

endclass