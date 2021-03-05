#include<stdio.h>

long long int ap_clk;
long long int ap_done;
long long int ap_idle;
long long int ap_ready;
long long int ap_return;
long long int ap_rst;
long long int ap_start;
long long int in1;
long long int in10;
long long int in12;
long long int in14;
long long int in15;
long long int in17;
long long int in19;
long long int in2;
long long int in20;
long long int in22;
long long int in24;
long long int in27;
long long int in28;
long long int in29;
long long int in3;
long long int in32;
long long int in4;
long long int in7;
long long int in8;
long long int in9;
long long int out13;
long long int out13_ap_vld;
long long int out30_i;
long long int out30_o;
long long int out30_o_ap_vld;
long long int out31;
long long int out31_ap_vld;
long long int ap_CS_fsm_state1;
long long int ap_CS_fsm_state2;
long long int ap_CS_fsm_state3;
long long int add_ln12_fu_229_p2;
long long int add_ln12_fu_229_p2__temp;
long long int add_ln21_fu_253_p2;
long long int add_ln21_fu_253_p2__temp;
long long int add_ln26_fu_265_p2;
long long int add_ln26_fu_265_p2__temp;
long long int add_ln28_fu_303_p2;
long long int add_ln28_fu_303_p2__temp;
long long int add_ln30_fu_309_p2;
long long int add_ln30_fu_309_p2__temp;
long long int add_ln31_fu_315_p2;
long long int add_ln31_fu_315_p2__temp;
long long int ap_CS_fsm;
long long int ap_CS_fsm__temp;
long long int ap_NS_fsm;
long long int ap_NS_fsm__temp;
long long int ap_clk__temp;
long long int ap_done__temp;
long long int ap_idle__temp;
long long int ap_phi_mux_t16_0_phi_fu_210_p4;
long long int ap_phi_mux_t16_0_phi_fu_210_p4__temp;
long long int ap_ready__temp;
long long int ap_return__temp;
long long int ap_rst__temp;
long long int ap_start__temp;
long long int icmp_ln13_fu_241_p2;
long long int icmp_ln13_fu_241_p2__temp;
long long int icmp_ln13_reg_356;
long long int icmp_ln13_reg_356__temp;
long long int icmp_ln18_fu_247_p2;
long long int icmp_ln18_fu_247_p2__temp;
long long int icmp_ln18_reg_360;
long long int icmp_ln18_reg_360__temp;
long long int icmp_ln18_reg_360_temp_0;
long long int icmp_ln18_reg_360_temp_0__temp;
long long int in10__temp;
long long int in12__temp;
long long int in14__temp;
long long int in15__temp;
long long int in17__temp;
long long int in19__temp;
long long int in1__temp;
long long int in20__temp;
long long int in22__temp;
long long int in24__temp;
long long int in27__temp;
long long int in28__temp;
long long int in29__temp;
long long int in2__temp;
long long int in32__temp;
long long int in3__temp;
long long int in4__temp;
long long int in7__temp;
long long int in8__temp;
long long int in9__temp;
long long int out13__temp;
long long int out13_ap_vld__temp;
long long int out30_i__temp;
long long int out30_o__temp;
long long int out30_o_ap_vld__temp;
long long int out31__temp;
long long int out31_ap_vld__temp;
long long int sub_ln11_fu_222_p2;
long long int sub_ln11_fu_222_p2__temp;
long long int sub_ln11_reg_351;
long long int sub_ln11_reg_351__temp;
long long int t11_fu_235_p2;
long long int t11_fu_235_p2__temp;
long long int t16_0_reg_207;
long long int t16_0_reg_207__temp;
long long int t16_1_fu_298_p2;
long long int t16_1_fu_298_p2__temp;
long long int t16_1_reg_380;
long long int t16_1_reg_380__temp;
long long int t16_fu_277_p2;
long long int t16_fu_277_p2__temp;
long long int t23_fu_259_p2;
long long int t23_fu_259_p2__temp;
long long int t23_reg_365;
long long int t23_reg_365__temp;
long long int t25_fu_283_p2;
long long int t25_fu_283_p2__temp;
long long int t26_1_fu_271_p2;
long long int t26_1_fu_271_p2__temp;
long long int t26_1_reg_370;
long long int t26_1_reg_370__temp;
long long int t26_2_fu_292_p3;
long long int t26_2_fu_292_p3__temp;
long long int t26_fu_287_p2;
long long int t26_fu_287_p2__temp;
long long int t5_fu_216_p2;
long long int t5_fu_216_p2__temp;

long long int t25; 
long long int in2_read; 
long long int in2;
long long int t23; 
long long int in17_read;
long long int in17; 
long long int in32_read;
long long int in32; 
long long int in4_read;
long long int in4; 
long long int add_ln31_1; 
long long int add_ln30; 
long long int in29_read;
long long int in29; 
long long int add_ln12; 
long long int t16_1; 
long long int in24_read;
long long int in24; 
long long int in15_read;
long long int in15; 
long long int t26_1; 
long long int in28_read;
long long int in28; 
long long int t11; 
long long int add_ln21; 
long long int t26_2; 
long long int in22_read;
long long int in22; 
long long int in27_read;
long long int in27; 
long long int t5; 
long long int in7_read;
long long int in7; 
long long int add_ln26; 
long long int add_ln28; 
long long int in3_read;
long long int in3; 
long long int in8_read;
long long int in8; 
long long int in20_read;
long long int in20; 
long long int t16; 
long long int icmp_ln13; 
long long int t26; 
long long int add_ln31; 
long long int in19_read;
long long int in19; 
long long int in10_read;
long long int in10; 
long long int sub_ln11; 
long long int in1_read;
long long int in1; 
long long int in14_read;
long long int in14;
long long int in9; 
long long int in12; 
long long int in9_read; 
long long int in12_read; 
long long int icmp_ln18; 
long long int t16_0;
long long int out30; 
long long int out30_read; 

