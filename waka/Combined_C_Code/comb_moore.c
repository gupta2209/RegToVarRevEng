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
long long int add_ln21_fu_253_p2;
long long int add_ln26_fu_265_p2;
long long int add_ln28_fu_303_p2;
long long int add_ln30_fu_309_p2;
long long int add_ln31_fu_315_p2;
long long int ap_CS_fsm;
long long int ap_NS_fsm;
long long int ap_phi_mux_t16_0_phi_fu_210_p4;
long long int icmp_ln13_fu_241_p2;
long long int icmp_ln13_reg_356;
long long int icmp_ln18_fu_247_p2;
long long int icmp_ln18_reg_360;
long long int icmp_ln18_reg_360_temp_0;
long long int sub_ln11_fu_222_p2;
long long int sub_ln11_reg_351;
long long int t11_fu_235_p2;
long long int t16_0_reg_207;
long long int t16_1_fu_298_p2;
long long int t16_1_reg_380;
long long int t16_fu_277_p2;
long long int t23_fu_259_p2;
long long int t23_reg_365;
long long int t25_fu_283_p2;
long long int t26_1_fu_271_p2;
long long int t26_1_reg_370;
long long int t26_2_fu_292_p3;
long long int t26_fu_287_p2;
long long int t5_fu_216_p2;

long long int t25; 
long long int t23; 
long long int add_ln31_1; 
long long int add_ln30; 
long long int add_ln12; 
long long int t16_1; 
long long int t26_1; 
long long int t11; 
long long int add_ln21; 
long long int t26_2; 
long long int t5; 
long long int add_ln26; 
long long int add_ln28;
long long int t16; 
long long int icmp_ln13; 
long long int t26; 
long long int add_ln31;
long long int sub_ln11; 
long long int icmp_ln18; 
long long int t16_0;
long long int out30; 
long long int zero;

void state1(){
    //generated c code
    if(!(1 == ap_CS_fsm_state3)){
    	ap_done = 0 ; 
    }
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
   		ap_idle = 0 ; 
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
    icmp_ln13_fu_241_p2 =   in2  == in1  ? zero+1 : zero ;
    if((ap_start == 0) && (1 == ap_CS_fsm_state1))
    {
        ap_idle =  1;
    }
   if((((ap_start == 1) && (icmp_ln13_fu_241_p2 == zero+1)) && (1 == ap_CS_fsm_state1)) == 1){
       if(((ap_start == 1) && (icmp_ln13_fu_241_p2 == zero+1)) && (1 == ap_CS_fsm_state1))
    {
        t16_0_reg_207 =   in7  +  in12  +  in8  -  in17 ;
    }
    if((ap_start == 1) && (1 == ap_CS_fsm_state1))
    {
        sub_ln11_reg_351 =   in14 - in15  ;
        icmp_ln13_reg_356 =   (in2 == in1)  ? zero+1 : zero ;
    }
    if(((ap_start == 1) && (icmp_ln13_fu_241_p2 == zero)) && (1 == ap_CS_fsm_state1))
    {
        t26_1_reg_370 =    in19  + in20  +   in3  -  in4 ;
        t23_reg_365 =    in3  - in4  +  in22  +  in7  +  in12  +  in8 ;
        icmp_ln18_reg_360 =   in9  < in10  ? zero+1 : zero ;
    }
       //goto ap_ST_fsm_state3;
   }
   if((((ap_start == 1) && (icmp_ln13_fu_241_p2 == zero)) && (1 == ap_CS_fsm_state1)) == 1){
       if(((ap_start == 1) && (icmp_ln13_fu_241_p2 == zero+1)) && (1 == ap_CS_fsm_state1))
    {
            t16_0_reg_207 =   in7  +  in12  +  in8  -  in17 ;
    }
    if((ap_start == 1) && (1 == ap_CS_fsm_state1))
    {
            sub_ln11_reg_351 =   in14 - in15  ;
        	icmp_ln13_reg_356 =   in2   == in1  ? zero+1 : zero ;
    }
    if(((ap_start == 1) && (icmp_ln13_fu_241_p2 == zero)) && (1 == ap_CS_fsm_state1))
    {
            t26_1_reg_370 =    in19  + in20  +   in3  -  in4 ;
		    t23_reg_365 =    in3  - in4  +  in22  +  in7  +  in12  +  in8 ;
		    icmp_ln18_reg_360 =   in9  < in10  ? zero+1 : zero ;
    }
       //goto ap_ST_fsm_state2;
   }

    //scheduled c code
    t5 = in3 - in4; //%t5 = sub nsw i32 %in3, %in4
	sub_ln11 = in14 - in15; //%sub_ln11 = sub nsw i32 %in14, %in15
	add_ln12 = in7 + in12; //%add_ln12 = add i32 %in7, %in12
	t11 = add_ln12 + in8; //%t11 = add i32 %add_ln12, %in8
	icmp_ln13 = in2 == in1 ? zero+1 : zero; //%icmp_ln13 = icmp eq i32 %in2, %in1
	//br i1 %icmp_ln13, label %1, label %_ifconv
	if(!icmp_ln13){
		icmp_ln18 = in9 < in10 ? zero+1 : zero; //%icmp_ln18 = icmp slt i32 %in9, %in10
		add_ln21 = t5 + in22; //%add_ln21 = add i32 %t5, %in22
		t23 = add_ln21 + t11; //%t23 = add i32 %add_ln21, %t11
		add_ln26 = in19 + in20; //%add_ln26 = add i32 %in19, %in20
		t26_1 = add_ln26 + t5; //%t26_1 = add i32 %add_ln26, %t5
	}
	if(icmp_ln13){
		t16 = in7  +  in12  +  in8  -  in17 ; //%t16 = sub nsw i32 %t11, %in17
		//br label %
		t16_0 = t16;
		//goto state3;
	}
	//goto state2;
}

