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
long long int in2;
long long int in3;
long long int in4;
long long int in5;
long long int in6;
long long int in7;
long long int in8;
long long int in9;
long long int out1;
long long int out1_ap_vld;
long long int out2;
long long int out2_ap_vld;
long long int out3;
long long int out3_ap_vld;
long long int add13_fu_215_p0;
long long int add2_fu_199_p0;
long long int add3_fu_125_p0;
long long int add3_fu_125_p1;
long long int add5_fu_131_p0;
long long int add5_fu_131_p1;
long long int add6_fu_203_p0;
long long int add_ln30_fu_177_p2;
long long int add_ln30_reg_366;
long long int add_ln42_fu_190_p0;
long long int add_ln42_fu_190_p2;
long long int add_ln42_reg_381;
long long int ap_CS_fsm_state1;
long long int ap_CS_fsm_state2;
long long int ap_CS_fsm_state3;
long long int ap_CS_fsm_state4;
long long int ap_CS_fsm_state5;
long long int mul_ln24_fu_172_p0;
long long int mul_ln24_fu_172_p1;
long long int mul_ln24_fu_172_p2;
long long int mul_ln24_reg_361;
long long int mult10_fu_143_p0;
long long int mult10_fu_143_p1;
long long int mult11_fu_162_p0;
long long int mult11_fu_162_p1;
long long int mult13_fu_167_p0;
long long int mult13_fu_167_p1;
long long int mult2_fu_137_p0;
long long int mult2_fu_137_p1;
long long int mult7_fu_158_p0;
long long int mult7_fu_158_p1;
long long int shf2_fu_249_p1;
long long int tmp3_fu_181_p0;
long long int tmp4_fu_186_p0;
long long int tmp4_fu_186_p2;
long long int tmp4_reg_376;
long long int tmp5_fu_211_p0;
long long int tmp6_fu_154_p0;
long long int tmp6_fu_154_p2;
long long int tmp6_reg_341;
long long int tmp7_fu_195_p0;
long long int tmp_fu_149_p2;
long long int tmp_reg_336;
long long int add13_fu_215_p2;
long long int add13_reg_412;
long long int add14_fu_219_p2;
long long int add14_fu_219_p2_temp_0;
long long int add14_fu_219_p2_temp_1;
long long int add2_fu_199_p2;
long long int add2_reg_391;
long long int add3_fu_125_p2;
long long int add3_reg_288;
long long int add5_fu_131_p2;
long long int add5_reg_293;
long long int add6_fu_203_p2;
long long int add6_reg_396;
long long int add9_fu_207_p2;
long long int add9_reg_402;
long long int add_ln40_1_fu_238_p2;
long long int add_ln40_fu_243_p2;
long long int add_ln49_1_fu_252_p2;
long long int add_ln49_fu_257_p2;
long long int add_ln51_fu_263_p2;
long long int ap_CS_fsm;
long long int ap_NS_fsm;
long long int mult10_fu_143_p2;
long long int mult10_reg_331;
long long int mult11_fu_162_p2;
long long int mult11_reg_351;
long long int mult13_fu_167_p2;
long long int mult13_reg_356;
long long int mult2_fu_137_p2;
long long int mult2_reg_326;
long long int mult7_fu_158_p2;
long long int mult7_reg_346;
long long int shf1_fu_233_p2;
long long int tmp3_fu_181_p2;
long long int tmp3_reg_371;
long long int tmp5_fu_211_p2;
long long int tmp5_reg_407;
long long int tmp7_fu_195_p2;
long long int tmp7_reg_386;
long long int trunc_ln_reg_417;

long long int trunc_ln; 
long long int in8_read; 
long long int add14; 
long long int out1; 
long long int out3; 
long long int add_ln40; 
long long int in7_read; 
long long int tmp5; 
long long int add6; 
long long int add_ln49_1; 
long long int tmp3; 
long long int tmp7; 
long long int add_ln49; 
long long int add_ln30; 
long long int mult13; 
long long int in10_read; 
long long int in6_read; 
long long int mult11; 
long long int in1_read; 
long long int in5_read; 
long long int tmp6; 
long long int in9_read; 
long long int shf1; 
long long int tmp4; 
long long int in3_read; 
long long int add_ln51_1; 
long long int add3; 
long long int in4_read; 
long long int in2_read; 
long long int mult10; 
long long int out2; 
long long int add5; 
long long int add2; 
long long int mult2; 
long long int add_ln42; 
long long int mult7; 
long long int add_ln51; 
long long int add_ln40_1; 
long long int add9; 
long long int add13; 
long long int mul_ln24; 
long long int shf2; 
long long int tmp; 