long long int do_twos_complement( unsigned long long int a ,int width){
    int msb = (a >> (width-1)) & 1;
    if(msb==1){
        int bit[width];int ans[width];
        unsigned long long int a1=a;
        int i=0;
        for(i=0;i<width;i++){
            bit[i]=0;
            ans[i]=0;
        }
        i=0;
        while(a1>0){
            bit[i]=a1%2;
            i++;
            a1/=2;
        }
        int flag=0;
        for(i=0;i<width;i++){
            if(bit[i]==1 && flag==0){
                ans[i]=1;
                flag=1;
            }
            else if(flag==0)
                ans[i]=bit[i];
            else
                ans[i]=1 ^ bit[i];
        }
        long long int fans=0;
        for(i=0;i<width;i++)
            fans+=ans[i]*(1<<i);
        fans = -fans;    
        return fans;
    }else{     
        return a;
    }
}

void state1_1(){
    //generated c code
    if(!(1 == ap_CS_fsm_state3)){
    ap_done = 0 ; 
    }
        if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
    ap_idle = 0 ; 
    }
        if(!((icmp_ln13_reg_356 == 0) && (1 == ap_CS_fsm_state3))){
    ap_phi_mux_t16_0_phi_fu_210_p4 = t16_0_reg_207 ; 
    }
        if(!(1 == ap_CS_fsm_state3)){
    ap_ready = 0 ; 
    }
        if(!((ap_start == 1) && (1 == ap_CS_fsm_state1))){
    out13_ap_vld = 0 ; 
    }
        if(!(1 == ap_CS_fsm_state2)){
    out30_o = out30_i ; 
    }
        if(!(1 == ap_CS_fsm_state2)){
    out30_o_ap_vld = 0 ; 
    }
        if(!(1 == ap_CS_fsm_state3)){
    out31_ap_vld = 0 ; 
    }
            icmp_ln13_fu_241_p2 =   ( ( in2  )  == ( in1  )  ? 1 : 0 ) ;
            icmp_ln13_reg_356 =  icmp_ln13_reg_356__temp ;
    if((ap_start == 0) && (1 == ap_CS_fsm_state1))
    {
        ap_idle =  1;
    }
    if((ap_start == 1) && (1 == ap_CS_fsm_state1))
    {
        out13_ap_vld =  1;
            out13 =   ( ( ( in14__temp   )  - ( in15__temp   )  )  ) ;
            out31 =   (  ( ( ap_phi_mux_t16_0_phi_fu_210_p4 + ( in32__temp   )  )  )   ) ;
    }
    if(((ap_start == 1) && (icmp_ln13_fu_241_p2 == 1)) && (1 == ap_CS_fsm_state1))
    {
        t16_0_reg_207 =   ( (  ( (  ( ( ( in7__temp   )  + ( in12__temp   )  )  )  + ( in8__temp   )  )  )  - ( in17__temp   )  )  ) ;
    }
    if((ap_start == 1) && (1 == ap_CS_fsm_state1))
    {
        sub_ln11_reg_351 =   ( ( ( in14__temp   )  - ( in15__temp   )  )  ) ;
        icmp_ln13_reg_356 =   ( ( in2  )  == ( in1  )  ? 1 : 0 ) ;
    }
    if(((ap_start == 1) && (icmp_ln13_fu_241_p2 == 0)) && (1 == ap_CS_fsm_state1))
    {
        t26_1_reg_370 =   ( (  ( ( ( in19__temp   )  + ( in20__temp   )  )  )  +  ( ( ( in3__temp   )  - ( in4__temp   )  )  )  )  ) ;
        t23_reg_365 =   ( (  ( (  ( ( ( in3__temp   )  - ( in4__temp   )  )  )  + ( in22__temp   )  )  )  +  ( (  ( ( ( in7__temp   )  + ( in12__temp   )  )  )  + ( in8__temp   )  )  )  )  ) ;
        icmp_ln18_reg_360 =   ( do_twos_complement( ( in9  )  , 63 )  < do_twos_complement( ( in10  )  , 63 )  ? 1 : 0 ) ;
    }
    //goto ap_ST_fsm_state3;

    //scheduled c code
    in32_read = in32; //%in32_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in32) nounwind
    in29_read = in29; //%in29_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in29) nounwind
    in28_read = in28; //%in28_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in28) nounwind
    in27_read = in27; //%in27_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in27) nounwind
    in24_read = in24; //%in24_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in24) nounwind
    in22_read = in22; //%in22_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in22) nounwind
    in20_read = in20; //%in20_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in20) nounwind
    in19_read = in19; //%in19_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in19) nounwind
    in17_read = in17; //%in17_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in17) nounwind
    in15_read = in15; //%in15_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in15) nounwind
    in12_read = in12; //%in12_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in12) nounwind
    in14_read = in14; //%in14_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in14) nounwind
    in10_read = in10; //%in10_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in10) nounwind
    in9_read = in9; //%in9_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in9) nounwind
    in8_read = in8; //%in8_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in8) nounwind
    in7_read = in7; //%in7_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in7) nounwind
    in4_read = in4; //%in4_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in4) nounwind
    in3_read = in3; //%in3_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in3) nounwind
    in2_read = in2; //%in2_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in2) nounwind
    in1_read = in1; //%in1_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in1) nounwind
    t5 = in3_read - in4_read; //%t5 = sub nsw i32 %in3_read, %in4_read
    sub_ln11 = in14_read - in15_read; //%sub_ln11 = sub nsw i32 %in14_read, %in15_read
    add_ln12 = in7_read + in12_read; //%add_ln12 = add i32 %in7_read, %in12_read
    t11 = add_ln12 + in8_read; //%t11 = add i32 %add_ln12, %in8_read
    icmp_ln13 = in2_read == in1_read ? 1 : 0; //%icmp_ln13 = icmp eq i32 %in2_read, %in1_read
    //br i1 %icmp_ln13, label %1, label %_ifconv
    t16 = t11 - in17_read; //%t16 = sub nsw i32 %t11, %in17_read
    //br label %
    t16_0 = t16;
}

