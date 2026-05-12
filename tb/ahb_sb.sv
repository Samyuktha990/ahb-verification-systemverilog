`timescale 1ns/1ps

class ahb_scoreboard;

  mailbox #(ahb_seq_item) mon2sb;

  parameter DEPTH = 1024;

  bit [31:0] mem_model [0:DEPTH-1];

  int pass_count;
  int fail_count;
  int write_count;
  int read_count;

  function new(mailbox #(ahb_seq_item) mon2sb);

    this.mon2sb = mon2sb;

    pass_count  = 0;
    fail_count  = 0;
    write_count = 0;
    read_count  = 0;

  endfunction


  task run();

    ahb_seq_item pkt;

    forever begin

      mon2sb.get(pkt);

      // ADDRESS SAFETY CHECK
      if(pkt.haddr >= DEPTH) begin

        $display("[SB] ERROR: Invalid Address = %0h",
                  pkt.haddr);

        continue;

      end


      // WRITE TRANSACTION
      if(pkt.hwrite) begin

        mem_model[pkt.haddr] = pkt.hwdata;

        write_count++;

        $display("[SB] WRITE | Addr=%0h Data=%0h",
                  pkt.haddr,
                  pkt.hwdata);

      end


      // READ TRANSACTION
      else begin

        read_count++;

        if(mem_model[pkt.haddr] == pkt.hrdata) begin

          pass_count++;

          $display("[SB] PASS  | Addr=%0h Exp=%0h Act=%0h",
                    pkt.haddr,
                    mem_model[pkt.haddr],
                    pkt.hrdata);

        end

        else begin

          fail_count++;

          $display("[SB] FAIL  | Addr=%0h Exp=%0h Act=%0h",
                    pkt.haddr,
                    mem_model[pkt.haddr],
                    pkt.hrdata);

        end

      end

    end

  endtask


  task report();

    $display("\n-----------------------------------");
    $display("        SCOREBOARD REPORT");
    $display("-----------------------------------");

    $display("Writes      = %0d", write_count);
    $display("Reads       = %0d", read_count);
    $display("PASS Count  = %0d", pass_count);
    $display("FAIL Count  = %0d", fail_count);

    if(fail_count == 0)
      $display("STATUS      = TEST PASSED");
    else
      $display("STATUS      = TEST FAILED");

    $display("-----------------------------------\n");

  endtask

endclass