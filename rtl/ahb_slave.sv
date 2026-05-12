`timescale 1ns/1ps
module ahb_s1(

  input hsel,
  input hwrite,
  input hready,
  input hrst,
  input hclk,

  input [31:0] hwdata,
  input [9:0]  haddr,
  input [2:0]  hburst,
  input [2:0]  hsize,
  input [1:0]  htrans,

  output reg hreadyout,
  output reg hresp,
  output reg [31:0] hrdata
);

  parameter DEPTH = 1024;

  reg [31:0] MemoryArray [0:DEPTH-1];

  reg [9:0]  addr_r;
  reg        write_r;
  reg        valid_r;
  reg [31:0] wdata_r;

  integer i;
  initial begin

    for(i=0;i<1024;i=i+1)
      MemoryArray[i] = 0;

    hrdata    = 0;
    hreadyout = 1;
    hresp     = 0;

  end

  always @(posedge hclk) begin

    if(!hrst) begin

      addr_r  <= 0;
      write_r <= 0;
      valid_r <= 0;
      wdata_r <= 0;

      hrdata <= 0;

    end

    else begin

      // ADDRESS PHASE
      addr_r  <= haddr;
      write_r <= hwrite;
      valid_r <= hsel && hready && htrans[1];
      wdata_r <= hwdata;

      // DATA PHASE
      if(valid_r) begin

        if(write_r) begin

          MemoryArray[addr_r] <= wdata_r;

          //$display("[DUT WRITE] addr=%0h data=%0h",
                    //addr_r,
                    //wdata_r);

        end

        else begin

          hrdata <= MemoryArray[addr_r];

          $display("[DUT READ ] addr=%0h data=%0h",
                    addr_r,
                    MemoryArray[addr_r]);

        end

      end

      hreadyout <= 1;
      hresp <= 0;

    end

  end

endmodule