void state1_2(){
    //generated c code
    if(!(1 == ap_CS_fsm_state3)){
    ap_done = 0 ; 
    }
        if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
    ap_idle = 0 ; 
    }
        if(!((icmp_ln13_reg_356 == 0) && (1 == ap_CS_fsm_state3))){
    ap_phi_mux_t16_0_phi_fu_210_p4 = t16_0_reg_207 ; 
    }
        if(!(1 == ap_CS_fsm_state3)){
    ap_ready = 0 ; 
    }
        if(!((ap_start == 1) && (1 == ap_CS_fsm_state1))){
    out13_ap_vld = 0 ; 
    }
        if(!(1 == ap_CS_fsm_state2)){
    out30_o = out30_i ; 
    }
        if(!(1 == ap_CS_fsm_state2)){
    out30_o_ap_vld = 0 ; 
    }
        if(!(1 == ap_CS_fsm_state3)){
    out31_ap_vld = 0 ; 
    }
            icmp_ln13_fu_241_p2 =   ( ( in2  )  == ( in1  )  ? 1 : 0 ) ;
            icmp_ln13_reg_356 =  icmp_ln13_reg_356__temp ;
    if((ap_start == 0) && (1 == ap_CS_fsm_state1))
    {
        ap_idle =  1;
    }
    if((ap_start == 1) && (1 == ap_CS_fsm_state1))
    {
        out13_ap_vld =  1;
            out13 =   ( ( ( in14__temp   )  - ( in15__temp   )  )  ) ;
            out31 =   (  ( ( ap_phi_mux_t16_0_phi_fu_210_p4 + ( in32__temp   )  )  )   ) ;
    }
    if(((ap_start == 1) && (icmp_ln13_fu_241_p2 == 1)) && (1 == ap_CS_fsm_state1))
    {
            t16_0_reg_207 =   ( (  ( (  ( ( ( in7__temp   )  + ( in12__temp   )  )  )  + ( in8__temp   )  )  )  - ( in17__temp   )  )  ) ;
    }
    if((ap_start == 1) && (1 == ap_CS_fsm_state1))
    {
            sub_ln11_reg_351 =   ( ( in14__temp )  - ( in15__temp )  ) ;
            icmp_ln13_reg_356 =   ( ( in2  )  == ( in1  )  ? 1 : 0 ) ;
    }
    if(((ap_start == 1) && (icmp_ln13_fu_241_p2 == 0)) && (1 == ap_CS_fsm_state1))
    {
            t26_1_reg_370 =   ( (  ( ( ( in19__temp   )  + ( in20__temp   )  )  )  +  ( ( ( in3__temp   )  - ( in4__temp   )  )  )  )  ) ;
            t23_reg_365 =   ( (  ( (  ( ( ( in3__temp   )  - ( in4__temp   )  )  )  + ( in22__temp   )  )  )  +  ( (  ( ( ( in7__temp   )  + ( in12__temp   )  )  )  + ( in8__temp   )  )  )  )  ) ;
            icmp_ln18_reg_360 =   ( do_twos_complement( ( in9  )  , 63 )  < do_twos_complement( ( in10  )  , 63 )  ? 1 : 0 ) ;
    }
    //goto ap_ST_fsm_state2;


    //scheduled c code
    in32_read = in32; //%in32_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in32) nounwind
    in29_read = in29; //%in29_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in29) nounwind
    in28_read = in28; //%in28_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in28) nounwind
    in27_read = in27; //%in27_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in27) nounwind
    in24_read = in24; //%in24_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in24) nounwind
    in22_read = in22; //%in22_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in22) nounwind
    in20_read = in20; //%in20_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in20) nounwind
    in19_read = in19; //%in19_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in19) nounwind
    in17_read = in17; //%in17_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in17) nounwind
    in15_read = in15; //%in15_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in15) nounwind
    in12_read = in12; //%in12_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in12) nounwind
    in14_read = in14; //%in14_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in14) nounwind
    in10_read = in10; //%in10_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in10) nounwind
    in9_read = in9; //%in9_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in9) nounwind
    in8_read = in8; //%in8_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in8) nounwind
    in7_read = in7; //%in7_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in7) nounwind
    in4_read = in4; //%in4_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in4) nounwind
    in3_read = in3; //%in3_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in3) nounwind
    in2_read = in2; //%in2_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in2) nounwind
    in1_read = in1; //%in1_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in1) nounwind
    t5 = in3_read - in4_read; //%t5 = sub nsw i32 %in3_read, %in4_read
    sub_ln11 = in14_read - in15_read; //%sub_ln11 = sub nsw i32 %in14_read, %in15_read
    add_ln12 = in7_read + in12_read; //%add_ln12 = add i32 %in7_read, %in12_read
    t11 = add_ln12 + in8_read; //%t11 = add i32 %add_ln12, %in8_read
    icmp_ln13 = in2_read == in1_read ? 1 : 0; //%icmp_ln13 = icmp eq i32 %in2_read, %in1_read
    //br i1 %icmp_ln13, label %1, label %_ifconv
    icmp_ln18 = in9_read < in10_read ? 1 : 0; //%icmp_ln18 = icmp slt i32 %in9_read, %in10_read
    add_ln21 = t5 + in22_read; //%add_ln21 = add i32 %t5, %in22_read
    t23 = add_ln21 + t11; //%t23 = add i32 %add_ln21, %t11
    add_ln26 = in19_read + in20_read; //%add_ln26 = add i32 %in19_read, %in20_read
    t26_1 = add_ln26 + t5; //%t26_1 = add i32 %add_ln26, %t5
}

