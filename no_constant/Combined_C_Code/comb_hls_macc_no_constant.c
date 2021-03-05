#include<stdio.h>

long long int G1;
long long int G2;
long long int G3;
long long int G4;
long long int GG1;
long long int GG2;
long long int ap_clk;
long long int ap_done;
long long int ap_idle;
long long int ap_ready;
long long int ap_return;
long long int ap_rst;
long long int ap_start;
long long int i1;
long long int i2;
long long int i3;
long long int i4;
long long int i6;
long long int o1;
long long int o1_ap_vld;
long long int o2;
long long int o2_ap_vld;
long long int o3;
long long int o4;
long long int ap_CS_fsm_state1;
long long int ap_CS_fsm_state2;
long long int ap_CS_fsm_state3;
long long int ap_CS_fsm_state4;
long long int ap_CS_fsm_state5;
long long int op3_fu_146_p0;
long long int op3_fu_146_p1;
long long int op4_fu_106_p0;
long long int op4_fu_106_p1;
long long int op5_2_fu_118_p0;
long long int op5_2_fu_118_p1;
long long int op5_fu_112_p0;
long long int op5_fu_112_p1;
long long int op6_3_fu_151_p0;
long long int op6_3_fu_151_p1;
long long int op6_4_fu_178_p1;
long long int op7_fu_155_p0;
long long int op7_fu_155_p1;
long long int op8_fu_159_p0;
long long int op8_fu_159_p1;
long long int tmp1_fu_189_p1;
long long int tmp_fu_124_p0;
long long int ap_CS_fsm;
long long int ap_NS_fsm;
long long int op13_fu_194_p2;
long long int op13_reg_292;
long long int op14_fu_204_p2;
long long int op14_reg_298;
long long int op3_fu_146_p2;
long long int op3_reg_272;
long long int op4_fu_106_p2;
long long int op4_reg_239;
long long int op5_1_fu_129_p2;
long long int op5_1_reg_262;
long long int op5_2_fu_118_p2;
long long int op5_2_reg_251;
long long int op5_3_fu_134_p3;
long long int op5_fu_112_p2;
long long int op5_reg_246;
long long int op6_1_fu_182_p3;
long long int op6_2_fu_167_p2;
long long int op6_3_fu_151_p2;
long long int op6_3_reg_277;
long long int op6_4_fu_178_p2;
long long int op6_5_fu_171_p3;
long long int op6_fu_163_p2;
long long int op7_fu_155_p2;
long long int op7_reg_282;
long long int op8_fu_159_p2;
long long int op8_reg_287;
long long int tmp1_fu_189_p2;
long long int tmp2_fu_199_p2;
long long int tmp_6_fu_141_p2;
long long int tmp_6_reg_267;
long long int tmp_fu_124_p2;
long long int tmp_reg_257;

long long int  op4; 
long long int  op5; 
long long int  op5_2; 
long long int  icmp_ln16; 
long long int  op5_1; 
long long int  op5_3; 
long long int  icmp_ln27;
long long int  op3; 
long long int  op6_3; 
long long int  op7; 
long long int  op8; 
long long int  op6; 
long long int  op6_1; 
long long int  op6_2; 
long long int  op6_4; 
long long int  op6_5; 
long long int  add_ln47; 
long long int  op13;
long long int add_ln49; 
long long int  op14; 
long long int  add_ln52; 
long long int  add_ln52_1; 
long long int  add_ln52_2;

void state1(){
    //generated c code
    if((1 == ap_CS_fsm_state1) && (ap_start == 1))
    {
        op5_reg_246 =   G1 * i3 ;
        op5_2_reg_251 = i4  * i3 ;
        op4_reg_239 =   G2  * i1 ;
    }
    //goto ap_ST_fsm_state2;

    //scheduled c code
    op4 = G2 * i1; //%op4 = mul nsw i32 %G2, %i1_read
    op5 = G1 * i3; //%op5 = mul nsw i32 %G1_read, %i3_read
    op5_2 = i4 * i3; //%op5_2 = mul nsw i32 %i4_read, %i3_read4
}


