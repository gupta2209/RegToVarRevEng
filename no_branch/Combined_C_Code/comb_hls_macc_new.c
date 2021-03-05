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
long long int ap_return1;
long long int ap_return1_ap_vld;
long long int ap_rst;
long long int ap_start;
long long int i1;
long long int i2;
long long int i3;
long long int i4;
long long int i5;
long long int i6;
long long int o1;
long long int o1_ap_vld;
long long int o2;
long long int o2_ap_vld;
long long int o3;
long long int o3_ap_vld;
long long int o4;
long long int o4_ap_vld;
long long int ap_CS_fsm_state1;
long long int ap_CS_fsm_state2;
long long int ap_CS_fsm_state3;
long long int ap_CS_fsm_state4;
long long int ap_CS_fsm_state5;
long long int ap_CS_fsm_state6;
long long int ap_CS_fsm_state7;
long long int mul_ln33_1_fu_195_p1;
long long int mul_ln33_1_fu_195_p2;
long long int mul_ln33_1_reg_347;
long long int mul_ln33_fu_191_p1;
long long int mul_ln33_fu_191_p2;
long long int mul_ln33_reg_342;
long long int op13_fu_168_p2;
long long int op13_reg_316;
long long int op14_fu_178_p2;
long long int op14_reg_324;
long long int op17_fu_183_p1;
long long int op18_fu_187_p1;
long long int op19_fu_199_p2;
long long int op19_reg_352;
long long int op1_fu_207_p0;
long long int op1_fu_207_p1;
long long int op20_fu_203_p2;
long long int op20_reg_358;
long long int op21_fu_219_p1;
long long int op22_fu_223_p1;
long long int op2_fu_213_p0;
long long int op2_fu_213_p1;
long long int op5_fu_139_p0;
long long int op5_fu_139_p1;
long long int op6_fu_145_p0;
long long int op6_fu_145_p1;
long long int op7_fu_151_p0;
long long int op7_fu_151_p1;
long long int op8_fu_157_p0;
long long int op8_fu_157_p1;
long long int tmp1_fu_251_p1;
long long int tmp2_fu_232_p1;
long long int tmp2_fu_232_p2;
long long int tmp2_reg_389;
long long int tmp3_fu_255_p1;
long long int tmp_fu_227_p1;
long long int tmp_fu_227_p2;
long long int tmp_reg_384;
long long int add_ln25_fu_163_p2;
long long int add_ln27_fu_173_p2;
long long int add_ln41_1_fu_241_p2;
long long int add_ln41_fu_237_p2;
long long int add_ln46_1_fu_269_p2;
long long int add_ln46_fu_264_p2;
long long int ap_CS_fsm;
long long int ap_NS_fsm;
long long int op17_fu_183_p2;
long long int op17_reg_332;
long long int op18_fu_187_p2;
long long int op18_reg_337;
long long int op1_fu_207_p2;
long long int op1_reg_364;
long long int op21_fu_219_p2;
long long int op21_reg_374;
long long int op22_fu_223_p2;
long long int op22_reg_379;
long long int op27_fu_245_p2;
long long int op27_reg_394;
long long int op28_fu_259_p2;
long long int op2_fu_213_p2;
long long int op2_reg_369;
long long int op5_fu_139_p2;
long long int op5_reg_296;
long long int op6_fu_145_p2;
long long int op6_reg_301;
long long int op7_fu_151_p2;
long long int op7_reg_306;
long long int op8_fu_157_p2;
long long int op8_reg_311;
long long int tmp1_fu_251_p2;
long long int tmp1_reg_400;
long long int tmp3_fu_255_p2;
long long int tmp3_reg_405;

long long int G1_tmp;
long long int G2_tmp;
long long int GG1_tmp;
long long int GG2_tmp;
long long int i1_tmp;
long long int i2_tmp;
long long int i3_tmp;
long long int i4_tmp;
long long int i5_tmp;
long long int i6_tmp;
long long int G2_read;
long long int G1_read;
long long int i4_read;
long long int i3_read;
long long int i6_read;
long long int i5_read;
long long int add_ln25;
long long int op13;
long long int add_ln27;
long long int op14;
long long int op5;
long long int op6;
long long int op7;
long long int op8;
long long int op17;
long long int op18;
long long int mul_ln33;
long long int mul_ln33_1;
long long int op19;
long long int op20;
long long int GG2_read;
long long int GG1_read;
long long int i2_read;
long long int i1_read;
long long int op2;
long long int op21;
long long int op22;
long long int tmp;
long long int tmp2;
long long int add_ln41;
long long int add_ln41_1;
long long int op27;
long long int tmp1;
long long int tmp3;
long long int add_ln41;
long long int add_ln41_1;
long long int add_ln46;
long long int add_ln46_1;
long long int add_ln46_2;
long long int op1;
long long int op28;
long long int o1_temp;
long long int o2_temp;
long long int o3_temp;
long long int o4_temp;
long long int ap_return1_temp;

