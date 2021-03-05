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
const sc_lv<7> hls_macc::ap_ST_fsm_state1 = "1";
const sc_lv<7> hls_macc::ap_ST_fsm_state2 = "10";
const sc_lv<7> hls_macc::ap_ST_fsm_state3 = "100";
const sc_lv<7> hls_macc::ap_ST_fsm_state4 = "1000";
const sc_lv<7> hls_macc::ap_ST_fsm_state5 = "10000";
const sc_lv<7> hls_macc::ap_ST_fsm_state6 = "100000";
const sc_lv<7> hls_macc::ap_ST_fsm_state7 = "1000000";
const sc_lv<32> hls_macc::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> hls_macc::ap_const_lv32_1 = "1";
const sc_lv<32> hls_macc::ap_const_lv32_2 = "10";
const sc_lv<32> hls_macc::ap_const_lv32_3 = "11";
const sc_lv<32> hls_macc::ap_const_lv32_4 = "100";
const sc_lv<32> hls_macc::ap_const_lv32_5 = "101";
const sc_lv<32> hls_macc::ap_const_lv32_6 = "110";
const bool hls_macc::ap_const_boolean_1 = true;

hls_macc::hls_macc(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln25_fu_163_p2);
    sensitive << ( i5 );
    sensitive << ( op6_reg_301 );

    SC_METHOD(thread_add_ln27_fu_173_p2);
    sensitive << ( i6 );
    sensitive << ( op8_reg_311 );

    SC_METHOD(thread_add_ln41_1_fu_241_p2);
    sensitive << ( op2_reg_369 );
    sensitive << ( op21_reg_374 );

    SC_METHOD(thread_add_ln41_fu_237_p2);
    sensitive << ( op1_reg_364 );
    sensitive << ( op22_reg_379 );

    SC_METHOD(thread_add_ln46_1_fu_269_p2);
    sensitive << ( op14_reg_324 );
    sensitive << ( op27_reg_394 );

    SC_METHOD(thread_add_ln46_fu_264_p2);
    sensitive << ( op13_reg_316 );
    sensitive << ( op28_fu_259_p2 );

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

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_ap_return1);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( add_ln46_1_fu_269_p2 );
    sensitive << ( add_ln46_fu_264_p2 );

    SC_METHOD(thread_ap_return1_ap_vld);
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_mul_ln33_1_fu_195_p1);
    sensitive << ( G2 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_mul_ln33_1_fu_195_p2);
    sensitive << ( op13_reg_316 );
    sensitive << ( mul_ln33_1_fu_195_p1 );

    SC_METHOD(thread_mul_ln33_fu_191_p1);
    sensitive << ( G1 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_mul_ln33_fu_191_p2);
    sensitive << ( op14_reg_324 );
    sensitive << ( mul_ln33_fu_191_p1 );

    SC_METHOD(thread_o1);
    sensitive << ( op13_reg_316 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_o1_ap_vld);
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_o2);
    sensitive << ( op14_reg_324 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_o2_ap_vld);
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_o3);
    sensitive << ( op27_reg_394 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_o3_ap_vld);
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_o4);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( op28_fu_259_p2 );

    SC_METHOD(thread_o4_ap_vld);
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_op13_fu_168_p2);
    sensitive << ( op5_reg_296 );
    sensitive << ( add_ln25_fu_163_p2 );

    SC_METHOD(thread_op14_fu_178_p2);
    sensitive << ( op7_reg_306 );
    sensitive << ( add_ln27_fu_173_p2 );

    SC_METHOD(thread_op17_fu_183_p1);
    sensitive << ( G1 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_op17_fu_183_p2);
    sensitive << ( op13_reg_316 );
    sensitive << ( op17_fu_183_p1 );

    SC_METHOD(thread_op18_fu_187_p1);
    sensitive << ( G2 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_op18_fu_187_p2);
    sensitive << ( op14_reg_324 );
    sensitive << ( op18_fu_187_p1 );

    SC_METHOD(thread_op19_fu_199_p2);
    sensitive << ( mul_ln33_reg_342 );
    sensitive << ( mul_ln33_1_reg_347 );

    SC_METHOD(thread_op1_fu_207_p0);
    sensitive << ( GG1 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_op1_fu_207_p1);
    sensitive << ( i1 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_op1_fu_207_p2);
    sensitive << ( op1_fu_207_p0 );
    sensitive << ( op1_fu_207_p1 );

    SC_METHOD(thread_op20_fu_203_p2);
    sensitive << ( op17_reg_332 );
    sensitive << ( op18_reg_337 );

    SC_METHOD(thread_op21_fu_219_p1);
    sensitive << ( G1 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_op21_fu_219_p2);
    sensitive << ( op20_reg_358 );
    sensitive << ( op21_fu_219_p1 );

    SC_METHOD(thread_op22_fu_223_p1);
    sensitive << ( G2 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_op22_fu_223_p2);
    sensitive << ( op19_reg_352 );
    sensitive << ( op22_fu_223_p1 );

    SC_METHOD(thread_op27_fu_245_p2);
    sensitive << ( add_ln41_1_fu_241_p2 );
    sensitive << ( add_ln41_fu_237_p2 );

    SC_METHOD(thread_op28_fu_259_p2);
    sensitive << ( tmp1_reg_400 );
    sensitive << ( tmp3_reg_405 );

    SC_METHOD(thread_op2_fu_213_p0);
    sensitive << ( GG2 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_op2_fu_213_p1);
    sensitive << ( i2 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_op2_fu_213_p2);
    sensitive << ( op2_fu_213_p0 );
    sensitive << ( op2_fu_213_p1 );

    SC_METHOD(thread_op5_fu_139_p0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( G1 );

    SC_METHOD(thread_op5_fu_139_p1);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( i3 );

    SC_METHOD(thread_op5_fu_139_p2);
    sensitive << ( op5_fu_139_p0 );
    sensitive << ( op5_fu_139_p1 );

    SC_METHOD(thread_op6_fu_145_p0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( G2 );

    SC_METHOD(thread_op6_fu_145_p1);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( i4 );

    SC_METHOD(thread_op6_fu_145_p2);
    sensitive << ( op6_fu_145_p0 );
    sensitive << ( op6_fu_145_p1 );

    SC_METHOD(thread_op7_fu_151_p0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( G1 );

    SC_METHOD(thread_op7_fu_151_p1);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( i4 );

    SC_METHOD(thread_op7_fu_151_p2);
    sensitive << ( op7_fu_151_p0 );
    sensitive << ( op7_fu_151_p1 );

    SC_METHOD(thread_op8_fu_157_p0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( G2 );

    SC_METHOD(thread_op8_fu_157_p1);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( i3 );

    SC_METHOD(thread_op8_fu_157_p2);
    sensitive << ( op8_fu_157_p0 );
    sensitive << ( op8_fu_157_p1 );

    SC_METHOD(thread_tmp1_fu_251_p1);
    sensitive << ( G2 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_tmp1_fu_251_p2);
    sensitive << ( tmp_reg_384 );
    sensitive << ( tmp1_fu_251_p1 );

    SC_METHOD(thread_tmp2_fu_232_p1);
    sensitive << ( i2 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_tmp2_fu_232_p2);
    sensitive << ( op19_reg_352 );
    sensitive << ( tmp2_fu_232_p1 );

    SC_METHOD(thread_tmp3_fu_255_p1);
    sensitive << ( G1 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_tmp3_fu_255_p2);
    sensitive << ( tmp2_reg_389 );
    sensitive << ( tmp3_fu_255_p1 );

    SC_METHOD(thread_tmp_fu_227_p1);
    sensitive << ( i1 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_tmp_fu_227_p2);
    sensitive << ( op20_reg_358 );
    sensitive << ( tmp_fu_227_p1 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "0000001";
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
    sc_trace(mVcdFile, i1, "(port)i1");
    sc_trace(mVcdFile, i2, "(port)i2");
    sc_trace(mVcdFile, i3, "(port)i3");
    sc_trace(mVcdFile, i4, "(port)i4");
    sc_trace(mVcdFile, i5, "(port)i5");
    sc_trace(mVcdFile, i6, "(port)i6");
    sc_trace(mVcdFile, o1, "(port)o1");
    sc_trace(mVcdFile, o1_ap_vld, "(port)o1_ap_vld");
    sc_trace(mVcdFile, o2, "(port)o2");
    sc_trace(mVcdFile, o2_ap_vld, "(port)o2_ap_vld");
    sc_trace(mVcdFile, o3, "(port)o3");
    sc_trace(mVcdFile, o3_ap_vld, "(port)o3_ap_vld");
    sc_trace(mVcdFile, o4, "(port)o4");
    sc_trace(mVcdFile, o4_ap_vld, "(port)o4_ap_vld");
    sc_trace(mVcdFile, G1, "(port)G1");
    sc_trace(mVcdFile, G2, "(port)G2");
    sc_trace(mVcdFile, G3, "(port)G3");
    sc_trace(mVcdFile, G4, "(port)G4");
    sc_trace(mVcdFile, GG1, "(port)GG1");
    sc_trace(mVcdFile, GG2, "(port)GG2");
    sc_trace(mVcdFile, ap_return1, "(port)ap_return1");
    sc_trace(mVcdFile, ap_return1_ap_vld, "(port)ap_return1_ap_vld");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, op5_fu_139_p2, "op5_fu_139_p2");
    sc_trace(mVcdFile, op5_reg_296, "op5_reg_296");
    sc_trace(mVcdFile, op6_fu_145_p2, "op6_fu_145_p2");
    sc_trace(mVcdFile, op6_reg_301, "op6_reg_301");
    sc_trace(mVcdFile, op7_fu_151_p2, "op7_fu_151_p2");
    sc_trace(mVcdFile, op7_reg_306, "op7_reg_306");
    sc_trace(mVcdFile, op8_fu_157_p2, "op8_fu_157_p2");
    sc_trace(mVcdFile, op8_reg_311, "op8_reg_311");
    sc_trace(mVcdFile, op13_fu_168_p2, "op13_fu_168_p2");
    sc_trace(mVcdFile, op13_reg_316, "op13_reg_316");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, op14_fu_178_p2, "op14_fu_178_p2");
    sc_trace(mVcdFile, op14_reg_324, "op14_reg_324");
    sc_trace(mVcdFile, op17_fu_183_p2, "op17_fu_183_p2");
    sc_trace(mVcdFile, op17_reg_332, "op17_reg_332");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, op18_fu_187_p2, "op18_fu_187_p2");
    sc_trace(mVcdFile, op18_reg_337, "op18_reg_337");
    sc_trace(mVcdFile, mul_ln33_fu_191_p2, "mul_ln33_fu_191_p2");
    sc_trace(mVcdFile, mul_ln33_reg_342, "mul_ln33_reg_342");
    sc_trace(mVcdFile, mul_ln33_1_fu_195_p2, "mul_ln33_1_fu_195_p2");
    sc_trace(mVcdFile, mul_ln33_1_reg_347, "mul_ln33_1_reg_347");
    sc_trace(mVcdFile, op19_fu_199_p2, "op19_fu_199_p2");
    sc_trace(mVcdFile, op19_reg_352, "op19_reg_352");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, op20_fu_203_p2, "op20_fu_203_p2");
    sc_trace(mVcdFile, op20_reg_358, "op20_reg_358");
    sc_trace(mVcdFile, op1_fu_207_p2, "op1_fu_207_p2");
    sc_trace(mVcdFile, op1_reg_364, "op1_reg_364");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, op2_fu_213_p2, "op2_fu_213_p2");
    sc_trace(mVcdFile, op2_reg_369, "op2_reg_369");
    sc_trace(mVcdFile, op21_fu_219_p2, "op21_fu_219_p2");
    sc_trace(mVcdFile, op21_reg_374, "op21_reg_374");
    sc_trace(mVcdFile, op22_fu_223_p2, "op22_fu_223_p2");
    sc_trace(mVcdFile, op22_reg_379, "op22_reg_379");
    sc_trace(mVcdFile, tmp_fu_227_p2, "tmp_fu_227_p2");
    sc_trace(mVcdFile, tmp_reg_384, "tmp_reg_384");
    sc_trace(mVcdFile, tmp2_fu_232_p2, "tmp2_fu_232_p2");
    sc_trace(mVcdFile, tmp2_reg_389, "tmp2_reg_389");
    sc_trace(mVcdFile, op27_fu_245_p2, "op27_fu_245_p2");
    sc_trace(mVcdFile, op27_reg_394, "op27_reg_394");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, tmp1_fu_251_p2, "tmp1_fu_251_p2");
    sc_trace(mVcdFile, tmp1_reg_400, "tmp1_reg_400");
    sc_trace(mVcdFile, tmp3_fu_255_p2, "tmp3_fu_255_p2");
    sc_trace(mVcdFile, tmp3_reg_405, "tmp3_reg_405");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, op28_fu_259_p2, "op28_fu_259_p2");
    sc_trace(mVcdFile, op5_fu_139_p0, "op5_fu_139_p0");
    sc_trace(mVcdFile, op5_fu_139_p1, "op5_fu_139_p1");
    sc_trace(mVcdFile, op6_fu_145_p0, "op6_fu_145_p0");
    sc_trace(mVcdFile, op6_fu_145_p1, "op6_fu_145_p1");
    sc_trace(mVcdFile, op7_fu_151_p0, "op7_fu_151_p0");
    sc_trace(mVcdFile, op7_fu_151_p1, "op7_fu_151_p1");
    sc_trace(mVcdFile, op8_fu_157_p0, "op8_fu_157_p0");
    sc_trace(mVcdFile, op8_fu_157_p1, "op8_fu_157_p1");
    sc_trace(mVcdFile, add_ln25_fu_163_p2, "add_ln25_fu_163_p2");
    sc_trace(mVcdFile, add_ln27_fu_173_p2, "add_ln27_fu_173_p2");
    sc_trace(mVcdFile, op17_fu_183_p1, "op17_fu_183_p1");
    sc_trace(mVcdFile, op18_fu_187_p1, "op18_fu_187_p1");
    sc_trace(mVcdFile, mul_ln33_fu_191_p1, "mul_ln33_fu_191_p1");
    sc_trace(mVcdFile, mul_ln33_1_fu_195_p1, "mul_ln33_1_fu_195_p1");
    sc_trace(mVcdFile, op1_fu_207_p0, "op1_fu_207_p0");
    sc_trace(mVcdFile, op1_fu_207_p1, "op1_fu_207_p1");
    sc_trace(mVcdFile, op2_fu_213_p0, "op2_fu_213_p0");
    sc_trace(mVcdFile, op2_fu_213_p1, "op2_fu_213_p1");
    sc_trace(mVcdFile, op21_fu_219_p1, "op21_fu_219_p1");
    sc_trace(mVcdFile, op22_fu_223_p1, "op22_fu_223_p1");
    sc_trace(mVcdFile, tmp_fu_227_p1, "tmp_fu_227_p1");
    sc_trace(mVcdFile, tmp2_fu_232_p1, "tmp2_fu_232_p1");
    sc_trace(mVcdFile, add_ln41_1_fu_241_p2, "add_ln41_1_fu_241_p2");
    sc_trace(mVcdFile, add_ln41_fu_237_p2, "add_ln41_fu_237_p2");
    sc_trace(mVcdFile, tmp1_fu_251_p1, "tmp1_fu_251_p1");
    sc_trace(mVcdFile, tmp3_fu_255_p1, "tmp3_fu_255_p1");
    sc_trace(mVcdFile, add_ln46_1_fu_269_p2, "add_ln46_1_fu_269_p2");
    sc_trace(mVcdFile, add_ln46_fu_264_p2, "add_ln46_fu_264_p2");
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        mul_ln33_1_reg_347 = mul_ln33_1_fu_195_p2.read();
        mul_ln33_reg_342 = mul_ln33_fu_191_p2.read();
        op17_reg_332 = op17_fu_183_p2.read();
        op18_reg_337 = op18_fu_187_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        op13_reg_316 = op13_fu_168_p2.read();
        op14_reg_324 = op14_fu_178_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        op19_reg_352 = op19_fu_199_p2.read();
        op20_reg_358 = op20_fu_203_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        op1_reg_364 = op1_fu_207_p2.read();
        op21_reg_374 = op21_fu_219_p2.read();
        op22_reg_379 = op22_fu_223_p2.read();
        op2_reg_369 = op2_fu_213_p2.read();
        tmp2_reg_389 = tmp2_fu_232_p2.read();
        tmp_reg_384 = tmp_fu_227_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        op27_reg_394 = op27_fu_245_p2.read();
        tmp1_reg_400 = tmp1_fu_251_p2.read();
        tmp3_reg_405 = tmp3_fu_255_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        op5_reg_296 = op5_fu_139_p2.read();
        op6_reg_301 = op6_fu_145_p2.read();
        op7_reg_306 = op7_fu_151_p2.read();
        op8_reg_311 = op8_fu_157_p2.read();
    }
}

