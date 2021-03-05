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
const sc_lv<1> hls_macc::ap_const_lv1_0 = "0";
const sc_lv<1> hls_macc::ap_const_lv1_1 = "1";
const sc_lv<32> hls_macc::ap_const_lv32_3 = "11";
const sc_lv<32> hls_macc::ap_const_lv32_4 = "100";
const sc_lv<32> hls_macc::ap_const_lv32_A = "1010";
const bool hls_macc::ap_const_boolean_1 = true;

hls_macc::hls_macc(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln47_fu_210_p1);
    sensitive << ( G1 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_add_ln47_fu_210_p2);
    sensitive << ( op6_5_fu_203_p3 );
    sensitive << ( add_ln47_fu_210_p1 );

    SC_METHOD(thread_add_ln49_fu_220_p2);
    sensitive << ( i6 );
    sensitive << ( op8_reg_321 );

    SC_METHOD(thread_add_ln52_1_fu_236_p2);
    sensitive << ( op13_reg_326 );
    sensitive << ( op14_reg_332 );

    SC_METHOD(thread_add_ln52_fu_230_p2);
    sensitive << ( o3 );
    sensitive << ( o4 );

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

    SC_METHOD(thread_ap_return1);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( add_ln52_1_fu_236_p2 );
    sensitive << ( add_ln52_fu_230_p2 );

    SC_METHOD(thread_ap_return1_ap_vld);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_icmp_ln16_fu_145_p0);
    sensitive << ( G1 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_icmp_ln16_fu_145_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln16_fu_145_p0 );

    SC_METHOD(thread_icmp_ln27_fu_162_p2);
    sensitive << ( op4_reg_273 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( op5_3_fu_155_p3 );

    SC_METHOD(thread_o1);
    sensitive << ( op13_reg_326 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_o1_ap_vld);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_o2);
    sensitive << ( op14_reg_332 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_o2_ap_vld);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_op13_fu_215_p2);
    sensitive << ( op4_reg_273 );
    sensitive << ( add_ln47_fu_210_p2 );

    SC_METHOD(thread_op14_fu_225_p2);
    sensitive << ( op7_reg_316 );
    sensitive << ( add_ln49_fu_220_p2 );

    SC_METHOD(thread_op3_fu_167_p0);
    sensitive << ( G1 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_op3_fu_167_p1);
    sensitive << ( i2 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_op3_fu_167_p2);
    sensitive << ( op3_fu_167_p0 );
    sensitive << ( op3_fu_167_p1 );

    SC_METHOD(thread_op4_fu_127_p0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( G2 );

    SC_METHOD(thread_op4_fu_127_p1);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( i1 );

    SC_METHOD(thread_op4_fu_127_p2);
    sensitive << ( op4_fu_127_p0 );
    sensitive << ( op4_fu_127_p1 );

    SC_METHOD(thread_op5_1_fu_150_p2);
    sensitive << ( GG1 );
    sensitive << ( op5_reg_280 );

    SC_METHOD(thread_op5_2_fu_139_p0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( i4 );

    SC_METHOD(thread_op5_2_fu_139_p1);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( i3 );

    SC_METHOD(thread_op5_2_fu_139_p2);
    sensitive << ( op5_2_fu_139_p0 );
    sensitive << ( op5_2_fu_139_p1 );

    SC_METHOD(thread_op5_3_fu_155_p3);
    sensitive << ( op5_2_reg_285 );
    sensitive << ( icmp_ln16_fu_145_p2 );
    sensitive << ( op5_1_fu_150_p2 );

    SC_METHOD(thread_op5_fu_133_p0);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( G1 );

    SC_METHOD(thread_op5_fu_133_p1);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( i3 );

    SC_METHOD(thread_op5_fu_133_p2);
    sensitive << ( op5_fu_133_p0 );
    sensitive << ( op5_fu_133_p1 );

    SC_METHOD(thread_op6_1_fu_188_p2);
    sensitive << ( op5_2_reg_285 );
    sensitive << ( op3_reg_306 );

    SC_METHOD(thread_op6_2_fu_192_p3);
    sensitive << ( icmp_ln16_reg_291 );
    sensitive << ( op6_fu_184_p2 );
    sensitive << ( op6_1_fu_188_p2 );

    SC_METHOD(thread_op6_3_fu_172_p0);
    sensitive << ( G2 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_op6_3_fu_172_p1);
    sensitive << ( i4 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_op6_3_fu_172_p2);
    sensitive << ( op6_3_fu_172_p0 );
    sensitive << ( op6_3_fu_172_p1 );

    SC_METHOD(thread_op6_4_fu_199_p1);
    sensitive << ( i3 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_op6_4_fu_199_p2);
    sensitive << ( op6_3_reg_311 );
    sensitive << ( op6_4_fu_199_p1 );

    SC_METHOD(thread_op6_5_fu_203_p3);
    sensitive << ( icmp_ln27_reg_301 );
    sensitive << ( op6_4_fu_199_p2 );
    sensitive << ( op6_2_fu_192_p3 );

    SC_METHOD(thread_op6_fu_184_p2);
    sensitive << ( op4_reg_273 );
    sensitive << ( op5_1_reg_296 );

    SC_METHOD(thread_op7_fu_176_p0);
    sensitive << ( G1 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_op7_fu_176_p1);
    sensitive << ( i4 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_op7_fu_176_p2);
    sensitive << ( op7_fu_176_p0 );
    sensitive << ( op7_fu_176_p1 );

    SC_METHOD(thread_op8_fu_180_p0);
    sensitive << ( G2 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_op8_fu_180_p1);
    sensitive << ( i3 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_op8_fu_180_p2);
    sensitive << ( op8_fu_180_p0 );
    sensitive << ( op8_fu_180_p1 );

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
    sc_trace(mVcdFile, i1, "(port)i1");
    sc_trace(mVcdFile, i2, "(port)i2");
    sc_trace(mVcdFile, i3, "(port)i3");
    sc_trace(mVcdFile, i4, "(port)i4");
    sc_trace(mVcdFile, i6, "(port)i6");
    sc_trace(mVcdFile, o1, "(port)o1");
    sc_trace(mVcdFile, o1_ap_vld, "(port)o1_ap_vld");
    sc_trace(mVcdFile, o2, "(port)o2");
    sc_trace(mVcdFile, o2_ap_vld, "(port)o2_ap_vld");
    sc_trace(mVcdFile, o3, "(port)o3");
    sc_trace(mVcdFile, o4, "(port)o4");
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
    sc_trace(mVcdFile, op4_fu_127_p2, "op4_fu_127_p2");
    sc_trace(mVcdFile, op4_reg_273, "op4_reg_273");
    sc_trace(mVcdFile, op5_fu_133_p2, "op5_fu_133_p2");
    sc_trace(mVcdFile, op5_reg_280, "op5_reg_280");
    sc_trace(mVcdFile, op5_2_fu_139_p2, "op5_2_fu_139_p2");
    sc_trace(mVcdFile, op5_2_reg_285, "op5_2_reg_285");
    sc_trace(mVcdFile, icmp_ln16_fu_145_p2, "icmp_ln16_fu_145_p2");
    sc_trace(mVcdFile, icmp_ln16_reg_291, "icmp_ln16_reg_291");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, op5_1_fu_150_p2, "op5_1_fu_150_p2");
    sc_trace(mVcdFile, op5_1_reg_296, "op5_1_reg_296");
    sc_trace(mVcdFile, icmp_ln27_fu_162_p2, "icmp_ln27_fu_162_p2");
    sc_trace(mVcdFile, icmp_ln27_reg_301, "icmp_ln27_reg_301");
    sc_trace(mVcdFile, op3_fu_167_p2, "op3_fu_167_p2");
    sc_trace(mVcdFile, op3_reg_306, "op3_reg_306");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, op6_3_fu_172_p2, "op6_3_fu_172_p2");
    sc_trace(mVcdFile, op6_3_reg_311, "op6_3_reg_311");
    sc_trace(mVcdFile, op7_fu_176_p2, "op7_fu_176_p2");
    sc_trace(mVcdFile, op7_reg_316, "op7_reg_316");
    sc_trace(mVcdFile, op8_fu_180_p2, "op8_fu_180_p2");
    sc_trace(mVcdFile, op8_reg_321, "op8_reg_321");
    sc_trace(mVcdFile, op13_fu_215_p2, "op13_fu_215_p2");
    sc_trace(mVcdFile, op13_reg_326, "op13_reg_326");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, op14_fu_225_p2, "op14_fu_225_p2");
    sc_trace(mVcdFile, op14_reg_332, "op14_reg_332");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, op4_fu_127_p0, "op4_fu_127_p0");
    sc_trace(mVcdFile, op4_fu_127_p1, "op4_fu_127_p1");
    sc_trace(mVcdFile, op5_fu_133_p0, "op5_fu_133_p0");
    sc_trace(mVcdFile, op5_fu_133_p1, "op5_fu_133_p1");
    sc_trace(mVcdFile, op5_2_fu_139_p0, "op5_2_fu_139_p0");
    sc_trace(mVcdFile, op5_2_fu_139_p1, "op5_2_fu_139_p1");
    sc_trace(mVcdFile, icmp_ln16_fu_145_p0, "icmp_ln16_fu_145_p0");
    sc_trace(mVcdFile, op5_3_fu_155_p3, "op5_3_fu_155_p3");
    sc_trace(mVcdFile, op3_fu_167_p0, "op3_fu_167_p0");
    sc_trace(mVcdFile, op3_fu_167_p1, "op3_fu_167_p1");
    sc_trace(mVcdFile, op6_3_fu_172_p0, "op6_3_fu_172_p0");
    sc_trace(mVcdFile, op6_3_fu_172_p1, "op6_3_fu_172_p1");
    sc_trace(mVcdFile, op7_fu_176_p0, "op7_fu_176_p0");
    sc_trace(mVcdFile, op7_fu_176_p1, "op7_fu_176_p1");
    sc_trace(mVcdFile, op8_fu_180_p0, "op8_fu_180_p0");
    sc_trace(mVcdFile, op8_fu_180_p1, "op8_fu_180_p1");
    sc_trace(mVcdFile, op6_fu_184_p2, "op6_fu_184_p2");
    sc_trace(mVcdFile, op6_1_fu_188_p2, "op6_1_fu_188_p2");
    sc_trace(mVcdFile, op6_4_fu_199_p1, "op6_4_fu_199_p1");
    sc_trace(mVcdFile, op6_4_fu_199_p2, "op6_4_fu_199_p2");
    sc_trace(mVcdFile, op6_2_fu_192_p3, "op6_2_fu_192_p3");
    sc_trace(mVcdFile, op6_5_fu_203_p3, "op6_5_fu_203_p3");
    sc_trace(mVcdFile, add_ln47_fu_210_p1, "add_ln47_fu_210_p1");
    sc_trace(mVcdFile, add_ln47_fu_210_p2, "add_ln47_fu_210_p2");
    sc_trace(mVcdFile, add_ln49_fu_220_p2, "add_ln49_fu_220_p2");
    sc_trace(mVcdFile, add_ln52_1_fu_236_p2, "add_ln52_1_fu_236_p2");
    sc_trace(mVcdFile, add_ln52_fu_230_p2, "add_ln52_fu_230_p2");
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
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        icmp_ln16_reg_291 = icmp_ln16_fu_145_p2.read();
        icmp_ln27_reg_301 = icmp_ln27_fu_162_p2.read();
        op5_1_reg_296 = op5_1_fu_150_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        op13_reg_326 = op13_fu_215_p2.read();
        op14_reg_332 = op14_fu_225_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln16_reg_291.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(icmp_ln27_reg_301.read(), ap_const_lv1_0))) {
        op3_reg_306 = op3_fu_167_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        op4_reg_273 = op4_fu_127_p2.read();
        op5_2_reg_285 = op5_2_fu_139_p2.read();
        op5_reg_280 = op5_fu_133_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln27_reg_301.read(), ap_const_lv1_1))) {
        op6_3_reg_311 = op6_3_fu_172_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        op7_reg_316 = op7_fu_176_p2.read();
        op8_reg_321 = op8_fu_180_p2.read();
    }
}

