`timescale 1ns/1ps

module ahb_test(ahb_if intf);

  import ahb_pkg::*;

  ahb_env env;

  initial begin

    env = new(intf);

    $display("[TEST] Starting AHB Test");

    env.run();

    repeat (8) begin

      bit [9:0] addr;
      bit [31:0] data;

      addr = $urandom_range(0,1023);
      data = $random;

      env.drv.write(addr, data);
      env.drv.read(addr);

    end

    #100;
    env.sb.report();
    $finish;

  end

endmodule