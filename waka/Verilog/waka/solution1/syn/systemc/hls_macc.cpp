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
const sc_lv<3> hls_macc::ap_ST_fsm_state1 = "1";
const sc_lv<3> hls_macc::ap_ST_fsm_state2 = "10";
const sc_lv<3> hls_macc::ap_ST_fsm_state3 = "100";
const sc_lv<32> hls_macc::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> hls_macc::ap_const_lv1_0 = "0";
const sc_lv<1> hls_macc::ap_const_lv1_1 = "1";
const sc_lv<32> hls_macc::ap_const_lv32_1 = "1";
const sc_lv<32> hls_macc::ap_const_lv32_2 = "10";
const bool hls_macc::ap_const_boolean_1 = true;

hls_macc::hls_macc(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln12_fu_229_p2);
    sensitive << ( in7 );
    sensitive << ( in12 );

    SC_METHOD(thread_add_ln21_fu_253_p2);
    sensitive << ( in22 );
    sensitive << ( t5_fu_216_p2 );

    SC_METHOD(thread_add_ln26_fu_265_p2);
    sensitive << ( in19 );
    sensitive << ( in20 );

    SC_METHOD(thread_add_ln28_fu_303_p2);
    sensitive << ( in29 );
    sensitive << ( t26_2_fu_292_p3 );

    SC_METHOD(thread_add_ln30_fu_309_p2);
    sensitive << ( in32 );
    sensitive << ( ap_phi_mux_t16_0_phi_fu_210_p4 );

    SC_METHOD(thread_add_ln31_fu_315_p2);
    sensitive << ( sub_ln11_reg_351 );
    sensitive << ( add_ln30_fu_309_p2 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_phi_mux_t16_0_phi_fu_210_p4);
    sensitive << ( icmp_ln13_reg_356 );
    sensitive << ( t16_1_reg_380 );
    sensitive << ( t16_0_reg_207 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ap_return);
    sensitive << ( out30_i );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( add_ln31_fu_315_p2 );

    SC_METHOD(thread_icmp_ln13_fu_241_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( in1 );
    sensitive << ( in2 );

    SC_METHOD(thread_icmp_ln18_fu_247_p2);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( in9 );
    sensitive << ( in10 );
    sensitive << ( icmp_ln13_fu_241_p2 );

    SC_METHOD(thread_out13);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( in14 );
    sensitive << ( in15 );

    SC_METHOD(thread_out13_ap_vld);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_out30_o);
    sensitive << ( out30_i );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( add_ln28_fu_303_p2 );

    SC_METHOD(thread_out30_o_ap_vld);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_out31);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( add_ln30_fu_309_p2 );

    SC_METHOD(thread_out31_ap_vld);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_sub_ln11_fu_222_p2);
    sensitive << ( in14 );
    sensitive << ( in15 );

    SC_METHOD(thread_t11_fu_235_p2);
    sensitive << ( in8 );
    sensitive << ( add_ln12_fu_229_p2 );

    SC_METHOD(thread_t16_1_fu_298_p2);
    sensitive << ( in28 );
    sensitive << ( t26_2_fu_292_p3 );

    SC_METHOD(thread_t16_fu_277_p2);
    sensitive << ( in17 );
    sensitive << ( t11_fu_235_p2 );

    SC_METHOD(thread_t23_fu_259_p2);
    sensitive << ( add_ln21_fu_253_p2 );
    sensitive << ( t11_fu_235_p2 );

    SC_METHOD(thread_t25_fu_283_p2);
    sensitive << ( in24 );
    sensitive << ( t23_reg_365 );

    SC_METHOD(thread_t26_1_fu_271_p2);
    sensitive << ( t5_fu_216_p2 );
    sensitive << ( add_ln26_fu_265_p2 );

    SC_METHOD(thread_t26_2_fu_292_p3);
    sensitive << ( icmp_ln18_reg_360 );
    sensitive << ( t26_1_reg_370 );
    sensitive << ( t26_fu_287_p2 );

    SC_METHOD(thread_t26_fu_287_p2);
    sensitive << ( in27 );
    sensitive << ( t25_fu_283_p2 );

    SC_METHOD(thread_t5_fu_216_p2);
    sensitive << ( in3 );
    sensitive << ( in4 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( icmp_ln13_fu_241_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "001";
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
    sc_trace(mVcdFile, in7, "(port)in7");
    sc_trace(mVcdFile, in8, "(port)in8");
    sc_trace(mVcdFile, in9, "(port)in9");
    sc_trace(mVcdFile, in10, "(port)in10");
    sc_trace(mVcdFile, in14, "(port)in14");
    sc_trace(mVcdFile, in12, "(port)in12");
    sc_trace(mVcdFile, in15, "(port)in15");
    sc_trace(mVcdFile, in17, "(port)in17");
    sc_trace(mVcdFile, in19, "(port)in19");
    sc_trace(mVcdFile, in20, "(port)in20");
    sc_trace(mVcdFile, in22, "(port)in22");
    sc_trace(mVcdFile, in24, "(port)in24");
    sc_trace(mVcdFile, in27, "(port)in27");
    sc_trace(mVcdFile, in28, "(port)in28");
    sc_trace(mVcdFile, in29, "(port)in29");
    sc_trace(mVcdFile, in32, "(port)in32");
    sc_trace(mVcdFile, out13, "(port)out13");
    sc_trace(mVcdFile, out13_ap_vld, "(port)out13_ap_vld");
    sc_trace(mVcdFile, out30_i, "(port)out30_i");
    sc_trace(mVcdFile, out30_o, "(port)out30_o");
    sc_trace(mVcdFile, out30_o_ap_vld, "(port)out30_o_ap_vld");
    sc_trace(mVcdFile, out31, "(port)out31");
    sc_trace(mVcdFile, out31_ap_vld, "(port)out31_ap_vld");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, sub_ln11_fu_222_p2, "sub_ln11_fu_222_p2");
    sc_trace(mVcdFile, sub_ln11_reg_351, "sub_ln11_reg_351");
    sc_trace(mVcdFile, icmp_ln13_fu_241_p2, "icmp_ln13_fu_241_p2");
    sc_trace(mVcdFile, icmp_ln13_reg_356, "icmp_ln13_reg_356");
    sc_trace(mVcdFile, icmp_ln18_fu_247_p2, "icmp_ln18_fu_247_p2");
    sc_trace(mVcdFile, icmp_ln18_reg_360, "icmp_ln18_reg_360");
    sc_trace(mVcdFile, t23_fu_259_p2, "t23_fu_259_p2");
    sc_trace(mVcdFile, t23_reg_365, "t23_reg_365");
    sc_trace(mVcdFile, t26_1_fu_271_p2, "t26_1_fu_271_p2");
    sc_trace(mVcdFile, t26_1_reg_370, "t26_1_reg_370");
    sc_trace(mVcdFile, t16_fu_277_p2, "t16_fu_277_p2");
    sc_trace(mVcdFile, t16_1_fu_298_p2, "t16_1_fu_298_p2");
    sc_trace(mVcdFile, t16_1_reg_380, "t16_1_reg_380");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, ap_phi_mux_t16_0_phi_fu_210_p4, "ap_phi_mux_t16_0_phi_fu_210_p4");
    sc_trace(mVcdFile, t16_0_reg_207, "t16_0_reg_207");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, add_ln28_fu_303_p2, "add_ln28_fu_303_p2");
    sc_trace(mVcdFile, add_ln30_fu_309_p2, "add_ln30_fu_309_p2");
    sc_trace(mVcdFile, add_ln12_fu_229_p2, "add_ln12_fu_229_p2");
    sc_trace(mVcdFile, t5_fu_216_p2, "t5_fu_216_p2");
    sc_trace(mVcdFile, add_ln21_fu_253_p2, "add_ln21_fu_253_p2");
    sc_trace(mVcdFile, t11_fu_235_p2, "t11_fu_235_p2");
    sc_trace(mVcdFile, add_ln26_fu_265_p2, "add_ln26_fu_265_p2");
    sc_trace(mVcdFile, t25_fu_283_p2, "t25_fu_283_p2");
    sc_trace(mVcdFile, t26_fu_287_p2, "t26_fu_287_p2");
    sc_trace(mVcdFile, t26_2_fu_292_p3, "t26_2_fu_292_p3");
    sc_trace(mVcdFile, add_ln31_fu_315_p2, "add_ln31_fu_315_p2");
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
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln13_reg_356.read(), ap_const_lv1_0))) {
        t16_0_reg_207 = t16_1_reg_380.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(icmp_ln13_fu_241_p2.read(), ap_const_lv1_1))) {
        t16_0_reg_207 = t16_fu_277_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        icmp_ln13_reg_356 = icmp_ln13_fu_241_p2.read();
        sub_ln11_reg_351 = sub_ln11_fu_222_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(icmp_ln13_fu_241_p2.read(), ap_const_lv1_0))) {
        icmp_ln18_reg_360 = icmp_ln18_fu_247_p2.read();
        t23_reg_365 = t23_fu_259_p2.read();
        t26_1_reg_370 = t26_1_fu_271_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        t16_1_reg_380 = t16_1_fu_298_p2.read();
    }
}

