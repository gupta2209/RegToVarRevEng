// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="parker,hls_ip_2019_2,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020-clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=7.656000,HLS_SYN_LAT=1,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=34,HLS_SYN_LUT=744,HLS_VERSION=2019_2}" *)

module parker (
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
        ap_return
);

parameter    ap_ST_fsm_state1 = 2'd1;
parameter    ap_ST_fsm_state2 = 2'd2;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [31:0] in1;
input  [31:0] in2;
input  [31:0] in3;
input  [31:0] in4;
input  [31:0] in5;
input  [31:0] in6;
output  [31:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [31:0] t6_6_fu_144_p2;
reg   [31:0] t6_6_reg_231;
wire    ap_CS_fsm_state2;
wire   [31:0] sub_ln21_fu_66_p2;
wire   [0:0] icmp_ln31_fu_78_p2;
wire   [31:0] t6_4_fu_90_p2;
wire   [31:0] t6_3_fu_84_p2;
wire   [31:0] t6_5_fu_96_p3;
wire   [0:0] icmp_ln24_fu_110_p2;
wire   [31:0] t4_2_fu_122_p2;
wire   [31:0] t4_1_fu_116_p2;
wire   [0:0] icmp_ln21_fu_72_p2;
wire   [31:0] t4_fu_104_p2;
wire   [31:0] t4_3_fu_128_p3;
wire   [31:0] t4_4_fu_136_p3;
wire   [0:0] icmp_ln41_fu_155_p2;
wire   [31:0] t6_1_fu_166_p2;
wire   [31:0] t6_fu_161_p2;
wire   [0:0] icmp_ln19_fu_150_p2;
wire   [31:0] t6_2_fu_171_p3;
wire   [31:0] t6_7_fu_179_p3;
wire   [0:0] icmp_ln46_fu_186_p2;
wire   [31:0] out1_1_fu_197_p2;
wire   [31:0] out1_fu_192_p2;
reg   [1:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 2'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        t6_6_reg_231 <= t6_6_fu_144_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_return = ((icmp_ln46_fu_186_p2[0:0] === 1'b1) ? out1_1_fu_197_p2 : out1_fu_192_p2);

assign icmp_ln19_fu_150_p2 = ((in5 == 32'd0) ? 1'b1 : 1'b0);

assign icmp_ln21_fu_72_p2 = ((in2 == sub_ln21_fu_66_p2) ? 1'b1 : 1'b0);

assign icmp_ln24_fu_110_p2 = ((in1 == 32'd4) ? 1'b1 : 1'b0);

assign icmp_ln31_fu_78_p2 = ((in4 == 32'd0) ? 1'b1 : 1'b0);

assign icmp_ln41_fu_155_p2 = ((in6 == 32'd0) ? 1'b1 : 1'b0);

assign icmp_ln46_fu_186_p2 = ((t6_7_fu_179_p3 == 32'd0) ? 1'b1 : 1'b0);

assign out1_1_fu_197_p2 = (in5 + 32'd8);

assign out1_fu_192_p2 = ($signed(in1) + $signed(32'd4294967291));

assign sub_ln21_fu_66_p2 = (32'd0 - in3);

assign t4_1_fu_116_p2 = (in2 + 32'd4);

assign t4_2_fu_122_p2 = (in3 - in5);

assign t4_3_fu_128_p3 = ((icmp_ln24_fu_110_p2[0:0] === 1'b1) ? t4_2_fu_122_p2 : t4_1_fu_116_p2);

assign t4_4_fu_136_p3 = ((icmp_ln21_fu_72_p2[0:0] === 1'b1) ? t4_fu_104_p2 : t4_3_fu_128_p3);

assign t4_fu_104_p2 = (t6_5_fu_96_p3 - in4);

assign t6_1_fu_166_p2 = (32'd8 - in4);

assign t6_2_fu_171_p3 = ((icmp_ln41_fu_155_p2[0:0] === 1'b1) ? t6_1_fu_166_p2 : t6_fu_161_p2);

assign t6_3_fu_84_p2 = (in2 + in1);

assign t6_4_fu_90_p2 = (32'd0 - in2);

assign t6_5_fu_96_p3 = ((icmp_ln31_fu_78_p2[0:0] === 1'b1) ? t6_4_fu_90_p2 : t6_3_fu_84_p2);

assign t6_6_fu_144_p2 = (t4_4_fu_136_p3 + in4);

assign t6_7_fu_179_p3 = ((icmp_ln19_fu_150_p2[0:0] === 1'b1) ? t6_2_fu_171_p3 : t6_6_reg_231);

assign t6_fu_161_p2 = (in2 + 32'd5);

endmodule //parker