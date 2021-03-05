// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __check_imem_H__
#define __check_imem_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct check_imem_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 44;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(check_imem_ram) {
        ram[0] = "0b10001111101001000000000000000000";
        ram[1] = "0b00100111101001010000000000000100";
        ram[2] = "0b00100100101001100000000000000100";
        ram[3] = "0b00000000000001000001000010000000";
        ram[4] = "0b00000000110000100011000000100001";
        ram[5] = "0b00001100000100000000000000010110";
        ram[6] = "0b00000000000000000000000000000000";
        ram[7] = "0b00110100000000100000000000001010";
        ram[8] = "0b00000000000000000000000000001100";
        ram[9] = "0b00111100000000010001000000000001";
        ram[10] = "0b00110100001010000000000000000000";
        ram[11] = "0b00000000000001000100100010000000";
        ram[12] = "0b00000001000010010100100000100001";
        ram[13] = "0b10001101001010100000000000000000";
        ram[14] = "0b00000000000001010101100010000000";
        ram[15] = "0b00000001000010110101100000100001";
        ram[16] = "0b10001101011011000000000000000000";
        ram[17] = "0b00000001100010100110100000101010";
        ram[18] = "0b00010001101000000000000000000011";
        ram[19] = "0b10101101001011000000000000000000";
        ram[20] = "0b10101101011010100000000000000000";
        ram[21] = "0b00000011111000000000000000001000";
        ram[22] = "0b00100111101111011111111111110100";
        ram[23] = "0b10101111101111110000000000001000";
        ram[24] = "0b10101111101100010000000000000100";
        ram[25] = "0b10101111101100000000000000000000";
        ram[26] = "0b00100100000100000000000000000000";
        ram[27] = "0b00101010000010000000000000001000";
        ram[28] = "0b00010001000000000000000000001011";
        ram[29] = "0b00100110000100010000000000000001";
        ram[30] = "0b00101010001010000000000000001000";
        ram[31] = "0b00010001000000000000000000000110";
        ram[32] = "0b00100110000001000000000000000000";
        ram[33] = "0b00100110001001010000000000000000";
        ram[34] = "0b00001100000100000000000000001001";
        ram[35] = "0b00100110001100010000000000000001";
        ram[36] = "0b00001000000100000000000000011110";
        ram[37] = "0b00100110000100000000000000000001";
        ram[38] = "0b00001000000100000000000000011011";
        ram[39] = "0b10001111101111110000000000001000";
        ram[40] = "0b10001111101100010000000000000100";
        ram[41] = "0b10001111101100000000000000000000";
        ram[42] = "0b00100111101111010000000000001100";
        ram[43] = "0b00000011111000000000000000001000";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(check_imem) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 44;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


check_imem_ram* meminst;


SC_CTOR(check_imem) {
meminst = new check_imem_ram("check_imem_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~check_imem() {
    delete meminst;
}


};//endmodule
#endif