void hls_macc::thread_add_ln12_fu_229_p2() {
    add_ln12_fu_229_p2 = (!in7.read().is_01() || !in12.read().is_01())? sc_lv<32>(): (sc_biguint<32>(in7.read()) + sc_biguint<32>(in12.read()));
}

void hls_macc::thread_add_ln21_fu_253_p2() {
    add_ln21_fu_253_p2 = (!t5_fu_216_p2.read().is_01() || !in22.read().is_01())? sc_lv<32>(): (sc_biguint<32>(t5_fu_216_p2.read()) + sc_biguint<32>(in22.read()));
}

void hls_macc::thread_add_ln26_fu_265_p2() {
    add_ln26_fu_265_p2 = (!in19.read().is_01() || !in20.read().is_01())? sc_lv<32>(): (sc_biguint<32>(in19.read()) + sc_biguint<32>(in20.read()));
}

void hls_macc::thread_add_ln28_fu_303_p2() {
    add_ln28_fu_303_p2 = (!t26_2_fu_292_p3.read().is_01() || !in29.read().is_01())? sc_lv<32>(): (sc_biguint<32>(t26_2_fu_292_p3.read()) + sc_biguint<32>(in29.read()));
}

void hls_macc::thread_add_ln30_fu_309_p2() {
    add_ln30_fu_309_p2 = (!ap_phi_mux_t16_0_phi_fu_210_p4.read().is_01() || !in32.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_phi_mux_t16_0_phi_fu_210_p4.read()) + sc_biguint<32>(in32.read()));
}