void state1(){
	op8_reg_311 =   G2 * i3 ;
    op7_reg_306 =   G1  * i4 ;
    op6_reg_301 =   G2  * i4 ;
    op5_reg_296 =   G1  * i3 ;

	op5 = G1 * i3;
	op6 = G2 * i4;
	op7 = G1 * i4;
	op8 = G2 * i3;
}

void state2(){
	op14_reg_324 =   op8_reg_311  + i6  + op7_reg_306 ;
    op13_reg_316 =   op6_reg_301  + i5  + op5_reg_296 ;

	add_ln25 = op6 + i5;
	op13 = add_ln25 + op5;
	add_ln27 = op8 + i6;
	op14 = add_ln27 + op7;
}

void state3(){
	op18_reg_337 =   op14_reg_324  * G2 ;
   op17_reg_332 =    op13_reg_316  * G1 ;
   mul_ln33_reg_342 =  op14_reg_324 * G1 ;
   mul_ln33_1_reg_347 =   op13_reg_316  * G2 ;

	op17 = op13 * G1;
	op18 = op14 * G2;
	mul_ln33 = op14 * G1;
	mul_ln33_1 = op13 * G2;
}

void state4(){
	op20_reg_358 =   op17_reg_332  + op18_reg_337 ;
    op19_reg_352 =   mul_ln33_1_reg_347  * mul_ln33_reg_342 ;

	op19 = mul_ln33_1 * mul_ln33;
	op20 = op17 + op18;
}

void state5(){
	tmp_reg_384 =   op20_reg_358  + i1 ;
   tmp2_reg_389 =   op19_reg_352  + i2 ;
   op2_reg_369 =    GG2  * i2 ;
   op22_reg_379 =   op19_reg_352  * G2 ;
   op21_reg_374 =   op20_reg_358  * G1 ;
   op1_reg_364 =   GG1 * i1 ;

	op1 = GG1 * i1;
	op2 = GG2 * i2;
	op21 = op20 * G1;
	op22 = op19 * G2;
	tmp = op20 + i1;
	tmp2 = op19 + i2;
}

void state6(){
	tmp3_reg_405 =   tmp2_reg_389  * G1 ;
   tmp1_reg_400 =   tmp_reg_384  * G2 ;
   op27_reg_394 =   op2_reg_369 + op21_reg_374  + op1_reg_364 + op22_reg_379 ;

	add_ln41 = op1 + op22;
	add_ln41_1 = op2 + op21;
	op27 = add_ln41_1 + add_ln41;
	tmp1 = tmp * G2;
	tmp3 = tmp2 * G1;
}

void state7(){
	ap_return1_ap_vld = 1;
	o1_ap_vld =  1;
	o2_ap_vld =  1;
	o3_ap_vld =  1;
	o4_ap_vld =  1;
    ap_return1 =  op14_reg_324  + op27_reg_394  +  op13_reg_316  + tmp3_reg_405 + tmp1_reg_400 ;
   o1 =   op13_reg_316 ;
   o2 =   op14_reg_324 ;
   o3 =   op27_reg_394 ;
   o4 =   tmp3_reg_405  + tmp1_reg_400 ;

	o1_temp = op13;
	o2_temp = op14;
	o3_temp = op27;
	op28 = tmp3 + tmp1;
	o4_temp = op28;
	add_ln46 = op13 + op28;
	add_ln46_1 = op14 + op27;
	add_ln46_2 = add_ln46_1 + add_ln46;	
	ap_return1_temp = add_ln46_2;	
}