void hls_macc::thread_add_ln47_fu_210_p1() {
    add_ln47_fu_210_p1 = G1.read();
}

void hls_macc::thread_add_ln47_fu_210_p2() {
    add_ln47_fu_210_p2 = (!op6_5_fu_203_p3.read().is_01() || !add_ln47_fu_210_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(op6_5_fu_203_p3.read()) + sc_bigint<32>(add_ln47_fu_210_p1.read()));
}

void hls_macc::thread_add_ln49_fu_220_p2() {
    add_ln49_fu_220_p2 = (!op8_reg_321.read().is_01() || !i6.read().is_01())? sc_lv<32>(): (sc_biguint<32>(op8_reg_321.read()) + sc_biguint<32>(i6.read()));
}

void hls_macc::thread_add_ln52_1_fu_236_p2() {
    add_ln52_1_fu_236_p2 = (!op13_reg_326.read().is_01() || !op14_reg_332.read().is_01())? sc_lv<32>(): (sc_biguint<32>(op13_reg_326.read()) + sc_biguint<32>(op14_reg_332.read()));
}

void hls_macc::thread_add_ln52_fu_230_p2() {
    add_ln52_fu_230_p2 = (!o3.read().is_01() || !o4.read().is_01())? sc_lv<32>(): (sc_biguint<32>(o3.read()) + sc_biguint<32>(o4.read()));
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

void hls_macc::thread_ap_return1() {
    ap_return1 = (!add_ln52_1_fu_236_p2.read().is_01() || !add_ln52_fu_230_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln52_1_fu_236_p2.read()) + sc_biguint<32>(add_ln52_fu_230_p2.read()));
}

