// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "hls_macc.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic hls_macc::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic hls_macc::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<5> hls_macc::ap_ST_fsm_state1 = "1";
const sc_lv<5> hls_macc::ap_ST_fsm_state2 = "10";
const sc_lv<5> hls_macc::ap_ST_fsm_state3 = "100";
const sc_lv<5> hls_macc::ap_ST_fsm_state4 = "1000";
const sc_lv<5> hls_macc::ap_ST_fsm_state5 = "10000";
const sc_lv<32> hls_macc::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> hls_macc::ap_const_lv32_1 = "1";
const sc_lv<32> hls_macc::ap_const_lv32_2 = "10";
const sc_lv<32> hls_macc::ap_const_lv32_3 = "11";
const sc_lv<32> hls_macc::ap_const_lv32_4 = "100";
const sc_lv<32> hls_macc::ap_const_lv32_1F = "11111";
const bool hls_macc::ap_const_boolean_1 = true;

hls_macc::hls_macc(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add13_fu_215_p0);
    sensitive << ( in4 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_add13_fu_215_p2);
    sensitive << ( add_ln42_reg_381 );
    sensitive << ( add13_fu_215_p0 );

    SC_METHOD(thread_add14_fu_219_p2);
    sensitive << ( mult13_reg_356 );
    sensitive << ( tmp7_reg_386 );

    SC_METHOD(thread_add2_fu_199_p0);
    sensitive << ( in4 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_add2_fu_199_p2);
    sensitive << ( mul_ln24_reg_361 );
    sensitive << ( add2_fu_199_p0 );

    SC_METHOD(thread_add3_fu_125_p0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( in7 );

    SC_METHOD(thread_add3_fu_125_p1);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( in4 );

    SC_METHOD(thread_add3_fu_125_p2);
    sensitive << ( add3_fu_125_p0 );
    sensitive << ( add3_fu_125_p1 );

    SC_METHOD(thread_add5_fu_131_p0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( in10 );

    SC_METHOD(thread_add5_fu_131_p1);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( in10 );

    SC_METHOD(thread_add5_fu_131_p2);
    sensitive << ( add5_fu_131_p0 );
    sensitive << ( add5_fu_131_p1 );

    SC_METHOD(thread_add6_fu_203_p0);
    sensitive << ( in1 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_add6_fu_203_p2);
    sensitive << ( add_ln30_reg_366 );
    sensitive << ( add6_fu_203_p0 );

    SC_METHOD(thread_add9_fu_207_p2);
    sensitive << ( mult7_reg_346 );
    sensitive << ( tmp3_reg_371 );

    SC_METHOD(thread_add_ln30_fu_177_p2);
    sensitive << ( in2 );
    sensitive << ( mult2_reg_326 );

    SC_METHOD(thread_add_ln40_1_fu_238_p2);
    sensitive << ( tmp5_reg_407 );
    sensitive << ( shf1_fu_233_p2 );

    SC_METHOD(thread_add_ln40_fu_243_p2);
    sensitive << ( add2_reg_391 );
    sensitive << ( add_ln40_1_fu_238_p2 );

    SC_METHOD(thread_add_ln42_fu_190_p0);
    sensitive << ( in8 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_add_ln42_fu_190_p2);
    sensitive << ( mult10_reg_331 );
    sensitive << ( add_ln42_fu_190_p0 );

    SC_METHOD(thread_add_ln49_1_fu_252_p2);
    sensitive << ( add13_reg_412 );
    sensitive << ( shf2_fu_249_p1 );

    SC_METHOD(thread_add_ln49_fu_257_p2);
    sensitive << ( mult11_reg_351 );
    sensitive << ( add_ln49_1_fu_252_p2 );

    SC_METHOD(thread_add_ln51_fu_263_p2);
    sensitive << ( add6_reg_396 );
    sensitive << ( add_ln40_fu_243_p2 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( add_ln49_fu_257_p2 );
    sensitive << ( add_ln51_fu_263_p2 );

    SC_METHOD(thread_mul_ln24_fu_172_p0);
    sensitive << ( in5 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_mul_ln24_fu_172_p1);
    sensitive << ( in4 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_mul_ln24_fu_172_p2);
    sensitive << ( mul_ln24_fu_172_p0 );
    sensitive << ( mul_ln24_fu_172_p1 );

    SC_METHOD(thread_mult10_fu_143_p0);
    sensitive << ( in9 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_mult10_fu_143_p1);
    sensitive << ( in6 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_mult10_fu_143_p2);
    sensitive << ( mult10_fu_143_p0 );
    sensitive << ( mult10_fu_143_p1 );

    SC_METHOD(thread_mult11_fu_162_p0);
    sensitive << ( in8 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_mult11_fu_162_p1);
    sensitive << ( in6 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_mult11_fu_162_p2);
    sensitive << ( mult11_fu_162_p0 );
    sensitive << ( mult11_fu_162_p1 );

    SC_METHOD(thread_mult13_fu_167_p0);
    sensitive << ( in8 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_mult13_fu_167_p1);
    sensitive << ( in7 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_mult13_fu_167_p2);
    sensitive << ( mult13_fu_167_p0 );
    sensitive << ( mult13_fu_167_p1 );

    SC_METHOD(thread_mult2_fu_137_p0);
    sensitive << ( in3 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_mult2_fu_137_p1);
    sensitive << ( in1 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_mult2_fu_137_p2);
    sensitive << ( mult2_fu_137_p0 );
    sensitive << ( mult2_fu_137_p1 );

    SC_METHOD(thread_mult7_fu_158_p0);
    sensitive << ( in6 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_mult7_fu_158_p1);
    sensitive << ( in3 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_mult7_fu_158_p2);
    sensitive << ( mult7_fu_158_p0 );
    sensitive << ( mult7_fu_158_p1 );

    SC_METHOD(thread_out1);
    sensitive << ( add6_reg_396 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_out1_ap_vld);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_out2);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( add_ln40_fu_243_p2 );

    SC_METHOD(thread_out2_ap_vld);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_out3);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( add_ln49_fu_257_p2 );

    SC_METHOD(thread_out3_ap_vld);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_shf1_fu_233_p2);
    sensitive << ( add9_reg_402 );

    SC_METHOD(thread_shf2_fu_249_p1);
    sensitive << ( trunc_ln_reg_417 );

    SC_METHOD(thread_tmp3_fu_181_p0);
    sensitive << ( in5 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_tmp3_fu_181_p2);
    sensitive << ( tmp_reg_336 );
    sensitive << ( tmp3_fu_181_p0 );

    SC_METHOD(thread_tmp4_fu_186_p0);
    sensitive << ( in7 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_tmp4_fu_186_p2);
    sensitive << ( in2 );
    sensitive << ( tmp4_fu_186_p0 );

    SC_METHOD(thread_tmp5_fu_211_p0);
    sensitive << ( in3 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_tmp5_fu_211_p2);
    sensitive << ( tmp4_reg_376 );
    sensitive << ( tmp5_fu_211_p0 );

    SC_METHOD(thread_tmp6_fu_154_p0);
    sensitive << ( in7 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_tmp6_fu_154_p2);
    sensitive << ( add5_reg_293 );
    sensitive << ( tmp6_fu_154_p0 );

    SC_METHOD(thread_tmp7_fu_195_p0);
    sensitive << ( in9 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_tmp7_fu_195_p2);
    sensitive << ( tmp6_reg_341 );
    sensitive << ( tmp7_fu_195_p0 );

    SC_METHOD(thread_tmp_fu_149_p2);
    sensitive << ( in2 );
    sensitive << ( add3_reg_288 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "00001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "hls_macc_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, in1, "(port)in1");
    sc_trace(mVcdFile, in2, "(port)in2");
    sc_trace(mVcdFile, in3, "(port)in3");
    sc_trace(mVcdFile, in4, "(port)in4");
    sc_trace(mVcdFile, in5, "(port)in5");
    sc_trace(mVcdFile, in6, "(port)in6");
    sc_trace(mVcdFile, in7, "(port)in7");
    sc_trace(mVcdFile, in8, "(port)in8");
    sc_trace(mVcdFile, in9, "(port)in9");
    sc_trace(mVcdFile, in10, "(port)in10");
    sc_trace(mVcdFile, out1, "(port)out1");
    sc_trace(mVcdFile, out1_ap_vld, "(port)out1_ap_vld");
    sc_trace(mVcdFile, out2, "(port)out2");
    sc_trace(mVcdFile, out2_ap_vld, "(port)out2_ap_vld");
    sc_trace(mVcdFile, out3, "(port)out3");
    sc_trace(mVcdFile, out3_ap_vld, "(port)out3_ap_vld");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, add3_fu_125_p2, "add3_fu_125_p2");
    sc_trace(mVcdFile, add3_reg_288, "add3_reg_288");
    sc_trace(mVcdFile, add5_fu_131_p2, "add5_fu_131_p2");
    sc_trace(mVcdFile, add5_reg_293, "add5_reg_293");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, mult2_fu_137_p2, "mult2_fu_137_p2");
    sc_trace(mVcdFile, mult2_reg_326, "mult2_reg_326");
    sc_trace(mVcdFile, mult10_fu_143_p2, "mult10_fu_143_p2");
    sc_trace(mVcdFile, mult10_reg_331, "mult10_reg_331");
    sc_trace(mVcdFile, tmp_fu_149_p2, "tmp_fu_149_p2");
    sc_trace(mVcdFile, tmp_reg_336, "tmp_reg_336");
    sc_trace(mVcdFile, tmp6_fu_154_p2, "tmp6_fu_154_p2");
    sc_trace(mVcdFile, tmp6_reg_341, "tmp6_reg_341");
    sc_trace(mVcdFile, mult7_fu_158_p2, "mult7_fu_158_p2");
    sc_trace(mVcdFile, mult7_reg_346, "mult7_reg_346");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, mult11_fu_162_p2, "mult11_fu_162_p2");
    sc_trace(mVcdFile, mult11_reg_351, "mult11_reg_351");
    sc_trace(mVcdFile, mult13_fu_167_p2, "mult13_fu_167_p2");
    sc_trace(mVcdFile, mult13_reg_356, "mult13_reg_356");
    sc_trace(mVcdFile, mul_ln24_fu_172_p2, "mul_ln24_fu_172_p2");
    sc_trace(mVcdFile, mul_ln24_reg_361, "mul_ln24_reg_361");
    sc_trace(mVcdFile, add_ln30_fu_177_p2, "add_ln30_fu_177_p2");
    sc_trace(mVcdFile, add_ln30_reg_366, "add_ln30_reg_366");
    sc_trace(mVcdFile, tmp3_fu_181_p2, "tmp3_fu_181_p2");
    sc_trace(mVcdFile, tmp3_reg_371, "tmp3_reg_371");
    sc_trace(mVcdFile, tmp4_fu_186_p2, "tmp4_fu_186_p2");
    sc_trace(mVcdFile, tmp4_reg_376, "tmp4_reg_376");
    sc_trace(mVcdFile, add_ln42_fu_190_p2, "add_ln42_fu_190_p2");
    sc_trace(mVcdFile, add_ln42_reg_381, "add_ln42_reg_381");
    sc_trace(mVcdFile, tmp7_fu_195_p2, "tmp7_fu_195_p2");
    sc_trace(mVcdFile, tmp7_reg_386, "tmp7_reg_386");
    sc_trace(mVcdFile, add2_fu_199_p2, "add2_fu_199_p2");
    sc_trace(mVcdFile, add2_reg_391, "add2_reg_391");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, add6_fu_203_p2, "add6_fu_203_p2");
    sc_trace(mVcdFile, add6_reg_396, "add6_reg_396");
    sc_trace(mVcdFile, add9_fu_207_p2, "add9_fu_207_p2");
    sc_trace(mVcdFile, add9_reg_402, "add9_reg_402");
    sc_trace(mVcdFile, tmp5_fu_211_p2, "tmp5_fu_211_p2");
    sc_trace(mVcdFile, tmp5_reg_407, "tmp5_reg_407");
    sc_trace(mVcdFile, add13_fu_215_p2, "add13_fu_215_p2");
    sc_trace(mVcdFile, add13_reg_412, "add13_reg_412");
    sc_trace(mVcdFile, trunc_ln_reg_417, "trunc_ln_reg_417");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, add_ln40_fu_243_p2, "add_ln40_fu_243_p2");
    sc_trace(mVcdFile, add_ln49_fu_257_p2, "add_ln49_fu_257_p2");
    sc_trace(mVcdFile, add3_fu_125_p0, "add3_fu_125_p0");
    sc_trace(mVcdFile, add3_fu_125_p1, "add3_fu_125_p1");
    sc_trace(mVcdFile, add5_fu_131_p0, "add5_fu_131_p0");
    sc_trace(mVcdFile, add5_fu_131_p1, "add5_fu_131_p1");
    sc_trace(mVcdFile, mult2_fu_137_p0, "mult2_fu_137_p0");
    sc_trace(mVcdFile, mult2_fu_137_p1, "mult2_fu_137_p1");
    sc_trace(mVcdFile, mult10_fu_143_p0, "mult10_fu_143_p0");
    sc_trace(mVcdFile, mult10_fu_143_p1, "mult10_fu_143_p1");
    sc_trace(mVcdFile, tmp6_fu_154_p0, "tmp6_fu_154_p0");
    sc_trace(mVcdFile, mult7_fu_158_p0, "mult7_fu_158_p0");
    sc_trace(mVcdFile, mult7_fu_158_p1, "mult7_fu_158_p1");
    sc_trace(mVcdFile, mult11_fu_162_p0, "mult11_fu_162_p0");
    sc_trace(mVcdFile, mult11_fu_162_p1, "mult11_fu_162_p1");
    sc_trace(mVcdFile, mult13_fu_167_p0, "mult13_fu_167_p0");
    sc_trace(mVcdFile, mult13_fu_167_p1, "mult13_fu_167_p1");
    sc_trace(mVcdFile, mul_ln24_fu_172_p0, "mul_ln24_fu_172_p0");
    sc_trace(mVcdFile, mul_ln24_fu_172_p1, "mul_ln24_fu_172_p1");
    sc_trace(mVcdFile, tmp3_fu_181_p0, "tmp3_fu_181_p0");
    sc_trace(mVcdFile, tmp4_fu_186_p0, "tmp4_fu_186_p0");
    sc_trace(mVcdFile, add_ln42_fu_190_p0, "add_ln42_fu_190_p0");
    sc_trace(mVcdFile, tmp7_fu_195_p0, "tmp7_fu_195_p0");
    sc_trace(mVcdFile, add2_fu_199_p0, "add2_fu_199_p0");
    sc_trace(mVcdFile, add6_fu_203_p0, "add6_fu_203_p0");
    sc_trace(mVcdFile, tmp5_fu_211_p0, "tmp5_fu_211_p0");
    sc_trace(mVcdFile, add13_fu_215_p0, "add13_fu_215_p0");
    sc_trace(mVcdFile, add14_fu_219_p2, "add14_fu_219_p2");
    sc_trace(mVcdFile, shf1_fu_233_p2, "shf1_fu_233_p2");
    sc_trace(mVcdFile, add_ln40_1_fu_238_p2, "add_ln40_1_fu_238_p2");
    sc_trace(mVcdFile, shf2_fu_249_p1, "shf2_fu_249_p1");
    sc_trace(mVcdFile, add_ln49_1_fu_252_p2, "add_ln49_1_fu_252_p2");
    sc_trace(mVcdFile, add_ln51_fu_263_p2, "add_ln51_fu_263_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("hls_macc.hdltvin.dat");
    mHdltvoutHandle.open("hls_macc.hdltvout.dat");
}