void state2(){
    //generated c code
    if(1 == ap_CS_fsm_state2)
    {
        tmp_reg_257 =   ( G1  > 10 ? 1 :  0 ) ;
        tmp_6_reg_267 =   (  (  ( G1  > 10 ? 1 :  0 )  == 1 ?  ( op5_reg_246  + GG1 )  :  op5_2_reg_251  )  < op4_reg_239  ? 1 : 0 ) ;
        op5_1_reg_262 =   op5_reg_246  + GG1 ;
    }

    //scheduled c code
    icmp_ln16 = G1 > 10 ? 1 : 0; //%icmp_ln16 = icmp sgt i32 %G1_read, 10
    op5_1 = op5 + GG1; //%op5_1 = add nsw i32 %op5, %GG1_read
    op5_3 = icmp_ln16 ? op5_1 : op5_2; //%op5_3 = select i1 %icmp_ln16, i32 %op5_1, i32 %op5_2
    icmp_ln27 = op5_3 < op4 ? 1 : 0; //%icmp_ln27 = icmp slt i32 %op5_3, %op4
}


void state3(){
    //generated c code
    if(((tmp_6_reg_267 == 0) && (tmp_reg_257 == 0)) && (1 == ap_CS_fsm_state3))
    {
        op3_reg_272 =   G1  * i2 ;
    }
    if((tmp_6_reg_267 == 1) && (1 == ap_CS_fsm_state3))
    {
        op6_3_reg_277 =   G2  * i4 ;
    }
    if(1 == ap_CS_fsm_state3)
    {
        op8_reg_287 =   G2  * i3 ;
        op7_reg_282 =   G1  * i4 ;
    }

    //scheduled c code
    if(!icmp_ln16 & !icmp_ln27){
        op3 = G1 * i2; //%op3 = mul nsw i32 %G1_read, %i2_read
    }
    if(icmp_ln27){
        op6_3 = G2 * i4; //%op6_3 = mul nsw i32 %G2_read, %i4_read
    }
    op7 = G1 * i4; //%op7 = mul nsw i32 %G1_read, %i4_read
    op8 = G2 * i3; //%op8 = mul nsw i32 %G2_read, %i3_read
}


void state4(){
    //generated c code
    if(1 == ap_CS_fsm_state4)
    {
        op14_reg_298 =   op8_reg_287  + i6  + op7_reg_282 ;
        op13_reg_292 =   ((tmp_6_reg_267  == 1) ?  (op6_3_reg_277 - i3)  :   ((tmp_reg_257  == 1) ?  (op5_1_reg_262  - op4_reg_239)  :   ( op5_2_reg_251  - op3_reg_272))) + G1  + op4_reg_239;
    }

    //scheduled c code
    if(icmp_ln16 & !icmp_ln27){
        op6 = op5_1 - op4; //%op6 = sub nsw i32 %op5_1, %op4
    }
    if(!icmp_ln16 & !icmp_ln27){
        op6_1 = op5_2 - op3; //%op6_1 = sub nsw i32 %op5_2, %op3
    }
    if(!icmp_ln27){
        op6_2 = icmp_ln16 ? op6: op6_1; //%op6_2 = select i1 %icmp_ln16, i32 %op6, i32 %op6_1
    }
    if(icmp_ln27){
        op6_4 = op6_3 - i3; //%op6_4 = sub nsw i32 %op6_3, %i3_read
    }
    op6_5 = icmp_ln27 ? op6_4 : op6_2; //%op6_5 = select i1 %icmp_ln27, i32 %op6_4, i32 %op6_2
    add_ln47 = op6_5 + G1; //%add_ln47 = add i32 %op6_5, %G1_read
    op13 = add_ln47 + op4; //%op13 = add i32 %add_ln47, %op4
    add_ln49 = op8 + i6; //%add_ln49 = add i32 %op8, %i6_read
    op14 = add_ln49 + op7; //%op14 = add i32 %add_ln49, %op7
}


