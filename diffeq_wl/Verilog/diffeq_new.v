
module diffeq
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_idle,
  ap_ready,
  x,
  dx,
  u,
  y,
  ap_return
);

  parameter ap_ST_fsm_state1 = 5'd1;
  parameter ap_ST_fsm_state2 = 5'd2;
  parameter ap_ST_fsm_state3 = 5'd4;
  parameter ap_ST_fsm_state4 = 5'd8;
  parameter ap_ST_fsm_state5 = 5'd16;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  input [31:0] x;
  input [31:0] dx;
  input [31:0] u;
  input [31:0] y;
  output [31:0] ap_return;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg [4:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire signed [31:0] t1_fu_50_p2;
  reg signed [31:0] t1_reg_110;
  wire signed [31:0] mul_ln14_fu_56_p2;
  reg signed [31:0] mul_ln14_reg_115;
  wire signed [31:0] t4_fu_68_p2;
  reg signed [31:0] t4_reg_120;
  wire ap_CS_fsm_state2;
  wire [31:0] t3_fu_74_p2;
  reg [31:0] t3_reg_130;
  wire [31:0] t5_fu_78_p2;
  reg [31:0] t5_reg_135;
  wire signed [31:0] sub_ln18_fu_87_p2;
  reg signed [31:0] sub_ln18_reg_140;
  wire ap_CS_fsm_state3;
  wire [31:0] t7_fu_92_p2;
  reg [31:0] t7_reg_145;
  wire ap_CS_fsm_state4;
  wire [31:0] shl_ln12_fu_44_p2;
  wire signed [31:0] mul_ln14_fu_56_p0;
  wire signed [31:0] mul_ln14_fu_56_p1;
  wire signed [31:0] shl_ln15_fu_62_p0;
  wire [31:0] shl_ln15_fu_62_p2;
  wire signed [31:0] t4_fu_68_p1;
  wire signed [31:0] t5_fu_78_p0;
  wire signed [31:0] t6_fu_83_p0;
  wire [31:0] t6_fu_83_p2;
  wire signed [31:0] t7_fu_92_p0;
  wire signed [31:0] add_ln20_fu_96_p0;
  wire ap_CS_fsm_state5;
  reg [4:0] ap_NS_fsm;

  initial begin
    #0 ap_CS_fsm = 5'd1;
  end


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
      ap_CS_fsm <= ap_NS_fsm;
    end
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      mul_ln14_reg_115 <= mul_ln14_fu_56_p2;
      t1_reg_110 <= t1_fu_50_p2;
      t4_reg_120 <= t4_fu_68_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      sub_ln18_reg_140 <= sub_ln18_fu_87_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      t3_reg_130 <= t3_fu_74_p2;
      t5_reg_135 <= t5_fu_78_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      t7_reg_145 <= t7_fu_92_p2;
    end 
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
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
    if(1'b1 == ap_CS_fsm_state5) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    case(ap_CS_fsm)
      ap_ST_fsm_state1: begin
        if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end
      end
      ap_ST_fsm_state2: begin
        ap_NS_fsm = ap_ST_fsm_state3;
      end
      ap_ST_fsm_state3: begin
        ap_NS_fsm = ap_ST_fsm_state4;
      end
      ap_ST_fsm_state4: begin
        ap_NS_fsm = ap_ST_fsm_state5;
      end
      ap_ST_fsm_state5: begin
        ap_NS_fsm = ap_ST_fsm_state1;
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign add_ln20_fu_96_p0 = y;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];
  assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];
  assign ap_return = $signed(add_ln20_fu_96_p0) + $signed(t7_reg_145);
  assign mul_ln14_fu_56_p0 = dx;
  assign mul_ln14_fu_56_p1 = u;
  assign mul_ln14_fu_56_p2 = $signed(mul_ln14_fu_56_p0) * $signed(mul_ln14_fu_56_p1);
  assign shl_ln12_fu_44_p2 = x << 32'd2;
  assign shl_ln15_fu_62_p0 = dx;
  assign shl_ln15_fu_62_p2 = shl_ln15_fu_62_p0 << 32'd2;
  assign sub_ln18_fu_87_p2 = t6_fu_83_p2 - t5_reg_135;
  assign t1_fu_50_p2 = shl_ln12_fu_44_p2 - x;
  assign t3_fu_74_p2 = $signed(mul_ln14_reg_115) * $signed(t1_reg_110);
  assign t4_fu_68_p1 = dx;
  assign t4_fu_68_p2 = $signed(shl_ln15_fu_62_p2) - $signed(t4_fu_68_p1);
  assign t5_fu_78_p0 = y;
  assign t5_fu_78_p2 = $signed(t5_fu_78_p0) * $signed(t4_reg_120);
  assign t6_fu_83_p0 = u;
  assign t6_fu_83_p2 = $signed(t6_fu_83_p0) - $signed(t3_reg_130);
  assign t7_fu_92_p0 = dx;
  assign t7_fu_92_p2 = $signed(t7_fu_92_p0) * $signed(sub_ln18_reg_140);

endmodule