hls_macc::~hls_macc() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void hls_macc::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        add13_reg_412 = add13_fu_215_p2.read();
        add2_reg_391 = add2_fu_199_p2.read();
        add6_reg_396 = add6_fu_203_p2.read();
        add9_reg_402 = add9_fu_207_p2.read();
        tmp5_reg_407 = tmp5_fu_211_p2.read();
        trunc_ln_reg_417 = add14_fu_219_p2.read().range(31, 3);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        add3_reg_288 = add3_fu_125_p2.read();
        add5_reg_293 = add5_fu_131_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        add_ln30_reg_366 = add_ln30_fu_177_p2.read();
        add_ln42_reg_381 = add_ln42_fu_190_p2.read();
        mul_ln24_reg_361 = mul_ln24_fu_172_p2.read();
        mult11_reg_351 = mult11_fu_162_p2.read();
        mult13_reg_356 = mult13_fu_167_p2.read();
        mult7_reg_346 = mult7_fu_158_p2.read();
        tmp3_reg_371 = tmp3_fu_181_p2.read();
        tmp4_reg_376 = tmp4_fu_186_p2.read();
        tmp7_reg_386 = tmp7_fu_195_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        mult10_reg_331 = mult10_fu_143_p2.read();
        mult2_reg_326 = mult2_fu_137_p2.read();
        tmp6_reg_341 = tmp6_fu_154_p2.read();
        tmp_reg_336 = tmp_fu_149_p2.read();
    }
}