void hls_macc::thread_add_ln25_fu_163_p2() {
    add_ln25_fu_163_p2 = (!op6_reg_301.read().is_01() || !i5.read().is_01())? sc_lv<32>(): (sc_biguint<32>(op6_reg_301.read()) + sc_biguint<32>(i5.read()));
}

void hls_macc::thread_add_ln27_fu_173_p2() {
    add_ln27_fu_173_p2 = (!op8_reg_311.read().is_01() || !i6.read().is_01())? sc_lv<32>(): (sc_biguint<32>(op8_reg_311.read()) + sc_biguint<32>(i6.read()));
}

void hls_macc::thread_add_ln41_1_fu_241_p2() {
    add_ln41_1_fu_241_p2 = (!op2_reg_369.read().is_01() || !op21_reg_374.read().is_01())? sc_lv<32>(): (sc_biguint<32>(op2_reg_369.read()) + sc_biguint<32>(op21_reg_374.read()));
}

void hls_macc::thread_add_ln41_fu_237_p2() {
    add_ln41_fu_237_p2 = (!op1_reg_364.read().is_01() || !op22_reg_379.read().is_01())? sc_lv<32>(): (sc_biguint<32>(op1_reg_364.read()) + sc_biguint<32>(op22_reg_379.read()));
}

