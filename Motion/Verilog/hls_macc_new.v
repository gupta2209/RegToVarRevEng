
module hls_macc
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_idle,
  ap_ready,
  in1,
  in2,
  in3,
  in4,
  in5,
  in6,
  in7,
  in8,
  in9,
  in10,
  out1,
  out1_ap_vld,
  out2,
  out2_ap_vld,
  out3,
  out3_ap_vld,
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
  input [31:0] in1;
  input [31:0] in2;
  input [31:0] in3;
  input [31:0] in4;
  input [31:0] in5;
  input [31:0] in6;
  input [31:0] in7;
  input [31:0] in8;
  input [31:0] in9;
  input [31:0] in10;
  output [31:0] out1;
  output out1_ap_vld;
  output [31:0] out2;
  output out2_ap_vld;
  output [31:0] out3;
  output out3_ap_vld;
  output [31:0] ap_return;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg out1_ap_vld;
  reg out2_ap_vld;
  reg out3_ap_vld;
  reg [4:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire [31:0] add3_fu_125_p2;
  reg [31:0] add3_reg_288;
  wire [31:0] add5_fu_131_p2;
  reg [31:0] add5_reg_293;
  wire ap_CS_fsm_state2;
  wire [31:0] mult2_fu_137_p2;
  reg [31:0] mult2_reg_326;
  wire [31:0] mult10_fu_143_p2;
  reg [31:0] mult10_reg_331;
  wire signed [31:0] tmp_fu_149_p2;
  reg signed [31:0] tmp_reg_336;
  wire signed [31:0] tmp6_fu_154_p2;
  reg signed [31:0] tmp6_reg_341;
  wire [31:0] mult7_fu_158_p2;
  reg [31:0] mult7_reg_346;
  wire ap_CS_fsm_state3;
  wire [31:0] mult11_fu_162_p2;
  reg [31:0] mult11_reg_351;
  wire [31:0] mult13_fu_167_p2;
  reg [31:0] mult13_reg_356;
  wire signed [31:0] mul_ln24_fu_172_p2;
  reg signed [31:0] mul_ln24_reg_361;
  wire signed [31:0] add_ln30_fu_177_p2;
  reg signed [31:0] add_ln30_reg_366;
  wire [31:0] tmp3_fu_181_p2;
  reg [31:0] tmp3_reg_371;
  wire signed [31:0] tmp4_fu_186_p2;
  reg signed [31:0] tmp4_reg_376;
  wire signed [31:0] add_ln42_fu_190_p2;
  reg signed [31:0] add_ln42_reg_381;
  wire [31:0] tmp7_fu_195_p2;
  reg [31:0] tmp7_reg_386;
  wire [31:0] add2_fu_199_p2;
  reg [31:0] add2_reg_391;
  wire ap_CS_fsm_state4;
  wire [31:0] add6_fu_203_p2;
  reg [31:0] add6_reg_396;
  wire [31:0] add9_fu_207_p2;
  reg [31:0] add9_reg_402;
  wire [31:0] tmp5_fu_211_p2;
  reg [31:0] tmp5_reg_407;
  wire [31:0] add13_fu_215_p2;
  reg [31:0] add13_reg_412;
  reg [28:0] trunc_ln_reg_417;
  wire ap_CS_fsm_state5;
  wire [31:0] add_ln40_fu_243_p2;
  wire [31:0] add_ln49_fu_257_p2;
  wire signed [31:0] add3_fu_125_p0;
  wire signed [31:0] add3_fu_125_p1;
  wire signed [31:0] add5_fu_131_p0;
  wire signed [31:0] add5_fu_131_p1;
  wire signed [31:0] mult2_fu_137_p0;
  wire signed [31:0] mult2_fu_137_p1;
  wire signed [31:0] mult10_fu_143_p0;
  wire signed [31:0] mult10_fu_143_p1;
  wire signed [31:0] tmp6_fu_154_p0;
  wire signed [31:0] mult7_fu_158_p0;
  wire signed [31:0] mult7_fu_158_p1;
  wire signed [31:0] mult11_fu_162_p0;
  wire signed [31:0] mult11_fu_162_p1;
  wire signed [31:0] mult13_fu_167_p0;
  wire signed [31:0] mult13_fu_167_p1;
  wire signed [31:0] mul_ln24_fu_172_p0;
  wire signed [31:0] mul_ln24_fu_172_p1;
  wire signed [31:0] tmp3_fu_181_p0;
  wire signed [31:0] tmp4_fu_186_p0;
  wire signed [31:0] add_ln42_fu_190_p0;
  wire signed [31:0] tmp7_fu_195_p0;
  wire signed [31:0] add2_fu_199_p0;
  wire signed [31:0] add6_fu_203_p0;
  wire signed [31:0] tmp5_fu_211_p0;
  wire signed [31:0] add13_fu_215_p0;
  wire [31:0] add14_fu_219_p2;
  wire [31:0] shf1_fu_233_p2;
  wire [31:0] add_ln40_1_fu_238_p2;
  wire signed [31:0] shf2_fu_249_p1;
  wire [31:0] add_ln49_1_fu_252_p2;
  wire [31:0] add_ln51_fu_263_p2;
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

  assign add14_fu_219_p2_temp_0 = add14_fu_219_p2 >> 1'd3;
  assign add14_fu_219_p2_temp_1 = add14_fu_219_p2_temp_0 & 29'd536870911;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      add13_reg_412 <= add13_fu_215_p2;
      add2_reg_391 <= add2_fu_199_p2;
      add6_reg_396 <= add6_fu_203_p2;
      add9_reg_402 <= add9_fu_207_p2;
      tmp5_reg_407 <= tmp5_fu_211_p2;
      trunc_ln_reg_417 <= add14_fu_219_p2_temp_1;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)) begin
      add3_reg_288 <= add3_fu_125_p2;
      add5_reg_293 <= add5_fu_131_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      add_ln30_reg_366 <= add_ln30_fu_177_p2;
      add_ln42_reg_381 <= add_ln42_fu_190_p2;
      mul_ln24_reg_361 <= mul_ln24_fu_172_p2;
      mult11_reg_351 <= mult11_fu_162_p2;
      mult13_reg_356 <= mult13_fu_167_p2;
      mult7_reg_346 <= mult7_fu_158_p2;
      tmp3_reg_371 <= tmp3_fu_181_p2;
      tmp4_reg_376 <= tmp4_fu_186_p2;
      tmp7_reg_386 <= tmp7_fu_195_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state2) begin
      mult10_reg_331 <= mult10_fu_143_p2;
      mult2_reg_326 <= mult2_fu_137_p2;
      tmp6_reg_341 <= tmp6_fu_154_p2;
      tmp_reg_336 <= tmp_fu_149_p2;
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
    if(1'b1 == ap_CS_fsm_state5) begin
      out1_ap_vld = 1'b1;
    end else begin
      out1_ap_vld = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      out2_ap_vld = 1'b1;
    end else begin
      out2_ap_vld = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      out3_ap_vld = 1'b1;
    end else begin
      out3_ap_vld = 1'b0;
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

  assign add13_fu_215_p0 = in4;
  assign add13_fu_215_p2 = $signed(add13_fu_215_p0) * $signed(add_ln42_reg_381);
  assign add14_fu_219_p2 = tmp7_reg_386 + mult13_reg_356;
  assign add2_fu_199_p0 = in4;
  assign add2_fu_199_p2 = $signed(add2_fu_199_p0) * $signed(mul_ln24_reg_361);
  assign add3_fu_125_p0 = in7;
  assign add3_fu_125_p1 = in4;
  assign add3_fu_125_p2 = $signed(add3_fu_125_p0) * $signed(add3_fu_125_p1);
  assign add5_fu_131_p0 = in10;
  assign add5_fu_131_p1 = in10;
  assign add5_fu_131_p2 = $signed(add5_fu_131_p0) * $signed(add5_fu_131_p1);
  assign add6_fu_203_p0 = in1;
  assign add6_fu_203_p2 = $signed(add6_fu_203_p0) * $signed(add_ln30_reg_366);
  assign add9_fu_207_p2 = tmp3_reg_371 + mult7_reg_346;
  assign add_ln30_fu_177_p2 = in2 + mult2_reg_326;
  assign add_ln40_1_fu_238_p2 = shf1_fu_233_p2 + tmp5_reg_407;
  assign add_ln40_fu_243_p2 = add2_reg_391 + add_ln40_1_fu_238_p2;
  assign add_ln42_fu_190_p0 = in8;
  assign add_ln42_fu_190_p2 = $signed(add_ln42_fu_190_p0) + $signed(mult10_reg_331);
  assign add_ln49_1_fu_252_p2 = $signed(shf2_fu_249_p1) + $signed(add13_reg_412);
  assign add_ln49_fu_257_p2 = mult11_reg_351 + add_ln49_1_fu_252_p2;
  assign add_ln51_fu_263_p2 = add_ln40_fu_243_p2 + add6_reg_396;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];
  assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];
  assign ap_return = add_ln49_fu_257_p2 + add_ln51_fu_263_p2;
  assign mul_ln24_fu_172_p0 = in5;
  assign mul_ln24_fu_172_p1 = in4;
  assign mul_ln24_fu_172_p2 = $signed(mul_ln24_fu_172_p0) * $signed(mul_ln24_fu_172_p1);
  assign mult10_fu_143_p0 = in9;
  assign mult10_fu_143_p1 = in6;
  assign mult10_fu_143_p2 = $signed(mult10_fu_143_p0) * $signed(mult10_fu_143_p1);
  assign mult11_fu_162_p0 = in8;
  assign mult11_fu_162_p1 = in6;
  assign mult11_fu_162_p2 = $signed(mult11_fu_162_p0) * $signed(mult11_fu_162_p1);
  assign mult13_fu_167_p0 = in8;
  assign mult13_fu_167_p1 = in7;
  assign mult13_fu_167_p2 = $signed(mult13_fu_167_p0) * $signed(mult13_fu_167_p1);
  assign mult2_fu_137_p0 = in3;
  assign mult2_fu_137_p1 = in1;
  assign mult2_fu_137_p2 = $signed(mult2_fu_137_p0) * $signed(mult2_fu_137_p1);
  assign mult7_fu_158_p0 = in6;
  assign mult7_fu_158_p1 = in3;
  assign mult7_fu_158_p2 = $signed(mult7_fu_158_p0) * $signed(mult7_fu_158_p1);
  assign out1 = add6_reg_396;
  assign out2 = add_ln40_fu_243_p2;
  assign out3 = add_ln49_fu_257_p2;
  assign shf1_fu_233_p2 = add9_reg_402 << 32'd3;
  assign shf2_fu_249_p1 = $signed(trunc_ln_reg_417);
  assign tmp3_fu_181_p0 = in5;
  assign tmp3_fu_181_p2 = $signed(tmp3_fu_181_p0) * $signed(tmp_reg_336);
  assign tmp4_fu_186_p0 = in7;
  assign tmp4_fu_186_p2 = $signed(tmp4_fu_186_p0) + $signed(in2);
  assign tmp5_fu_211_p0 = in3;
  assign tmp5_fu_211_p2 = $signed(tmp5_fu_211_p0) * $signed(tmp4_reg_376);
  assign tmp6_fu_154_p0 = in7;
  assign tmp6_fu_154_p2 = $signed(tmp6_fu_154_p0) + $signed(add5_reg_293);
  assign tmp7_fu_195_p0 = in9;
  assign tmp7_fu_195_p2 = $signed(tmp7_fu_195_p0) * $signed(tmp6_reg_341);
  assign tmp_fu_149_p2 = in2 + add3_reg_288;

endmodule