void hls_macc::thread_add_ln31_fu_315_p2() {
    add_ln31_fu_315_p2 = (!sub_ln11_reg_351.read().is_01() || !add_ln30_fu_309_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(sub_ln11_reg_351.read()) + sc_biguint<32>(add_ln30_fu_309_p2.read()));
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

void hls_macc::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
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

void hls_macc::thread_ap_phi_mux_t16_0_phi_fu_210_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln13_reg_356.read(), ap_const_lv1_0))) {
        ap_phi_mux_t16_0_phi_fu_210_p4 = t16_1_reg_380.read();
    } else {
        ap_phi_mux_t16_0_phi_fu_210_p4 = t16_0_reg_207.read();
    }
}

void hls_macc::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void hls_macc::thread_ap_return() {
    ap_return = (!add_ln31_fu_315_p2.read().is_01() || !out30_i.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln31_fu_315_p2.read()) + sc_biguint<32>(out30_i.read()));
}

void hls_macc::thread_icmp_ln13_fu_241_p2() {
    icmp_ln13_fu_241_p2 = (!in2.read().is_01() || !in1.read().is_01())? sc_lv<1>(): sc_lv<1>(in2.read() == in1.read());
}

void hls_macc::thread_icmp_ln18_fu_247_p2() {
    icmp_ln18_fu_247_p2 = (!in9.read().is_01() || !in10.read().is_01())? sc_lv<1>(): (sc_bigint<32>(in9.read()) < sc_bigint<32>(in10.read()));
}

void hls_macc::thread_out13() {
    out13 = (!in14.read().is_01() || !in15.read().is_01())? sc_lv<32>(): (sc_biguint<32>(in14.read()) - sc_biguint<32>(in15.read()));
}

void hls_macc::thread_out13_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        out13_ap_vld = ap_const_logic_1;
    } else {
        out13_ap_vld = ap_const_logic_0;
    }
}

void hls_macc::thread_out30_o() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        out30_o = add_ln28_fu_303_p2.read();
    } else {
        out30_o = out30_i.read();
    }
}

void hls_macc::thread_out30_o_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        out30_o_ap_vld = ap_const_logic_1;
    } else {
        out30_o_ap_vld = ap_const_logic_0;
    }
}

