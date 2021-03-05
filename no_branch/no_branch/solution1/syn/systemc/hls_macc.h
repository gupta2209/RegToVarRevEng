// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _hls_macc_HH_
#define _hls_macc_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct hls_macc : public sc_module {
    // Port declarations 28
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > i1;
    sc_in< sc_lv<32> > i2;
    sc_in< sc_lv<32> > i3;
    sc_in< sc_lv<32> > i4;
    sc_in< sc_lv<32> > i5;
    sc_in< sc_lv<32> > i6;
    sc_out< sc_lv<32> > o1;
    sc_out< sc_logic > o1_ap_vld;
    sc_out< sc_lv<32> > o2;
    sc_out< sc_logic > o2_ap_vld;
    sc_out< sc_lv<32> > o3;
    sc_out< sc_logic > o3_ap_vld;
    sc_out< sc_lv<32> > o4;
    sc_out< sc_logic > o4_ap_vld;
    sc_in< sc_lv<32> > G1;
    sc_in< sc_lv<32> > G2;
    sc_in< sc_lv<32> > G3;
    sc_in< sc_lv<32> > G4;
    sc_in< sc_lv<32> > GG1;
    sc_in< sc_lv<32> > GG2;
    sc_out< sc_lv<32> > ap_return1;
    sc_out< sc_logic > ap_return1_ap_vld;


    // Module declarations
    hls_macc(sc_module_name name);
    SC_HAS_PROCESS(hls_macc);

    ~hls_macc();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    sc_signal< sc_lv<7> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > op5_fu_139_p2;
    sc_signal< sc_lv<32> > op5_reg_296;
    sc_signal< sc_lv<32> > op6_fu_145_p2;
    sc_signal< sc_lv<32> > op6_reg_301;
    sc_signal< sc_lv<32> > op7_fu_151_p2;
    sc_signal< sc_lv<32> > op7_reg_306;
    sc_signal< sc_lv<32> > op8_fu_157_p2;
    sc_signal< sc_lv<32> > op8_reg_311;
    sc_signal< sc_lv<32> > op13_fu_168_p2;
    sc_signal< sc_lv<32> > op13_reg_316;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<32> > op14_fu_178_p2;
    sc_signal< sc_lv<32> > op14_reg_324;
    sc_signal< sc_lv<32> > op17_fu_183_p2;
    sc_signal< sc_lv<32> > op17_reg_332;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<32> > op18_fu_187_p2;
    sc_signal< sc_lv<32> > op18_reg_337;
    sc_signal< sc_lv<32> > mul_ln33_fu_191_p2;
    sc_signal< sc_lv<32> > mul_ln33_reg_342;
    sc_signal< sc_lv<32> > mul_ln33_1_fu_195_p2;
    sc_signal< sc_lv<32> > mul_ln33_1_reg_347;
    sc_signal< sc_lv<32> > op19_fu_199_p2;
    sc_signal< sc_lv<32> > op19_reg_352;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<32> > op20_fu_203_p2;
    sc_signal< sc_lv<32> > op20_reg_358;
    sc_signal< sc_lv<32> > op1_fu_207_p2;
    sc_signal< sc_lv<32> > op1_reg_364;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<32> > op2_fu_213_p2;
    sc_signal< sc_lv<32> > op2_reg_369;
    sc_signal< sc_lv<32> > op21_fu_219_p2;
    sc_signal< sc_lv<32> > op21_reg_374;
    sc_signal< sc_lv<32> > op22_fu_223_p2;
    sc_signal< sc_lv<32> > op22_reg_379;
    sc_signal< sc_lv<32> > tmp_fu_227_p2;
    sc_signal< sc_lv<32> > tmp_reg_384;
    sc_signal< sc_lv<32> > tmp2_fu_232_p2;
    sc_signal< sc_lv<32> > tmp2_reg_389;
    sc_signal< sc_lv<32> > op27_fu_245_p2;
    sc_signal< sc_lv<32> > op27_reg_394;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<32> > tmp1_fu_251_p2;
    sc_signal< sc_lv<32> > tmp1_reg_400;
    sc_signal< sc_lv<32> > tmp3_fu_255_p2;
    sc_signal< sc_lv<32> > tmp3_reg_405;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<32> > op28_fu_259_p2;
    sc_signal< sc_lv<32> > op5_fu_139_p0;
    sc_signal< sc_lv<32> > op5_fu_139_p1;
    sc_signal< sc_lv<32> > op6_fu_145_p0;
    sc_signal< sc_lv<32> > op6_fu_145_p1;
    sc_signal< sc_lv<32> > op7_fu_151_p0;
    sc_signal< sc_lv<32> > op7_fu_151_p1;
    sc_signal< sc_lv<32> > op8_fu_157_p0;
    sc_signal< sc_lv<32> > op8_fu_157_p1;
    sc_signal< sc_lv<32> > add_ln25_fu_163_p2;
    sc_signal< sc_lv<32> > add_ln27_fu_173_p2;
    sc_signal< sc_lv<32> > op17_fu_183_p1;
    sc_signal< sc_lv<32> > op18_fu_187_p1;
    sc_signal< sc_lv<32> > mul_ln33_fu_191_p1;
    sc_signal< sc_lv<32> > mul_ln33_1_fu_195_p1;
    sc_signal< sc_lv<32> > op1_fu_207_p0;
    sc_signal< sc_lv<32> > op1_fu_207_p1;
    sc_signal< sc_lv<32> > op2_fu_213_p0;
    sc_signal< sc_lv<32> > op2_fu_213_p1;
    sc_signal< sc_lv<32> > op21_fu_219_p1;
    sc_signal< sc_lv<32> > op22_fu_223_p1;
    sc_signal< sc_lv<32> > tmp_fu_227_p1;
    sc_signal< sc_lv<32> > tmp2_fu_232_p1;
    sc_signal< sc_lv<32> > add_ln41_1_fu_241_p2;
    sc_signal< sc_lv<32> > add_ln41_fu_237_p2;
    sc_signal< sc_lv<32> > tmp1_fu_251_p1;
    sc_signal< sc_lv<32> > tmp3_fu_255_p1;
    sc_signal< sc_lv<32> > add_ln46_1_fu_269_p2;
    sc_signal< sc_lv<32> > add_ln46_fu_264_p2;
    sc_signal< sc_lv<7> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<7> ap_ST_fsm_state1;
    static const sc_lv<7> ap_ST_fsm_state2;
    static const sc_lv<7> ap_ST_fsm_state3;
    static const sc_lv<7> ap_ST_fsm_state4;
    static const sc_lv<7> ap_ST_fsm_state5;
    static const sc_lv<7> ap_ST_fsm_state6;
    static const sc_lv<7> ap_ST_fsm_state7;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln25_fu_163_p2();
    void thread_add_ln27_fu_173_p2();
    void thread_add_ln41_1_fu_241_p2();
    void thread_add_ln41_fu_237_p2();
    void thread_add_ln46_1_fu_269_p2();
    void thread_add_ln46_fu_264_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return1();
    void thread_ap_return1_ap_vld();
    void thread_mul_ln33_1_fu_195_p1();
    void thread_mul_ln33_1_fu_195_p2();
    void thread_mul_ln33_fu_191_p1();
    void thread_mul_ln33_fu_191_p2();
    void thread_o1();
    void thread_o1_ap_vld();
    void thread_o2();
    void thread_o2_ap_vld();
    void thread_o3();
    void thread_o3_ap_vld();
    void thread_o4();
    void thread_o4_ap_vld();
    void thread_op13_fu_168_p2();
    void thread_op14_fu_178_p2();
    void thread_op17_fu_183_p1();
    void thread_op17_fu_183_p2();
    void thread_op18_fu_187_p1();
    void thread_op18_fu_187_p2();
    void thread_op19_fu_199_p2();
    void thread_op1_fu_207_p0();
    void thread_op1_fu_207_p1();
    void thread_op1_fu_207_p2();
    void thread_op20_fu_203_p2();
    void thread_op21_fu_219_p1();
    void thread_op21_fu_219_p2();
    void thread_op22_fu_223_p1();
    void thread_op22_fu_223_p2();
    void thread_op27_fu_245_p2();
    void thread_op28_fu_259_p2();
    void thread_op2_fu_213_p0();
    void thread_op2_fu_213_p1();
    void thread_op2_fu_213_p2();
    void thread_op5_fu_139_p0();
    void thread_op5_fu_139_p1();
    void thread_op5_fu_139_p2();
    void thread_op6_fu_145_p0();
    void thread_op6_fu_145_p1();
    void thread_op6_fu_145_p2();
    void thread_op7_fu_151_p0();
    void thread_op7_fu_151_p1();
    void thread_op7_fu_151_p2();
    void thread_op8_fu_157_p0();
    void thread_op8_fu_157_p1();
    void thread_op8_fu_157_p2();
    void thread_tmp1_fu_251_p1();
    void thread_tmp1_fu_251_p2();
    void thread_tmp2_fu_232_p1();
    void thread_tmp2_fu_232_p2();
    void thread_tmp3_fu_255_p1();
    void thread_tmp3_fu_255_p2();
    void thread_tmp_fu_227_p1();
    void thread_tmp_fu_227_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