void hls_macc::thread_add13_fu_215_p0() {
    add13_fu_215_p0 = in4.read();
}

void hls_macc::thread_add13_fu_215_p2() {
    add13_fu_215_p2 = (!add13_fu_215_p0.read().is_01() || !add_ln42_reg_381.read().is_01())? sc_lv<32>(): sc_bigint<32>(add13_fu_215_p0.read()) * sc_bigint<32>(add_ln42_reg_381.read());
}

void hls_macc::thread_add14_fu_219_p2() {
    add14_fu_219_p2 = (!tmp7_reg_386.read().is_01() || !mult13_reg_356.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp7_reg_386.read()) + sc_biguint<32>(mult13_reg_356.read()));
}

void hls_macc::thread_add2_fu_199_p0() {
    add2_fu_199_p0 = in4.read();
}

void hls_macc::thread_add2_fu_199_p2() {
    add2_fu_199_p2 = (!add2_fu_199_p0.read().is_01() || !mul_ln24_reg_361.read().is_01())? sc_lv<32>(): sc_bigint<32>(add2_fu_199_p0.read()) * sc_bigint<32>(mul_ln24_reg_361.read());
}

void hls_macc::thread_add3_fu_125_p0() {
    add3_fu_125_p0 = in7.read();
}

void hls_macc::thread_add3_fu_125_p1() {
    add3_fu_125_p1 = in4.read();
}