void hls_macc::thread_add_ln46_1_fu_269_p2() {
    add_ln46_1_fu_269_p2 = (!op14_reg_324.read().is_01() || !op27_reg_394.read().is_01())? sc_lv<32>(): (sc_bigint<32>(op14_reg_324.read()) + sc_biguint<32>(op27_reg_394.read()));
}

void hls_macc::thread_add_ln46_fu_264_p2() {
    add_ln46_fu_264_p2 = (!op13_reg_316.read().is_01() || !op28_fu_259_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(op13_reg_316.read()) + sc_biguint<32>(op28_fu_259_p2.read()));
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

void hls_macc::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void hls_macc::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void hls_macc::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void hls_macc::thread_ap_return1() {
    ap_return1 = (!add_ln46_1_fu_269_p2.read().is_01() || !add_ln46_fu_264_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln46_1_fu_269_p2.read()) + sc_biguint<32>(add_ln46_fu_264_p2.read()));
}

void hls_macc::thread_ap_return1_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        ap_return1_ap_vld = ap_const_logic_1;
    } else {
        ap_return1_ap_vld = ap_const_logic_0;
    }
}

void hls_macc::thread_mul_ln33_1_fu_195_p1() {
    mul_ln33_1_fu_195_p1 = G2.read();
}

