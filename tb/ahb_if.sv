`timescale 1ns/1ps

interface ahb_if();

  logic hclk;
  logic hrst;

  logic hsel;
  logic hwrite;
  logic hready;

  logic [9:0]  haddr;
  logic [31:0] hwdata;
  logic [31:0] hrdata;

  logic [1:0] htrans;
  logic [2:0] hburst;
  logic [2:0] hsize;

  logic hreadyout;
  logic hresp;

endinterface