void hls_macc::thread_ap_return1_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        ap_return1_ap_vld = ap_const_logic_1;
    } else {
        ap_return1_ap_vld = ap_const_logic_0;
    }
}

void hls_macc::thread_icmp_ln16_fu_145_p0() {
    icmp_ln16_fu_145_p0 = G1.read();
}

void hls_macc::thread_icmp_ln16_fu_145_p2() {
    icmp_ln16_fu_145_p2 = (!icmp_ln16_fu_145_p0.read().is_01() || !ap_const_lv32_A.is_01())? sc_lv<1>(): (sc_bigint<32>(icmp_ln16_fu_145_p0.read()) > sc_bigint<32>(ap_const_lv32_A));
}

void hls_macc::thread_icmp_ln27_fu_162_p2() {
    icmp_ln27_fu_162_p2 = (!op5_3_fu_155_p3.read().is_01() || !op4_reg_273.read().is_01())? sc_lv<1>(): (sc_bigint<32>(op5_3_fu_155_p3.read()) < sc_bigint<32>(op4_reg_273.read()));
}

void hls_macc::thread_o1() {
    o1 = op13_reg_326.read();
}

void hls_macc::thread_o1_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o1_ap_vld = ap_const_logic_1;
    } else {
        o1_ap_vld = ap_const_logic_0;
    }
}