void state1(){
	//generaeted c code
	if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 1){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           add5_reg_293 =   in10 * in10;
           add3_reg_288 =   in7  * in4;
       }
       //goto ap_ST_fsm_state2;
    }

	//scheduled c code
	in10_read = in10; //%in10_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in10) nounwind
	in7_read = in7; //%in7_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in7) nounwind
	in4_read = in4; //%in4_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in4) nounwind
	add3 = in7_read * in4_read; //%add3 = mul i32 %in7_read, %in4_read
	add5 = in10_read * in10_read; //%add5 = mul i32 %in10_read, %in10_read
}

void state2(){
	//generaeted c code
	if(1 == ap_CS_fsm_state2)
    {
       tmp_reg_336 =   in2 + add3_reg_288 ;
       tmp6_reg_341 =   in7  + add5_reg_293;
       mult2_reg_326 =   in3  * in1;
       mult10_reg_331 =   in9  * in6;
    }

	//scheduled c code
	in9_read = in9; //%in9_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in9) nounwind
	in6_read = in6; //%in6_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in6) nounwind
	in3_read = in3; //%in3_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in3) nounwind
	in2_read = in2; //%in2_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in2) nounwind
	in1_read = in1; //%in1_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in1) nounwind
	mult2 = in3_read * in1_read; //%mult2 = mul nsw i32 %in3_read, %in1_read
	mult10 = in9_read * in6_read; //%mult10 = mul nsw i32 %in9_read, %in6_read
	tmp = in2_read + add3; //%tmp = add i32 %in2_read, %add3
	tmp6 = in7_read + add5; //%tmp6 = add i32 %in7_read, %add5

}

void state3(){
	//generaeted c code
	if(1 == ap_CS_fsm_state3)
    {
       tmp7_reg_386 =   in9  * tmp6_reg_341;
       tmp4_reg_376 =   in7 + in2 ;
       tmp3_reg_371 =   in5  * tmp_reg_336;
       mult7_reg_346 =   in6  * in3;
       mult13_reg_356 =   in8 * in7;
       mult11_reg_351 =   in8  * in6;
       mul_ln24_reg_361 =   in5   * in4;
       add_ln42_reg_381 =   in8 + mult10_reg_331;
       add_ln30_reg_366 =   in2 + mult2_reg_326;
    }


	//scheduled c code
	in8_read = in8; //%in8_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in8) nounwind
	in5_read = in5; //%in5_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in5) nounwind
	mult7 = in6_read * in3_read; //%mult7 = mul nsw i32 %in6_read, %in3_read
	mult11 = in8_read * in6_read; //%mult11 = mul nsw i32 %in8_read, %in6_read
	mult13 = in8_read * in7_read; //%mult13 = mul nsw i32 %in8_read, %in7_read
	mul_ln24 = in5_read * in4_read; //%mul_ln24 = mul i32 %in5_read, %in4_read
	add_ln30 = in2_read + mult2; //%add_ln30 = add i32 %in2_read, %mult2
	tmp3 = in5_read * tmp; //%tmp3 = mul i32 %in5_read, %tmp
	tmp4 = in7_read + in2_read; //%tmp4 = add i32 %in7_read, %in2_read
	add_ln42 = in8_read + mult10; //%add_ln42 = add i32 %in8_read, %mult10
	tmp7 = in9_read * tmp6; //%tmp7 = mul i32 %in9_read, %tmp6
}

void state4(){
	//generaeted c code
	if(1 == ap_CS_fsm_state4)
   	{
       trunc_ln_reg_417 =  ( (( tmp7_reg_386  + mult13_reg_356  )  >> 3 )  & 536870911 );
       tmp5_reg_407 =   in3  * tmp4_reg_376 ;
       add9_reg_402 =   tmp3_reg_371  + mult7_reg_346;
       add6_reg_396 =   in1  * add_ln30_reg_366;
       add2_reg_391 =   in4  * mul_ln24_reg_361 ;
       add13_reg_412 =   in4  * add_ln42_reg_381;
   	}


	//scheduled c code
	add2 = in4_read * mul_ln24; //%add2 = mul i32 %in4_read, %mul_ln24
	add6 = in1_read * add_ln30; //%add6 = mul i32 %in1_read, %add_ln30
	add9 = tmp3 + mult7; //%add9 = add nsw i32 %tmp3, %mult7
	tmp5 = in3_read * tmp4; //%tmp5 = mul i32 %in3_read, %tmp4
	add13 = in4_read * add_ln42; //%add13 = mul i32 %in4_read, %add_ln42
	add14 = tmp7 + mult13; //%add14 = add nsw i32 %tmp7, %mult13
	trunc_ln = (add14 >> 3) & 536870911; //%trunc_ln = call i29 @_ssdm_op_PartSelect.i29.i32.i32.i32(i32 %add14, i32 3, i32 31)
}