void hls_macc::thread_add3_fu_125_p2() {
    add3_fu_125_p2 = (!add3_fu_125_p0.read().is_01() || !add3_fu_125_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(add3_fu_125_p0.read()) * sc_bigint<32>(add3_fu_125_p1.read());
}

void hls_macc::thread_add5_fu_131_p0() {
    add5_fu_131_p0 = in10.read();
}

void hls_macc::thread_add5_fu_131_p1() {
    add5_fu_131_p1 = in10.read();
}

void hls_macc::thread_add5_fu_131_p2() {
    add5_fu_131_p2 = (!add5_fu_131_p0.read().is_01() || !add5_fu_131_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(add5_fu_131_p0.read()) * sc_bigint<32>(add5_fu_131_p1.read());
}

void hls_macc::thread_add6_fu_203_p0() {
    add6_fu_203_p0 = in1.read();
}

void hls_macc::thread_add6_fu_203_p2() {
    add6_fu_203_p2 = (!add6_fu_203_p0.read().is_01() || !add_ln30_reg_366.read().is_01())? sc_lv<32>(): sc_bigint<32>(add6_fu_203_p0.read()) * sc_bigint<32>(add_ln30_reg_366.read());
}

void hls_macc::thread_add9_fu_207_p2() {
    add9_fu_207_p2 = (!tmp3_reg_371.read().is_01() || !mult7_reg_346.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp3_reg_371.read()) + sc_biguint<32>(mult7_reg_346.read()));
}

void hls_macc::thread_add_ln30_fu_177_p2() {
    add_ln30_fu_177_p2 = (!in2.read().is_01() || !mult2_reg_326.read().is_01())? sc_lv<32>(): (sc_biguint<32>(in2.read()) + sc_biguint<32>(mult2_reg_326.read()));
}

void hls_macc::thread_add_ln40_1_fu_238_p2() {
    add_ln40_1_fu_238_p2 = (!shf1_fu_233_p2.read().is_01() || !tmp5_reg_407.read().is_01())? sc_lv<32>(): (sc_biguint<32>(shf1_fu_233_p2.read()) + sc_biguint<32>(tmp5_reg_407.read()));
}

void hls_macc::thread_add_ln40_fu_243_p2() {
    add_ln40_fu_243_p2 = (!add2_reg_391.read().is_01() || !add_ln40_1_fu_238_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add2_reg_391.read()) + sc_biguint<32>(add_ln40_1_fu_238_p2.read()));
}