void hls_macc::thread_mul_ln33_1_fu_195_p2() {
    mul_ln33_1_fu_195_p2 = (!op13_reg_316.read().is_01() || !mul_ln33_1_fu_195_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(op13_reg_316.read()) * sc_bigint<32>(mul_ln33_1_fu_195_p1.read());
}

void hls_macc::thread_mul_ln33_fu_191_p1() {
    mul_ln33_fu_191_p1 = G1.read();
}

void hls_macc::thread_mul_ln33_fu_191_p2() {
    mul_ln33_fu_191_p2 = (!op14_reg_324.read().is_01() || !mul_ln33_fu_191_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(op14_reg_324.read()) * sc_bigint<32>(mul_ln33_fu_191_p1.read());
}

void hls_macc::thread_o1() {
    o1 = op13_reg_316.read();
}

void hls_macc::thread_o1_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o1_ap_vld = ap_const_logic_1;
    } else {
        o1_ap_vld = ap_const_logic_0;
    }
}

void hls_macc::thread_o2() {
    o2 = op14_reg_324.read();
}

void hls_macc::thread_o2_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o2_ap_vld = ap_const_logic_1;
    } else {
        o2_ap_vld = ap_const_logic_0;
    }
}

void hls_macc::thread_o3() {
    o3 = op27_reg_394.read();
}

