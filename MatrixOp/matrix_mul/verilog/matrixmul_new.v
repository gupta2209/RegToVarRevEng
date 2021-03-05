
module matrixmul
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_idle,
  ap_ready,
  mat1_address0,
  mat1_ce0,
  mat1_q0,
  mat2_address0,
  mat2_ce0,
  mat2_q0
);

  parameter ap_ST_fsm_state1 = 17'd1;
  parameter ap_ST_fsm_state2 = 17'd2;
  parameter ap_ST_fsm_state3 = 17'd4;
  parameter ap_ST_fsm_state4 = 17'd8;
  parameter ap_ST_fsm_state5 = 17'd16;
  parameter ap_ST_fsm_state6 = 17'd32;
  parameter ap_ST_fsm_state7 = 17'd64;
  parameter ap_ST_fsm_state8 = 17'd128;
  parameter ap_ST_fsm_state9 = 17'd256;
  parameter ap_ST_fsm_state10 = 17'd512;
  parameter ap_ST_fsm_state11 = 17'd1024;
  parameter ap_ST_fsm_state12 = 17'd2048;
  parameter ap_ST_fsm_state13 = 17'd4096;
  parameter ap_ST_fsm_state14 = 17'd8192;
  parameter ap_ST_fsm_state15 = 17'd16384;
  parameter ap_ST_fsm_state16 = 17'd32768;
  parameter ap_ST_fsm_state17 = 17'd65536;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [3:0] mat1_address0;
  output mat1_ce0;
  input [31:0] mat1_q0;
  output [3:0] mat2_address0;
  output mat2_ce0;
  input [31:0] mat2_q0;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg [3:0] mat1_address0;
  reg mat1_ce0;
  reg [3:0] mat2_address0;
  reg mat2_ce0;
  reg [16:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  reg [3:0] res_address0;
  reg res_ce0;
  reg res_we0;
  reg [31:0] res_d0;
  wire [31:0] res_q0;
  wire [1:0] i_fu_257_p2;
  reg [1:0] i_reg_604;
  wire ap_CS_fsm_state2;
  wire [4:0] sub_ln12_fu_279_p2;
  reg [4:0] sub_ln12_reg_609;
  wire [0:0] icmp_ln8_fu_251_p2;
  wire [1:0] j_4_fu_291_p2;
  reg [1:0] j_4_reg_618;
  wire ap_CS_fsm_state3;
  wire [4:0] zext_ln10_fu_297_p1;
  reg [4:0] zext_ln10_reg_623;
  wire [0:0] icmp_ln9_fu_285_p2;
  reg [3:0] res1_addr_reg_628;
  wire [1:0] k_fu_317_p2;
  reg [1:0] k_reg_636;
  wire ap_CS_fsm_state4;
  wire [0:0] icmp_ln11_fu_311_p2;
  reg signed [31:0] mat1_load_reg_651;
  wire ap_CS_fsm_state5;
  reg signed [31:0] mat2_load_reg_656;
  wire [31:0] mul_ln12_fu_365_p2;
  reg [31:0] mul_ln12_reg_661;
  wire ap_CS_fsm_state6;
  wire [31:0] add_ln12_fu_369_p2;
  wire ap_CS_fsm_state7;
  wire [1:0] i_4_fu_380_p2;
  reg [1:0] i_4_reg_674;
  wire ap_CS_fsm_state8;
  wire [4:0] sub_ln18_fu_402_p2;
  reg [4:0] sub_ln18_reg_679;
  wire [0:0] icmp_ln15_fu_374_p2;
  wire [1:0] j_fu_414_p2;
  reg [1:0] j_reg_687;
  wire ap_CS_fsm_state9;
  wire signed [63:0] sext_ln18_fu_429_p1;
  reg signed [63:0] sext_ln18_reg_692;
  wire [0:0] icmp_ln17_fu_408_p2;
  wire [1:0] i_5_fu_440_p2;
  reg [1:0] i_5_reg_705;
  wire ap_CS_fsm_state11;
  wire [4:0] sub_ln25_fu_462_p2;
  reg [4:0] sub_ln25_reg_710;
  wire [0:0] icmp_ln23_fu_434_p2;
  wire [1:0] j_5_fu_474_p2;
  reg [1:0] j_5_reg_718;
  wire ap_CS_fsm_state12;
  reg [3:0] res_addr_1_reg_723;
  wire [0:0] icmp_ln24_fu_468_p2;
  wire [31:0] add_ln25_1_fu_508_p2;
  reg [31:0] add_ln25_1_reg_738;
  wire ap_CS_fsm_state13;
  wire [1:0] i_6_fu_520_p2;
  reg [1:0] i_6_reg_746;
  wire ap_CS_fsm_state15;
  wire [4:0] zext_ln30_fu_526_p1;
  reg [4:0] zext_ln30_reg_751;
  wire [0:0] icmp_ln28_fu_514_p2;
  wire [4:0] sub_ln30_fu_542_p2;
  reg [4:0] sub_ln30_reg_756;
  wire [1:0] j_6_fu_554_p2;
  reg [1:0] j_6_reg_764;
  wire ap_CS_fsm_state16;
  wire [0:0] icmp_ln29_fu_548_p2;
  wire [4:0] add_ln30_1_fu_592_p2;
  reg [4:0] add_ln30_1_reg_774;
  reg [3:0] res1_address0;
  reg res1_ce0;
  reg res1_we0;
  wire [31:0] res1_q0;
  reg [1:0] i_0_reg_139;
  reg [1:0] j_0_reg_150;
  reg [31:0] res1_load_1_reg_161;
  reg [1:0] k_0_reg_174;
  reg [1:0] i_1_reg_185;
  reg [1:0] j_1_reg_196;
  wire ap_CS_fsm_state10;
  reg [1:0] i_2_reg_207;
  reg [1:0] j_2_reg_218;
  wire ap_CS_fsm_state14;
  reg [1:0] i_3_reg_229;
  reg [1:0] j_3_reg_240;
  wire ap_CS_fsm_state17;
  wire signed [63:0] sext_ln10_fu_306_p1;
  wire signed [63:0] sext_ln12_fu_332_p1;
  wire signed [63:0] sext_ln12_1_fu_360_p1;
  wire signed [63:0] sext_ln25_fu_489_p1;
  wire signed [63:0] sext_ln30_fu_587_p1;
  wire signed [63:0] sext_ln30_1_fu_597_p1;
  wire [3:0] tmp_fu_267_p3;
  wire [4:0] zext_ln12_1_fu_275_p1;
  wire [4:0] zext_ln12_fu_263_p1;
  wire [4:0] add_ln10_fu_301_p2;
  wire [4:0] zext_ln12_2_fu_323_p1;
  wire [4:0] add_ln12_1_fu_327_p2;
  wire [3:0] tmp_3_fu_337_p3;
  wire [4:0] zext_ln12_3_fu_345_p1;
  wire [4:0] sub_ln12_1_fu_349_p2;
  wire [4:0] add_ln12_2_fu_355_p2;
  wire [3:0] tmp_1_fu_390_p3;
  wire [4:0] zext_ln18_1_fu_398_p1;
  wire [4:0] zext_ln18_fu_386_p1;
  wire [4:0] zext_ln18_2_fu_420_p1;
  wire [4:0] add_ln18_fu_424_p2;
  wire [3:0] tmp_2_fu_450_p3;
  wire [4:0] zext_ln25_1_fu_458_p1;
  wire [4:0] zext_ln25_fu_446_p1;
  wire [4:0] zext_ln25_2_fu_480_p1;
  wire [4:0] add_ln25_2_fu_484_p2;
  wire [31:0] shl_ln25_fu_496_p2;
  wire [31:0] add_ln25_fu_502_p2;
  wire [3:0] tmp_4_fu_530_p3;
  wire [4:0] zext_ln30_1_fu_538_p1;
  wire [3:0] tmp_6_fu_564_p3;
  wire [4:0] zext_ln30_3_fu_572_p1;
  wire [4:0] zext_ln30_2_fu_560_p1;
  wire [4:0] sub_ln30_1_fu_576_p2;
  wire [4:0] add_ln30_fu_582_p2;
  reg [16:0] ap_NS_fsm;

  initial begin
    #0 ap_CS_fsm = 17'd1;
  end


  matrixmul_res
  #(
    .DataWidth(32),
    .AddressRange(9),
    .AddressWidth(4)
  )
  res_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(res_address0),
    .ce0(res_ce0),
    .we0(res_we0),
    .d0(res_d0),
    .q0(res_q0)
  );


  matrixmul_res1
  #(
    .DataWidth(32),
    .AddressRange(9),
    .AddressWidth(4)
  )
  res1_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(res1_address0),
    .ce0(res1_ce0),
    .we0(res1_we0),
    .d0(res1_load_1_reg_161),
    .q0(res1_q0)
  );


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
      ap_CS_fsm <= ap_NS_fsm;
    end
  end


  always @(posedge ap_clk) begin
    if((icmp_ln9_fu_285_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3)) begin
      i_0_reg_139 <= i_reg_604;
    end else if((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)) begin
      i_0_reg_139 <= 2'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln8_fu_251_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
      i_1_reg_185 <= 2'd0;
    end else if((1'b1 == ap_CS_fsm_state9) & (icmp_ln17_fu_408_p2 == 1'd1)) begin
      i_1_reg_185 <= i_4_reg_674;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state8) & (icmp_ln15_fu_374_p2 == 1'd1)) begin
      i_2_reg_207 <= 2'd0;
    end else if((1'b1 == ap_CS_fsm_state12) & (icmp_ln24_fu_468_p2 == 1'd1)) begin
      i_2_reg_207 <= i_5_reg_705;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state11) & (icmp_ln23_fu_434_p2 == 1'd1)) begin
      i_3_reg_229 <= 2'd0;
    end else if((icmp_ln29_fu_548_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state16)) begin
      i_3_reg_229 <= i_6_reg_746;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln11_fu_311_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4)) begin
      j_0_reg_150 <= j_4_reg_618;
    end else if((icmp_ln8_fu_251_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      j_0_reg_150 <= 2'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln15_fu_374_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state8)) begin
      j_1_reg_196 <= 2'd0;
    end else if(1'b1 == ap_CS_fsm_state10) begin
      j_1_reg_196 <= j_reg_687;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln23_fu_434_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state11)) begin
      j_2_reg_218 <= 2'd0;
    end else if(1'b1 == ap_CS_fsm_state14) begin
      j_2_reg_218 <= j_5_reg_718;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln28_fu_514_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state15)) begin
      j_3_reg_240 <= 2'd0;
    end else if(1'b1 == ap_CS_fsm_state17) begin
      j_3_reg_240 <= j_6_reg_764;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state7) begin
      k_0_reg_174 <= k_reg_636;
    end else if((icmp_ln9_fu_285_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) begin
      k_0_reg_174 <= 2'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state7) begin
      res1_load_1_reg_161 <= add_ln12_fu_369_p2;
    end else if((icmp_ln9_fu_285_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) begin
      res1_load_1_reg_161 <= 32'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state13) begin
      add_ln25_1_reg_738 <= add_ln25_1_fu_508_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln29_fu_548_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state16)) begin
      add_ln30_1_reg_774 <= add_ln30_1_fu_592_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state8) begin
      i_4_reg_674 <= i_4_fu_380_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state11) begin
      i_5_reg_705 <= i_5_fu_440_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state15) begin
      i_6_reg_746 <= i_6_fu_520_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      i_reg_604 <= i_fu_257_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      j_4_reg_618 <= j_4_fu_291_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state12) begin
      j_5_reg_718 <= j_5_fu_474_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state16) begin
      j_6_reg_764 <= j_6_fu_554_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state9) begin
      j_reg_687 <= j_fu_414_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      k_reg_636 <= k_fu_317_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      mat1_load_reg_651 <= mat1_q0;
      mat2_load_reg_656 <= mat2_q0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      mul_ln12_reg_661 <= mul_ln12_fu_365_p2;
    end 
  end

  assign zext_ln10_fu_297_p1_temp_0 = zext_ln10_fu_297_p1 & 2'd3;
  assign zext_ln10_reg_623_temp_1 = zext_ln10_reg_623 & 2'd28;
  assign zext_ln10_fu_297_p1_temp_0_temp_2 = zext_ln10_fu_297_p1_temp_0 | zext_ln10_reg_623_temp_1;

  always @(posedge ap_clk) begin
    if((icmp_ln9_fu_285_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) begin
      res1_addr_reg_628 <= sext_ln10_fu_306_p1;
      zext_ln10_reg_623 <= zext_ln10_fu_297_p1_temp_0_temp_2;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln24_fu_468_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state12)) begin
      res_addr_1_reg_723 <= sext_ln25_fu_489_p1;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln17_fu_408_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state9)) begin
      sext_ln18_reg_692 <= sext_ln18_fu_429_p1;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln8_fu_251_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2)) begin
      sub_ln12_reg_609 <= sub_ln12_fu_279_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln15_fu_374_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state8)) begin
      sub_ln18_reg_679 <= sub_ln18_fu_402_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((icmp_ln23_fu_434_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state11)) begin
      sub_ln25_reg_710 <= sub_ln25_fu_462_p2;
    end 
  end

  assign zext_ln30_fu_526_p1_temp_3 = zext_ln30_fu_526_p1 & 2'd3;
  assign zext_ln30_reg_751_temp_4 = zext_ln30_reg_751 & 2'd28;
  assign zext_ln30_fu_526_p1_temp_3_temp_5 = zext_ln30_fu_526_p1_temp_3 | zext_ln30_reg_751_temp_4;

  always @(posedge ap_clk) begin
    if((icmp_ln28_fu_514_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state15)) begin
      sub_ln30_reg_756 <= sub_ln30_fu_542_p2;
      zext_ln30_reg_751 <= zext_ln30_fu_526_p1_temp_3_temp_5;
    end 
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state15) & (icmp_ln28_fu_514_p2 == 1'd1)) begin
      ap_done = 1'b1;
    end else begin
      ap_done = 1'b0;
    end
  end


  always @(*) begin
    if((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) begin
      ap_idle = 1'b1;
    end else begin
      ap_idle = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state15) & (icmp_ln28_fu_514_p2 == 1'd1)) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state12) begin
      mat1_address0 = sext_ln25_fu_489_p1;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      mat1_address0 = sext_ln12_fu_332_p1;
    end else begin
      mat1_address0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state12)) begin
      mat1_ce0 = 1'b1;
    end else begin
      mat1_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state12) begin
      mat2_address0 = sext_ln25_fu_489_p1;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      mat2_address0 = sext_ln12_1_fu_360_p1;
    end else begin
      mat2_address0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state12)) begin
      mat2_ce0 = 1'b1;
    end else begin
      mat2_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state9) begin
      res1_address0 = sext_ln18_fu_429_p1;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      res1_address0 = res1_addr_reg_628;
    end else begin
      res1_address0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state9)) begin
      res1_ce0 = 1'b1;
    end else begin
      res1_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      res1_we0 = 1'b1;
    end else begin
      res1_we0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state17) begin
      res_address0 = sext_ln30_1_fu_597_p1;
    end else if(1'b1 == ap_CS_fsm_state16) begin
      res_address0 = sext_ln30_fu_587_p1;
    end else if(1'b1 == ap_CS_fsm_state14) begin
      res_address0 = res_addr_1_reg_723;
    end else if(1'b1 == ap_CS_fsm_state12) begin
      res_address0 = sext_ln25_fu_489_p1;
    end else if(1'b1 == ap_CS_fsm_state10) begin
      res_address0 = sext_ln18_reg_692;
    end else begin
      res_address0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state12)) begin
      res_ce0 = 1'b1;
    end else begin
      res_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state17) begin
      res_d0 = res_q0;
    end else if(1'b1 == ap_CS_fsm_state14) begin
      res_d0 = add_ln25_1_reg_738;
    end else if(1'b1 == ap_CS_fsm_state10) begin
      res_d0 = res1_q0;
    end else begin
      res_d0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state14) | (1'b1 == ap_CS_fsm_state10)) begin
      res_we0 = 1'b1;
    end else begin
      res_we0 = 1'b0;
    end
  end


  always @(*) begin
    case(ap_CS_fsm)
      ap_ST_fsm_state1: begin
        if((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end
      end
      ap_ST_fsm_state2: begin
        if((icmp_ln8_fu_251_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) begin
          ap_NS_fsm = ap_ST_fsm_state8;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end
      end
      ap_ST_fsm_state3: begin
        if((icmp_ln9_fu_285_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state4;
        end
      end
      ap_ST_fsm_state4: begin
        if((icmp_ln11_fu_311_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4)) begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state5;
        end
      end
      ap_ST_fsm_state5: begin
        ap_NS_fsm = ap_ST_fsm_state6;
      end
      ap_ST_fsm_state6: begin
        ap_NS_fsm = ap_ST_fsm_state7;
      end
      ap_ST_fsm_state7: begin
        ap_NS_fsm = ap_ST_fsm_state4;
      end
      ap_ST_fsm_state8: begin
        if((1'b1 == ap_CS_fsm_state8) & (icmp_ln15_fu_374_p2 == 1'd1)) begin
          ap_NS_fsm = ap_ST_fsm_state11;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state9;
        end
      end
      ap_ST_fsm_state9: begin
        if((1'b1 == ap_CS_fsm_state9) & (icmp_ln17_fu_408_p2 == 1'd1)) begin
          ap_NS_fsm = ap_ST_fsm_state8;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state10;
        end
      end
      ap_ST_fsm_state10: begin
        ap_NS_fsm = ap_ST_fsm_state9;
      end
      ap_ST_fsm_state11: begin
        if((1'b1 == ap_CS_fsm_state11) & (icmp_ln23_fu_434_p2 == 1'd1)) begin
          ap_NS_fsm = ap_ST_fsm_state15;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state12;
        end
      end
      ap_ST_fsm_state12: begin
        if((1'b1 == ap_CS_fsm_state12) & (icmp_ln24_fu_468_p2 == 1'd1)) begin
          ap_NS_fsm = ap_ST_fsm_state11;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state13;
        end
      end
      ap_ST_fsm_state13: begin
        ap_NS_fsm = ap_ST_fsm_state14;
      end
      ap_ST_fsm_state14: begin
        ap_NS_fsm = ap_ST_fsm_state12;
      end
      ap_ST_fsm_state15: begin
        if((1'b1 == ap_CS_fsm_state15) & (icmp_ln28_fu_514_p2 == 1'd1)) begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state16;
        end
      end
      ap_ST_fsm_state16: begin
        if((icmp_ln29_fu_548_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state16)) begin
          ap_NS_fsm = ap_ST_fsm_state15;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state17;
        end
      end
      ap_ST_fsm_state17: begin
        ap_NS_fsm = ap_ST_fsm_state16;
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign add_ln10_fu_301_p2 = sub_ln12_reg_609 + zext_ln10_fu_297_p1;
  assign add_ln12_1_fu_327_p2 = sub_ln12_reg_609 + zext_ln12_2_fu_323_p1;
  assign add_ln12_2_fu_355_p2 = sub_ln12_1_fu_349_p2 + zext_ln10_reg_623;
  assign add_ln12_fu_369_p2 = mul_ln12_reg_661 + res1_load_1_reg_161;
  assign add_ln18_fu_424_p2 = sub_ln18_reg_679 + zext_ln18_2_fu_420_p1;
  assign add_ln25_1_fu_508_p2 = mat1_q0 + add_ln25_fu_502_p2;
  assign add_ln25_2_fu_484_p2 = sub_ln25_reg_710 + zext_ln25_2_fu_480_p1;
  assign add_ln25_fu_502_p2 = shl_ln25_fu_496_p2 + mat2_q0;
  assign add_ln30_1_fu_592_p2 = sub_ln30_reg_756 + zext_ln30_2_fu_560_p1;
  assign add_ln30_fu_582_p2 = sub_ln30_1_fu_576_p2 + zext_ln30_reg_751;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];
  assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];
  assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];
  assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];
  assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];
  assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];
  assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];
  assign ap_CS_fsm_state17 = ap_CS_fsm[32'd16];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];
  assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];
  assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];
  assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];
  assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];
  assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];
  assign i_4_fu_380_p2 = i_1_reg_185 + 2'd1;
  assign i_5_fu_440_p2 = i_2_reg_207 + 2'd1;
  assign i_6_fu_520_p2 = i_3_reg_229 + 2'd1;
  assign i_fu_257_p2 = i_0_reg_139 + 2'd1;
  assign icmp_ln11_fu_311_p2 = (k_0_reg_174 == 2'd3)? 1'b1 : 1'b0;
  assign icmp_ln15_fu_374_p2 = (i_1_reg_185 == 2'd3)? 1'b1 : 1'b0;
  assign icmp_ln17_fu_408_p2 = (j_1_reg_196 == 2'd3)? 1'b1 : 1'b0;
  assign icmp_ln23_fu_434_p2 = (i_2_reg_207 == 2'd3)? 1'b1 : 1'b0;
  assign icmp_ln24_fu_468_p2 = (j_2_reg_218 == 2'd3)? 1'b1 : 1'b0;
  assign icmp_ln28_fu_514_p2 = (i_3_reg_229 == 2'd2)? 1'b1 : 1'b0;
  assign icmp_ln29_fu_548_p2 = (j_3_reg_240 == 2'd2)? 1'b1 : 1'b0;
  assign icmp_ln8_fu_251_p2 = (i_0_reg_139 == 2'd3)? 1'b1 : 1'b0;
  assign icmp_ln9_fu_285_p2 = (j_0_reg_150 == 2'd3)? 1'b1 : 1'b0;
  assign j_4_fu_291_p2 = j_0_reg_150 + 2'd1;
  assign j_5_fu_474_p2 = j_2_reg_218 + 2'd1;
  assign j_6_fu_554_p2 = j_3_reg_240 + 2'd1;
  assign j_fu_414_p2 = j_1_reg_196 + 2'd1;
  assign k_fu_317_p2 = k_0_reg_174 + 2'd1;
  assign mul_ln12_fu_365_p2 = $signed(mat2_load_reg_656) * $signed(mat1_load_reg_651);
  assign sext_ln10_fu_306_p1 = $signed(add_ln10_fu_301_p2);
  assign sext_ln12_1_fu_360_p1 = $signed(add_ln12_2_fu_355_p2);
  assign sext_ln12_fu_332_p1 = $signed(add_ln12_1_fu_327_p2);
  assign sext_ln18_fu_429_p1 = $signed(add_ln18_fu_424_p2);
  assign sext_ln25_fu_489_p1 = $signed(add_ln25_2_fu_484_p2);
  assign sext_ln30_1_fu_597_p1 = $signed(add_ln30_1_reg_774);
  assign sext_ln30_fu_587_p1 = $signed(add_ln30_fu_582_p2);
  assign shl_ln25_fu_496_p2 = res_q0 << 32'd1;
  assign sub_ln12_1_fu_349_p2 = zext_ln12_3_fu_345_p1 - zext_ln12_2_fu_323_p1;
  assign sub_ln12_fu_279_p2 = zext_ln12_1_fu_275_p1 - zext_ln12_fu_263_p1;
  assign sub_ln18_fu_402_p2 = zext_ln18_1_fu_398_p1 - zext_ln18_fu_386_p1;
  assign sub_ln25_fu_462_p2 = zext_ln25_1_fu_458_p1 - zext_ln25_fu_446_p1;
  assign sub_ln30_1_fu_576_p2 = zext_ln30_3_fu_572_p1 - zext_ln30_2_fu_560_p1;
  assign sub_ln30_fu_542_p2 = zext_ln30_1_fu_538_p1 - zext_ln30_fu_526_p1;
  assign i_1_reg_185_temp_6 = i_1_reg_185 << 1'd2;
  assign tmp_1_fu_390_p3 = i_1_reg_185_temp_6;
  assign i_2_reg_207_temp_7 = i_2_reg_207 << 1'd2;
  assign tmp_2_fu_450_p3 = i_2_reg_207_temp_7;
  assign k_0_reg_174_temp_8 = k_0_reg_174 << 1'd2;
  assign tmp_3_fu_337_p3 = k_0_reg_174_temp_8;
  assign i_3_reg_229_temp_9 = i_3_reg_229 << 1'd2;
  assign tmp_4_fu_530_p3 = i_3_reg_229_temp_9;
  assign j_3_reg_240_temp_10 = j_3_reg_240 << 1'd2;
  assign tmp_6_fu_564_p3 = j_3_reg_240_temp_10;
  assign i_0_reg_139_temp_11 = i_0_reg_139 << 1'd2;
  assign tmp_fu_267_p3 = i_0_reg_139_temp_11;
  assign zext_ln10_fu_297_p1 = j_0_reg_150;
  assign zext_ln12_1_fu_275_p1 = tmp_fu_267_p3;
  assign zext_ln12_2_fu_323_p1 = k_0_reg_174;
  assign zext_ln12_3_fu_345_p1 = tmp_3_fu_337_p3;
  assign zext_ln12_fu_263_p1 = i_0_reg_139;
  assign zext_ln18_1_fu_398_p1 = tmp_1_fu_390_p3;
  assign zext_ln18_2_fu_420_p1 = j_1_reg_196;
  assign zext_ln18_fu_386_p1 = i_1_reg_185;
  assign zext_ln25_1_fu_458_p1 = tmp_2_fu_450_p3;
  assign zext_ln25_2_fu_480_p1 = j_2_reg_218;
  assign zext_ln25_fu_446_p1 = i_2_reg_207;
  assign zext_ln30_1_fu_538_p1 = tmp_4_fu_530_p3;
  assign zext_ln30_2_fu_560_p1 = j_3_reg_240;
  assign zext_ln30_3_fu_572_p1 = tmp_6_fu_564_p3;
  assign zext_ln30_fu_526_p1 = i_3_reg_229;

  always @(posedge ap_clk) begin
    zext_ln10_reg_623 <= zext_ln10_reg_623 & 4'd3;
    zext_ln30_reg_751 <= zext_ln30_reg_751 & 4'd3;
  end


endmodule