void state5(){
	//generaeted c code
	if(1 == ap_CS_fsm_state5)
    {
       ap_done =  1;
        if(ap_done==1){
      ap_return =  mult11_reg_351 +  trunc_ln_reg_417  + add13_reg_412  +  add2_reg_391 +  ( add9_reg_402 << 3 )  + tmp5_reg_407  + add6_reg_396 ;
        }
    }
    if(1 == ap_CS_fsm_state5)
    {
       ap_ready =  1;
    }
    if(1 == ap_CS_fsm_state5)
    {
       out1_ap_vld =  1;
           out1 =   ( add6_reg_396  & 4294967295 ) ;
           out2 =   (  ( ( add2_reg_391  +  ( (  ( ( add9_reg_402  << 3 )  & 4294967295 )  + tmp5_reg_407  ) & 4294967295 )  ) & 4294967295 )  & 4294967295 ) ;
           out3 =   mult11_reg_351  + trunc_ln_reg_417  + add13_reg_412 ;
    }
    
	//scheduled c code
	out1 = add6; //call void @_ssdm_op_Write.ap_auto.i32P(i32* %out1, i32 %add6) nounwind
	shf1 = add9 << 3; //%shf1 = shl i32 %add9, 3
	add_ln40_1 = shf1 + tmp5; //%add_ln40_1 = add i32 %shf1, %tmp5
	add_ln40 = add2 + add_ln40_1; //%add_ln40 = add i32 %add2, %add_ln40_1
	out2 = add_ln40; //call void @_ssdm_op_Write.ap_auto.i32P(i32* %out2, i32 %add_ln40) nounwind
	shf2 = trunc_ln; //%shf2 = sext i29 %trunc_ln to i32
	add_ln49_1 = shf2 + add13; //%add_ln49_1 = add i32 %shf2, %add13
	add_ln49 = mult11 + add_ln49_1; //%add_ln49 = add i32 %mult11, %add_ln49_1
	out3 = add_ln49; //call void @_ssdm_op_Write.ap_auto.i32P(i32* %out3, i32 %add_ln49) nounwind
	add_ln51 = add_ln40 + add6; //%add_ln51 = add i32 %add_ln40, %add6
	add_ln51_1 = add_ln49 + add_ln51; //%add_ln51_1 = add i32 %add_ln49, %add_ln51
	//return add_ln51_1; //ret i32 %add_ln51_1
}