void state2(){
    //generated c code
    if(!(1 == ap_CS_fsm_state3)){
        ap_done = 0 ; 
    }
    if(!((ap_start == 0) && (1 == ap_CS_fsm_state1))){
        ap_idle = 0 ; 
    }
    if(!((icmp_ln13_reg_356 == zero) && (1 == ap_CS_fsm_state3))){
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
        out30_o =   (icmp_ln18_reg_360  == zero+1 ?  ( t23_reg_365  - in24 + in27  )  :  t26_1_reg_370  )  + in29 ;
    }
    if(1 == ap_CS_fsm_state2)
    {
        t16_1_reg_380 =   (icmp_ln18_reg_360 == zero+1 ?  (t23_reg_365  -  in24  + in27 )  :  t26_1_reg_370  )  - in28 ;
    }

    //scheduled c code
    if(icmp_ln18){
    t25 = t23 - in24; //%t25 = sub i32 %t23, %in24
    t26 = t25 + in27; //%t26 = add i32 %t25, %in27
    }
    t26_2 = icmp_ln18 ? t26 : t26_1; //%t26_2 = select i1 %icmp_ln18, i32 %t26, i32 %t26_1
    t16_1 = t26_2 - in28; //%t16_1 = sub nsw i32 %t26_2, %in28
    add_ln28 = t26_2 + in29; //%add_ln28 = add nsw i32 %t26_2, %in29
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
    if(!((icmp_ln13_reg_356 == zero) && (1 == ap_CS_fsm_state3))){
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
    if((icmp_ln13_reg_356 == zero) && (1 == ap_CS_fsm_state3))
    {
        ap_phi_mux_t16_0_phi_fu_210_p4 =  t16_1_reg_380 ;
    }
    if(1 == ap_CS_fsm_state3)
    {
        ap_done =  1;
        if(ap_done==1){
        	ap_return =  sub_ln11_reg_351 + ap_phi_mux_t16_0_phi_fu_210_p4 + in32  +  out30_o ;
        }
    }
    if(1 == ap_CS_fsm_state3)
    {
        ap_ready =  1;
    }
    if((icmp_ln13_reg_356 == zero) && (1 == ap_CS_fsm_state3))
    {
        t16_0_reg_207 =  t16_1_reg_380 ;
    }

    //scheduled c code
    //t16_0 = phi i32 [ %t16, %1 ], [ %t16_1, %_ifconv ] //%t16_0 = phi i32 [ %t16, %1 ], [ %t16_1, %_ifconv ]
    if(!icmp_ln13){
        t16_0 = t16_1;
    }
    add_ln30 = t16_0 + in32; //%add_ln30 = add nsw i32 %t16_0, %in32
    add_ln31 = sub_ln11 + add_ln30; //%add_ln31 = add i32 %sub_ln11, %add_ln30
    add_ln31_1 = add_ln31 + out30; //%add_ln31_1 = add i32 %add_ln31, %out30_read
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
   add_ln21_fu_253_p2=0;
   add_ln26_fu_265_p2=0;
   add_ln28_fu_303_p2=0;
   add_ln30_fu_309_p2=0;
   add_ln31_fu_315_p2=0;
   ap_CS_fsm=0;
   ap_NS_fsm=0;
   ap_phi_mux_t16_0_phi_fu_210_p4=0;
   icmp_ln13_fu_241_p2=0;
   icmp_ln13_reg_356=0;
   icmp_ln18_fu_247_p2=0;
   icmp_ln18_reg_360=0;
   icmp_ln18_reg_360_temp_0=0;
   sub_ln11_fu_222_p2=0;
   sub_ln11_reg_351=0;
   t11_fu_235_p2=0;
   t16_0_reg_207=0;
   t16_1_fu_298_p2=0;
   t16_1_reg_380=0;
   t16_fu_277_p2=0;
   t23_fu_259_p2=0;
   t23_reg_365=0;
   t25_fu_283_p2=0;
   t26_1_fu_271_p2=0;
   t26_1_reg_370=0;
   t26_2_fu_292_p3=0;
   t26_fu_287_p2=0;
   t5_fu_216_p2=0;
    ap_done=0;
    ap_start=1;

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;

	state1();
    //icmp_ln13_fu_241_p2 =   ( ( in2  )  == ( in1  )  ? 1 : 0 ) ;
   if((((ap_start == 1) && (icmp_ln13_fu_241_p2 == 1)) && (1 == ap_CS_fsm_state1)) == 1){
       goto ap_ST_fsm_state3;
   }
   if((((ap_start == 1) && (icmp_ln13_fu_241_p2 == 0)) && (1 == ap_CS_fsm_state1)) == 1){
       goto ap_ST_fsm_state2;
   }

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
    ap_CS_fsm_state3 = 0;

    state2();
       goto ap_ST_fsm_state3;

   ap_ST_fsm_state3:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 1;

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
    scanf("%llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu",&zero,&in1__1,&in2__1,&in3__1,&in4__1,&in7__1,&in8__1,&in9__1,&in10__1,&in12__1,&in14__1,&in15__1,&in17__1,&in19__1,&in20__1,&in22__1,&in24__1,&in27__1,&in28__1,&in29__1,&in32__1);	
	int dummy = 1;
	hls_macc(&ap_clk__1,&ap_done__1,&ap_idle__1,&ap_ready__1,&ap_return__1,&ap_rst__1,&ap_start__1,&in1__1,&in2__1,&in3__1,&in4__1,&in7__1,&in8__1,&in9__1,&in10__1,&in12__1,&in14__1,&in15__1,&in17__1,&in19__1,&in20__1,&in22__1,&in24__1,&in27__1,&in28__1,&in29__1,&in32__1,&out13__1,&out13_ap_vld__1,&out30_i__1,&out30_o__1,&out30_o_ap_vld__1,&out31__1,&out31_ap_vld__1,dummy);
}
return 0;

}
