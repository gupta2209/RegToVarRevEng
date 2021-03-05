#include<stdio.h>
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
void hls_macc(unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_return__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *in1__1,unsigned long long int *in2__1,unsigned long long int *in3__1,unsigned long long int *in4__1,unsigned long long int *in7__1,unsigned long long int *in8__1,unsigned long long int *in9__1,unsigned long long int *in10__1,unsigned long long int *in12__1,unsigned long long int *in14__1,unsigned long long int *in15__1,unsigned long long int *in17__1,unsigned long long int *in19__1,unsigned long long int *in20__1,unsigned long long int *in22__1,unsigned long long int *in24__1,unsigned long long int *in27__1,unsigned long long int *in28__1,unsigned long long int *in29__1,unsigned long long int *in32__1,unsigned long long int *out13__1,unsigned long long int *out13_ap_vld__1,unsigned long long int *out30_i__1,unsigned long long int *out30_o__1,unsigned long long int *out30_o_ap_vld__1,unsigned long long int *out31__1,unsigned long long int *out31_ap_vld__1,int dummy){
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_return=*ap_return__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
unsigned long long int in1=*in1__1;
unsigned long long int in10=*in10__1;
unsigned long long int in12=*in12__1;
unsigned long long int in14=*in14__1;
unsigned long long int in15=*in15__1;
unsigned long long int in17=*in17__1;
unsigned long long int in19=*in19__1;
unsigned long long int in2=*in2__1;
unsigned long long int in20=*in20__1;
unsigned long long int in22=*in22__1;
unsigned long long int in24=*in24__1;
unsigned long long int in27=*in27__1;
unsigned long long int in28=*in28__1;
unsigned long long int in29=*in29__1;
unsigned long long int in3=*in3__1;
unsigned long long int in32=*in32__1;
unsigned long long int in4=*in4__1;
unsigned long long int in7=*in7__1;
unsigned long long int in8=*in8__1;
unsigned long long int in9=*in9__1;
long long int out13=*out13__1;
long long int out13_ap_vld=*out13_ap_vld__1;
unsigned long long int out30_i=*out30_i__1;
unsigned long long int out30_o=*out30_o__1;
unsigned long long int out30_o_ap_vld=*out30_o_ap_vld__1;
unsigned long long int out31=*out31__1;
unsigned long long int out31_ap_vld=*out31_ap_vld__1;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   unsigned long long int add_ln12_fu_229_p2=0;
   unsigned long long int add_ln12_fu_229_p2__temp=0;
   unsigned long long int add_ln21_fu_253_p2=0;
   unsigned long long int add_ln21_fu_253_p2__temp=0;
   unsigned long long int add_ln26_fu_265_p2=0;
   unsigned long long int add_ln26_fu_265_p2__temp=0;
   unsigned long long int add_ln28_fu_303_p2=0;
   unsigned long long int add_ln28_fu_303_p2__temp=0;
   unsigned long long int add_ln30_fu_309_p2=0;
   unsigned long long int add_ln30_fu_309_p2__temp=0;
   unsigned long long int add_ln31_fu_315_p2=0;
   unsigned long long int add_ln31_fu_315_p2__temp=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   unsigned long long int ap_NS_fsm=0;
   unsigned long long int ap_NS_fsm__temp=0;
   unsigned long long int ap_clk__temp=0;
   unsigned long long int ap_done__temp=0;
   unsigned long long int ap_idle__temp=0;
   unsigned long long int ap_phi_mux_t16_0_phi_fu_210_p4=0;
   unsigned long long int ap_phi_mux_t16_0_phi_fu_210_p4__temp=0;
   unsigned long long int ap_ready__temp=0;
   unsigned long long int ap_return__temp=0;
   unsigned long long int ap_rst__temp=0;
   unsigned long long int ap_start__temp=0;
   unsigned long long int icmp_ln13_fu_241_p2=0;
   unsigned long long int icmp_ln13_fu_241_p2__temp=0;
   unsigned long long int icmp_ln13_reg_356=0;
   unsigned long long int icmp_ln13_reg_356__temp=0;
   unsigned long long int icmp_ln18_fu_247_p2=0;
   unsigned long long int icmp_ln18_fu_247_p2__temp=0;
   unsigned long long int icmp_ln18_reg_360=0;
   unsigned long long int icmp_ln18_reg_360__temp=0;
   unsigned long long int icmp_ln18_reg_360_temp_0=0;
   unsigned long long int icmp_ln18_reg_360_temp_0__temp=0;
   unsigned long long int in10__temp=0;
   unsigned long long int in12__temp=0;
   unsigned long long int in14__temp=0;
   unsigned long long int in15__temp=0;
   unsigned long long int in17__temp=0;
   unsigned long long int in19__temp=0;
   unsigned long long int in1__temp=0;
   unsigned long long int in20__temp=0;
   unsigned long long int in22__temp=0;
   unsigned long long int in24__temp=0;
   unsigned long long int in27__temp=0;
   unsigned long long int in28__temp=0;
   unsigned long long int in29__temp=0;
   unsigned long long int in2__temp=0;
   unsigned long long int in32__temp=0;
   unsigned long long int in3__temp=0;
   unsigned long long int in4__temp=0;
   unsigned long long int in7__temp=0;
   unsigned long long int in8__temp=0;
   unsigned long long int in9__temp=0;
   long long int out13__temp=0;
   long long int out13_ap_vld__temp=0;
   unsigned long long int out30_i__temp=0;
   unsigned long long int out30_o__temp=0;
   unsigned long long int out30_o_ap_vld__temp=0;
   unsigned long long int out31__temp=0;
   unsigned long long int out31_ap_vld__temp=0;
   unsigned long long int sub_ln11_fu_222_p2=0;
   unsigned long long int sub_ln11_fu_222_p2__temp=0;
   long long int sub_ln11_reg_351=0;
    long long int sub_ln11_reg_351__temp=0;
   unsigned long long int t11_fu_235_p2=0;
   unsigned long long int t11_fu_235_p2__temp=0;
   unsigned long long int t16_0_reg_207=0;
   unsigned long long int t16_0_reg_207__temp=0;
   unsigned long long int t16_1_fu_298_p2=0;
   unsigned long long int t16_1_fu_298_p2__temp=0;
   unsigned long long int t16_1_reg_380=0;
   unsigned long long int t16_1_reg_380__temp=0;
   unsigned long long int t16_fu_277_p2=0;
   unsigned long long int t16_fu_277_p2__temp=0;
   unsigned long long int t23_fu_259_p2=0;
   unsigned long long int t23_fu_259_p2__temp=0;
   unsigned long long int t23_reg_365=0;
   unsigned long long int t23_reg_365__temp=0;
   unsigned long long int t25_fu_283_p2=0;
   unsigned long long int t25_fu_283_p2__temp=0;
   unsigned long long int t26_1_fu_271_p2=0;
   unsigned long long int t26_1_fu_271_p2__temp=0;
   unsigned long long int t26_1_reg_370=0;
   unsigned long long int t26_1_reg_370__temp=0;
   unsigned long long int t26_2_fu_292_p3=0;
   unsigned long long int t26_2_fu_292_p3__temp=0;
   unsigned long long int t26_fu_287_p2=0;
   unsigned long long int t26_fu_287_p2__temp=0;
   unsigned long long int t5_fu_216_p2=0;
   unsigned long long int t5_fu_216_p2__temp=0;
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
               icmp_ln13_fu_241_p2 =   ( ( in2 & 4294967295 )  == ( in1 & 4294967295 )  ? 1 : 0 ) ;
               icmp_ln13_reg_356 =  icmp_ln13_reg_356__temp ;
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
           out13_ap_vld =  1;
               out13 =   ( ( ( in14__temp  & 4294967295 )  - ( in15__temp  & 4294967295 )  ) & 4294967295 ) ;
               out31 =   (  ( ( ap_phi_mux_t16_0_phi_fu_210_p4 + ( in32__temp  & 4294967295 )  ) & 4294967295 )  & 4294967295 ) ;
       }
               icmp_ln13_fu_241_p2 =   ( ( in2 & 4294967295 )  == ( in1 & 4294967295 )  ? 1 : 0 ) ;
               icmp_ln13_reg_356 =  icmp_ln13_reg_356__temp ;
   if((((ap_start == 1) && (icmp_ln13_fu_241_p2 == 1)) && (1 == ap_CS_fsm_state1)) == 1){
       if(((ap_start == 1) && (icmp_ln13_fu_241_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
           t16_0_reg_207 =   ( (  ( (  ( ( ( in7__temp  & 4294967295 )  + ( in12__temp  & 4294967295 )  ) & 4294967295 )  + ( in8__temp  & 4294967295 )  ) & 4294967295 )  - ( in17__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
           sub_ln11_reg_351 =   ( ( ( in14__temp  & 4294967295 )  - ( in15__temp  & 4294967295 )  ) & 4294967295 ) ;
           icmp_ln13_reg_356 =   ( ( in2 & 4294967295 )  == ( in1 & 4294967295 )  ? 1 : 0 ) ;
       }
       if(((ap_start == 1) && (icmp_ln13_fu_241_p2 == 0)) && (1 == ap_CS_fsm_state1))
       {
           t26_1_reg_370 =   ( (  ( ( ( in19__temp  & 4294967295 )  + ( in20__temp  & 4294967295 )  ) & 4294967295 )  +  ( ( ( in3__temp  & 4294967295 )  - ( in4__temp  & 4294967295 )  ) & 4294967295 )  ) & 4294967295 ) ;
           t23_reg_365 =   ( (  ( (  ( ( ( in3__temp  & 4294967295 )  - ( in4__temp  & 4294967295 )  ) & 4294967295 )  + ( in22__temp  & 4294967295 )  ) & 4294967295 )  +  ( (  ( ( ( in7__temp  & 4294967295 )  + ( in12__temp  & 4294967295 )  ) & 4294967295 )  + ( in8__temp  & 4294967295 )  ) & 4294967295 )  ) & 4294967295 ) ;
           icmp_ln18_reg_360 =   ( do_twos_complement( ( in9 & 4294967295 )  , 63 )  < do_twos_complement( ( in10 & 4294967295 )  , 63 )  ? 1 : 0 ) ;
       }
       goto ap_ST_fsm_state3;
   }
   if((((ap_start == 1) && (icmp_ln13_fu_241_p2 == 0)) && (1 == ap_CS_fsm_state1)) == 1){
       if(((ap_start == 1) && (icmp_ln13_fu_241_p2 == 1)) && (1 == ap_CS_fsm_state1))
       {
               t16_0_reg_207 =   ( (  ( (  ( ( ( in7__temp  & 4294967295 )  + ( in12__temp  & 4294967295 )  ) & 4294967295 )  + ( in8__temp  & 4294967295 )  ) & 4294967295 )  - ( in17__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
               sub_ln11_reg_351 =   ( ( in14__temp )  - ( in15__temp )  ) ;
               icmp_ln13_reg_356 =   ( ( in2 & 4294967295 )  == ( in1 & 4294967295 )  ? 1 : 0 ) ;
       }
       if(((ap_start == 1) && (icmp_ln13_fu_241_p2 == 0)) && (1 == ap_CS_fsm_state1))
       {
               t26_1_reg_370 =   ( (  ( ( ( in19__temp  & 4294967295 )  + ( in20__temp  & 4294967295 )  ) & 4294967295 )  +  ( ( ( in3__temp  & 4294967295 )  - ( in4__temp  & 4294967295 )  ) & 4294967295 )  ) & 4294967295 ) ;
               t23_reg_365 =   ( (  ( (  ( ( ( in3__temp  & 4294967295 )  - ( in4__temp  & 4294967295 )  ) & 4294967295 )  + ( in22__temp  & 4294967295 )  ) & 4294967295 )  +  ( (  ( ( ( in7__temp  & 4294967295 )  + ( in12__temp  & 4294967295 )  ) & 4294967295 )  + ( in8__temp  & 4294967295 )  ) & 4294967295 )  ) & 4294967295 ) ;
               icmp_ln18_reg_360 =   ( do_twos_complement( ( in9 & 4294967295 )  , 63 )  < do_twos_complement( ( in10 & 4294967295 )  , 63 )  ? 1 : 0 ) ;
       }
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
           out30_o =   ( (  (  ( ( icmp_ln18_reg_360__temp  & 1 ) & 18446744073709551615 )  == 1 ?  ( (  ( ( t23_reg_365__temp  - ( in24__temp  & 4294967295 )  ) & 4294967295 )  + ( in27__temp  & 4294967295 )  ) & 4294967295 )  :  t26_1_reg_370__temp  )  + ( in29__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state2)
       {
           out30_o_ap_vld =  1;
               out13 =   ( ( ( in14__temp  & 4294967295 )  - ( in15__temp  & 4294967295 )  ) & 4294967295 ) ;
               out31 =   (  ( ( ap_phi_mux_t16_0_phi_fu_210_p4 + ( in32__temp  & 4294967295 )  ) & 4294967295 )  & 4294967295 ) ;
       }
       if(1 == ap_CS_fsm_state2)
       {
           t16_1_reg_380 =   ( (  (  ( ( icmp_ln18_reg_360__temp  & 1 ) & 18446744073709551615 )  == 1 ?  ( (  ( ( t23_reg_365__temp  - ( in24__temp  & 4294967295 )  ) & 4294967295 )  + ( in27__temp  & 4294967295 )  ) & 4294967295 )  :  t26_1_reg_370__temp  )  - ( in28__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
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
          ap_return =  ( (  ( ( sub_ln11_reg_351 +  ( ( ap_phi_mux_t16_0_phi_fu_210_p4 + ( in32 & 4294967295 )  ) & 4294967295 )  ) & 4294967295 )  + ( out30_o & 4294967295 )  ) & 4294967295 ) ;
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
               out31 =   (  ( ( ap_phi_mux_t16_0_phi_fu_210_p4 + ( in32__temp  & 4294967295 )  ) & 4294967295 )  & 4294967295 ) ;
       }
               icmp_ln13_reg_356 =  icmp_ln13_reg_356__temp ;
       if((icmp_ln13_reg_356 == 0) && (1 == ap_CS_fsm_state3))
       {
           t16_0_reg_207 =  t16_1_reg_380__temp ;
       }
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
	printf("%lld ",do_twos_complement( ap_return,32));
       return;
}


int main(){
	for(int i=0; i<3; i++){
	unsigned long long int ap_clk__1 = 1;
	unsigned long long int ap_done__1 = 0;
	unsigned long long int ap_idle__1 = 0;
	unsigned long long int ap_ready__1 = 1;
	unsigned long long int ap_return__1 = 0;
	//unsigned long long int ap_return1_ap_vld__1 = 0;
	unsigned long long int ap_rst__1 = 0;
	unsigned long long int ap_start__1 = 1;
	unsigned long long int in1__1; 
    unsigned long long int in2__1;
    unsigned long long int in3__1;
    unsigned long long int in4__1;
    unsigned long long int in7__1;
    unsigned long long int in8__1;
    unsigned long long int in9__1;
	unsigned long long int in10__1; 
	unsigned long long int in12__1; 
	unsigned long long int in14__1; 
	unsigned long long int in15__1; 
	unsigned long long int in17__1; 
	unsigned long long int in19__1;  
	unsigned long long int in20__1; 
	unsigned long long int in22__1; 
	unsigned long long int in24__1; 
	unsigned long long int in27__1; 
	unsigned long long int in28__1; 
	unsigned long long int in29__1;  
	unsigned long long int in32__1;     
	long long int out13__1 = 0; 
	long long int out13_ap_vld__1 = 0; 
	unsigned long long int out30_i__1 = 0; 
	unsigned long long int out30_o__1 = 0; 
	unsigned long long int out30_o_ap_vld__1 = 0;
	unsigned long long int out31__1 = 0; 
	unsigned long long int out31_ap_vld__1 = 0;
    scanf("%llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu",&in1__1,&in2__1,&in3__1,&in4__1,&in7__1,&in8__1,&in9__1,&in10__1,&in12__1,&in14__1,&in15__1,&in17__1,&in19__1,&in20__1,&in22__1,&in24__1,&in27__1,&in28__1,&in29__1,&in32__1);	
	int dummy = 1;
	hls_macc(&ap_clk__1,&ap_done__1,&ap_idle__1,&ap_ready__1,&ap_return__1,&ap_rst__1,&ap_start__1,&in1__1,&in2__1,&in3__1,&in4__1,&in7__1,&in8__1,&in9__1,&in10__1,&in12__1,&in14__1,&in15__1,&in17__1,&in19__1,&in20__1,&in22__1,&in24__1,&in27__1,&in28__1,&in29__1,&in32__1,&out13__1,&out13_ap_vld__1,&out30_i__1,&out30_o__1,&out30_o_ap_vld__1,&out31__1,&out31_ap_vld__1,dummy);
}
return 0;

}