void hls_macc(long long int *G1__1,long long int *G2__1,long long int *G3__1,long long int *G4__1,long long int *GG1__1,long long int *GG2__1,long long int *ap_clk__1,long long int *ap_done__1,long long int *ap_idle__1,long long int *ap_ready__1,long long int *ap_return1__1,long long int *ap_return1_ap_vld__1,long long int *ap_rst__1,long long int *ap_start__1,long long int *i1__1,long long int *i2__1,long long int *i3__1,long long int *i4__1,long long int *i5__1,long long int *i6__1,long long int *o1__1,long long int *o1_ap_vld__1,long long int *o2__1,long long int *o2_ap_vld__1,long long int *o3__1,long long int *o3_ap_vld__1,long long int *o4__1,long long int *o4_ap_vld__1,int dummy){
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
	ap_return1=*ap_return1__1;
	ap_return1_ap_vld=*ap_return1_ap_vld__1;
	ap_rst=*ap_rst__1;
	ap_start=*ap_start__1;
	i1=*i1__1;
	i2=*i2__1;
	i3=*i3__1;
	i4=*i4__1;
	i5=*i5__1;
	i6=*i6__1;
	o1=*o1__1;
	o1_ap_vld=*o1_ap_vld__1;
	o2=*o2__1;
	o2_ap_vld=*o2_ap_vld__1;
	o3=*o3__1;
	o3_ap_vld=*o3_ap_vld__1;
	o4=*o4__1;
	o4_ap_vld=*o4_ap_vld__1;
   ap_CS_fsm_state1=0;
   ap_CS_fsm_state2=0;
   ap_CS_fsm_state3=0;
   ap_CS_fsm_state4=0;
   ap_CS_fsm_state5=0;
   ap_CS_fsm_state6=0;
   ap_CS_fsm_state7=0;
   mul_ln33_1_fu_195_p1=0;
   mul_ln33_1_fu_195_p2=0;
   mul_ln33_1_reg_347=0;
   mul_ln33_fu_191_p1=0;
   mul_ln33_fu_191_p2=0;
   mul_ln33_reg_342=0;
   op13_fu_168_p2=0;
   op13_reg_316=0;
   op14_fu_178_p2=0;
   op14_reg_324=0;
   op17_fu_183_p1=0;
   op18_fu_187_p1=0;
   op19_fu_199_p2=0;
   op19_reg_352=0;
   op1_fu_207_p0=0;
   op1_fu_207_p1=0;
   op20_fu_203_p2=0;
   op20_reg_358=0;
   op21_fu_219_p1=0;
   op22_fu_223_p1=0;
   op2_fu_213_p0=0;
   op2_fu_213_p1=0;
   op5_fu_139_p0=0;
   op5_fu_139_p1=0;
   op6_fu_145_p0=0;
   op7_fu_151_p0=0;
   op7_fu_151_p1=0;
   op8_fu_157_p0=0;
   op8_fu_157_p1=0;
   tmp1_fu_251_p1=0;
   tmp2_fu_232_p1=0;
   tmp2_fu_232_p2=0;
   tmp2_reg_389=0;
   tmp3_fu_255_p1=0;
   tmp_fu_227_p1=0;
   tmp_fu_227_p2=0;
   tmp_reg_384=0;
	add_ln25_fu_163_p2=0;
	add_ln27_fu_173_p2=0;
	add_ln41_1_fu_241_p2=0;
	add_ln41_fu_237_p2=0;
	add_ln46_1_fu_269_p2=0;
	add_ln46_fu_264_p2=0;
	ap_CS_fsm=0;
	ap_NS_fsm=0;
	op17_fu_183_p2=0;
	op17_reg_332=0;
	op18_fu_187_p2=0;
	op18_reg_337=0;
	op1_fu_207_p2=0;
	op1_reg_364=0;
	op21_fu_219_p2=0;
	op21_reg_374=0;
	op22_fu_223_p2=0;
	op22_reg_379=0;
	op27_fu_245_p2=0;
	op27_reg_394=0;
	op28_fu_259_p2=0;
	op2_fu_213_p2=0;
	op2_reg_369=0;
	op5_fu_139_p2=0;
	op5_reg_296=0;
	op6_fu_145_p2=0;
	op6_reg_301=0;
	op7_fu_151_p2=0;
	op7_reg_306=0;
	op8_fu_157_p2=0;
	op8_reg_311=0;
	tmp1_fu_251_p2=0;
	tmp1_reg_400=0;
	tmp3_fu_255_p2=0;
	tmp3_reg_405=0;
    ap_done=0;
    ap_start=1;

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;

       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 1){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           state1();
       }
       goto ap_ST_fsm_state2;
   }

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;

       if(1 == ap_CS_fsm_state2)
       {
           state2();
       }
       goto ap_ST_fsm_state3;

   ap_ST_fsm_state3:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 1;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;

       if(1 == ap_CS_fsm_state3)
       {
           state3();
       }
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 1;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
   
       if(1 == ap_CS_fsm_state4)
       {
           state4();
       }
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state5:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 1;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;

       if(1 == ap_CS_fsm_state5)
       {
           state5();
       }
       goto ap_ST_fsm_state6;

   ap_ST_fsm_state6:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 1;
    ap_CS_fsm_state7 = 0;

       if(1 == ap_CS_fsm_state6)
       {
           state6();
       }
       goto ap_ST_fsm_state7;

   ap_ST_fsm_state7:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 1;

       if(1 == ap_CS_fsm_state7)
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if(1 == ap_CS_fsm_state7)
       {
           ap_ready =  1;
       }
       if(1 == ap_CS_fsm_state7)
       {
           state7();
       }
       if(ap_done==1){
           goto end;
       }
       goto ap_ST_fsm_state1;
   end:
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
    *ap_return1__1=ap_return1;
    *ap_return1_ap_vld__1=ap_return1_ap_vld;
    *ap_rst__1=ap_rst;
    *ap_start__1=ap_start;
    *i1__1=i1;
    *i2__1=i2;
    *i3__1=i3;
    *i4__1=i4;
    *i5__1=i5;
    *i6__1=i6;
    *o1__1=o1;
    *o1_ap_vld__1=o1_ap_vld;
    *o2__1=o2;
    *o2_ap_vld__1=o2_ap_vld;
    *o3__1=o3;
    *o3_ap_vld__1=o3_ap_vld;
    *o4__1=o4;
    *o4_ap_vld__1=o4_ap_vld;
	if((o1 == o1_temp) && (o2 == o2_temp) && (o3 == o3_temp) && (o4 == o4_temp)){
		printf("T\n");
		printf("%lld %lld %lld %lld\n",o1,o2,o3,o4);
		printf("%lld %lld %lld %lld\n",o1_temp,o2_temp,o3_temp,o4_temp);	
	}else{
		printf("F\n");
		printf("%lld %lld %lld %lld\n",o1,o2,o3,o4);
		printf("%lld %lld %lld %lld\n",o1_temp,o2_temp,o3_temp,o4_temp);			
	}
       return;
}

