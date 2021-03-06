
module check
(
  ap_clk,
  ap_rst,
  ap_start,
  ap_done,
  ap_idle,
  ap_ready,
  ap_return
);

  parameter ap_ST_fsm_state1 = 27'd1;
  parameter ap_ST_fsm_state2 = 27'd2;
  parameter ap_ST_fsm_state3 = 27'd4;
  parameter ap_ST_fsm_state4 = 27'd8;
  parameter ap_ST_fsm_state5 = 27'd16;
  parameter ap_ST_fsm_state6 = 27'd32;
  parameter ap_ST_fsm_state7 = 27'd64;
  parameter ap_ST_fsm_state8 = 27'd128;
  parameter ap_ST_fsm_state9 = 27'd256;
  parameter ap_ST_fsm_state10 = 27'd512;
  parameter ap_ST_fsm_state11 = 27'd1024;
  parameter ap_ST_fsm_state12 = 27'd2048;
  parameter ap_ST_fsm_state13 = 27'd4096;
  parameter ap_ST_fsm_state14 = 27'd8192;
  parameter ap_ST_fsm_state15 = 27'd16384;
  parameter ap_ST_fsm_state16 = 27'd32768;
  parameter ap_ST_fsm_state17 = 27'd65536;
  parameter ap_ST_fsm_state18 = 27'd131072;
  parameter ap_ST_fsm_state19 = 27'd262144;
  parameter ap_ST_fsm_state20 = 27'd524288;
  parameter ap_ST_fsm_state21 = 27'd1048576;
  parameter ap_ST_fsm_state22 = 27'd2097152;
  parameter ap_ST_fsm_state23 = 27'd4194304;
  parameter ap_ST_fsm_state24 = 27'd8388608;
  parameter ap_ST_fsm_state25 = 27'd16777216;
  parameter ap_ST_fsm_state26 = 27'd33554432;
  parameter ap_ST_fsm_state27 = 27'd67108864;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_idle;
  output ap_ready;
  output [31:0] ap_return;
  reg ap_done;
  reg ap_idle;
  reg ap_ready;
  reg [26:0] ap_CS_fsm;
  wire ap_CS_fsm_state1;
  wire [2:0] A_address0;
  reg A_ce0;
  wire [6:0] A_q0;
  wire [5:0] imem_address0;
  reg imem_ce0;
  wire [31:0] imem_q0;
  wire [2:0] outData_address0;
  reg outData_ce0;
  wire [6:0] outData_q0;
  wire [31:0] reg_q0;
  reg [31:0] reg_801;
  wire ap_CS_fsm_state11;
  reg [5:0] funct_reg_1787;
  wire [31:0] reg_q1;
  reg [31:0] reg_805;
  wire [5:0] i_fu_815_p2;
  wire ap_CS_fsm_state2;
  wire [6:0] i_2_fu_832_p2;
  reg [6:0] i_2_reg_1706;
  wire ap_CS_fsm_state3;
  wire [63:0] zext_ln136_fu_838_p1;
  reg [63:0] zext_ln136_reg_1711;
  wire [0:0] icmp_ln134_fu_826_p2;
  reg [31:0] pc_6_load_reg_1761;
  wire ap_CS_fsm_state5;
  wire signed [15:0] address_fu_878_p1;
  reg signed [15:0] address_reg_1774;
  wire ap_CS_fsm_state6;
  wire [5:0] funct_fu_882_p1;
  wire [31:0] pc_fu_886_p2;
  reg [31:0] pc_reg_1791;
  wire [5:0] tmp_1_fu_893_p4;
  reg [5:0] tmp_1_reg_1796;
  wire [31:0] n_inst_fu_903_p2;
  reg [31:0] n_inst_reg_1800;
  wire [31:0] zext_ln152_fu_961_p1;
  reg [31:0] zext_ln152_reg_1806;
  wire [4:0] rd_fu_965_p4;
  reg [4:0] rd_reg_1812;
  wire [4:0] grp_fu_766_p4;
  reg [4:0] rt_reg_1952;
  wire [7:0] trunc_ln260_1_fu_1175_p1;
  reg [7:0] trunc_ln260_1_reg_2008;
  wire [7:0] trunc_ln257_1_fu_1184_p1;
  reg [7:0] trunc_ln257_1_reg_2018;
  wire [0:0] icmp_ln213_fu_1213_p2;
  reg [0:0] icmp_ln213_reg_2043;
  wire ap_CS_fsm_state8;
  wire [0:0] icmp_ln210_fu_1219_p2;
  reg [0:0] icmp_ln210_reg_2048;
  wire [31:0] ashr_ln206_fu_1225_p2;
  reg [31:0] ashr_ln206_reg_2053;
  wire [31:0] shl_ln203_fu_1231_p2;
  reg [31:0] shl_ln203_reg_2058;
  wire [31:0] ashr_ln200_fu_1237_p2;
  reg [31:0] ashr_ln200_reg_2063;
  wire [31:0] shl_ln197_fu_1242_p2;
  reg [31:0] shl_ln197_reg_2068;
  wire [31:0] Lo_2_fu_1326_p1;
  reg [31:0] Lo_2_reg_2073;
  wire ap_CS_fsm_state12;
  reg [31:0] Hi_1_reg_2078;
  wire [31:0] Lo_1_fu_1354_p1;
  reg [31:0] Lo_1_reg_2083;
  reg [31:0] Hi_reg_2088;
  wire [31:0] sub_ln164_fu_1384_p2;
  reg [31:0] sub_ln164_reg_2093;
  wire ap_CS_fsm_state14;
  wire [31:0] add_ln161_fu_1390_p2;
  reg [31:0] add_ln161_reg_2098;
  wire [0:0] icmp_ln285_fu_1407_p2;
  reg [0:0] icmp_ln285_reg_2103;
  wire ap_CS_fsm_state16;
  wire [0:0] icmp_ln281_fu_1416_p2;
  reg [0:0] icmp_ln281_reg_2108;
  wire ap_CS_fsm_state20;
  wire [31:0] add_ln243_fu_1628_p2;
  reg [31:0] add_ln243_reg_2127;
  wire ap_CS_fsm_state23;
  wire [3:0] zext_ln299_fu_1649_p1;
  wire ap_CS_fsm_state25;
  wire [0:0] icmp_ln296_fu_1638_p2;
  wire [3:0] j_fu_1659_p2;
  reg [3:0] j_reg_2143;
  wire ap_CS_fsm_state26;
  wire [0:0] icmp_ln300_fu_1653_p2;
  wire [3:0] main_result_fu_1689_p2;
  wire ap_CS_fsm_state27;
  reg [4:0] reg_address0;
  reg reg_ce0;
  reg reg_we0;
  reg [31:0] reg_d0;
  reg [4:0] reg_address1;
  reg reg_ce1;
  reg reg_we1;
  reg [31:0] reg_d1;
  reg [5:0] dmem_address0;
  reg dmem_ce0;
  reg dmem_we0;
  reg [31:0] dmem_d0;
  wire [31:0] dmem_q0;
  reg [5:0] i_0_reg_709;
  wire [0:0] icmp_ln128_fu_809_p2;
  reg [6:0] i_1_reg_720;
  wire ap_CS_fsm_state4;
  reg [31:0] n_inst_0_reg_731;
  reg [3:0] main_result_0_reg_742;
  reg [3:0] j_0_reg_752;
  wire [63:0] zext_ln130_fu_821_p1;
  wire [63:0] zext_ln143_fu_873_p1;
  wire [63:0] zext_ln217_fu_975_p1;
  wire [63:0] zext_ln213_fu_980_p1;
  wire [63:0] zext_ln213_1_fu_985_p1;
  wire [63:0] zext_ln210_fu_990_p1;
  wire [63:0] zext_ln210_1_fu_995_p1;
  wire [63:0] zext_ln206_fu_1000_p1;
  wire [63:0] zext_ln206_1_fu_1005_p1;
  wire [63:0] zext_ln203_fu_1010_p1;
  wire [63:0] zext_ln203_1_fu_1015_p1;
  wire [63:0] zext_ln200_fu_1020_p1;
  wire [63:0] zext_ln197_fu_1025_p1;
  wire [63:0] zext_ln194_fu_1030_p1;
  wire [63:0] zext_ln194_1_fu_1035_p1;
  wire [63:0] zext_ln191_fu_1040_p1;
  wire [63:0] zext_ln191_1_fu_1045_p1;
  wire [63:0] zext_ln188_fu_1050_p1;
  wire [63:0] zext_ln188_1_fu_1055_p1;
  wire [63:0] zext_ln184_fu_1064_p1;
  wire [63:0] zext_ln181_fu_1073_p1;
  wire [63:0] zext_ln173_fu_1078_p1;
  wire [63:0] zext_ln173_2_fu_1083_p1;
  wire [63:0] zext_ln168_fu_1088_p1;
  wire [63:0] zext_ln168_1_fu_1093_p1;
  wire [63:0] zext_ln164_fu_1098_p1;
  wire [63:0] zext_ln164_1_fu_1103_p1;
  wire [63:0] zext_ln161_fu_1108_p1;
  wire [63:0] zext_ln161_1_fu_1113_p1;
  wire [63:0] zext_ln285_fu_1118_p1;
  wire [63:0] zext_ln281_fu_1123_p1;
  wire [63:0] zext_ln276_fu_1128_p1;
  wire [63:0] zext_ln272_fu_1133_p1;
  wire [63:0] zext_ln272_1_fu_1138_p1;
  wire [63:0] zext_ln268_fu_1143_p1;
  wire [63:0] zext_ln268_1_fu_1148_p1;
  wire [63:0] zext_ln264_fu_1160_p1;
  wire [63:0] zext_ln260_fu_1165_p1;
  wire [63:0] zext_ln260_1_fu_1170_p1;
  wire [63:0] zext_ln257_fu_1179_p1;
  wire [63:0] zext_ln253_fu_1188_p1;
  wire [63:0] zext_ln250_fu_1193_p1;
  wire [63:0] zext_ln247_fu_1198_p1;
  wire [63:0] zext_ln243_fu_1203_p1;
  wire [63:0] zext_ln213_3_fu_1251_p1;
  wire ap_CS_fsm_state9;
  wire [63:0] zext_ln210_3_fu_1259_p1;
  wire [63:0] zext_ln206_2_fu_1263_p1;
  wire [63:0] zext_ln203_2_fu_1267_p1;
  wire [63:0] zext_ln200_1_fu_1271_p1;
  wire [63:0] zext_ln197_1_fu_1275_p1;
  wire [63:0] zext_ln194_2_fu_1286_p1;
  wire ap_CS_fsm_state10;
  wire [63:0] zext_ln191_2_fu_1297_p1;
  wire [63:0] zext_ln188_2_fu_1308_p1;
  wire [63:0] zext_ln164_2_fu_1396_p1;
  wire ap_CS_fsm_state15;
  wire [63:0] zext_ln161_2_fu_1400_p1;
  wire [63:0] zext_ln285_3_fu_1426_p1;
  wire ap_CS_fsm_state17;
  wire [63:0] zext_ln281_2_fu_1434_p1;
  wire [63:0] zext_ln260_2_fu_1528_p1;
  wire ap_CS_fsm_state19;
  wire [63:0] zext_ln257_1_fu_1552_p1;
  wire [63:0] zext_ln257_2_fu_1557_p1;
  wire ap_CS_fsm_state21;
  wire [63:0] zext_ln253_2_fu_1571_p1;
  wire ap_CS_fsm_state22;
  wire [63:0] zext_ln250_1_fu_1603_p1;
  wire [63:0] zext_ln247_2_fu_1621_p1;
  wire [63:0] zext_ln243_1_fu_1634_p1;
  wire ap_CS_fsm_state24;
  wire [63:0] zext_ln302_fu_1665_p1;
  reg [31:0] pc_6_fu_162;
  wire [31:0] zext_ln232_fu_921_p1;
  wire [31:0] zext_ln227_fu_942_p1;
  wire ap_CS_fsm_state7;
  wire [31:0] pc_11_fu_1457_p2;
  wire ap_CS_fsm_state18;
  wire [0:0] tmp_2_fu_1438_p3;
  wire [31:0] pc_10_fu_1478_p2;
  wire [0:0] grp_fu_795_p2;
  wire [31:0] pc_9_fu_1499_p2;
  reg [31:0] Hi_2_fu_166;
  wire ap_CS_fsm_state13;
  reg [31:0] Lo_fu_170;
  wire [31:0] shl_ln264_fu_1153_p2;
  wire [31:0] zext_ln213_2_fu_1247_p1;
  wire [31:0] zext_ln210_2_fu_1255_p1;
  wire [31:0] xor_ln194_fu_1279_p2;
  wire [31:0] or_ln191_fu_1290_p2;
  wire [31:0] and_ln188_fu_1301_p2;
  wire [31:0] zext_ln285_2_fu_1422_p1;
  wire [31:0] zext_ln281_1_fu_1430_p1;
  wire [31:0] xor_ln253_fu_1564_p2;
  wire [31:0] or_ln_fu_1594_p3;
  wire [31:0] zext_ln247_1_fu_1616_p1;
  wire signed [31:0] sext_ln136_fu_858_p1;
  wire [5:0] trunc_ln143_1_fu_863_p4;
  wire [25:0] trunc_ln232_fu_909_p1;
  wire [27:0] pc_2_fu_913_p3;
  wire [25:0] trunc_ln227_fu_930_p1;
  wire [27:0] pc_1_fu_934_p3;
  wire [4:0] shamt_fu_951_p4;
  wire [4:0] grp_fu_776_p4;
  wire [31:0] hilo_1_fu_1320_p0;
  wire [31:0] hilo_1_fu_1320_p1;
  wire [63:0] hilo_1_fu_1320_p2;
  wire signed [31:0] sext_ln168_fu_1340_p0;
  wire signed [31:0] sext_ln168_1_fu_1344_p0;
  wire signed [31:0] hilo_fu_1348_p0;
  wire signed [31:0] hilo_fu_1348_p1;
  wire [63:0] hilo_fu_1348_p2;
  wire [31:0] zext_ln285_1_fu_1404_p1;
  wire signed [31:0] sext_ln281_fu_1413_p1;
  wire [17:0] shl_ln3_fu_1446_p3;
  wire signed [31:0] sext_ln277_fu_1453_p1;
  wire [17:0] shl_ln2_fu_1467_p3;
  wire signed [31:0] sext_ln273_fu_1474_p1;
  wire [17:0] shl_ln1_fu_1488_p3;
  wire signed [31:0] sext_ln269_fu_1495_p1;
  wire [7:0] trunc_ln260_fu_1509_p1;
  wire [7:0] add_ln260_fu_1513_p2;
  wire [5:0] trunc_ln260_2_fu_1518_p4;
  wire [7:0] trunc_ln257_fu_1533_p1;
  wire [7:0] add_ln257_fu_1537_p2;
  wire [5:0] trunc_ln257_2_fu_1542_p4;
  wire [31:0] zext_ln253_1_fu_1561_p1;
  wire [15:0] trunc_ln250_fu_1575_p1;
  wire [15:0] tmp_fu_1584_p4;
  wire [15:0] or_ln250_fu_1579_p2;
  wire [15:0] trunc_ln247_fu_1607_p1;
  wire [15:0] and_ln247_fu_1611_p2;
  wire signed [31:0] sext_ln243_fu_1625_p1;
  wire [0:0] icmp_ln299_fu_1644_p2;
  wire signed [31:0] sext_ln302_fu_1675_p1;
  wire [0:0] icmp_ln304_fu_1679_p2;
  wire [3:0] zext_ln304_fu_1685_p1;
  reg [26:0] ap_NS_fsm;
  wire [63:0] hilo_1_fu_1320_p00;
  wire [63:0] hilo_1_fu_1320_p10;

  initial begin
    #0 ap_CS_fsm = 27'd1;
  end


  check_A
  #(
    .DataWidth(7),
    .AddressRange(8),
    .AddressWidth(3)
  )
  A_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(A_address0),
    .ce0(A_ce0),
    .q0(A_q0)
  );


  check_imem
  #(
    .DataWidth(32),
    .AddressRange(44),
    .AddressWidth(6)
  )
  imem_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(imem_address0),
    .ce0(imem_ce0),
    .q0(imem_q0)
  );


  check_outData
  #(
    .DataWidth(7),
    .AddressRange(8),
    .AddressWidth(3)
  )
  outData_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(outData_address0),
    .ce0(outData_ce0),
    .q0(outData_q0)
  );


  check_reg
  #(
    .DataWidth(32),
    .AddressRange(32),
    .AddressWidth(5)
  )
  reg_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(reg_address0),
    .ce0(reg_ce0),
    .we0(reg_we0),
    .d0(reg_d0),
    .q0(reg_q0),
    .address1(reg_address1),
    .ce1(reg_ce1),
    .we1(reg_we1),
    .d1(reg_d1),
    .q1(reg_q1)
  );


  check_dmem
  #(
    .DataWidth(32),
    .AddressRange(64),
    .AddressWidth(6)
  )
  dmem_U
  (
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(dmem_address0),
    .ce0(dmem_ce0),
    .we0(dmem_we0),
    .d0(dmem_d0),
    .q0(dmem_q0)
  );


  always @(posedge ap_clk) begin
    if(ap_rst == 1'b1) begin
      ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
      ap_CS_fsm <= ap_NS_fsm;
    end
  end


  always @(posedge ap_clk) begin
    if((funct_reg_1787 == 6'd24) & (1'b1 == ap_CS_fsm_state13) & (tmp_1_reg_1796 == 6'd0)) begin
      Hi_2_fu_166 <= Hi_reg_2088;
    end else if((funct_reg_1787 == 6'd25) & (1'b1 == ap_CS_fsm_state13) & (tmp_1_reg_1796 == 6'd0)) begin
      Hi_2_fu_166 <= Hi_1_reg_2078;
    end else if((1'b1 == ap_CS_fsm_state3) & (icmp_ln134_fu_826_p2 == 1'd1)) begin
      Hi_2_fu_166 <= 32'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if((funct_reg_1787 == 6'd24) & (1'b1 == ap_CS_fsm_state13) & (tmp_1_reg_1796 == 6'd0)) begin
      Lo_fu_170 <= Lo_1_reg_2083;
    end else if((funct_reg_1787 == 6'd25) & (1'b1 == ap_CS_fsm_state13) & (tmp_1_reg_1796 == 6'd0)) begin
      Lo_fu_170 <= Lo_2_reg_2073;
    end else if((1'b1 == ap_CS_fsm_state3) & (icmp_ln134_fu_826_p2 == 1'd1)) begin
      Lo_fu_170 <= 32'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state2) & (icmp_ln128_fu_809_p2 == 1'd0)) begin
      i_0_reg_709 <= i_fu_815_p2;
    end else if((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1)) begin
      i_0_reg_709 <= 6'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state4) begin
      i_1_reg_720 <= i_2_reg_1706;
    end else if((1'b1 == ap_CS_fsm_state2) & (icmp_ln128_fu_809_p2 == 1'd1)) begin
      i_1_reg_720 <= 7'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state27) begin
      j_0_reg_752 <= j_reg_2143;
    end else if((1'b1 == ap_CS_fsm_state25) & (icmp_ln296_fu_1638_p2 == 1'd1)) begin
      j_0_reg_752 <= 4'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state27) begin
      main_result_0_reg_742 <= main_result_fu_1689_p2;
    end else if((1'b1 == ap_CS_fsm_state25) & (icmp_ln296_fu_1638_p2 == 1'd1)) begin
      main_result_0_reg_742 <= zext_ln299_fu_1649_p1;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state25) & (icmp_ln296_fu_1638_p2 == 1'd0)) begin
      n_inst_0_reg_731 <= n_inst_reg_1800;
    end else if((1'b1 == ap_CS_fsm_state3) & (icmp_ln134_fu_826_p2 == 1'd1)) begin
      n_inst_0_reg_731 <= 32'd0;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state18) & (tmp_1_reg_1796 == 6'd4) & (grp_fu_795_p2 == 1'd1)) begin
      pc_6_fu_162 <= pc_9_fu_1499_p2;
    end else if((1'b1 == ap_CS_fsm_state18) & (tmp_1_reg_1796 == 6'd5) & (grp_fu_795_p2 == 1'd0)) begin
      pc_6_fu_162 <= pc_10_fu_1478_p2;
    end else if((1'b1 == ap_CS_fsm_state18) & (tmp_1_reg_1796 == 6'd4) & (grp_fu_795_p2 == 1'd0) | (1'b1 == ap_CS_fsm_state18) & (tmp_1_reg_1796 == 6'd5) & (grp_fu_795_p2 == 1'd1) | (1'b1 == ap_CS_fsm_state18) & (tmp_1_reg_1796 == 6'd1) & (tmp_2_fu_1438_p3 == 1'd1)) begin
      pc_6_fu_162 <= pc_reg_1791;
    end else if((1'b1 == ap_CS_fsm_state18) & (tmp_1_reg_1796 == 6'd1) & (tmp_2_fu_1438_p3 == 1'd0)) begin
      pc_6_fu_162 <= pc_11_fu_1457_p2;
    end else if(1'b1 == ap_CS_fsm_state7) begin
      pc_6_fu_162 <= reg_q0;
    end else if(~(tmp_1_fu_893_p4 == 6'd15) & ~(tmp_1_fu_893_p4 == 6'd9) & ~(tmp_1_fu_893_p4 == 6'd12) & ~(tmp_1_fu_893_p4 == 6'd13) & ~(tmp_1_fu_893_p4 == 6'd14) & ~(tmp_1_fu_893_p4 == 6'd35) & ~(tmp_1_fu_893_p4 == 6'd43) & ~(tmp_1_fu_893_p4 == 6'd4) & ~(tmp_1_fu_893_p4 == 6'd5) & ~(tmp_1_fu_893_p4 == 6'd1) & ~(tmp_1_fu_893_p4 == 6'd10) & ~(tmp_1_fu_893_p4 == 6'd11) & ~(tmp_1_fu_893_p4 == 6'd3) & ~(tmp_1_fu_893_p4 == 6'd2) & ~(tmp_1_fu_893_p4 == 6'd0) & (1'b1 == ap_CS_fsm_state6) | ~(funct_fu_882_p1 == 6'd16) & ~(funct_fu_882_p1 == 6'd18) & ~(funct_fu_882_p1 == 6'd33) & ~(funct_fu_882_p1 == 6'd35) & ~(funct_fu_882_p1 == 6'd24) & ~(funct_fu_882_p1 == 6'd25) & ~(funct_fu_882_p1 == 6'd36) & ~(funct_fu_882_p1 == 6'd37) & ~(funct_fu_882_p1 == 6'd38) & ~(funct_fu_882_p1 == 6'd0) & ~(funct_fu_882_p1 == 6'd2) & ~(funct_fu_882_p1 == 6'd4) & ~(funct_fu_882_p1 == 6'd6) & ~(funct_fu_882_p1 == 6'd42) & ~(funct_fu_882_p1 == 6'd43) & ~(funct_fu_882_p1 == 6'd8) & (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0)) begin
      pc_6_fu_162 <= 32'd0;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd15) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd9) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd12) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd13) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd14) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd35) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd43) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd10) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd11) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd16) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd18) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd33) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd35) | (funct_fu_882_p1 == 6'd24) & (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) | (funct_fu_882_p1 == 6'd25) & (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd36) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd37) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd38) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd0) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd2) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd4) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd6) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd42) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd43)) begin
      pc_6_fu_162 <= pc_fu_886_p2;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd2)) begin
      pc_6_fu_162 <= zext_ln227_fu_942_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd3)) begin
      pc_6_fu_162 <= zext_ln232_fu_921_p1;
    end else if((1'b1 == ap_CS_fsm_state3) & (icmp_ln134_fu_826_p2 == 1'd1)) begin
      pc_6_fu_162 <= 32'd4194304;
    end 
  end

  assign hilo_1_fu_1320_p2_temp_0 = hilo_1_fu_1320_p2 >> 1'd32;
  assign hilo_1_fu_1320_p2_temp_1 = hilo_1_fu_1320_p2_temp_0 & 32'd4294967295;

  always @(posedge ap_clk) begin
    if((funct_reg_1787 == 6'd25) & (1'b1 == ap_CS_fsm_state12)) begin
      Hi_1_reg_2078 <= hilo_1_fu_1320_p2_temp_1;
      Lo_2_reg_2073 <= Lo_2_fu_1326_p1;
    end 
  end

  assign hilo_fu_1348_p2_temp_2 = hilo_fu_1348_p2 >> 1'd32;
  assign hilo_fu_1348_p2_temp_3 = hilo_fu_1348_p2_temp_2 & 32'd4294967295;

  always @(posedge ap_clk) begin
    if((funct_reg_1787 == 6'd24) & (1'b1 == ap_CS_fsm_state12)) begin
      Hi_reg_2088 <= hilo_fu_1348_p2_temp_3;
      Lo_1_reg_2083 <= Lo_1_fu_1354_p1;
    end 
  end


  always @(posedge ap_clk) begin
    if((funct_reg_1787 == 6'd33) & (1'b1 == ap_CS_fsm_state14)) begin
      add_ln161_reg_2098 <= add_ln161_fu_1390_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state23) begin
      add_ln243_reg_2127 <= add_ln243_fu_1628_p2;
    end 
  end

  assign imem_q0_temp_4 = imem_q0 >> 1'd26;
  assign imem_q0_temp_5 = imem_q0_temp_4 & 6'd63;

  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state6) begin
      address_reg_1774 <= address_fu_878_p1;
      funct_reg_1787 <= funct_fu_882_p1;
      n_inst_reg_1800 <= n_inst_fu_903_p2;
      pc_reg_1791 <= pc_fu_886_p2;
      tmp_1_reg_1796 <= imem_q0_temp_5;
    end 
  end


  always @(posedge ap_clk) begin
    if((funct_reg_1787 == 6'd2) & (1'b1 == ap_CS_fsm_state8)) begin
      ashr_ln200_reg_2063 <= ashr_ln200_fu_1237_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((funct_reg_1787 == 6'd6) & (1'b1 == ap_CS_fsm_state8)) begin
      ashr_ln206_reg_2053 <= ashr_ln206_fu_1225_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      i_2_reg_1706 <= i_2_fu_832_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((funct_reg_1787 == 6'd42) & (1'b1 == ap_CS_fsm_state8)) begin
      icmp_ln210_reg_2048 <= icmp_ln210_fu_1219_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((funct_reg_1787 == 6'd43) & (1'b1 == ap_CS_fsm_state8)) begin
      icmp_ln213_reg_2043 <= icmp_ln213_fu_1213_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state16) & (tmp_1_reg_1796 == 6'd10)) begin
      icmp_ln281_reg_2108 <= icmp_ln281_fu_1416_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state16) & (tmp_1_reg_1796 == 6'd11)) begin
      icmp_ln285_reg_2103 <= icmp_ln285_fu_1407_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state26) begin
      j_reg_2143 <= j_fu_1659_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      pc_6_load_reg_1761 <= pc_6_fu_162;
    end 
  end

  assign imem_q0_temp_6 = imem_q0 >> 1'd11;
  assign imem_q0_temp_7 = imem_q0_temp_6 & 5'd31;
  assign zext_ln152_fu_961_p1_temp_8 = zext_ln152_fu_961_p1 & 5'd31;
  assign zext_ln152_reg_1806_temp_9 = zext_ln152_reg_1806 & 5'd4294967264;
  assign zext_ln152_fu_961_p1_temp_8_temp_10 = zext_ln152_fu_961_p1_temp_8 | zext_ln152_reg_1806_temp_9;

  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0)) begin
      rd_reg_1812 <= imem_q0_temp_7;
      zext_ln152_reg_1806 <= zext_ln152_fu_961_p1_temp_8_temp_10;
    end 
  end


  always @(posedge ap_clk) begin
    if((funct_reg_1787 == 6'd24) & (1'b1 == ap_CS_fsm_state11) | (funct_reg_1787 == 6'd25) & (1'b1 == ap_CS_fsm_state11)) begin
      reg_801 <= reg_q0;
      reg_805 <= reg_q1;
    end 
  end

  assign imem_q0_temp_11 = imem_q0 >> 1'd16;
  assign imem_q0_temp_12 = imem_q0_temp_11 & 5'd31;

  always @(posedge ap_clk) begin
    if(~(tmp_1_fu_893_p4 == 6'd3) & ~(tmp_1_fu_893_p4 == 6'd2) & ~(tmp_1_fu_893_p4 == 6'd0) & (1'b1 == ap_CS_fsm_state6)) begin
      rt_reg_1952 <= imem_q0_temp_12;
    end 
  end


  always @(posedge ap_clk) begin
    if((funct_reg_1787 == 6'd0) & (1'b1 == ap_CS_fsm_state8)) begin
      shl_ln197_reg_2068 <= shl_ln197_fu_1242_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((funct_reg_1787 == 6'd4) & (1'b1 == ap_CS_fsm_state8)) begin
      shl_ln203_reg_2058 <= shl_ln203_fu_1231_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((funct_reg_1787 == 6'd35) & (1'b1 == ap_CS_fsm_state14)) begin
      sub_ln164_reg_2093 <= sub_ln164_fu_1384_p2;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd35)) begin
      trunc_ln257_1_reg_2018 <= trunc_ln257_1_fu_1184_p1;
    end 
  end


  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd43)) begin
      trunc_ln260_1_reg_2008 <= trunc_ln260_1_fu_1175_p1;
    end 
  end

  assign zext_ln136_fu_838_p1_temp_13 = zext_ln136_fu_838_p1 & 7'd127;
  assign zext_ln136_reg_1711_temp_14 = zext_ln136_reg_1711 & 7'd18446744073709551488;
  assign zext_ln136_fu_838_p1_temp_13_temp_15 = zext_ln136_fu_838_p1_temp_13 | zext_ln136_reg_1711_temp_14;

  always @(posedge ap_clk) begin
    if((1'b1 == ap_CS_fsm_state3) & (icmp_ln134_fu_826_p2 == 1'd0)) begin
      zext_ln136_reg_1711 <= zext_ln136_fu_838_p1_temp_13_temp_15;
    end 
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state3) begin
      A_ce0 = 1'b1;
    end else begin
      A_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state26) & (icmp_ln300_fu_1653_p2 == 1'd1)) begin
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
    if((1'b1 == ap_CS_fsm_state26) & (icmp_ln300_fu_1653_p2 == 1'd1)) begin
      ap_ready = 1'b1;
    end else begin
      ap_ready = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state26) begin
      dmem_address0 = zext_ln302_fu_1665_p1;
    end else if(1'b1 == ap_CS_fsm_state20) begin
      dmem_address0 = zext_ln257_1_fu_1552_p1;
    end else if(1'b1 == ap_CS_fsm_state19) begin
      dmem_address0 = zext_ln260_2_fu_1528_p1;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      dmem_address0 = zext_ln136_reg_1711;
    end else begin
      dmem_address0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state26) | (1'b1 == ap_CS_fsm_state20)) begin
      dmem_ce0 = 1'b1;
    end else begin
      dmem_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state19) begin
      dmem_d0 = reg_q0;
    end else if(1'b1 == ap_CS_fsm_state4) begin
      dmem_d0 = sext_ln136_fu_858_p1;
    end else begin
      dmem_d0 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state19) | (1'b1 == ap_CS_fsm_state4)) begin
      dmem_we0 = 1'b1;
    end else begin
      dmem_we0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state5) begin
      imem_ce0 = 1'b1;
    end else begin
      imem_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state26) begin
      outData_ce0 = 1'b1;
    end else begin
      outData_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state24) begin
      reg_address0 = zext_ln243_1_fu_1634_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd9)) begin
      reg_address0 = zext_ln243_fu_1203_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd12)) begin
      reg_address0 = zext_ln247_fu_1198_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd13)) begin
      reg_address0 = zext_ln250_fu_1193_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd14)) begin
      reg_address0 = zext_ln253_fu_1188_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd35)) begin
      reg_address0 = zext_ln257_fu_1179_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd43)) begin
      reg_address0 = zext_ln260_fu_1165_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd15)) begin
      reg_address0 = zext_ln264_fu_1160_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd4)) begin
      reg_address0 = zext_ln268_fu_1143_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd5)) begin
      reg_address0 = zext_ln272_fu_1133_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd1)) begin
      reg_address0 = zext_ln276_fu_1128_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd10)) begin
      reg_address0 = zext_ln281_fu_1123_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd11)) begin
      reg_address0 = zext_ln285_fu_1118_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd33)) begin
      reg_address0 = zext_ln161_fu_1108_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd35)) begin
      reg_address0 = zext_ln164_fu_1098_p1;
    end else if((funct_fu_882_p1 == 6'd24) & (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0)) begin
      reg_address0 = zext_ln168_fu_1088_p1;
    end else if((funct_fu_882_p1 == 6'd25) & (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0)) begin
      reg_address0 = zext_ln173_fu_1078_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd16)) begin
      reg_address0 = zext_ln181_fu_1073_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd18)) begin
      reg_address0 = zext_ln184_fu_1064_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd36)) begin
      reg_address0 = zext_ln188_fu_1050_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd37)) begin
      reg_address0 = zext_ln191_fu_1040_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd38)) begin
      reg_address0 = zext_ln194_fu_1030_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd0)) begin
      reg_address0 = zext_ln197_fu_1025_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd2)) begin
      reg_address0 = zext_ln200_fu_1020_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd4)) begin
      reg_address0 = zext_ln203_fu_1010_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd6)) begin
      reg_address0 = zext_ln206_fu_1000_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd42)) begin
      reg_address0 = zext_ln210_fu_990_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd43)) begin
      reg_address0 = zext_ln213_fu_980_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd8)) begin
      reg_address0 = zext_ln217_fu_975_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd3)) begin
      reg_address0 = 64'd31;
    end else if((1'b1 == ap_CS_fsm_state2) & (icmp_ln128_fu_809_p2 == 1'd1)) begin
      reg_address0 = 64'd29;
    end else if((1'b1 == ap_CS_fsm_state2) & (icmp_ln128_fu_809_p2 == 1'd0)) begin
      reg_address0 = zext_ln130_fu_821_p1;
    end else begin
      reg_address0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state25) begin
      reg_address1 = 64'd0;
    end else if((1'b1 == ap_CS_fsm_state22) & (tmp_1_reg_1796 == 6'd12)) begin
      reg_address1 = zext_ln247_2_fu_1621_p1;
    end else if((1'b1 == ap_CS_fsm_state22) & (tmp_1_reg_1796 == 6'd13)) begin
      reg_address1 = zext_ln250_1_fu_1603_p1;
    end else if((1'b1 == ap_CS_fsm_state22) & (tmp_1_reg_1796 == 6'd14)) begin
      reg_address1 = zext_ln253_2_fu_1571_p1;
    end else if(1'b1 == ap_CS_fsm_state21) begin
      reg_address1 = zext_ln257_2_fu_1557_p1;
    end else if((1'b1 == ap_CS_fsm_state17) & (tmp_1_reg_1796 == 6'd10)) begin
      reg_address1 = zext_ln281_2_fu_1434_p1;
    end else if((1'b1 == ap_CS_fsm_state17) & (tmp_1_reg_1796 == 6'd11)) begin
      reg_address1 = zext_ln285_3_fu_1426_p1;
    end else if((funct_reg_1787 == 6'd33) & (1'b1 == ap_CS_fsm_state15)) begin
      reg_address1 = zext_ln161_2_fu_1400_p1;
    end else if((funct_reg_1787 == 6'd35) & (1'b1 == ap_CS_fsm_state15)) begin
      reg_address1 = zext_ln164_2_fu_1396_p1;
    end else if((funct_reg_1787 == 6'd36) & (1'b1 == ap_CS_fsm_state10)) begin
      reg_address1 = zext_ln188_2_fu_1308_p1;
    end else if((funct_reg_1787 == 6'd37) & (1'b1 == ap_CS_fsm_state10)) begin
      reg_address1 = zext_ln191_2_fu_1297_p1;
    end else if((funct_reg_1787 == 6'd38) & (1'b1 == ap_CS_fsm_state10)) begin
      reg_address1 = zext_ln194_2_fu_1286_p1;
    end else if((funct_reg_1787 == 6'd0) & (1'b1 == ap_CS_fsm_state9)) begin
      reg_address1 = zext_ln197_1_fu_1275_p1;
    end else if((funct_reg_1787 == 6'd2) & (1'b1 == ap_CS_fsm_state9)) begin
      reg_address1 = zext_ln200_1_fu_1271_p1;
    end else if((funct_reg_1787 == 6'd4) & (1'b1 == ap_CS_fsm_state9)) begin
      reg_address1 = zext_ln203_2_fu_1267_p1;
    end else if((funct_reg_1787 == 6'd6) & (1'b1 == ap_CS_fsm_state9)) begin
      reg_address1 = zext_ln206_2_fu_1263_p1;
    end else if((funct_reg_1787 == 6'd42) & (1'b1 == ap_CS_fsm_state9)) begin
      reg_address1 = zext_ln210_3_fu_1259_p1;
    end else if((funct_reg_1787 == 6'd43) & (1'b1 == ap_CS_fsm_state9)) begin
      reg_address1 = zext_ln213_3_fu_1251_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd43)) begin
      reg_address1 = zext_ln260_1_fu_1170_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd4)) begin
      reg_address1 = zext_ln268_1_fu_1148_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd5)) begin
      reg_address1 = zext_ln272_1_fu_1138_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd33)) begin
      reg_address1 = zext_ln161_1_fu_1113_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd35)) begin
      reg_address1 = zext_ln164_1_fu_1103_p1;
    end else if((funct_fu_882_p1 == 6'd24) & (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0)) begin
      reg_address1 = zext_ln168_1_fu_1093_p1;
    end else if((funct_fu_882_p1 == 6'd25) & (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0)) begin
      reg_address1 = zext_ln173_2_fu_1083_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd36)) begin
      reg_address1 = zext_ln188_1_fu_1055_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd37)) begin
      reg_address1 = zext_ln191_1_fu_1045_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd38)) begin
      reg_address1 = zext_ln194_1_fu_1035_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd4)) begin
      reg_address1 = zext_ln203_1_fu_1015_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd6)) begin
      reg_address1 = zext_ln206_1_fu_1005_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd42)) begin
      reg_address1 = zext_ln210_1_fu_995_p1;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd43)) begin
      reg_address1 = zext_ln213_1_fu_985_p1;
    end else begin
      reg_address1 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state24) | (1'b1 == ap_CS_fsm_state2) & (icmp_ln128_fu_809_p2 == 1'd1) | (1'b1 == ap_CS_fsm_state2) & (icmp_ln128_fu_809_p2 == 1'd0) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd15) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd9) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd12) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd13) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd14) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd35) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd43) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd4) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd5) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd1) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd10) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd11) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd3) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd16) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd18) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd33) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd35) | (funct_fu_882_p1 == 6'd24) & (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) | (funct_fu_882_p1 == 6'd25) & (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd36) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd37) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd38) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd0) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd2) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd4) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd6) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd42) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd43) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd8)) begin
      reg_ce0 = 1'b1;
    end else begin
      reg_ce0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state21) | (1'b1 == ap_CS_fsm_state25) | (1'b1 == ap_CS_fsm_state22) & (tmp_1_reg_1796 == 6'd12) | (1'b1 == ap_CS_fsm_state22) & (tmp_1_reg_1796 == 6'd13) | (1'b1 == ap_CS_fsm_state22) & (tmp_1_reg_1796 == 6'd14) | (funct_reg_1787 == 6'd36) & (1'b1 == ap_CS_fsm_state10) | (funct_reg_1787 == 6'd37) & (1'b1 == ap_CS_fsm_state10) | (funct_reg_1787 == 6'd38) & (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state17) & (tmp_1_reg_1796 == 6'd10) | (1'b1 == ap_CS_fsm_state17) & (tmp_1_reg_1796 == 6'd11) | (funct_reg_1787 == 6'd33) & (1'b1 == ap_CS_fsm_state15) | (funct_reg_1787 == 6'd35) & (1'b1 == ap_CS_fsm_state15) | (funct_reg_1787 == 6'd0) & (1'b1 == ap_CS_fsm_state9) | (funct_reg_1787 == 6'd2) & (1'b1 == ap_CS_fsm_state9) | (funct_reg_1787 == 6'd4) & (1'b1 == ap_CS_fsm_state9) | (funct_reg_1787 == 6'd6) & (1'b1 == ap_CS_fsm_state9) | (funct_reg_1787 == 6'd42) & (1'b1 == ap_CS_fsm_state9) | (funct_reg_1787 == 6'd43) & (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd43) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd4) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd5) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd33) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd35) | (funct_fu_882_p1 == 6'd24) & (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) | (funct_fu_882_p1 == 6'd25) & (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd36) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd37) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd38) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd4) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd6) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd42) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd43)) begin
      reg_ce1 = 1'b1;
    end else begin
      reg_ce1 = 1'b0;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state24) begin
      reg_d0 = add_ln243_reg_2127;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd15)) begin
      reg_d0 = shl_ln264_fu_1153_p2;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd16)) begin
      reg_d0 = Hi_2_fu_166;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd18)) begin
      reg_d0 = Lo_fu_170;
    end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd3)) begin
      reg_d0 = pc_fu_886_p2;
    end else if((1'b1 == ap_CS_fsm_state2) & (icmp_ln128_fu_809_p2 == 1'd1)) begin
      reg_d0 = 32'd2147479548;
    end else if((1'b1 == ap_CS_fsm_state2) & (icmp_ln128_fu_809_p2 == 1'd0)) begin
      reg_d0 = 32'd0;
    end else begin
      reg_d0 = 'bx;
    end
  end


  always @(*) begin
    if(1'b1 == ap_CS_fsm_state25) begin
      reg_d1 = 32'd0;
    end else if((1'b1 == ap_CS_fsm_state22) & (tmp_1_reg_1796 == 6'd12)) begin
      reg_d1 = zext_ln247_1_fu_1616_p1;
    end else if((1'b1 == ap_CS_fsm_state22) & (tmp_1_reg_1796 == 6'd13)) begin
      reg_d1 = or_ln_fu_1594_p3;
    end else if((1'b1 == ap_CS_fsm_state22) & (tmp_1_reg_1796 == 6'd14)) begin
      reg_d1 = xor_ln253_fu_1564_p2;
    end else if(1'b1 == ap_CS_fsm_state21) begin
      reg_d1 = dmem_q0;
    end else if((1'b1 == ap_CS_fsm_state17) & (tmp_1_reg_1796 == 6'd10)) begin
      reg_d1 = zext_ln281_1_fu_1430_p1;
    end else if((1'b1 == ap_CS_fsm_state17) & (tmp_1_reg_1796 == 6'd11)) begin
      reg_d1 = zext_ln285_2_fu_1422_p1;
    end else if((funct_reg_1787 == 6'd33) & (1'b1 == ap_CS_fsm_state15)) begin
      reg_d1 = add_ln161_reg_2098;
    end else if((funct_reg_1787 == 6'd35) & (1'b1 == ap_CS_fsm_state15)) begin
      reg_d1 = sub_ln164_reg_2093;
    end else if((funct_reg_1787 == 6'd36) & (1'b1 == ap_CS_fsm_state10)) begin
      reg_d1 = and_ln188_fu_1301_p2;
    end else if((funct_reg_1787 == 6'd37) & (1'b1 == ap_CS_fsm_state10)) begin
      reg_d1 = or_ln191_fu_1290_p2;
    end else if((funct_reg_1787 == 6'd38) & (1'b1 == ap_CS_fsm_state10)) begin
      reg_d1 = xor_ln194_fu_1279_p2;
    end else if((funct_reg_1787 == 6'd0) & (1'b1 == ap_CS_fsm_state9)) begin
      reg_d1 = shl_ln197_reg_2068;
    end else if((funct_reg_1787 == 6'd2) & (1'b1 == ap_CS_fsm_state9)) begin
      reg_d1 = ashr_ln200_reg_2063;
    end else if((funct_reg_1787 == 6'd4) & (1'b1 == ap_CS_fsm_state9)) begin
      reg_d1 = shl_ln203_reg_2058;
    end else if((funct_reg_1787 == 6'd6) & (1'b1 == ap_CS_fsm_state9)) begin
      reg_d1 = ashr_ln206_reg_2053;
    end else if((funct_reg_1787 == 6'd42) & (1'b1 == ap_CS_fsm_state9)) begin
      reg_d1 = zext_ln210_2_fu_1255_p1;
    end else if((funct_reg_1787 == 6'd43) & (1'b1 == ap_CS_fsm_state9)) begin
      reg_d1 = zext_ln213_2_fu_1247_p1;
    end else begin
      reg_d1 = 'bx;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state24) | (1'b1 == ap_CS_fsm_state2) & (icmp_ln128_fu_809_p2 == 1'd1) | (1'b1 == ap_CS_fsm_state2) & (icmp_ln128_fu_809_p2 == 1'd0) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd15) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd3) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd16) | (1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd18)) begin
      reg_we0 = 1'b1;
    end else begin
      reg_we0 = 1'b0;
    end
  end


  always @(*) begin
    if((1'b1 == ap_CS_fsm_state21) | (1'b1 == ap_CS_fsm_state25) | (1'b1 == ap_CS_fsm_state22) & (tmp_1_reg_1796 == 6'd12) | (1'b1 == ap_CS_fsm_state22) & (tmp_1_reg_1796 == 6'd13) | (1'b1 == ap_CS_fsm_state22) & (tmp_1_reg_1796 == 6'd14) | (funct_reg_1787 == 6'd36) & (1'b1 == ap_CS_fsm_state10) | (funct_reg_1787 == 6'd37) & (1'b1 == ap_CS_fsm_state10) | (funct_reg_1787 == 6'd38) & (1'b1 == ap_CS_fsm_state10) | (1'b1 == ap_CS_fsm_state17) & (tmp_1_reg_1796 == 6'd10) | (1'b1 == ap_CS_fsm_state17) & (tmp_1_reg_1796 == 6'd11) | (funct_reg_1787 == 6'd33) & (1'b1 == ap_CS_fsm_state15) | (funct_reg_1787 == 6'd35) & (1'b1 == ap_CS_fsm_state15) | (funct_reg_1787 == 6'd0) & (1'b1 == ap_CS_fsm_state9) | (funct_reg_1787 == 6'd2) & (1'b1 == ap_CS_fsm_state9) | (funct_reg_1787 == 6'd4) & (1'b1 == ap_CS_fsm_state9) | (funct_reg_1787 == 6'd6) & (1'b1 == ap_CS_fsm_state9) | (funct_reg_1787 == 6'd42) & (1'b1 == ap_CS_fsm_state9) | (funct_reg_1787 == 6'd43) & (1'b1 == ap_CS_fsm_state9)) begin
      reg_we1 = 1'b1;
    end else begin
      reg_we1 = 1'b0;
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
        if((1'b1 == ap_CS_fsm_state2) & (icmp_ln128_fu_809_p2 == 1'd1)) begin
          ap_NS_fsm = ap_ST_fsm_state3;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state2;
        end
      end
      ap_ST_fsm_state3: begin
        if((1'b1 == ap_CS_fsm_state3) & (icmp_ln134_fu_826_p2 == 1'd1)) begin
          ap_NS_fsm = ap_ST_fsm_state5;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state4;
        end
      end
      ap_ST_fsm_state4: begin
        ap_NS_fsm = ap_ST_fsm_state3;
      end
      ap_ST_fsm_state5: begin
        ap_NS_fsm = ap_ST_fsm_state6;
      end
      ap_ST_fsm_state6: begin
        if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd9)) begin
          ap_NS_fsm = ap_ST_fsm_state23;
        end else if((1'b1 == ap_CS_fsm_state6) & ((tmp_1_fu_893_p4 == 6'd12) | ((tmp_1_fu_893_p4 == 6'd13) | (tmp_1_fu_893_p4 == 6'd14)))) begin
          ap_NS_fsm = ap_ST_fsm_state22;
        end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd35)) begin
          ap_NS_fsm = ap_ST_fsm_state20;
        end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd43)) begin
          ap_NS_fsm = ap_ST_fsm_state19;
        end else if((1'b1 == ap_CS_fsm_state6) & ((tmp_1_fu_893_p4 == 6'd1) | ((tmp_1_fu_893_p4 == 6'd5) | (tmp_1_fu_893_p4 == 6'd4)))) begin
          ap_NS_fsm = ap_ST_fsm_state18;
        end else if((1'b1 == ap_CS_fsm_state6) & ((tmp_1_fu_893_p4 == 6'd10) | (tmp_1_fu_893_p4 == 6'd11))) begin
          ap_NS_fsm = ap_ST_fsm_state16;
        end else if((1'b1 == ap_CS_fsm_state6) & ((tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd33) | (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd35))) begin
          ap_NS_fsm = ap_ST_fsm_state14;
        end else if((1'b1 == ap_CS_fsm_state6) & ((funct_fu_882_p1 == 6'd24) & (tmp_1_fu_893_p4 == 6'd0) | (funct_fu_882_p1 == 6'd25) & (tmp_1_fu_893_p4 == 6'd0))) begin
          ap_NS_fsm = ap_ST_fsm_state11;
        end else if((1'b1 == ap_CS_fsm_state6) & ((tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd37) | (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd38) | (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd36))) begin
          ap_NS_fsm = ap_ST_fsm_state10;
        end else if((1'b1 == ap_CS_fsm_state6) & ((tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd42) | (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd43) | (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd6) | (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd4) | (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd2) | (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd0))) begin
          ap_NS_fsm = ap_ST_fsm_state8;
        end else if((1'b1 == ap_CS_fsm_state6) & (tmp_1_fu_893_p4 == 6'd0) & (funct_fu_882_p1 == 6'd8)) begin
          ap_NS_fsm = ap_ST_fsm_state7;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state13;
        end
      end
      ap_ST_fsm_state7: begin
        ap_NS_fsm = ap_ST_fsm_state13;
      end
      ap_ST_fsm_state8: begin
        ap_NS_fsm = ap_ST_fsm_state9;
      end
      ap_ST_fsm_state9: begin
        ap_NS_fsm = ap_ST_fsm_state13;
      end
      ap_ST_fsm_state10: begin
        ap_NS_fsm = ap_ST_fsm_state13;
      end
      ap_ST_fsm_state11: begin
        ap_NS_fsm = ap_ST_fsm_state12;
      end
      ap_ST_fsm_state12: begin
        ap_NS_fsm = ap_ST_fsm_state13;
      end
      ap_ST_fsm_state13: begin
        ap_NS_fsm = ap_ST_fsm_state25;
      end
      ap_ST_fsm_state14: begin
        ap_NS_fsm = ap_ST_fsm_state15;
      end
      ap_ST_fsm_state15: begin
        ap_NS_fsm = ap_ST_fsm_state13;
      end
      ap_ST_fsm_state16: begin
        ap_NS_fsm = ap_ST_fsm_state17;
      end
      ap_ST_fsm_state17: begin
        ap_NS_fsm = ap_ST_fsm_state13;
      end
      ap_ST_fsm_state18: begin
        ap_NS_fsm = ap_ST_fsm_state13;
      end
      ap_ST_fsm_state19: begin
        ap_NS_fsm = ap_ST_fsm_state13;
      end
      ap_ST_fsm_state20: begin
        ap_NS_fsm = ap_ST_fsm_state21;
      end
      ap_ST_fsm_state21: begin
        ap_NS_fsm = ap_ST_fsm_state13;
      end
      ap_ST_fsm_state22: begin
        ap_NS_fsm = ap_ST_fsm_state13;
      end
      ap_ST_fsm_state23: begin
        ap_NS_fsm = ap_ST_fsm_state24;
      end
      ap_ST_fsm_state24: begin
        ap_NS_fsm = ap_ST_fsm_state13;
      end
      ap_ST_fsm_state25: begin
        if((1'b1 == ap_CS_fsm_state25) & (icmp_ln296_fu_1638_p2 == 1'd1)) begin
          ap_NS_fsm = ap_ST_fsm_state26;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state5;
        end
      end
      ap_ST_fsm_state26: begin
        if((1'b1 == ap_CS_fsm_state26) & (icmp_ln300_fu_1653_p2 == 1'd1)) begin
          ap_NS_fsm = ap_ST_fsm_state1;
        end else begin
          ap_NS_fsm = ap_ST_fsm_state27;
        end
      end
      ap_ST_fsm_state27: begin
        ap_NS_fsm = ap_ST_fsm_state26;
      end
      default: begin
        ap_NS_fsm = 'bx;
      end
    endcase
  end

  assign A_address0 = zext_ln136_fu_838_p1;
  assign Lo_1_fu_1354_p1 = (hilo_fu_1348_p2 & 32'd4294967295);
  assign Lo_2_fu_1326_p1 = (hilo_1_fu_1320_p2 & 32'd4294967295);
  assign add_ln161_fu_1390_p2 = reg_q1 + reg_q0;
  assign add_ln243_fu_1628_p2 = $signed(reg_q0) + $signed(sext_ln243_fu_1625_p1);
  assign add_ln257_fu_1537_p2 = trunc_ln257_1_reg_2018 + trunc_ln257_fu_1533_p1;
  assign add_ln260_fu_1513_p2 = trunc_ln260_1_reg_2008 + trunc_ln260_fu_1509_p1;
  assign address_fu_878_p1 = (imem_q0 & 16'd65535);
  assign and_ln188_fu_1301_p2 = reg_q1 & reg_q0;
  assign and_ln247_fu_1611_p2 = trunc_ln247_fu_1607_p1 & address_reg_1774;
  assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];
  assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];
  assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];
  assign ap_CS_fsm_state12 = ap_CS_fsm[32'd11];
  assign ap_CS_fsm_state13 = ap_CS_fsm[32'd12];
  assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];
  assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];
  assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];
  assign ap_CS_fsm_state17 = ap_CS_fsm[32'd16];
  assign ap_CS_fsm_state18 = ap_CS_fsm[32'd17];
  assign ap_CS_fsm_state19 = ap_CS_fsm[32'd18];
  assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];
  assign ap_CS_fsm_state20 = ap_CS_fsm[32'd19];
  assign ap_CS_fsm_state21 = ap_CS_fsm[32'd20];
  assign ap_CS_fsm_state22 = ap_CS_fsm[32'd21];
  assign ap_CS_fsm_state23 = ap_CS_fsm[32'd22];
  assign ap_CS_fsm_state24 = ap_CS_fsm[32'd23];
  assign ap_CS_fsm_state25 = ap_CS_fsm[32'd24];
  assign ap_CS_fsm_state26 = ap_CS_fsm[32'd25];
  assign ap_CS_fsm_state27 = ap_CS_fsm[32'd26];
  assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];
  assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];
  assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];
  assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];
  assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];
  assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];
  assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];
  assign ap_return = main_result_0_reg_742;
  assign ashr_ln200_fu_1237_p2 = $signed(reg_q0) >>> zext_ln152_reg_1806;
  assign ashr_ln206_fu_1225_p2 = $signed(reg_q0) >>> reg_q1;
  assign funct_fu_882_p1 = (imem_q0 & 6'd63);
  assign imem_q0_temp_16 = imem_q0 >> 1'd16;
  assign imem_q0_temp_17 = imem_q0_temp_16 & 5'd31;
  assign grp_fu_766_p4 = imem_q0_temp_17;
  assign imem_q0_temp_18 = imem_q0 >> 1'd21;
  assign imem_q0_temp_19 = imem_q0_temp_18 & 5'd31;
  assign grp_fu_776_p4 = imem_q0_temp_19;
  assign grp_fu_795_p2 = (reg_q0 == reg_q1)? 1'b1 : 1'b0;
  assign hilo_1_fu_1320_p0 = hilo_1_fu_1320_p00;
  assign hilo_1_fu_1320_p00 = reg_801;
  assign hilo_1_fu_1320_p1 = hilo_1_fu_1320_p10;
  assign hilo_1_fu_1320_p10 = reg_805;
  assign hilo_1_fu_1320_p2 = hilo_1_fu_1320_p0 * hilo_1_fu_1320_p1;
  assign hilo_fu_1348_p0 = sext_ln168_fu_1340_p0;
  assign hilo_fu_1348_p1 = sext_ln168_1_fu_1344_p0;
  assign hilo_fu_1348_p2 = $signed(hilo_fu_1348_p0) * $signed(hilo_fu_1348_p1);
  assign i_2_fu_832_p2 = i_1_reg_720 + 7'd1;
  assign i_fu_815_p2 = i_0_reg_709 + 6'd1;
  assign icmp_ln128_fu_809_p2 = (i_0_reg_709 == 6'd32)? 1'b1 : 1'b0;
  assign icmp_ln134_fu_826_p2 = (i_1_reg_720 == 7'd64)? 1'b1 : 1'b0;
  assign icmp_ln210_fu_1219_p2 = ($signed(reg_q0) < $signed(reg_q1))? 1'b1 : 1'b0;
  assign icmp_ln213_fu_1213_p2 = (reg_q0 < reg_q1)? 1'b1 : 1'b0;
  assign icmp_ln281_fu_1416_p2 = ($signed(reg_q0) < $signed(sext_ln281_fu_1413_p1))? 1'b1 : 1'b0;
  assign icmp_ln285_fu_1407_p2 = (reg_q0 < zext_ln285_1_fu_1404_p1)? 1'b1 : 1'b0;
  assign icmp_ln296_fu_1638_p2 = (pc_6_fu_162 == 32'd0)? 1'b1 : 1'b0;
  assign icmp_ln299_fu_1644_p2 = (n_inst_reg_1800 != 32'd611)? 1'b1 : 1'b0;
  assign icmp_ln300_fu_1653_p2 = (j_0_reg_752 == 4'd8)? 1'b1 : 1'b0;
  assign icmp_ln304_fu_1679_p2 = (dmem_q0 != sext_ln302_fu_1675_p1)? 1'b1 : 1'b0;
  assign imem_address0 = zext_ln143_fu_873_p1;
  assign j_fu_1659_p2 = j_0_reg_752 + 4'd1;
  assign main_result_fu_1689_p2 = zext_ln304_fu_1685_p1 + main_result_0_reg_742;
  assign n_inst_fu_903_p2 = 32'd1 + n_inst_0_reg_731;
  assign or_ln191_fu_1290_p2 = reg_q1 | reg_q0;
  assign or_ln250_fu_1579_p2 = trunc_ln250_fu_1575_p1 | address_reg_1774;
  assign tmp_fu_1584_p4_temp_20 = tmp_fu_1584_p4 << 1'd16;
  assign tmp_fu_1584_p4_temp_21 = tmp_fu_1584_p4_temp_20 | or_ln250_fu_1579_p2;
  assign or_ln_fu_1594_p3 = tmp_fu_1584_p4_temp_21;
  assign outData_address0 = zext_ln302_fu_1665_p1;
  assign pc_10_fu_1478_p2 = $signed(pc_6_load_reg_1761) + $signed(sext_ln273_fu_1474_p1);
  assign pc_11_fu_1457_p2 = $signed(pc_6_load_reg_1761) + $signed(sext_ln277_fu_1453_p1);
  assign trunc_ln227_fu_930_p1_temp_22 = trunc_ln227_fu_930_p1 << 1'd2;
  assign pc_1_fu_934_p3 = trunc_ln227_fu_930_p1_temp_22;
  assign trunc_ln232_fu_909_p1_temp_23 = trunc_ln232_fu_909_p1 << 1'd2;
  assign pc_2_fu_913_p3 = trunc_ln232_fu_909_p1_temp_23;
  assign pc_9_fu_1499_p2 = $signed(pc_6_load_reg_1761) + $signed(sext_ln269_fu_1495_p1);
  assign pc_fu_886_p2 = 32'd4 + pc_6_load_reg_1761;
  assign imem_q0_temp_24 = imem_q0 >> 1'd11;
  assign imem_q0_temp_25 = imem_q0_temp_24 & 5'd31;
  assign rd_fu_965_p4 = imem_q0_temp_25;
  assign sext_ln136_fu_858_p1 = $signed(A_q0);
  assign sext_ln168_1_fu_1344_p0 = reg_805;
  assign sext_ln168_fu_1340_p0 = reg_801;
  assign sext_ln243_fu_1625_p1 = address_reg_1774;
  assign sext_ln269_fu_1495_p1 = $signed(shl_ln1_fu_1488_p3);
  assign sext_ln273_fu_1474_p1 = $signed(shl_ln2_fu_1467_p3);
  assign sext_ln277_fu_1453_p1 = $signed(shl_ln3_fu_1446_p3);
  assign sext_ln281_fu_1413_p1 = address_reg_1774;
  assign sext_ln302_fu_1675_p1 = $signed(outData_q0);
  assign imem_q0_temp_26 = imem_q0 >> 1'd6;
  assign imem_q0_temp_27 = imem_q0_temp_26 & 5'd31;
  assign shamt_fu_951_p4 = imem_q0_temp_27;
  assign shl_ln197_fu_1242_p2 = reg_q0 << zext_ln152_reg_1806;
  assign address_reg_1774_temp_28 = address_reg_1774 << 1'd2;
  assign shl_ln1_fu_1488_p3 = address_reg_1774_temp_28;
  assign shl_ln203_fu_1231_p2 = reg_q0 << reg_q1;
  assign shl_ln264_fu_1153_p2 = imem_q0 << 32'd16;
  assign address_reg_1774_temp_29 = address_reg_1774 << 1'd2;
  assign shl_ln2_fu_1467_p3 = address_reg_1774_temp_29;
  assign address_reg_1774_temp_30 = address_reg_1774 << 1'd2;
  assign shl_ln3_fu_1446_p3 = address_reg_1774_temp_30;
  assign sub_ln164_fu_1384_p2 = reg_q0 - reg_q1;
  assign imem_q0_temp_31 = imem_q0 >> 1'd26;
  assign imem_q0_temp_32 = imem_q0_temp_31 & 6'd63;
  assign tmp_1_fu_893_p4 = imem_q0_temp_32;
  assign reg_q0_temp_33 = reg_q0 >> 32'd31;
  assign tmp_2_fu_1438_p3 = reg_q0_temp_33 & 1'd1;
  assign reg_q0_temp_34 = reg_q0 >> 1'd16;
  assign reg_q0_temp_35 = reg_q0_temp_34 & 16'd65535;
  assign tmp_fu_1584_p4 = reg_q0_temp_35;
  assign pc_6_fu_162_temp_36 = pc_6_fu_162 >> 1'd2;
  assign pc_6_fu_162_temp_37 = pc_6_fu_162_temp_36 & 6'd63;
  assign trunc_ln143_1_fu_863_p4 = pc_6_fu_162_temp_37;
  assign trunc_ln227_fu_930_p1 = (imem_q0 & 26'd67108863);
  assign trunc_ln232_fu_909_p1 = (imem_q0 & 26'd67108863);
  assign trunc_ln247_fu_1607_p1 = (reg_q0 & 16'd65535);
  assign trunc_ln250_fu_1575_p1 = (reg_q0 & 16'd65535);
  assign trunc_ln257_1_fu_1184_p1 = (imem_q0 & 8'd255);
  assign add_ln257_fu_1537_p2_temp_38 = add_ln257_fu_1537_p2 >> 1'd2;
  assign add_ln257_fu_1537_p2_temp_39 = add_ln257_fu_1537_p2_temp_38 & 6'd63;
  assign trunc_ln257_2_fu_1542_p4 = add_ln257_fu_1537_p2_temp_39;
  assign trunc_ln257_fu_1533_p1 = (reg_q0 & 8'd255);
  assign trunc_ln260_1_fu_1175_p1 = (imem_q0 & 8'd255);
  assign add_ln260_fu_1513_p2_temp_40 = add_ln260_fu_1513_p2 >> 1'd2;
  assign add_ln260_fu_1513_p2_temp_41 = add_ln260_fu_1513_p2_temp_40 & 6'd63;
  assign trunc_ln260_2_fu_1518_p4 = add_ln260_fu_1513_p2_temp_41;
  assign trunc_ln260_fu_1509_p1 = (reg_q1 & 8'd255);
  assign xor_ln194_fu_1279_p2 = reg_q1 ^ reg_q0;
  assign xor_ln253_fu_1564_p2 = zext_ln253_1_fu_1561_p1 ^ reg_q0;
  assign zext_ln130_fu_821_p1 = i_0_reg_709;
  assign zext_ln136_fu_838_p1 = i_1_reg_720;
  assign zext_ln143_fu_873_p1 = trunc_ln143_1_fu_863_p4;
  assign zext_ln152_fu_961_p1 = shamt_fu_951_p4;
  assign zext_ln161_1_fu_1113_p1 = grp_fu_766_p4;
  assign zext_ln161_2_fu_1400_p1 = rd_reg_1812;
  assign zext_ln161_fu_1108_p1 = grp_fu_776_p4;
  assign zext_ln164_1_fu_1103_p1 = grp_fu_766_p4;
  assign zext_ln164_2_fu_1396_p1 = rd_reg_1812;
  assign zext_ln164_fu_1098_p1 = grp_fu_776_p4;
  assign zext_ln168_1_fu_1093_p1 = grp_fu_766_p4;
  assign zext_ln168_fu_1088_p1 = grp_fu_776_p4;
  assign zext_ln173_2_fu_1083_p1 = grp_fu_766_p4;
  assign zext_ln173_fu_1078_p1 = grp_fu_776_p4;
  assign zext_ln181_fu_1073_p1 = rd_fu_965_p4;
  assign zext_ln184_fu_1064_p1 = rd_fu_965_p4;
  assign zext_ln188_1_fu_1055_p1 = grp_fu_766_p4;
  assign zext_ln188_2_fu_1308_p1 = rd_reg_1812;
  assign zext_ln188_fu_1050_p1 = grp_fu_776_p4;
  assign zext_ln191_1_fu_1045_p1 = grp_fu_766_p4;
  assign zext_ln191_2_fu_1297_p1 = rd_reg_1812;
  assign zext_ln191_fu_1040_p1 = grp_fu_776_p4;
  assign zext_ln194_1_fu_1035_p1 = grp_fu_766_p4;
  assign zext_ln194_2_fu_1286_p1 = rd_reg_1812;
  assign zext_ln194_fu_1030_p1 = grp_fu_776_p4;
  assign zext_ln197_1_fu_1275_p1 = rd_reg_1812;
  assign zext_ln197_fu_1025_p1 = grp_fu_766_p4;
  assign zext_ln200_1_fu_1271_p1 = rd_reg_1812;
  assign zext_ln200_fu_1020_p1 = grp_fu_766_p4;
  assign zext_ln203_1_fu_1015_p1 = grp_fu_776_p4;
  assign zext_ln203_2_fu_1267_p1 = rd_reg_1812;
  assign zext_ln203_fu_1010_p1 = grp_fu_766_p4;
  assign zext_ln206_1_fu_1005_p1 = grp_fu_776_p4;
  assign zext_ln206_2_fu_1263_p1 = rd_reg_1812;
  assign zext_ln206_fu_1000_p1 = grp_fu_766_p4;
  assign zext_ln210_1_fu_995_p1 = grp_fu_766_p4;
  assign zext_ln210_2_fu_1255_p1 = icmp_ln210_reg_2048;
  assign zext_ln210_3_fu_1259_p1 = rd_reg_1812;
  assign zext_ln210_fu_990_p1 = grp_fu_776_p4;
  assign zext_ln213_1_fu_985_p1 = grp_fu_766_p4;
  assign zext_ln213_2_fu_1247_p1 = icmp_ln213_reg_2043;
  assign zext_ln213_3_fu_1251_p1 = rd_reg_1812;
  assign zext_ln213_fu_980_p1 = grp_fu_776_p4;
  assign zext_ln217_fu_975_p1 = grp_fu_776_p4;
  assign zext_ln227_fu_942_p1 = pc_1_fu_934_p3;
  assign zext_ln232_fu_921_p1 = pc_2_fu_913_p3;
  assign zext_ln243_1_fu_1634_p1 = rt_reg_1952;
  assign zext_ln243_fu_1203_p1 = grp_fu_776_p4;
  assign zext_ln247_1_fu_1616_p1 = and_ln247_fu_1611_p2;
  assign zext_ln247_2_fu_1621_p1 = rt_reg_1952;
  assign zext_ln247_fu_1198_p1 = grp_fu_776_p4;
  assign zext_ln250_1_fu_1603_p1 = rt_reg_1952;
  assign zext_ln250_fu_1193_p1 = grp_fu_776_p4;
  assign zext_ln253_1_fu_1561_p1 = $unsigned(address_reg_1774);
  assign zext_ln253_2_fu_1571_p1 = rt_reg_1952;
  assign zext_ln253_fu_1188_p1 = grp_fu_776_p4;
  assign zext_ln257_1_fu_1552_p1 = trunc_ln257_2_fu_1542_p4;
  assign zext_ln257_2_fu_1557_p1 = rt_reg_1952;
  assign zext_ln257_fu_1179_p1 = grp_fu_776_p4;
  assign zext_ln260_1_fu_1170_p1 = grp_fu_776_p4;
  assign zext_ln260_2_fu_1528_p1 = trunc_ln260_2_fu_1518_p4;
  assign zext_ln260_fu_1165_p1 = grp_fu_766_p4;
  assign zext_ln264_fu_1160_p1 = grp_fu_766_p4;
  assign zext_ln268_1_fu_1148_p1 = grp_fu_766_p4;
  assign zext_ln268_fu_1143_p1 = grp_fu_776_p4;
  assign zext_ln272_1_fu_1138_p1 = grp_fu_766_p4;
  assign zext_ln272_fu_1133_p1 = grp_fu_776_p4;
  assign zext_ln276_fu_1128_p1 = grp_fu_776_p4;
  assign zext_ln281_1_fu_1430_p1 = icmp_ln281_reg_2108;
  assign zext_ln281_2_fu_1434_p1 = rt_reg_1952;
  assign zext_ln281_fu_1123_p1 = grp_fu_776_p4;
  assign zext_ln285_1_fu_1404_p1 = $unsigned(address_reg_1774);
  assign zext_ln285_2_fu_1422_p1 = icmp_ln285_reg_2103;
  assign zext_ln285_3_fu_1426_p1 = rt_reg_1952;
  assign zext_ln285_fu_1118_p1 = grp_fu_776_p4;
  assign zext_ln299_fu_1649_p1 = icmp_ln299_fu_1644_p2;
  assign zext_ln302_fu_1665_p1 = j_0_reg_752;
  assign zext_ln304_fu_1685_p1 = icmp_ln304_fu_1679_p2;

  always @(posedge ap_clk) begin
    zext_ln136_reg_1711 <= zext_ln136_reg_1711 & 63'd127;
    zext_ln152_reg_1806 <= zext_ln152_reg_1806 & 31'd31;
  end


endmodule

