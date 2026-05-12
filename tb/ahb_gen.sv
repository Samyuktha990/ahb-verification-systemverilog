class ahb_gen;
  // This class replaces the UVM sequence/sequencer
  mailbox #(ahb_seq_item) gen2drv;
  event ended;
  int loop_count = 10; // The variable the test is looking for

  function new(mailbox #(ahb_seq_item) gen2drv);
    this.gen2drv = gen2drv;
  endfunction

  task run();

  ahb_seq_item pkt;
  logic [9:0] addr;
  logic [31:0] data;

  repeat(loop_count) begin

    addr = $urandom_range(0,1023);
    data = $urandom;

    // WRITE
    pkt = new();

    pkt.haddr  = addr;
    pkt.hwdata = data;
    pkt.hwrite = 1;

    gen2drv.put(pkt);

    // READ SAME ADDRESS
    pkt = new();

    pkt.haddr  = addr;
    pkt.hwrite = 0;

    gen2drv.put(pkt);

  end

  ->ended;

endtask
endclass