void state2(){
    //generated c code
    if(!(1 == ap_CS_fsm_state3)){
        ap_done = 0 ; 
    }
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
        ap_idle = 0 ; 
    }
    if(!((icmp_ln13_reg_356 == 0) && (1 == ap_CS_fsm_state3))){
        ap_phi_mux_t16_0_phi_fu_210_p4 = t16_0_reg_207 ; 
    }
    if(!(1 == ap_CS_fsm_state3)){
        ap_ready = 0 ; 
    }
    if(!((ap_start == 1) && (1 == ap_CS_fsm_state1))){
        out13_ap_vld = 0 ; 
    }
    if(!(1 == ap_CS_fsm_state2)){
        out30_o = out30_i ; 
    }
    if(!(1 == ap_CS_fsm_state2)){
        out30_o_ap_vld = 0 ; 
    }
    if(!(1 == ap_CS_fsm_state3)){
        out31_ap_vld = 0 ; 
    }
    if(1 == ap_CS_fsm_state2)
    {
        out30_o =   ( (  (  ( ( icmp_ln18_reg_360__temp  & 1 ) )  == 1 ?  ( (  ( ( t23_reg_365__temp  - ( in24__temp  )  )  )  + ( in27__temp  )  )  )  :  t26_1_reg_370__temp  )  + ( in29__temp )  )  ) ;
    }
    if(1 == ap_CS_fsm_state2)
    {
        out30_o_ap_vld =  1;
            out13 =   ( ( ( in14__temp )  - ( in15__temp   )  ) ) ;
            out31 =   (  ( ( ap_phi_mux_t16_0_phi_fu_210_p4 + ( in32__temp   )  )  )   ) ;
    }
    if(1 == ap_CS_fsm_state2)
    {
        t16_1_reg_380 =   ( (  (  ( ( icmp_ln18_reg_360__temp  & 1 )  )  == 1 ?  ( (  ( ( t23_reg_365__temp  - ( in24__temp   )  )  )  + ( in27__temp   )  )  )  :  t26_1_reg_370__temp  )  - ( in28__temp   )  )  ) ;
    }

    //scheduled c code
    if(icmp_ln18){
    t25 = t23 - in24_read; //%t25 = sub i32 %t23, %in24_read
    t26 = t25 + in27_read; //%t26 = add i32 %t25, %in27_read
    }
    t26_2 = icmp_ln18 ? t26 : t26_1; //%t26_2 = select i1 %icmp_ln18, i32 %t26, i32 %t26_1
    t16_1 = t26_2 - in28_read; //%t16_1 = sub nsw i32 %t26_2, %in28_read
    add_ln28 = t26_2 + in29_read; //%add_ln28 = add nsw i32 %t26_2, %in29_read
    out30 = add_ln28;
}

void state3(){
    //generated c code
    if(!(1 == ap_CS_fsm_state3)){
        ap_done = 0 ; 
    }
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
        ap_idle = 0 ; 
    }
    if(!((icmp_ln13_reg_356 == 0) && (1 == ap_CS_fsm_state3))){
        ap_phi_mux_t16_0_phi_fu_210_p4 = t16_0_reg_207 ; 
    }
    if(!(1 == ap_CS_fsm_state3)){
        ap_ready = 0 ; 
    }
    if(!((ap_start == 1) && (1 == ap_CS_fsm_state1))){
        out13_ap_vld = 0 ; 
    }
    if(!(1 == ap_CS_fsm_state2)){
    //out30_o = out30_i ; 
    }
    if(!(1 == ap_CS_fsm_state2)){
        out30_o_ap_vld = 0 ; 
    }
    if(!(1 == ap_CS_fsm_state3)){
        out31_ap_vld = 0 ; 
    }
        icmp_ln13_reg_356 =  icmp_ln13_reg_356__temp ;
    if((icmp_ln13_reg_356 == 0) && (1 == ap_CS_fsm_state3))
    {
        ap_phi_mux_t16_0_phi_fu_210_p4 =  t16_1_reg_380__temp ;
    }
    if(1 == ap_CS_fsm_state3)
    {
        ap_done =  1;
        if(ap_done==1){
        ap_return =  ( (  ( ( sub_ln11_reg_351 +  ( ( ap_phi_mux_t16_0_phi_fu_210_p4 + ( in32  )  )  )  )  )  + ( out30_o  )  )  ) ;
        }
    }
    if(1 == ap_CS_fsm_state3)
    {
        ap_ready =  1;
    }
    if(1 == ap_CS_fsm_state3)
    {
        out31_ap_vld =  1;
            out13 =   ( ( in14__temp )  - ( in15__temp  )  )  ;
            out31 =   (  ( ( ap_phi_mux_t16_0_phi_fu_210_p4 + ( in32__temp   )  )  )   ) ;
    }
            icmp_ln13_reg_356 =  icmp_ln13_reg_356__temp ;
    if((icmp_ln13_reg_356 == 0) && (1 == ap_CS_fsm_state3))
    {
        t16_0_reg_207 =  t16_1_reg_380__temp ;
    }

    //scheduled c code
    //t16_0 = phi i32 [ %t16, %1 ], [ %t16_1, %_ifconv ] //%t16_0 = phi i32 [ %t16, %1 ], [ %t16_1, %_ifconv ]
    if(!icmp_ln13){
        t16_0 = t16_1;
    }
    add_ln30 = t16_0 + in32_read; //%add_ln30 = add nsw i32 %t16_0, %in32_read
    out30_read = out30; //%out30_read = call i32 @_ssdm_op_Read.ap_auto.i32P(i32* %out30) nounwind
    add_ln31 = sub_ln11 + add_ln30; //%add_ln31 = add i32 %sub_ln11, %add_ln30
    add_ln31_1 = add_ln31 + out30_read; //%add_ln31_1 = add i32 %add_ln31, %out30_read
}