void hls_macc::thread_o2() {
    o2 = op14_reg_332.read();
}

void hls_macc::thread_o2_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        o2_ap_vld = ap_const_logic_1;
    } else {
        o2_ap_vld = ap_const_logic_0;
    }
}

void hls_macc::thread_op13_fu_215_p2() {
    op13_fu_215_p2 = (!add_ln47_fu_210_p2.read().is_01() || !op4_reg_273.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln47_fu_210_p2.read()) + sc_biguint<32>(op4_reg_273.read()));
}

void hls_macc::thread_op14_fu_225_p2() {
    op14_fu_225_p2 = (!add_ln49_fu_220_p2.read().is_01() || !op7_reg_316.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln49_fu_220_p2.read()) + sc_biguint<32>(op7_reg_316.read()));
}

void hls_macc::thread_op3_fu_167_p0() {
    op3_fu_167_p0 = G1.read();
}

void hls_macc::thread_op3_fu_167_p1() {
    op3_fu_167_p1 = i2.read();
}

void hls_macc::thread_op3_fu_167_p2() {
    op3_fu_167_p2 = (!op3_fu_167_p0.read().is_01() || !op3_fu_167_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(op3_fu_167_p0.read()) * sc_bigint<32>(op3_fu_167_p1.read());
}

void hls_macc::thread_op4_fu_127_p0() {
    op4_fu_127_p0 = G2.read();
}

void hls_macc::thread_op4_fu_127_p1() {
    op4_fu_127_p1 = i1.read();
}

void hls_macc::thread_op4_fu_127_p2() {
    op4_fu_127_p2 = (!op4_fu_127_p0.read().is_01() || !op4_fu_127_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(op4_fu_127_p0.read()) * sc_bigint<32>(op4_fu_127_p1.read());
}

void hls_macc::thread_op5_1_fu_150_p2() {
    op5_1_fu_150_p2 = (!op5_reg_280.read().is_01() || !GG1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(op5_reg_280.read()) + sc_biguint<32>(GG1.read()));
}

void hls_macc::thread_op5_2_fu_139_p0() {
    op5_2_fu_139_p0 = i4.read();
}

void hls_macc::thread_op5_2_fu_139_p1() {
    op5_2_fu_139_p1 = i3.read();
}

void hls_macc::thread_op5_2_fu_139_p2() {
    op5_2_fu_139_p2 = (!op5_2_fu_139_p0.read().is_01() || !op5_2_fu_139_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(op5_2_fu_139_p0.read()) * sc_bigint<32>(op5_2_fu_139_p1.read());
}

void hls_macc::thread_op5_3_fu_155_p3() {
    op5_3_fu_155_p3 = (!icmp_ln16_fu_145_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln16_fu_145_p2.read()[0].to_bool())? op5_1_fu_150_p2.read(): op5_2_reg_285.read());
}

void hls_macc::thread_op5_fu_133_p0() {
    op5_fu_133_p0 = G1.read();
}

void hls_macc::thread_op5_fu_133_p1() {
    op5_fu_133_p1 = i3.read();
}

void hls_macc::thread_op5_fu_133_p2() {
    op5_fu_133_p2 = (!op5_fu_133_p0.read().is_01() || !op5_fu_133_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(op5_fu_133_p0.read()) * sc_bigint<32>(op5_fu_133_p1.read());
}

void hls_macc::thread_op6_1_fu_188_p2() {
    op6_1_fu_188_p2 = (!op5_2_reg_285.read().is_01() || !op3_reg_306.read().is_01())? sc_lv<32>(): (sc_biguint<32>(op5_2_reg_285.read()) - sc_biguint<32>(op3_reg_306.read()));
}

void hls_macc::thread_op6_2_fu_192_p3() {
    op6_2_fu_192_p3 = (!icmp_ln16_reg_291.read()[0].is_01())? sc_lv<32>(): ((icmp_ln16_reg_291.read()[0].to_bool())? op6_fu_184_p2.read(): op6_1_fu_188_p2.read());
}

void hls_macc::thread_op6_3_fu_172_p0() {
    op6_3_fu_172_p0 = G2.read();
}

void hls_macc::thread_op6_3_fu_172_p1() {
    op6_3_fu_172_p1 = i4.read();
}

void hls_macc::thread_op6_3_fu_172_p2() {
    op6_3_fu_172_p2 = (!op6_3_fu_172_p0.read().is_01() || !op6_3_fu_172_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(op6_3_fu_172_p0.read()) * sc_bigint<32>(op6_3_fu_172_p1.read());
}

void hls_macc::thread_op6_4_fu_199_p1() {
    op6_4_fu_199_p1 = i3.read();
}

void hls_macc::thread_op6_4_fu_199_p2() {
    op6_4_fu_199_p2 = (!op6_3_reg_311.read().is_01() || !op6_4_fu_199_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(op6_3_reg_311.read()) - sc_bigint<32>(op6_4_fu_199_p1.read()));
}

void hls_macc::thread_op6_5_fu_203_p3() {
    op6_5_fu_203_p3 = (!icmp_ln27_reg_301.read()[0].is_01())? sc_lv<32>(): ((icmp_ln27_reg_301.read()[0].to_bool())? op6_4_fu_199_p2.read(): op6_2_fu_192_p3.read());
}

void hls_macc::thread_op6_fu_184_p2() {
    op6_fu_184_p2 = (!op5_1_reg_296.read().is_01() || !op4_reg_273.read().is_01())? sc_lv<32>(): (sc_biguint<32>(op5_1_reg_296.read()) - sc_biguint<32>(op4_reg_273.read()));
}

void hls_macc::thread_op7_fu_176_p0() {
    op7_fu_176_p0 = G1.read();
}

void hls_macc::thread_op7_fu_176_p1() {
    op7_fu_176_p1 = i4.read();
}

void hls_macc::thread_op7_fu_176_p2() {
    op7_fu_176_p2 = (!op7_fu_176_p0.read().is_01() || !op7_fu_176_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(op7_fu_176_p0.read()) * sc_bigint<32>(op7_fu_176_p1.read());
}

void hls_macc::thread_op8_fu_180_p0() {
    op8_fu_180_p0 = G2.read();
}

void hls_macc::thread_op8_fu_180_p1() {
    op8_fu_180_p1 = i3.read();
}

void hls_macc::thread_op8_fu_180_p2() {
    op8_fu_180_p2 = (!op8_fu_180_p0.read().is_01() || !op8_fu_180_p1.read().is_01())? sc_lv<32>(): sc_bigint<32>(op8_fu_180_p0.read()) * sc_bigint<32>(op8_fu_180_p1.read());
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
        mHdltvinHandle << " , " <<  " \"i1\" :  \"" << i1.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"i2\" :  \"" << i2.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"i3\" :  \"" << i3.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"i4\" :  \"" << i4.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"i6\" :  \"" << i6.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"o1\" :  \"" << o1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"o1_ap_vld\" :  \"" << o1_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"o2\" :  \"" << o2.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"o2_ap_vld\" :  \"" << o2_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"o3\" :  \"" << o3.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"o4\" :  \"" << o4.read() << "\" ";
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

