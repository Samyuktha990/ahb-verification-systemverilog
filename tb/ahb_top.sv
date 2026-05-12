`timescale 1ns/1ps

module ahb_top;

  ahb_if intf();

  // DUT
  ahb_s1 dut(
    .hsel(intf.hsel),
    .hwrite(intf.hwrite),
    .hready(intf.hready),
    .hrst(intf.hrst),
    .hclk(intf.hclk),
    .hwdata(intf.hwdata),
    .haddr(intf.haddr),
    .hburst(intf.hburst),
    .hsize(intf.hsize),
    .htrans(intf.htrans),
    .hreadyout(intf.hreadyout),
    .hresp(intf.hresp),
    .hrdata(intf.hrdata)
  );

  // TEST
  ahb_test test(intf);

  // CLOCK
  initial begin
    intf.hclk = 0;
    forever #5 intf.hclk = ~intf.hclk;
  end

  // RESET
  initial begin
    intf.hrst = 0;

    intf.hsel   = 0;
    intf.hwrite = 0;
    intf.haddr  = 0;
    intf.hwdata = 0;
    intf.htrans = 0;
    intf.hready = 1;

    #20;
    intf.hrst = 1;
  end

endmodule