void hls_macc::thread_add_ln42_fu_190_p0() {
    add_ln42_fu_190_p0 = in8.read();
}

void hls_macc::thread_add_ln42_fu_190_p2() {
    add_ln42_fu_190_p2 = (!add_ln42_fu_190_p0.read().is_01() || !mult10_reg_331.read().is_01())? sc_lv<32>(): (sc_bigint<32>(add_ln42_fu_190_p0.read()) + sc_biguint<32>(mult10_reg_331.read()));
}

void hls_macc::thread_add_ln49_1_fu_252_p2() {
    add_ln49_1_fu_252_p2 = (!shf2_fu_249_p1.read().is_01() || !add13_reg_412.read().is_01())? sc_lv<32>(): (sc_bigint<32>(shf2_fu_249_p1.read()) + sc_biguint<32>(add13_reg_412.read()));
}

void hls_macc::thread_add_ln49_fu_257_p2() {
    add_ln49_fu_257_p2 = (!mult11_reg_351.read().is_01() || !add_ln49_1_fu_252_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(mult11_reg_351.read()) + sc_biguint<32>(add_ln49_1_fu_252_p2.read()));
}

void hls_macc::thread_add_ln51_fu_263_p2() {
    add_ln51_fu_263_p2 = (!add_ln40_fu_243_p2.read().is_01() || !add6_reg_396.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln40_fu_243_p2.read()) + sc_biguint<32>(add6_reg_396.read()));
}

