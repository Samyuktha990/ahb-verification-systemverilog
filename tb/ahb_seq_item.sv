`timescale 1ns/1ps

class ahb_seq_item;

  rand bit [9:0]  haddr;
  rand bit        hwrite;
  rand bit [31:0] hwdata;

  bit [31:0] hrdata;

endclass