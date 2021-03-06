// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and OpenCL
// Version: 2019.2
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _diffeq_HH_
#define _diffeq_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct diffeq : public sc_module {
    // Port declarations 11
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > x;
    sc_in< sc_lv<32> > dx;
    sc_in< sc_lv<32> > u;
    sc_in< sc_lv<32> > y;
    sc_out< sc_lv<32> > ap_return;


    // Module declarations
    diffeq(sc_module_name name);
    SC_HAS_PROCESS(diffeq);

    ~diffeq();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    sc_signal< sc_lv<5> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > t1_fu_50_p2;
    sc_signal< sc_lv<32> > t1_reg_110;
    sc_signal< sc_lv<32> > mul_ln14_fu_56_p2;
    sc_signal< sc_lv<32> > mul_ln14_reg_115;
    sc_signal< sc_lv<32> > t4_fu_68_p2;
    sc_signal< sc_lv<32> > t4_reg_120;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<32> > t3_fu_74_p2;
    sc_signal< sc_lv<32> > t3_reg_130;
    sc_signal< sc_lv<32> > t5_fu_78_p2;
    sc_signal< sc_lv<32> > t5_reg_135;
    sc_signal< sc_lv<32> > sub_ln18_fu_87_p2;
    sc_signal< sc_lv<32> > sub_ln18_reg_140;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<32> > t7_fu_92_p2;
    sc_signal< sc_lv<32> > t7_reg_145;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<32> > shl_ln12_fu_44_p2;
    sc_signal< sc_lv<32> > mul_ln14_fu_56_p0;
    sc_signal< sc_lv<32> > mul_ln14_fu_56_p1;
    sc_signal< sc_lv<32> > shl_ln15_fu_62_p0;
    sc_signal< sc_lv<32> > shl_ln15_fu_62_p2;
    sc_signal< sc_lv<32> > t4_fu_68_p1;
    sc_signal< sc_lv<32> > t5_fu_78_p0;
    sc_signal< sc_lv<32> > t6_fu_83_p0;
    sc_signal< sc_lv<32> > t6_fu_83_p2;
    sc_signal< sc_lv<32> > t7_fu_92_p0;
    sc_signal< sc_lv<32> > add_ln20_fu_96_p0;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<5> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<5> ap_ST_fsm_state1;
    static const sc_lv<5> ap_ST_fsm_state2;
    static const sc_lv<5> ap_ST_fsm_state3;
    static const sc_lv<5> ap_ST_fsm_state4;
    static const sc_lv<5> ap_ST_fsm_state5;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln20_fu_96_p0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_mul_ln14_fu_56_p0();
    void thread_mul_ln14_fu_56_p1();
    void thread_mul_ln14_fu_56_p2();
    void thread_shl_ln12_fu_44_p2();
    void thread_shl_ln15_fu_62_p0();
    void thread_shl_ln15_fu_62_p2();
    void thread_sub_ln18_fu_87_p2();
    void thread_t1_fu_50_p2();
    void thread_t3_fu_74_p2();
    void thread_t4_fu_68_p1();
    void thread_t4_fu_68_p2();
    void thread_t5_fu_78_p0();
    void thread_t5_fu_78_p2();
    void thread_t6_fu_83_p0();
    void thread_t6_fu_83_p2();
    void thread_t7_fu_92_p0();
    void thread_t7_fu_92_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