void state5(){
    //generated c code
    if(1 == ap_CS_fsm_state5)
    {
        ap_done =  1;
        if(ap_done==1){
        ap_return =  op13_reg_292 + op14_reg_298 ;
        }
    }
    if(1 == ap_CS_fsm_state5)
    {
        ap_ready =  1;
    }
    if(1 == ap_CS_fsm_state5)
    {
        o1_ap_vld =  1;
            o1 =   ( op13_reg_292  & 4294967295 ) ;
            o2 =   ( op14_reg_298  & 4294967295 ) ;
    }
    if(1 == ap_CS_fsm_state5)
    {
        o2_ap_vld =  1;
            o1 =   ( op13_reg_292  & 4294967295 ) ;
            o2 =   ( op14_reg_298  & 4294967295 ) ;
    }

    //scheduled c code
    add_ln52_1 = op13 + op14; //%add_ln52_1 = add i32 %op13, %op14
}

void hls_macc(long long int *ap_clk__1,long long int *ap_done__1,long long int *ap_idle__1,long long int *ap_ready__1,long long int *ap_return__1,long long int *ap_rst__1,long long int *ap_start__1,long long int *i1__1,long long int *i2__1,long long int *i3__1,long long int *i4__1,long long int *i6__1,long long int *o1__1,long long int *o1_ap_vld__1,long long int *o2__1,long long int *o2_ap_vld__1,long long int *o3__1,long long int *o4__1,long long int *G1__1,long long int *G2__1,long long int *G3__1,long long int *G4__1,long long int *GG1__1,long long int *GG2__1,int dummy){
    G1=*G1__1;
    G2=*G2__1;
    G3=*G3__1;
    G4=*G4__1;
    GG1=*GG1__1;
    GG2=*GG2__1;
    ap_clk=*ap_clk__1;
    ap_done=*ap_done__1;
    ap_idle=*ap_idle__1;
    ap_ready=*ap_ready__1;
    ap_return=*ap_return__1;
    ap_rst=*ap_rst__1;
    ap_start=*ap_start__1;
    i1=*i1__1;
    i2=*i2__1;
    i3=*i3__1;
    i4=*i4__1;
    i6=*i6__1;
    o1=*o1__1;
    o1_ap_vld=*o1_ap_vld__1;
    o2=*o2__1;
    o2_ap_vld=*o2_ap_vld__1;
    o3=*o3__1;
    o4=*o4__1;
   ap_CS_fsm_state1=0;
   ap_CS_fsm_state2=0;
   ap_CS_fsm_state3=0;
   ap_CS_fsm_state4=0;
   ap_CS_fsm_state5=0;
   op3_fu_146_p0=0;
   op3_fu_146_p1=0;
   op4_fu_106_p0=0;
   op4_fu_106_p1=0;
   op5_2_fu_118_p0=0;
   op5_2_fu_118_p1=0;
   op5_fu_112_p0=0;
   op5_fu_112_p1=0;
   op6_3_fu_151_p0=0;
   op6_3_fu_151_p1=0;
   op6_4_fu_178_p1=0;
   op7_fu_155_p0=0;
   op7_fu_155_p1=0;
   op8_fu_159_p0=0;
   op8_fu_159_p1=0;
   tmp1_fu_189_p1=0;
   tmp_fu_124_p0=0;
   ap_CS_fsm=0;
   ap_NS_fsm=0;
   op13_fu_194_p2=0;
   op13_reg_292=0;
   op14_fu_204_p2=0;
   op14_reg_298=0;
   op3_fu_146_p2=0;
   op3_reg_272=0;
   op4_fu_106_p2=0;
   op4_reg_239=0;
   op5_1_fu_129_p2=0;
   op5_1_reg_262=0;
   op5_2_fu_118_p2=0;
   op5_2_reg_251=0;
   op5_3_fu_134_p3=0;
   op5_fu_112_p2=0;
   op5_reg_246=0;
   op6_1_fu_182_p3=0;
   op6_2_fu_167_p2=0;
   op6_3_fu_151_p2=0;
   op6_3_reg_277=0;
   op6_4_fu_178_p2=0;
   op6_5_fu_171_p3=0;
   op6_fu_163_p2=0;
   op7_fu_155_p2=0;
   op7_reg_282=0;
   op8_fu_159_p2=0;
   op8_reg_287=0;
   tmp1_fu_189_p2=0;
   tmp2_fu_199_p2=0;
   tmp_6_fu_141_p2=0;
   tmp_6_reg_267=0;
   tmp_fu_124_p2=0;
   tmp_reg_257=0;
	ap_done=0;
	ap_start=1;

   ap_ST_fsm_state1:

	ap_CS_fsm_state1 = 1;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;

    state1();  
    goto ap_ST_fsm_state2;
   

   ap_ST_fsm_state2:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 1;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;

    state2();
    goto ap_ST_fsm_state3;

   ap_ST_fsm_state3:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 1;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 0;

    state3();
    goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 1;
	ap_CS_fsm_state5 = 0;

       state4();
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state5:

	ap_CS_fsm_state1 = 0;
	ap_CS_fsm_state2 = 0;
	ap_CS_fsm_state3 = 0;
	ap_CS_fsm_state4 = 0;
	ap_CS_fsm_state5 = 1;

       state5();
       if(ap_done==1){
       	goto end;
       }
       goto ap_ST_fsm_state1;
   end:
    if(ap_return == add_ln52_1){
        printf("T");
    }else{
        printf("%lld %lld\n",ap_return,add_ln52_1);
    }
	*G1__1=G1;
	*G2__1=G2;
	*G3__1=G3;
	*G4__1=G4;
	*GG1__1=GG1;
	*GG2__1=GG2;
	*ap_clk__1=ap_clk;
	*ap_done__1=ap_done;
	*ap_idle__1=ap_idle;
	*ap_ready__1=ap_ready;
	*ap_return__1=ap_return;
	*ap_rst__1=ap_rst;
	*ap_start__1=ap_start;
	*i1__1=i1;
	*i2__1=i2;
	*i3__1=i3;
	*i4__1=i4;
	*i6__1=i6;
	*o1__1=o1;
	*o1_ap_vld__1=o1_ap_vld;
	*o2__1=o2;
	*o2_ap_vld__1=o2_ap_vld;
	*o3__1=o3;
	*o4__1=o4;
       return;
}