int main(){
	
	for(int i=0; i<80; i++){
		long long int G1__1;
		long long int G2__1;
		long long int G3__1;
		long long int G4__1;
		long long int GG1__1;
		long long int GG2__1;
		long long int ap_clk__1 = 1;
		long long int ap_done__1 = 0;
		long long int ap_idle__1 = 0;
		long long int ap_ready__1 = 1;
		long long int ap_return1__1 = 0;
		long long int ap_return1_ap_vld__1 = 0;
		long long int ap_rst__1 = 0;
		long long int ap_start__1 = 1;
		long long int i1__1;
		long long int i2__1;
		long long int i3__1;
		long long int i4__1;
		long long int i5__1;
		long long int i6__1;
		long long int o1__1 = 0;
		long long int o1_ap_vld__1 = 0;
		long long int o2__1 = 0;
		long long int o2_ap_vld__1 = 0;
		long long int o3__1 = 0;
		long long int o3_ap_vld__1 = 0;
		long long int o4__1 = 0;
		long long int o4_ap_vld__1 = 0;
		int dummy = 1;
		scanf("%llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu %llu",&G1__1,&G2__1,&G3__1,&G4__1,&GG1__1,&GG2__1,&i1__1,&i2__1,&i3__1,&i4__1,&i5__1,&i6__1);
		
		G1_tmp = G1__1;
		G2_tmp = G2__1;
		GG1_tmp = GG1__1;
		GG2_tmp = GG2__1;
		i1_tmp = i1__1;
		i2_tmp = i2__1;
		i3_tmp = i3__1;
		i4_tmp = i4__1;
		i5_tmp = i5__1;
		i6_tmp = i6__1;

		

				hls_macc(&G1__1,&G2__1,&G3__1,&G4__1,&GG1__1,&GG2__1,&ap_clk__1,&ap_done__1,&ap_idle__1,&ap_ready__1,&ap_return1__1,&ap_return1_ap_vld__1,&ap_rst__1,&ap_start__1,&i1__1,&i2__1,&i3__1,&i4__1,&i5__1,&i6__1,&o1__1,&o1_ap_vld__1,&o2__1,&o2_ap_vld__1,&o3__1,&o3_ap_vld__1,&o4__1,&o4_ap_vld__1, dummy);
}
return 0;
}