void hls_macc(long long int *ap_clk__1,long long int *ap_done__1,long long int *ap_idle__1,long long int *ap_ready__1,long long int *ap_return__1,long long int *ap_rst__1,long long int *ap_start__1,long long int *in1__1,long long int *in2__1,long long int *in3__1,long long int *in4__1,long long int *in5__1,long long int *in6__1,long long int *in7__1,long long int *in8__1,long long int *in9__1,long long int *in10__1,long long int *out1__1,long long int *out1_ap_vld__1,long long int *out2__1,long long int *out2_ap_vld__1,long long int *out3__1,long long int *out3_ap_vld__1,int dummy){
	ap_clk=*ap_clk__1;
	ap_done=*ap_done__1;
	ap_idle=*ap_idle__1;
	ap_ready=*ap_ready__1;
	ap_return=*ap_return__1;
	ap_rst=*ap_rst__1;
	ap_start=*ap_start__1;
	in1=*in1__1;
	in10=*in10__1;
	in2=*in2__1;
	in3=*in3__1;
	in4=*in4__1;
	in5=*in5__1;
	in6=*in6__1;
	in7=*in7__1;
	in8=*in8__1;
	in9=*in9__1;
	out1=*out1__1;
	out1_ap_vld=*out1_ap_vld__1;
	out2=*out2__1;
	out2_ap_vld=*out2_ap_vld__1;
	out3=*out3__1;
	out3_ap_vld=*out3_ap_vld__1;
   add13_fu_215_p0=0;
   add2_fu_199_p0=0;
   add3_fu_125_p0=0;
   add3_fu_125_p1=0;
   add5_fu_131_p0=0;
   add5_fu_131_p1=0;
   add6_fu_203_p0=0;
   add_ln30_fu_177_p2=0;
   add_ln30_reg_366=0;
   add_ln42_fu_190_p0=0;
   add_ln42_fu_190_p2=0;
   add_ln42_reg_381=0;
   ap_CS_fsm_state1=0;
   ap_CS_fsm_state2=0;
   ap_CS_fsm_state3=0;
   ap_CS_fsm_state4=0;
   ap_CS_fsm_state5=0;
   mul_ln24_fu_172_p0=0;
   mul_ln24_fu_172_p1=0;
   mul_ln24_fu_172_p2=0;
   mul_ln24_reg_361=0;
   mult10_fu_143_p0=0;
   mult10_fu_143_p1=0;
   mult11_fu_162_p0=0;
   mult11_fu_162_p1=0;
   mult13_fu_167_p0=0;
   mult13_fu_167_p1=0;
   mult2_fu_137_p0=0;
   mult2_fu_137_p1=0;
   mult7_fu_158_p0=0;
   mult7_fu_158_p1=0;
   shf2_fu_249_p1=0;
   tmp3_fu_181_p0=0;
   tmp4_fu_186_p0=0;
   tmp4_fu_186_p2=0;
   tmp4_reg_376=0;
   tmp5_fu_211_p0=0;
   tmp6_fu_154_p0=0;
   tmp6_fu_154_p2=0;
   tmp6_reg_341=0;
   tmp7_fu_195_p0=0;
   tmp_fu_149_p2=0;
   tmp_reg_336=0;
   add13_fu_215_p2=0;
   add13_reg_412=0;
   add14_fu_219_p2=0;
   add14_fu_219_p2_temp_0=0;
   add14_fu_219_p2_temp_1=0;
   add2_fu_199_p2=0;
   add2_reg_391=0;
   add3_fu_125_p2=0;
   add3_reg_288=0;
   add5_fu_131_p2=0;
   add5_reg_293=0;
   add6_fu_203_p2=0;
   add6_reg_396=0;
   add9_fu_207_p2=0;
   add9_reg_402=0;
   add_ln40_1_fu_238_p2=0;
   add_ln40_fu_243_p2=0;
   add_ln49_1_fu_252_p2=0;
   add_ln49_fu_257_p2=0;
   add_ln51_fu_263_p2=0;
   ap_CS_fsm=0;
   ap_NS_fsm=0;
   mult10_fu_143_p2=0;
   mult10_reg_331=0;
   mult11_fu_162_p2=0;
   mult11_reg_351=0;
   mult13_fu_167_p2=0;
   mult13_reg_356=0;
   mult2_fu_137_p2=0;
   mult2_reg_326=0;
   mult7_fu_158_p2=0;
   mult7_reg_346=0;
   shf1_fu_233_p2=0;
   tmp3_fu_181_p2=0;
   tmp3_reg_371=0;
   tmp5_fu_211_p2=0;
   tmp5_reg_407=0;
   tmp7_fu_195_p2=0;
   tmp7_reg_386=0;
   trunc_ln_reg_417=0;
    ap_done=0;
    ap_start=1;

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;

       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
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
    *ap_clk__1=ap_clk;
    *ap_done__1=ap_done;
    *ap_idle__1=ap_idle;
    *ap_ready__1=ap_ready;
    *ap_return__1=ap_return;
    *ap_rst__1=ap_rst;
    *ap_start__1=ap_start;
    *in1__1=in1;
    *in10__1=in10;
    *in2__1=in2;
    *in3__1=in3;
    *in4__1=in4;
    *in5__1=in5;
    *in6__1=in6;
    *in7__1=in7;
    *in8__1=in8;
    *in9__1=in9;
    *out1__1=out1;
    *out1_ap_vld__1=out1_ap_vld;
    *out2__1=out2;
    *out2_ap_vld__1=out2_ap_vld;
    *out3__1=out3;
    *out3_ap_vld__1=out3_ap_vld;
	if(add_ln51_1 == ap_return){
		printf("T\n");	
	}else{
		printf("F %lld %lld\n",add_ln51_1,ap_return);
	}
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
		long long int in1__1; 
		long long int in2__1;
		long long int in3__1;
		long long int in4__1;
		long long int in5__1;
		long long int in6__1;
		long long int in7__1;
		long long int in8__1; 
		long long int in9__1; 
		long long int in10__1; 
		long long int out1__1 = 0; 
		long long int out1_ap_vld__1 = 0; 
		long long int out2__1 = 0;  
		long long int out2_ap_vld__1 = 0;
		long long int out3__1 = 0; 
		long long int out3_ap_vld__1 = 0;
		scanf("%llu %llu %llu %llu %llu %llu %llu %llu %llu %llu",&in1__1,&in2__1,&in3__1,&in4__1,&in5__1,&in6__1,&in7__1,&in8__1,&in9__1,&in10__1);	
		int dummy = 1;
			hls_macc(&ap_clk__1,&ap_done__1,&ap_idle__1,&ap_ready__1,&ap_return__1,&ap_rst__1,&ap_start__1,&in1__1,&in2__1,&in3__1,&in4__1,&in5__1,&in6__1,&in7__1,&in8__1,&in9__1,&in10__1,&out1__1,&out1_ap_vld__1,&out2__1,&out2_ap_vld__1,&out3__1,&out3_ap_vld__1,dummy);
}
return 0;

}
/*
1
21
-29
-12
1
4
2
9
13
-14
*/