void hls_macc::thread_out31() {
    out31 = add_ln30_fu_309_p2.read();
}

void hls_macc::thread_out31_ap_vld() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        out31_ap_vld = ap_const_logic_1;
    } else {
        out31_ap_vld = ap_const_logic_0;
    }
}

void hls_macc::thread_sub_ln11_fu_222_p2() {
    sub_ln11_fu_222_p2 = (!in14.read().is_01() || !in15.read().is_01())? sc_lv<32>(): (sc_biguint<32>(in14.read()) - sc_biguint<32>(in15.read()));
}

void hls_macc::thread_t11_fu_235_p2() {
    t11_fu_235_p2 = (!add_ln12_fu_229_p2.read().is_01() || !in8.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln12_fu_229_p2.read()) + sc_biguint<32>(in8.read()));
}

void hls_macc::thread_t16_1_fu_298_p2() {
    t16_1_fu_298_p2 = (!t26_2_fu_292_p3.read().is_01() || !in28.read().is_01())? sc_lv<32>(): (sc_biguint<32>(t26_2_fu_292_p3.read()) - sc_biguint<32>(in28.read()));
}

void hls_macc::thread_t16_fu_277_p2() {
    t16_fu_277_p2 = (!t11_fu_235_p2.read().is_01() || !in17.read().is_01())? sc_lv<32>(): (sc_biguint<32>(t11_fu_235_p2.read()) - sc_biguint<32>(in17.read()));
}

void hls_macc::thread_t23_fu_259_p2() {
    t23_fu_259_p2 = (!add_ln21_fu_253_p2.read().is_01() || !t11_fu_235_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln21_fu_253_p2.read()) + sc_biguint<32>(t11_fu_235_p2.read()));
}

void hls_macc::thread_t25_fu_283_p2() {
    t25_fu_283_p2 = (!t23_reg_365.read().is_01() || !in24.read().is_01())? sc_lv<32>(): (sc_biguint<32>(t23_reg_365.read()) - sc_biguint<32>(in24.read()));
}

void hls_macc::thread_t26_1_fu_271_p2() {
    t26_1_fu_271_p2 = (!add_ln26_fu_265_p2.read().is_01() || !t5_fu_216_p2.read().is_01())? sc_lv<32>(): (sc_biguint<32>(add_ln26_fu_265_p2.read()) + sc_biguint<32>(t5_fu_216_p2.read()));
}

void hls_macc::thread_t26_2_fu_292_p3() {
    t26_2_fu_292_p3 = (!icmp_ln18_reg_360.read()[0].is_01())? sc_lv<32>(): ((icmp_ln18_reg_360.read()[0].to_bool())? t26_fu_287_p2.read(): t26_1_reg_370.read());
}

void hls_macc::thread_t26_fu_287_p2() {
    t26_fu_287_p2 = (!t25_fu_283_p2.read().is_01() || !in27.read().is_01())? sc_lv<32>(): (sc_biguint<32>(t25_fu_283_p2.read()) + sc_biguint<32>(in27.read()));
}

void hls_macc::thread_t5_fu_216_p2() {
    t5_fu_216_p2 = (!in3.read().is_01() || !in4.read().is_01())? sc_lv<32>(): (sc_biguint<32>(in3.read()) - sc_biguint<32>(in4.read()));
}

void hls_macc::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(icmp_ln13_fu_241_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(icmp_ln13_fu_241_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXX";
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
        mHdltvinHandle << " , " <<  " \"in7\" :  \"" << in7.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in8\" :  \"" << in8.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in9\" :  \"" << in9.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in10\" :  \"" << in10.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in14\" :  \"" << in14.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in12\" :  \"" << in12.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in15\" :  \"" << in15.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in17\" :  \"" << in17.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in19\" :  \"" << in19.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in20\" :  \"" << in20.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in22\" :  \"" << in22.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in24\" :  \"" << in24.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in27\" :  \"" << in27.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in28\" :  \"" << in28.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in29\" :  \"" << in29.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"in32\" :  \"" << in32.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out13\" :  \"" << out13.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out13_ap_vld\" :  \"" << out13_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"out30_i\" :  \"" << out30_i.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out30_o\" :  \"" << out30_o.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out30_o_ap_vld\" :  \"" << out30_o_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out31\" :  \"" << out31.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"out31_ap_vld\" :  \"" << out31_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_return\" :  \"" << ap_return.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
