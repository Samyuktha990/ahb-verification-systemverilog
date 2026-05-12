`timescale 1ns/1ps

class ahb_monitor;

  virtual ahb_if intf;

  mailbox #(ahb_seq_item) mon2sb;

  function new(virtual ahb_if intf,
               mailbox #(ahb_seq_item) mon2sb);

    this.intf   = intf;
    this.mon2sb = mon2sb;

  endfunction

  task run();

    ahb_seq_item pkt;

    forever begin

      @(posedge intf.hclk);

      if(intf.hsel && intf.hready && intf.htrans[1]) begin

        pkt = new();

        pkt.haddr  = intf.haddr;
        pkt.hwrite = intf.hwrite;

        @(posedge intf.hclk);

        if(pkt.hwrite)
          pkt.hwdata = intf.hwdata;
        else begin
          #1;
          pkt.hrdata = intf.hrdata;
        end

        mon2sb.put(pkt);

        //$display("[MON] Captured addr=%0h write=%0b",
                  //pkt.haddr, pkt.hwrite);

      end

    end

  endtask

endclass