void hls_macc(long long int *ap_clk__1,long long int *ap_done__1,long long int *ap_idle__1,long long int *ap_ready__1,long long int *ap_return__1,long long int *ap_rst__1,long long int *ap_start__1,long long int *in1__1,long long int *in2__1,long long int *in3__1,long long int *in4__1,long long int *in7__1,long long int *in8__1,long long int *in9__1,long long int *in10__1,long long int *in12__1,long long int *in14__1,long long int *in15__1,long long int *in17__1,long long int *in19__1,long long int *in20__1,long long int *in22__1,long long int *in24__1,long long int *in27__1,long long int *in28__1,long long int *in29__1,long long int *in32__1,long long int *out13__1,long long int *out13_ap_vld__1,long long int *out30_i__1,long long int *out30_o__1,long long int *out30_o_ap_vld__1,long long int *out31__1,long long int *out31_ap_vld__1,int dummy){
	ap_clk=*ap_clk__1;
	ap_done=*ap_done__1;
	ap_idle=*ap_idle__1;
	ap_ready=*ap_ready__1;
	ap_return=*ap_return__1;
	ap_rst=*ap_rst__1;
	ap_start=*ap_start__1;
	in1=*in1__1;
	in10=*in10__1;
	in12=*in12__1;
	in14=*in14__1;
	in15=*in15__1;
	in17=*in17__1;
	in19=*in19__1;
	in2=*in2__1;
	in20=*in20__1;
	in22=*in22__1;
	in24=*in24__1;
	in27=*in27__1;
	in28=*in28__1;
	in29=*in29__1;
	in3=*in3__1;
	in32=*in32__1;
	in4=*in4__1;
	in7=*in7__1;
	in8=*in8__1;
	in9=*in9__1;
	out13=*out13__1;
	out13_ap_vld=*out13_ap_vld__1;
	out30_i=*out30_i__1;
	out30_o=*out30_o__1;
	out30_o_ap_vld=*out30_o_ap_vld__1;
	out31=*out31__1;
	out31_ap_vld=*out31_ap_vld__1;
   ap_CS_fsm_state1=0;
   ap_CS_fsm_state2=0;
   ap_CS_fsm_state3=0;
   add_ln12_fu_229_p2=0;
   add_ln12_fu_229_p2__temp=0;
   add_ln21_fu_253_p2=0;
   add_ln21_fu_253_p2__temp=0;
   add_ln26_fu_265_p2=0;
   add_ln26_fu_265_p2__temp=0;
   add_ln28_fu_303_p2=0;
   add_ln28_fu_303_p2__temp=0;
   add_ln30_fu_309_p2=0;
   add_ln30_fu_309_p2__temp=0;
   add_ln31_fu_315_p2=0;
   add_ln31_fu_315_p2__temp=0;
   ap_CS_fsm=0;
   ap_CS_fsm__temp=0;
   ap_NS_fsm=0;
   ap_NS_fsm__temp=0;
   ap_clk__temp=0;
   ap_done__temp=0;
   ap_idle__temp=0;
   ap_phi_mux_t16_0_phi_fu_210_p4=0;
   ap_phi_mux_t16_0_phi_fu_210_p4__temp=0;
   ap_ready__temp=0;
   ap_return__temp=0;
   ap_rst__temp=0;
   ap_start__temp=0;
   icmp_ln13_fu_241_p2=0;
   icmp_ln13_fu_241_p2__temp=0;
   icmp_ln13_reg_356=0;
   icmp_ln13_reg_356__temp=0;
   icmp_ln18_fu_247_p2=0;
   icmp_ln18_fu_247_p2__temp=0;
   icmp_ln18_reg_360=0;
   icmp_ln18_reg_360__temp=0;
   icmp_ln18_reg_360_temp_0=0;
   icmp_ln18_reg_360_temp_0__temp=0;
   in10__temp=0;
   in12__temp=0;
   in14__temp=0;
   in15__temp=0;
   in17__temp=0;
   in19__temp=0;
   in1__temp=0;
   in20__temp=0;
   in22__temp=0;
   in24__temp=0;
   in27__temp=0;
   in28__temp=0;
   in29__temp=0;
   in2__temp=0;
   in32__temp=0;
   in3__temp=0;
   in4__temp=0;
   in7__temp=0;
   in8__temp=0;
   in9__temp=0;
   out13__temp=0;
   out13_ap_vld__temp=0;
   out30_i__temp=0;
   out30_o__temp=0;
   out30_o_ap_vld__temp=0;
   out31__temp=0;
   out31_ap_vld__temp=0;
   sub_ln11_fu_222_p2=0;
   sub_ln11_fu_222_p2__temp=0;
   sub_ln11_reg_351=0;
    sub_ln11_reg_351__temp=0;
   t11_fu_235_p2=0;
   t11_fu_235_p2__temp=0;
   t16_0_reg_207=0;
   t16_0_reg_207__temp=0;
   t16_1_fu_298_p2=0;
   t16_1_fu_298_p2__temp=0;
   t16_1_reg_380=0;
   t16_1_reg_380__temp=0;
   t16_fu_277_p2=0;
   t16_fu_277_p2__temp=0;
   t23_fu_259_p2=0;
   t23_fu_259_p2__temp=0;
   t23_reg_365=0;
   t23_reg_365__temp=0;
   t25_fu_283_p2=0;
   t25_fu_283_p2__temp=0;
   t26_1_fu_271_p2=0;
   t26_1_fu_271_p2__temp=0;
   t26_1_reg_370=0;
   t26_1_reg_370__temp=0;
   t26_2_fu_292_p3=0;
   t26_2_fu_292_p3__temp=0;
   t26_fu_287_p2=0;
   t26_fu_287_p2__temp=0;
   t5_fu_216_p2=0;
   t5_fu_216_p2__temp=0;
    ap_done=0;
    ap_start=1;

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
   sub_ln11_reg_351__temp = sub_ln11_reg_351 ;
   sub_ln11_fu_222_p2__temp = sub_ln11_fu_222_p2 ;
   t23_fu_259_p2__temp = t23_fu_259_p2 ;
   in24__temp = in24 ;
   ap_phi_mux_t16_0_phi_fu_210_p4__temp = ap_phi_mux_t16_0_phi_fu_210_p4 ;
   out13_ap_vld__temp = out13_ap_vld ;
   in22__temp = in22 ;
   t26_2_fu_292_p3__temp = t26_2_fu_292_p3 ;
   in1__temp = in1 ;
   in19__temp = in19 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   in12__temp = in12 ;
   t26_1_reg_370__temp = t26_1_reg_370 ;
   t11_fu_235_p2__temp = t11_fu_235_p2 ;
   t16_1_fu_298_p2__temp = t16_1_fu_298_p2 ;
   in14__temp = in14 ;
   icmp_ln18_reg_360_temp_0__temp = icmp_ln18_reg_360_temp_0 ;
   in17__temp = in17 ;
   icmp_ln18_reg_360__temp = icmp_ln18_reg_360 ;
   ap_idle__temp = ap_idle ;
   ap_clk__temp = ap_clk ;
   ap_ready__temp = ap_ready ;
   t25_fu_283_p2__temp = t25_fu_283_p2 ;
   out30_o_ap_vld__temp = out30_o_ap_vld ;
   ap_return__temp = ap_return ;
   add_ln21_fu_253_p2__temp = add_ln21_fu_253_p2 ;
   icmp_ln13_fu_241_p2__temp = icmp_ln13_fu_241_p2 ;
   in32__temp = in32 ;
   in2__temp = in2 ;
   in27__temp = in27 ;
   out13__temp = out13 ;
   in4__temp = in4 ;
   t16_1_reg_380__temp = t16_1_reg_380 ;
   add_ln28_fu_303_p2__temp = add_ln28_fu_303_p2 ;
   in29__temp = in29 ;
   ap_rst__temp = ap_rst ;
   in8__temp = in8 ;
   add_ln31_fu_315_p2__temp = add_ln31_fu_315_p2 ;
   out30_o__temp = out30_o ;
   in10__temp = in10 ;
   in15__temp = in15 ;
   ap_start__temp = ap_start ;
   t16_fu_277_p2__temp = t16_fu_277_p2 ;
   in9__temp = in9 ;
   in3__temp = in3 ;
   out31_ap_vld__temp = out31_ap_vld ;
   t5_fu_216_p2__temp = t5_fu_216_p2 ;
   t23_reg_365__temp = t23_reg_365 ;
   t26_fu_287_p2__temp = t26_fu_287_p2 ;
   in7__temp = in7 ;
   add_ln26_fu_265_p2__temp = add_ln26_fu_265_p2 ;
   in28__temp = in28 ;
   ap_done__temp = ap_done ;
   icmp_ln18_fu_247_p2__temp = icmp_ln18_fu_247_p2 ;
   add_ln30_fu_309_p2__temp = add_ln30_fu_309_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   out30_i__temp = out30_i ;
   t16_0_reg_207__temp = t16_0_reg_207 ;
   icmp_ln13_reg_356__temp = icmp_ln13_reg_356 ;
   in20__temp = in20 ;
   out31__temp = out31 ;
   add_ln12_fu_229_p2__temp = add_ln12_fu_229_p2 ;
   t26_1_fu_271_p2__temp = t26_1_fu_271_p2 ;

    icmp_ln13_fu_241_p2 =   ( ( in2  )  == ( in1  )  ? 1 : 0 ) ;
    icmp_ln13_reg_356 =  icmp_ln13_reg_356__temp ;
   if((((ap_start == 1) && (icmp_ln13_fu_241_p2 == 1)) && (1 == ap_CS_fsm_state1)) == 1){
       state1_1();
       goto ap_ST_fsm_state3;
   }
   if((((ap_start == 1) && (icmp_ln13_fu_241_p2 == 0)) && (1 == ap_CS_fsm_state1)) == 1){
       state1_2();
       goto ap_ST_fsm_state2;
   }

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
    ap_CS_fsm_state3 = 0;
   sub_ln11_reg_351__temp = sub_ln11_reg_351 ;
   sub_ln11_fu_222_p2__temp = sub_ln11_fu_222_p2 ;
   t23_fu_259_p2__temp = t23_fu_259_p2 ;
   in24__temp = in24 ;
   ap_phi_mux_t16_0_phi_fu_210_p4__temp = ap_phi_mux_t16_0_phi_fu_210_p4 ;
   out13_ap_vld__temp = out13_ap_vld ;
   in22__temp = in22 ;
   t26_2_fu_292_p3__temp = t26_2_fu_292_p3 ;
   in1__temp = in1 ;
   in19__temp = in19 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   in12__temp = in12 ;
   t26_1_reg_370__temp = t26_1_reg_370 ;
   t11_fu_235_p2__temp = t11_fu_235_p2 ;
   t16_1_fu_298_p2__temp = t16_1_fu_298_p2 ;
   in14__temp = in14 ;
   icmp_ln18_reg_360_temp_0__temp = icmp_ln18_reg_360_temp_0 ;
   in17__temp = in17 ;
   icmp_ln18_reg_360__temp = icmp_ln18_reg_360 ;
   ap_idle__temp = ap_idle ;
   ap_clk__temp = ap_clk ;
   ap_ready__temp = ap_ready ;
   t25_fu_283_p2__temp = t25_fu_283_p2 ;
   out30_o_ap_vld__temp = out30_o_ap_vld ;
   ap_return__temp = ap_return ;
   add_ln21_fu_253_p2__temp = add_ln21_fu_253_p2 ;
   icmp_ln13_fu_241_p2__temp = icmp_ln13_fu_241_p2 ;
   in32__temp = in32 ;
   in2__temp = in2 ;
   in27__temp = in27 ;
   out13__temp = out13 ;
   in4__temp = in4 ;
   t16_1_reg_380__temp = t16_1_reg_380 ;
   add_ln28_fu_303_p2__temp = add_ln28_fu_303_p2 ;
   in29__temp = in29 ;
   ap_rst__temp = ap_rst ;
   in8__temp = in8 ;
   add_ln31_fu_315_p2__temp = add_ln31_fu_315_p2 ;
   out30_o__temp = out30_o ;
   in10__temp = in10 ;
   in15__temp = in15 ;
   ap_start__temp = ap_start ;
   t16_fu_277_p2__temp = t16_fu_277_p2 ;
   in9__temp = in9 ;
   in3__temp = in3 ;
   out31_ap_vld__temp = out31_ap_vld ;
   t5_fu_216_p2__temp = t5_fu_216_p2 ;
   t23_reg_365__temp = t23_reg_365 ;
   t26_fu_287_p2__temp = t26_fu_287_p2 ;
   in7__temp = in7 ;
   add_ln26_fu_265_p2__temp = add_ln26_fu_265_p2 ;
   in28__temp = in28 ;
   ap_done__temp = ap_done ;
   icmp_ln18_fu_247_p2__temp = icmp_ln18_fu_247_p2 ;
   add_ln30_fu_309_p2__temp = add_ln30_fu_309_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   out30_i__temp = out30_i ;
   t16_0_reg_207__temp = t16_0_reg_207 ;
   icmp_ln13_reg_356__temp = icmp_ln13_reg_356 ;
   in20__temp = in20 ;
   out31__temp = out31 ;
   add_ln12_fu_229_p2__temp = add_ln12_fu_229_p2 ;
   t26_1_fu_271_p2__temp = t26_1_fu_271_p2 ;

    state2();
       goto ap_ST_fsm_state3;

   ap_ST_fsm_state3:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 1;
   sub_ln11_reg_351__temp = sub_ln11_reg_351 ;
   sub_ln11_fu_222_p2__temp = sub_ln11_fu_222_p2 ;
   t23_fu_259_p2__temp = t23_fu_259_p2 ;
   in24__temp = in24 ;
   ap_phi_mux_t16_0_phi_fu_210_p4__temp = ap_phi_mux_t16_0_phi_fu_210_p4 ;
   out13_ap_vld__temp = out13_ap_vld ;
   in22__temp = in22 ;
   t26_2_fu_292_p3__temp = t26_2_fu_292_p3 ;
   in1__temp = in1 ;
   in19__temp = in19 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   in12__temp = in12 ;
   t26_1_reg_370__temp = t26_1_reg_370 ;
   t11_fu_235_p2__temp = t11_fu_235_p2 ;
   t16_1_fu_298_p2__temp = t16_1_fu_298_p2 ;
   in14__temp = in14 ;
   icmp_ln18_reg_360_temp_0__temp = icmp_ln18_reg_360_temp_0 ;
   in17__temp = in17 ;
   icmp_ln18_reg_360__temp = icmp_ln18_reg_360 ;
   ap_idle__temp = ap_idle ;
   ap_clk__temp = ap_clk ;
   ap_ready__temp = ap_ready ;
   t25_fu_283_p2__temp = t25_fu_283_p2 ;
   out30_o_ap_vld__temp = out30_o_ap_vld ;
   ap_return__temp = ap_return ;
   add_ln21_fu_253_p2__temp = add_ln21_fu_253_p2 ;
   icmp_ln13_fu_241_p2__temp = icmp_ln13_fu_241_p2 ;
   in32__temp = in32 ;
   in2__temp = in2 ;
   in27__temp = in27 ;
   out13__temp = out13 ;
   in4__temp = in4 ;
   t16_1_reg_380__temp = t16_1_reg_380 ;
   add_ln28_fu_303_p2__temp = add_ln28_fu_303_p2 ;
   in29__temp = in29 ;
   ap_rst__temp = ap_rst ;
   in8__temp = in8 ;
   add_ln31_fu_315_p2__temp = add_ln31_fu_315_p2 ;
   out30_o__temp = out30_o ;
   in10__temp = in10 ;
   in15__temp = in15 ;
   ap_start__temp = ap_start ;
   t16_fu_277_p2__temp = t16_fu_277_p2 ;
   in9__temp = in9 ;
   in3__temp = in3 ;
   out31_ap_vld__temp = out31_ap_vld ;
   t5_fu_216_p2__temp = t5_fu_216_p2 ;
   t23_reg_365__temp = t23_reg_365 ;
   t26_fu_287_p2__temp = t26_fu_287_p2 ;
   in7__temp = in7 ;
   add_ln26_fu_265_p2__temp = add_ln26_fu_265_p2 ;
   in28__temp = in28 ;
   ap_done__temp = ap_done ;
   icmp_ln18_fu_247_p2__temp = icmp_ln18_fu_247_p2 ;
   add_ln30_fu_309_p2__temp = add_ln30_fu_309_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   out30_i__temp = out30_i ;
   t16_0_reg_207__temp = t16_0_reg_207 ;
   icmp_ln13_reg_356__temp = icmp_ln13_reg_356 ;
   in20__temp = in20 ;
   out31__temp = out31 ;
   add_ln12_fu_229_p2__temp = add_ln12_fu_229_p2 ;
   t26_1_fu_271_p2__temp = t26_1_fu_271_p2 ;

    state3();
    if(ap_done==1){
        goto end;
    }
    goto ap_ST_fsm_state1;
   end:
    *ap_clk__1=ap_clk;
    *ap_done__1=ap_done;
    *ap_idle__1=ap_idle;
    *ap_ready__1=ap_ready;
    *ap_return__1=ap_return;
    *ap_rst__1=ap_rst;
    *ap_start__1=ap_start;
    *in1__1=in1;
    *in10__1=in10;
    *in12__1=in12;
    *in14__1=in14;
    *in15__1=in15;
    *in17__1=in17;
    *in19__1=in19;
    *in2__1=in2;
    *in20__1=in20;
    *in22__1=in22;
    *in24__1=in24;
    *in27__1=in27;
    *in28__1=in28;
    *in29__1=in29;
    *in3__1=in3;
    *in32__1=in32;
    *in4__1=in4;
    *in7__1=in7;
    *in8__1=in8;
    *in9__1=in9;
    *out13__1=out13;
    *out13_ap_vld__1=out13_ap_vld;
    *out30_i__1=out30_i;
    *out30_o__1=out30_o;
    *out30_o_ap_vld__1=out30_o_ap_vld;
    *out31__1=out31;
    *out31_ap_vld__1=out31_ap_vld;
    if(add_ln31_1 == ap_return){
        printf("T\n");
    }else{
        printf("F %lld %lld\n",add_ln31_1,ap_return);
    }
	//printf("%lld ",do_twos_complement( ap_return,32));
       return;
}