int main(){
	for(int i=0; i<100; i++){
		long long int ap_clk__1 = 1;
		long long int ap_done__1 = 0;
		long long int ap_idle__1 = 0;
		long long int ap_ready__1 = 1;
		long long int ap_return__1 = 0;
		//long long int ap_return1_ap_vld__1 = 0;
		long long int ap_rst__1 = 0;
		long long int ap_start__1 = 1;
		long long int i1__1; 
		long long int i2__1;
		long long int i3__1;
		long long int i4__1;
		long long int i6__1;
		long long int o1__1;
		long long int o1_ap_vld__1;
		long long int o2__1;
		long long int o2_ap_vld__1;
		long long int o3__1;
		long long int o4__1;
		long long int G1__1;
		long long int G2__1;
		long long int G3__1; 
		long long int G4__1; 
		long long int GG1__1; 
		long long int GG2__1; 

		scanf("%llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu",&i1__1,&i2__1,&i3__1,&i4__1,&i6__1,&o1__1,&o2__1,&o3__1,&o4__1,&G1__1,&G2__1,&G3__1,&G4__1,&GG1__1,&GG2__1);	
		int dummy = 1;
	hls_macc(&ap_clk__1,&ap_done__1,&ap_idle__1,&ap_ready__1,&ap_return__1,&ap_rst__1,&ap_start__1,&i1__1,&i2__1,&i3__1,&i4__1,&i6__1,&o1__1,&o1_ap_vld__1,&o2__1,&o2_ap_vld__1,&o3__1,&o4__1,&G1__1,&G2__1,&G3__1,&G4__1,&GG1__1,&GG2__1,dummy);
}
return 0;

}
//16 9 5 16 15 11 7 4 -2 -10 4 3 -16 13 6