void hls_macc::thread_o3_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o3_ap_vld = ap_const_logic_1;
    } else {
        o3_ap_vld = ap_const_logic_0;
    }
}

void hls_macc::thread_o4() {
    o4 = op28_fu_259_p2.read();
}

void hls_macc::thread_o4_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        o4_ap_vld = ap_const_logic_1;
    } else {
        o4_ap_vld = ap_const_logic_0;
    }
}

void hls_macc::thread_op13_fu_168_p2() {
    op13_fu_168_p2 = (!add_ln25_fu_163_p2.read().is_01() || !op5_reg_296.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln25_fu_163_p2.read()) + sc_biguint<32>(op5_reg_296.read()));
}

void hls_macc::thread_op14_fu_178_p2() {
    op14_fu_178_p2 = (!add_ln27_fu_173_p2.read().is_01() || !op7_reg_306.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln27_fu_173_p2.read()) + sc_biguint<32>(op7_reg_306.read()));
}

void hls_macc::thread_op17_fu_183_p1() {
    op17_fu_183_p1 = G1.read();
}

void hls_macc::thread_op17_fu_183_p2() {
    op17_fu_183_p2 = (!op13_reg_316.read().is_01() || !op17_fu_183_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(op13_reg_316.read()) * sc_bigint<32>(op17_fu_183_p1.read());
}

void hls_macc::thread_op18_fu_187_p1() {
    op18_fu_187_p1 = G2.read();
}

void hls_macc::thread_op18_fu_187_p2() {
    op18_fu_187_p2 = (!op14_reg_324.read().is_01() || !op18_fu_187_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(op14_reg_324.read()) * sc_bigint<32>(op18_fu_187_p1.read());
}

void hls_macc::thread_op19_fu_199_p2() {
    op19_fu_199_p2 = (!mul_ln33_1_reg_347.read().is_01() || !mul_ln33_reg_342.read().is_01())? sc_lv<32>(): sc_bigint<32>(mul_ln33_1_reg_347.read()) * sc_bigint<32>(mul_ln33_reg_342.read());
}

void hls_macc::thread_op1_fu_207_p0() {
    op1_fu_207_p0 = GG1.read();
}

void hls_macc::thread_op1_fu_207_p1() {
    op1_fu_207_p1 = i1.read();
}

void hls_macc::thread_op1_fu_207_p2() {
    op1_fu_207_p2 = (!op1_fu_207_p0.read().is_01() || !op1_fu_207_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(op1_fu_207_p0.read()) * sc_bigint<32>(op1_fu_207_p1.read());
}

void hls_macc::thread_op20_fu_203_p2() {
    op20_fu_203_p2 = (!op17_reg_332.read().is_01() || !op18_reg_337.read().is_01())? sc_lv<32>(): (sc_biguint<32>(op17_reg_332.read()) + sc_biguint<32>(op18_reg_337.read()));
}

void hls_macc::thread_op21_fu_219_p1() {
    op21_fu_219_p1 = G1.read();
}

void hls_macc::thread_op21_fu_219_p2() {
    op21_fu_219_p2 = (!op20_reg_358.read().is_01() || !op21_fu_219_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(op20_reg_358.read()) * sc_bigint<32>(op21_fu_219_p1.read());
}

void hls_macc::thread_op22_fu_223_p1() {
    op22_fu_223_p1 = G2.read();
}

void hls_macc::thread_op22_fu_223_p2() {
    op22_fu_223_p2 = (!op19_reg_352.read().is_01() || !op22_fu_223_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(op19_reg_352.read()) * sc_bigint<32>(op22_fu_223_p1.read());
}

void hls_macc::thread_op27_fu_245_p2() {
    op27_fu_245_p2 = (!add_ln41_1_fu_241_p2.read().is_01() || !add_ln41_fu_237_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln41_1_fu_241_p2.read()) + sc_biguint<32>(add_ln41_fu_237_p2.read()));
}

void hls_macc::thread_op28_fu_259_p2() {
    op28_fu_259_p2 = (!tmp3_reg_405.read().is_01() || !tmp1_reg_400.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp3_reg_405.read()) + sc_biguint<32>(tmp1_reg_400.read()));
}

void hls_macc::thread_op2_fu_213_p0() {
    op2_fu_213_p0 = GG2.read();
}

void hls_macc::thread_op2_fu_213_p1() {
    op2_fu_213_p1 = i2.read();
}

void hls_macc::thread_op2_fu_213_p2() {
    op2_fu_213_p2 = (!op2_fu_213_p0.read().is_01() || !op2_fu_213_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(op2_fu_213_p0.read()) * sc_bigint<32>(op2_fu_213_p1.read());
}

void hls_macc::thread_op5_fu_139_p0() {
    op5_fu_139_p0 = G1.read();
}

void hls_macc::thread_op5_fu_139_p1() {
    op5_fu_139_p1 = i3.read();
}

void hls_macc::thread_op5_fu_139_p2() {
    op5_fu_139_p2 = (!op5_fu_139_p0.read().is_01() || !op5_fu_139_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(op5_fu_139_p0.read()) * sc_bigint<32>(op5_fu_139_p1.read());
}

void hls_macc::thread_op6_fu_145_p0() {
    op6_fu_145_p0 = G2.read();
}

void hls_macc::thread_op6_fu_145_p1() {
    op6_fu_145_p1 = i4.read();
}

void hls_macc::thread_op6_fu_145_p2() {
    op6_fu_145_p2 = (!op6_fu_145_p0.read().is_01() || !op6_fu_145_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(op6_fu_145_p0.read()) * sc_bigint<32>(op6_fu_145_p1.read());
}

void hls_macc::thread_op7_fu_151_p0() {
    op7_fu_151_p0 = G1.read();
}

void hls_macc::thread_op7_fu_151_p1() {
    op7_fu_151_p1 = i4.read();
}

void hls_macc::thread_op7_fu_151_p2() {
    op7_fu_151_p2 = (!op7_fu_151_p0.read().is_01() || !op7_fu_151_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(op7_fu_151_p0.read()) * sc_bigint<32>(op7_fu_151_p1.read());
}

void hls_macc::thread_op8_fu_157_p0() {
    op8_fu_157_p0 = G2.read();
}

void hls_macc::thread_op8_fu_157_p1() {
    op8_fu_157_p1 = i3.read();
}

void hls_macc::thread_op8_fu_157_p2() {
    op8_fu_157_p2 = (!op8_fu_157_p0.read().is_01() || !op8_fu_157_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(op8_fu_157_p0.read()) * sc_bigint<32>(op8_fu_157_p1.read());
}

void hls_macc::thread_tmp1_fu_251_p1() {
    tmp1_fu_251_p1 = G2.read();
}

void hls_macc::thread_tmp1_fu_251_p2() {
    tmp1_fu_251_p2 = (!tmp_reg_384.read().is_01() || !tmp1_fu_251_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp_reg_384.read()) * sc_bigint<32>(tmp1_fu_251_p1.read());
}

void hls_macc::thread_tmp2_fu_232_p1() {
    tmp2_fu_232_p1 = i2.read();
}

void hls_macc::thread_tmp2_fu_232_p2() {
    tmp2_fu_232_p2 = (!op19_reg_352.read().is_01() || !tmp2_fu_232_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(op19_reg_352.read()) + sc_bigint<32>(tmp2_fu_232_p1.read()));
}

void hls_macc::thread_tmp3_fu_255_p1() {
    tmp3_fu_255_p1 = G1.read();
}

void hls_macc::thread_tmp3_fu_255_p2() {
    tmp3_fu_255_p2 = (!tmp2_reg_389.read().is_01() || !tmp3_fu_255_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(tmp2_reg_389.read()) * sc_bigint<32>(tmp3_fu_255_p1.read());
}

void hls_macc::thread_tmp_fu_227_p1() {
    tmp_fu_227_p1 = i1.read();
}

void hls_macc::thread_tmp_fu_227_p2() {
    tmp_fu_227_p2 = (!op20_reg_358.read().is_01() || !tmp_fu_227_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(op20_reg_358.read()) + sc_bigint<32>(tmp_fu_227_p1.read()));
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
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXXXXXX";
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
        mHdltvinHandle << " , " <<  " \"i1\" :  \"" << i1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"i2\" :  \"" << i2.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"i3\" :  \"" << i3.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"i4\" :  \"" << i4.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"i5\" :  \"" << i5.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"i6\" :  \"" << i6.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"o1\" :  \"" << o1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"o1_ap_vld\" :  \"" << o1_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"o2\" :  \"" << o2.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"o2_ap_vld\" :  \"" << o2_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"o3\" :  \"" << o3.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"o3_ap_vld\" :  \"" << o3_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"o4\" :  \"" << o4.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"o4_ap_vld\" :  \"" << o4_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"G1\" :  \"" << G1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"G2\" :  \"" << G2.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"G3\" :  \"" << G3.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"G4\" :  \"" << G4.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"GG1\" :  \"" << GG1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"GG2\" :  \"" << GG2.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_return1\" :  \"" << ap_return1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_return1_ap_vld\" :  \"" << ap_return1_ap_vld.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