void hls_macc::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void hls_macc::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void hls_macc::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void hls_macc::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void hls_macc::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void hls_macc::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void hls_macc::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void hls_macc::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void hls_macc::thread_ap_return() {
    ap_return = (!add_ln49_fu_257_p2.read().is_01() || !add_ln51_fu_263_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln49_fu_257_p2.read()) + sc_biguint<32>(add_ln51_fu_263_p2.read()));
}

void hls_macc::thread_mul_ln24_fu_172_p0() {
    mul_ln24_fu_172_p0 = in5.read();
}

void hls_macc::thread_mul_ln24_fu_172_p1() {
    mul_ln24_fu_172_p1 = in4.read();
}

void hls_macc::thread_mul_ln24_fu_172_p2() {
    mul_ln24_fu_172_p2 = (!mul_ln24_fu_172_p0.read().is_01() || !mul_ln24_fu_172_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(mul_ln24_fu_172_p0.read()) * sc_bigint<32>(mul_ln24_fu_172_p1.read());
}

void hls_macc::thread_mult10_fu_143_p0() {
    mult10_fu_143_p0 = in9.read();
}

void hls_macc::thread_mult10_fu_143_p1() {
    mult10_fu_143_p1 = in6.read();
}

void hls_macc::thread_mult10_fu_143_p2() {
    mult10_fu_143_p2 = (!mult10_fu_143_p0.read().is_01() || !mult10_fu_143_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(mult10_fu_143_p0.read()) * sc_bigint<32>(mult10_fu_143_p1.read());
}

void hls_macc::thread_mult11_fu_162_p0() {
    mult11_fu_162_p0 = in8.read();
}

void hls_macc::thread_mult11_fu_162_p1() {
    mult11_fu_162_p1 = in6.read();
}

void hls_macc::thread_mult11_fu_162_p2() {
    mult11_fu_162_p2 = (!mult11_fu_162_p0.read().is_01() || !mult11_fu_162_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(mult11_fu_162_p0.read()) * sc_bigint<32>(mult11_fu_162_p1.read());
}

void hls_macc::thread_mult13_fu_167_p0() {
    mult13_fu_167_p0 = in8.read();
}

void hls_macc::thread_mult13_fu_167_p1() {
    mult13_fu_167_p1 = in7.read();
}

void hls_macc::thread_mult13_fu_167_p2() {
    mult13_fu_167_p2 = (!mult13_fu_167_p0.read().is_01() || !mult13_fu_167_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(mult13_fu_167_p0.read()) * sc_bigint<32>(mult13_fu_167_p1.read());
}

void hls_macc::thread_mult2_fu_137_p0() {
    mult2_fu_137_p0 = in3.read();
}

void hls_macc::thread_mult2_fu_137_p1() {
    mult2_fu_137_p1 = in1.read();
}

void hls_macc::thread_mult2_fu_137_p2() {
    mult2_fu_137_p2 = (!mult2_fu_137_p0.read().is_01() || !mult2_fu_137_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(mult2_fu_137_p0.read()) * sc_bigint<32>(mult2_fu_137_p1.read());
}

void hls_macc::thread_mult7_fu_158_p0() {
    mult7_fu_158_p0 = in6.read();
}

void hls_macc::thread_mult7_fu_158_p1() {
    mult7_fu_158_p1 = in3.read();
}

void hls_macc::thread_mult7_fu_158_p2() {
    mult7_fu_158_p2 = (!mult7_fu_158_p0.read().is_01() || !mult7_fu_158_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(mult7_fu_158_p0.read()) * sc_bigint<32>(mult7_fu_158_p1.read());
}

void hls_macc::thread_out1() {
    out1 = add6_reg_396.read();
}

void hls_macc::thread_out1_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        out1_ap_vld = ap_const_logic_1;
    } else {
        out1_ap_vld = ap_const_logic_0;
    }
}

void hls_macc::thread_out2() {
    out2 = add_ln40_fu_243_p2.read();
}

void hls_macc::thread_out2_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        out2_ap_vld = ap_const_logic_1;
    } else {
        out2_ap_vld = ap_const_logic_0;
    }
}

void hls_macc::thread_out3() {
    out3 = add_ln49_fu_257_p2.read();
}

void hls_macc::thread_out3_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        out3_ap_vld = ap_const_logic_1;
    } else {
        out3_ap_vld = ap_const_logic_0;
    }
}