int main(){
	for(int i=0; i<3; i++){
	long long int ap_clk__1 = 1;
	long long int ap_done__1 = 0;
	long long int ap_idle__1 = 0;
	long long int ap_ready__1 = 1;
	long long int ap_return__1 = 0;
	//long long int ap_return1_ap_vld__1 = 0;
	long long int ap_rst__1 = 0;
	long long int ap_start__1 = 1;
	long long int in1__1; 
    long long int in2__1;
    long long int in3__1;
    long long int in4__1;
    long long int in7__1;
    long long int in8__1;
    long long int in9__1;
	long long int in10__1; 
	long long int in12__1; 
	long long int in14__1; 
	long long int in15__1; 
	long long int in17__1; 
	long long int in19__1;  
	long long int in20__1; 
	long long int in22__1; 
	long long int in24__1; 
	long long int in27__1; 
	long long int in28__1; 
	long long int in29__1;  
	long long int in32__1;     
	long long int out13__1 = 0; 
	long long int out13_ap_vld__1 = 0; 
	long long int out30_i__1 = 0; 
	long long int out30_o__1 = 0; 
	long long int out30_o_ap_vld__1 = 0;
	long long int out31__1 = 0; 
	long long int out31_ap_vld__1 = 0;
    scanf("%llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu",&in1__1,&in2__1,&in3__1,&in4__1,&in7__1,&in8__1,&in9__1,&in10__1,&in12__1,&in14__1,&in15__1,&in17__1,&in19__1,&in20__1,&in22__1,&in24__1,&in27__1,&in28__1,&in29__1,&in32__1);	
	int dummy = 1;
	hls_macc(&ap_clk__1,&ap_done__1,&ap_idle__1,&ap_ready__1,&ap_return__1,&ap_rst__1,&ap_start__1,&in1__1,&in2__1,&in3__1,&in4__1,&in7__1,&in8__1,&in9__1,&in10__1,&in12__1,&in14__1,&in15__1,&in17__1,&in19__1,&in20__1,&in22__1,&in24__1,&in27__1,&in28__1,&in29__1,&in32__1,&out13__1,&out13_ap_vld__1,&out30_i__1,&out30_o__1,&out30_o_ap_vld__1,&out31__1,&out31_ap_vld__1,dummy);
}
return 0;

}