void hls_macc::thread_shf1_fu_233_p2() {
    shf1_fu_233_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): add9_reg_402.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void hls_macc::thread_shf2_fu_249_p1() {
    shf2_fu_249_p1 = esl_sext<32,29>(trunc_ln_reg_417.read());
}

void hls_macc::thread_tmp3_fu_181_p0() {
    tmp3_fu_181_p0 = in5.read();
}

void hls_macc::thread_tmp3_fu_181_p2() {
    tmp3_fu_181_p2 = (!tmp3_fu_181_p0.read().is_01() || !tmp_reg_336.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp3_fu_181_p0.read()) * sc_bigint<32>(tmp_reg_336.read());
}

void hls_macc::thread_tmp4_fu_186_p0() {
    tmp4_fu_186_p0 = in7.read();
}

void hls_macc::thread_tmp4_fu_186_p2() {
    tmp4_fu_186_p2 = (!tmp4_fu_186_p0.read().is_01() || !in2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp4_fu_186_p0.read()) + sc_biguint<32>(in2.read()));
}

void hls_macc::thread_tmp5_fu_211_p0() {
    tmp5_fu_211_p0 = in3.read();
}

void hls_macc::thread_tmp5_fu_211_p2() {
    tmp5_fu_211_p2 = (!tmp5_fu_211_p0.read().is_01() || !tmp4_reg_376.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp5_fu_211_p0.read()) * sc_bigint<32>(tmp4_reg_376.read());
}

void hls_macc::thread_tmp6_fu_154_p0() {
    tmp6_fu_154_p0 = in7.read();
}

void hls_macc::thread_tmp6_fu_154_p2() {
    tmp6_fu_154_p2 = (!tmp6_fu_154_p0.read().is_01() || !add5_reg_293.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp6_fu_154_p0.read()) + sc_biguint<32>(add5_reg_293.read()));
}

void hls_macc::thread_tmp7_fu_195_p0() {
    tmp7_fu_195_p0 = in9.read();
}

void hls_macc::thread_tmp7_fu_195_p2() {
    tmp7_fu_195_p2 = (!tmp7_fu_195_p0.read().is_01() || !tmp6_reg_341.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp7_fu_195_p0.read()) * sc_bigint<32>(tmp6_reg_341.read());
}

void hls_macc::thread_tmp_fu_149_p2() {
    tmp_fu_149_p2 = (!in2.read().is_01() || !add3_reg_288.read().is_01())? sc_lv<32>(): (sc_biguint<32>(in2.read()) + sc_biguint<32>(add3_reg_288.read()));
}

void hls_macc::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXXXX";
            break;
    }
}

void hls_macc::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in1\" :  \"" << in1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in2\" :  \"" << in2.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in3\" :  \"" << in3.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in4\" :  \"" << in4.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in5\" :  \"" << in5.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in6\" :  \"" << in6.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in7\" :  \"" << in7.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in8\" :  \"" << in8.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in9\" :  \"" << in9.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in10\" :  \"" << in10.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out1\" :  \"" << out1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out1_ap_vld\" :  \"" << out1_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out2\" :  \"" << out2.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out2_ap_vld\" :  \"" << out2_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out3\" :  \"" << out3.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out3_ap_vld\" :  \"" << out3_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_return\" :  \"" << ap_return.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

