#include<stdio.h>
#define res_DataWidth 32
#define res_AddressRange 9
#define res_AddressWidth 4
#define res_DWIDTH 32
#define res_AWIDTH 4
#define res_MEM_SIZE 9
#define res1_DataWidth 32
#define res1_AddressRange 9
#define res1_AddressWidth 4
#define res1_DWIDTH 32
#define res1_AWIDTH 4
#define res1_MEM_SIZE 9
#define mat1_DWIDTH 32
#define mat2_DWIDTH 32

long long int ap_clk;
long long int ap_done;
long long int ap_idle;
long long int ap_ready;
long long int ap_rst;
long long int ap_start;
long long int mat1_address0;
long long int mat1_ce0;
long long int mat1_q0;
long long int mat2_address0;
long long int mat2_ce0;
long long int mat2_q0;
long long int ap_CS_fsm_state1;
long long int ap_CS_fsm_state10;
long long int ap_CS_fsm_state11;
long long int ap_CS_fsm_state12;
long long int ap_CS_fsm_state13;
long long int ap_CS_fsm_state14;
long long int ap_CS_fsm_state15;
long long int ap_CS_fsm_state16;
long long int ap_CS_fsm_state17;
long long int ap_CS_fsm_state2;
long long int ap_CS_fsm_state3;
long long int ap_CS_fsm_state4;
long long int ap_CS_fsm_state5;
long long int ap_CS_fsm_state6;
long long int ap_CS_fsm_state7;
long long int ap_CS_fsm_state8;
long long int ap_CS_fsm_state9;
long long int mat1_d0;
long long int mat1_load_reg_651;
long long int mat1_we0;
long long int mat2_d0;
long long int mat2_load_reg_656;
long long int mat2_we0;
long long int sext_ln10_fu_306_p1;
long long int sext_ln12_1_fu_360_p1;
long long int sext_ln12_fu_332_p1;
long long int sext_ln18_fu_429_p1;
long long int sext_ln18_reg_692;
long long int sext_ln25_fu_489_p1;
long long int sext_ln30_1_fu_597_p1;
long long int sext_ln30_fu_587_p1;
long long int add_ln10_fu_301_p2;
long long int add_ln12_1_fu_327_p2;
long long int add_ln12_2_fu_355_p2;
long long int add_ln12_fu_369_p2;
long long int add_ln18_fu_424_p2;
long long int add_ln25_1_fu_508_p2;
long long int add_ln25_1_reg_738;
long long int add_ln25_2_fu_484_p2;
long long int add_ln25_fu_502_p2;
long long int add_ln30_1_fu_592_p2;
long long int add_ln30_1_reg_774;
long long int add_ln30_fu_582_p2;
long long int ap_CS_fsm;
long long int ap_NS_fsm;
long long int i_0_reg_139;
long long int i_0_reg_139_temp_11;
long long int i_1_reg_185;
long long int i_1_reg_185_temp_6;
long long int i_2_reg_207;
long long int i_2_reg_207_temp_7;
long long int i_3_reg_229;
long long int i_3_reg_229_temp_9;
long long int i_4_fu_380_p2;
long long int i_4_reg_674;
long long int i_5_fu_440_p2;
long long int i_5_reg_705;
long long int i_6_fu_520_p2;
long long int i_6_reg_746;
long long int i_fu_257_p2;
long long int i_reg_604;
long long int icmp_ln11_fu_311_p2;
long long int icmp_ln15_fu_374_p2;
long long int icmp_ln17_fu_408_p2;
long long int icmp_ln23_fu_434_p2;
long long int icmp_ln24_fu_468_p2;
long long int icmp_ln28_fu_514_p2;
long long int icmp_ln29_fu_548_p2;
long long int icmp_ln8_fu_251_p2;
long long int icmp_ln9_fu_285_p2;
long long int j_0_reg_150;
long long int j_1_reg_196;
long long int j_2_reg_218;
long long int j_3_reg_240;
long long int j_3_reg_240_temp_10;
long long int j_4_fu_291_p2;
long long int j_4_reg_618;
long long int j_5_fu_474_p2;
long long int j_5_reg_718;
long long int j_6_fu_554_p2;
long long int j_6_reg_764;
long long int j_fu_414_p2;
long long int j_reg_687;
long long int k_0_reg_174;
long long int k_0_reg_174_temp_8;
long long int k_fu_317_p2;
long long int k_reg_636;
long long int mul_ln12_fu_365_p2;
long long int mul_ln12_reg_661;
long long int res1_addr_reg_628;
long long int res1_address0;
long long int res1_ce0;
long long int res1_load_1_reg_161;
long long int res1_load_1_reg_161__temp;
long long int res1_q0;
long long int res1_we0;
long long int res_addr_1_reg_723;
long long int res_address0;
long long int res_ce0;
long long int res_d0;
long long int res_q0;
long long int res_we0;
long long int shl_ln25_fu_496_p2;
long long int sub_ln12_1_fu_349_p2;
long long int sub_ln12_fu_279_p2;
long long int sub_ln12_reg_609;
long long int sub_ln18_fu_402_p2;
long long int sub_ln18_reg_679;
long long int sub_ln25_fu_462_p2;
long long int sub_ln25_reg_710;
long long int sub_ln30_1_fu_576_p2;
long long int sub_ln30_fu_542_p2;
long long int sub_ln30_reg_756;
long long int tmp_1_fu_390_p3;
long long int tmp_2_fu_450_p3;
long long int tmp_3_fu_337_p3;
long long int tmp_4_fu_530_p3;
long long int tmp_6_fu_564_p3;
long long int tmp_fu_267_p3;
long long int zext_ln10_fu_297_p1;
long long int zext_ln10_fu_297_p1_temp_0;
long long int zext_ln10_fu_297_p1_temp_0_temp_2;
long long int zext_ln10_reg_623;
long long int zext_ln10_reg_623_temp_1;
long long int zext_ln12_1_fu_275_p1;
long long int zext_ln12_2_fu_323_p1;
long long int zext_ln12_3_fu_345_p1;
long long int zext_ln12_fu_263_p1;
long long int zext_ln18_1_fu_398_p1;
long long int zext_ln18_2_fu_420_p1;
long long int zext_ln18_fu_386_p1;
long long int zext_ln25_1_fu_458_p1;
long long int zext_ln25_2_fu_480_p1;
long long int zext_ln25_fu_446_p1;
long long int zext_ln30_1_fu_538_p1;
long long int zext_ln30_2_fu_560_p1;
long long int zext_ln30_3_fu_572_p1;
long long int zext_ln30_fu_526_p1;
long long int zext_ln30_fu_526_p1_temp_3;
long long int zext_ln30_fu_526_p1_temp_3_temp_5;
long long int zext_ln30_reg_751;
long long int zext_ln30_reg_751_temp_4;
long long int res_ram[res_MEM_SIZE];
long long int res1_ram[res1_MEM_SIZE];
long long int  mat1_ram[9];
long long int  mat2_ram[9];


long long int mat1[9];
long long int mat2[9];
long long int res[9];
long long int i_0; 
long long int icmp_ln8; 
long long int i; 
long long int j_0; 
long long int i_1; 
long long int zext_ln12; 
long long int tmp; 
long long int zext_ln12_1; 
long long int sub_ln12; 
long long int icmp_ln9; 
long long int j_4; 
long long int k_0; 
long long int zext_ln10; 
long long int add_ln10; 
long long int sext_ln10; 
long long int res1_addr; 
long long int icmp_ln11; 
long long int k; 
long long int zext_ln12_2; 
long long int add_ln12_1; 
long long int sext_ln12; 
long long int mat1_addr_1;
long long int tmp_3; 
long long int zext_ln12_3; 
long long int sub_ln12_1; 
long long int add_ln12_2; 
long long int sext_ln12_1; 
long long int mat2_addr_1; 
long long int mat1_load; 
long long int mat2_load; 
long long int mul_ln12; 
long long int add_ln12; 
long long int res1_load_1; 
long long int icmp_ln15; 
long long int i_4; 
long long int j_1; 
long long int i_2; 
long long int zext_ln18; 
long long int tmp_1; 
long long int zext_ln18_1;
long long int sub_ln18; 
long long int icmp_ln17; 
long long int zext_ln18_2; 
long long int add_ln18; 
long long int sext_ln18; 
long long int res1_addr_1; 
long long int res_addr; 
long long int res1_load; 
long long int icmp_ln23; 
long long int i_5; 
long long int zext_ln25; 
long long int tmp_2; 
long long int zext_ln25_1; 
long long int sub_ln25; 
long long int icmp_ln24;
long long int j_5; 
long long int zext_ln25_2; 
long long int add_ln25_2; 
long long int sext_ln25; 
long long int res_addr_1; 
long long int mat1_addr; 
long long int mat2_addr; 
long long int res_load; 
long long int mat1_load_1; 
long long int mat2_load_1; 
long long int shl_ln25; 
long long int add_ln25; 
long long int add_ln25_1; 
long long int j_2; 
long long int icmp_ln28; 
long long int i_6; 
long long int j_3; 
long long int zext_ln30; 
long long int tmp_4;
long long int zext_ln30_1; 
long long int sub_ln30; 
long long int icmp_ln29; 
long long int j_6; 
long long int zext_ln30_2; 
long long int tmp_6; 
long long int zext_ln30_3; 
long long int sub_ln30_1; 
long long int add_ln30; 
long long int sext_ln30; 
long long int res_addr_2; 
long long int add_ln30_1; 
long long int res_load_1; 
long long int sext_ln30_1; 
long long int res_addr_3; 
long long int j;
long long int res1[9]; 
long long int i_3; //%res1 = alloca [9 x i32], align 4
long long int zero;

long long int do_twos_complement( long long int a ,int width){
    int msb = (a >> (width-1)) & 1;
    if(msb==1){
        int bit[width];int ans[width];
        long long int a1=a;
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

void state1(){
	//generated c code
   	icmp_ln9_fu_285_p2 =   ( j_0_reg_150  == 3 ? (zero+1) :  zero ) ;
   	if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) == 1){
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
           i_0_reg_139 =  zero;
       }
       //goto ap_ST_fsm_state2;
   	}

	//scheduled c code
	i_0 = zero;
}

void state2(){
	//generated c code
    icmp_ln8_fu_251_p2 =   ( i_0_reg_139  == 3 ? (zero+1) :  zero ) ;
    if(((icmp_ln8_fu_251_p2 == zero+1) && (1 == ap_CS_fsm_state2)) == zero+1){
       if((icmp_ln8_fu_251_p2 == zero+1) && (1 == ap_CS_fsm_state2))
       {
           i_1_reg_185 =  zero;
       }
       if(1 == ap_CS_fsm_state2)
       {
           i_reg_604 =   i_0_reg_139  + 1 ;
       }
       //goto ap_ST_fsm_state8;
    }
    if(((icmp_ln8_fu_251_p2 == zero+1) && (1 == ap_CS_fsm_state2)) == zero){
       if((icmp_ln8_fu_251_p2 == zero) && (1 == ap_CS_fsm_state2))
       {
               j_0_reg_150 =  zero;
       }
       if(1 == ap_CS_fsm_state2)
       {
               i_reg_604 =   i_0_reg_139  + 1;
       }
       if((icmp_ln8_fu_251_p2 == zero) && (1 == ap_CS_fsm_state2))
       {
               sub_ln12_reg_609 =   ( (  (  (  ( ( i_0_reg_139  << 2 )  & 18446744073709551615 )  & 15 )  & 31 )  -  ( i_0_reg_139  & 31 )  ) & 31 ) ;
       }
       //goto ap_ST_fsm_state3;
    }

	//scheduled c code
	icmp_ln8 = i_0 == 3 ? (zero+1) : zero; //%icmp_ln8 = icmp eq i2 %i_0, -1
	//%empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
	//br i1 %icmp_ln8, label %.preheader5.preheader, label %.preheader6.prehead
	if(!icmp_ln8){
		j_0 = zero;
		i = i_0 + 1; //%i = add i2 %i_0, 1
		zext_ln12 = i_0; //%zext_ln12 = zext i2 %i_0 to i5
		tmp = i_0; //%tmp = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_0, i2 0)
		zext_ln12_1 = tmp << 2; //%zext_ln12_1 = zext i4 %tmp to i5
		sub_ln12 = zext_ln12_1 - zext_ln12; //%sub_ln12 = sub i5 %zext_ln12_1, %zext_ln12
		//br label %.preheader
		//goto state3;
	}
	if(icmp_ln8){
		i_1 = zero;
		i = i_0 + 1; //%i = add i2 %i_0, 1
		//br label %.preheader5
		//goto state8;
	}
}

void state3(){
	//generated c code
	icmp_ln9_fu_285_p2 =   ( j_0_reg_150  == 3 ? (zero+1) :  zero ) ;
         
   	if(((icmp_ln9_fu_285_p2 == zero+1) && (1 == ap_CS_fsm_state3)) == 1){
       if((icmp_ln9_fu_285_p2 == zero+1) && (1 == ap_CS_fsm_state3))
       {
           i_0_reg_139 =  i_reg_604 ;
       }
       if(1 == ap_CS_fsm_state3)
       {
           j_4_reg_618 =   j_0_reg_150  + 1 ;
       }
       //goto ap_ST_fsm_state2;
   	}
   	if(((icmp_ln9_fu_285_p2 == zero+1) && (1 == ap_CS_fsm_state3)) == zero){
       if((icmp_ln9_fu_285_p2 == zero) && (1 == ap_CS_fsm_state3))
       {
               k_0_reg_174 =  zero;
       }
       if((icmp_ln9_fu_285_p2 == zero) && (1 == ap_CS_fsm_state3))
       {
               res1_load_1_reg_161 =  zero;
       }
       if(1 == ap_CS_fsm_state3)
       {
               j_4_reg_618 =   j_0_reg_150  + 1 ;
       }
       if((icmp_ln9_fu_285_p2 == zero) && (1 == ap_CS_fsm_state3))
       {
               zext_ln10_reg_623 =   ( (  ( (  ( j_0_reg_150  & 31 )  & 3 ) & 18446744073709551615 )  |  ( ( zext_ln10_reg_623  & 28 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
               res1_addr_reg_628 =  ( do_twos_complement(  ( ( sub_ln12_reg_609  +  ( j_0_reg_150  & 31 )  ) & 31 )  , 5 ) & 18446744073709551615 ) ;
       }
       //goto ap_ST_fsm_state4;
   	}	
	
	//schduled c code
	icmp_ln9 = j_0 == 3 ? (zero+1) :  zero; //%icmp_ln9 = icmp eq i2 %j_0, -1
	//%empty_3 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
	//br i1 %icmp_ln9, label %.loopexit.loopexit, label %1
	if(!icmp_ln9){
		k_0 = zero;
		res1_load_1 = zero;
		j_4 = j_0 + 1; //%j_4 = add i2 %j_0, 1
		zext_ln10 = j_0; //%zext_ln10 = zext i2 %j_0 to i5
		add_ln10 = sub_ln12 + zext_ln10; //%add_ln10 = add i5 %sub_ln12, %zext_ln10
		sext_ln10 = add_ln10; //%sext_ln10 = sext i5 %add_ln10 to i64
		res1_addr = res1[sext_ln10]; // %res1_addr = getelementptr [9 x i32]* %res1, i64 0, i64 %sext_ln10
		//br label %2
		//goto state4;
	}
	if(icmp_ln9){
		i_0 = i;
		j_4 = j_0 + 1; //%j_4 = add i2 %j_0, 1
		//br label %.loopexit
		//goto state2;
	}
}


void state4(){
	//generated c code
       icmp_ln11_fu_311_p2 =   ( k_0_reg_174  == 3 ? (zero+1) :  zero ) ;
       if(1 == ap_CS_fsm_state4)
       {
           mat1_address0 =  ( do_twos_complement(  ( ( sub_ln12_reg_609  +  ( k_0_reg_174  & 31 )  ) & 31 )  , 5 ) & 18446744073709551615 ) ;
       }
       if(1 == ap_CS_fsm_state4)
       {
           mat2_address0 =  ( do_twos_complement(  ( (  ( (  (  (  ( ( k_0_reg_174  << 2 )  & 18446744073709551615 )  & 15 )  & 31 )  -  ( k_0_reg_174  & 31 )  ) & 31 )  + zext_ln10_reg_623  ) & 31 )  , 5 ) & 18446744073709551615 ) ;
       }
       if(1 == ap_CS_fsm_state4)
       {
           res1_address0 =  res1_addr_reg_628 ;
       }
   if(((icmp_ln11_fu_311_p2 == zero+1) && (1 == ap_CS_fsm_state4)) == zero+1){
       if((icmp_ln11_fu_311_p2 == zero+1) && (1 == ap_CS_fsm_state4))
       {
           j_0_reg_150 =  j_4_reg_618 ;
       }
       if(1 == ap_CS_fsm_state4)
       {
           k_reg_636 =   k_0_reg_174  + 1 ;
       }
       res1_q0=res1_ram[res1_address0];
       res1_ram[res1_address0]=res1_load_1_reg_161;
       mat1_q0 = mat1_ram[mat1_address0];
       mat2_q0 = mat2_ram[mat2_address0];
       //goto ap_ST_fsm_state3;
   }
   if(((icmp_ln11_fu_311_p2 == zero+1) && (1 == ap_CS_fsm_state4)) == zero){
       if(1 == ap_CS_fsm_state4)
       {
               k_reg_636 =   k_0_reg_174  + 1;
       }
       res1_q0=res1_ram[res1_address0];
       res1_ram[res1_address0]=res1_load_1_reg_161;
       mat1_q0 = mat1_ram[mat1_address0];
       mat2_q0 = mat2_ram[mat2_address0];
       //goto ap_ST_fsm_state5;
   }
	

	//schduled c code
	res1[sext_ln10] = res1_load_1; //store i32 %res1_load_1, i32* %res1_addr, align 4
	icmp_ln11 = k_0 == 3 ? (zero+1) :  zero; //%icmp_ln11 = icmp eq i2 %k_0, -1
	//%empty_4 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
	//br i1 %icmp_ln11, label %.preheader6.loopexit, label %3
	if(!icmp_ln11){
		k = k_0 + 1; //%k = add i2 %k_0, 1
		zext_ln12_2 = k_0; //%zext_ln12_2 = zext i2 %k_0 to i5
		add_ln12_1 = sub_ln12 + zext_ln12_2; //%add_ln12_1 = add i5 %sub_ln12, %zext_ln12_2
		sext_ln12 = add_ln12_1; //%sext_ln12 = sext i5 %add_ln12_1 to i64
		mat1_addr_1 = mat1[sext_ln12]; //%mat1_addr_1 = getelementptr [9 x i32]* %mat1, i64 0, i64 %sext_ln12
		tmp_3 = k_0 << 2; //%tmp_3 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %k_0, i2 0)
		zext_ln12_3 = tmp_3; //%zext_ln12_3 = zext i4 %tmp_3 to i5
		sub_ln12_1 = zext_ln12_3 - zext_ln12_2; //%sub_ln12_1 = sub i5 %zext_ln12_3, %zext_ln12_2
		add_ln12_2 = sub_ln12_1 + zext_ln10; //%add_ln12_2 = add i5 %sub_ln12_1, %zext_ln10
		sext_ln12_1 = add_ln12_2; //%sext_ln12_1 = sext i5 %add_ln12_2 to i64
		mat2_addr_1 = mat2[sext_ln12_1]; //%mat2_addr_1 = getelementptr [9 x i32]* %mat2, i64 0, i64 %sext_ln12_1
		mat1_load = mat1_addr_1; //%mat1_load = load i32* %mat1_addr_1, align 4
		mat2_load = mat2_addr_1; //%mat2_load = load i32* %mat2_addr_1, align 4
		//goto state5;
	}
	if(icmp_ln11){
		j_0 = j_4;
		k = k_0 + 1; //%k = add i2 %k_0, 1
		//br label %.preheader6
		//res1[] = res1_load_1;
		//goto state3;
	}
}



void state5(){
	//generated c code
       if(1 == ap_CS_fsm_state5)
       {
           mat2_load_reg_656 =  ( mat2_q0  & 4294967295 ) ;
           mat1_load_reg_651 =  ( mat1_q0  & 4294967295 ) ;
       }
	
	//schduled c code
	mat1_load = mat1_addr_1; //%mat1_load = load i32* %mat1_addr_1, align 4
	mat2_load = mat2_addr_1; //%mat2_load = load i32* %mat2_addr_1, align 4
}

void state6(){
	//generated c code
       if(1 == ap_CS_fsm_state6)
       {
           mul_ln12_reg_661 =   ( ( do_twos_complement( mat2_load_reg_656  , 32 )  * do_twos_complement( mat1_load_reg_651  , 32 )  ) & 4294967295 ) ;
       }

	//schduled c code
	mul_ln12 = mat2_load * mat1_load; //%mul_ln12 = mul nsw i32 %mat2_load, %mat1_load
}

void state7(){
	//generated c code
	res1_load_1_reg_161__temp = res1_load_1_reg_161;
    if(1 == ap_CS_fsm_state7)
    {
        k_0_reg_174 =  k_reg_636 ;
    }
    if(1 == ap_CS_fsm_state7)
    {
        res1_load_1_reg_161 =   ( ( mul_ln12_reg_661  + res1_load_1_reg_161__temp  ) & 4294967295 ) ;
    }

	//schduled c code
	add_ln12 = mul_ln12 + res1_load_1; //%add_ln12 = add nsw i32 %mul_ln12, %res1_load_1
	res1_load_1 = add_ln12;
	k_0 = k;
}

void state8(){
	//generated c code
    icmp_ln15_fu_374_p2 =   ( i_1_reg_185  == 3 ? (zero+1) :  zero ) ;
    if(((1 == ap_CS_fsm_state8) && (icmp_ln15_fu_374_p2 == zero+1)) == zero+1){
       if((1 == ap_CS_fsm_state8) && (icmp_ln15_fu_374_p2 == zero+1))
       {
           i_2_reg_207 =  zero;
       }
       if(1 == ap_CS_fsm_state8)
       {
           i_4_reg_674 =   i_1_reg_185  + 1;
       }
       //goto ap_ST_fsm_state11;
    }
    if(((1 == ap_CS_fsm_state8) && (icmp_ln15_fu_374_p2 == zero+1)) == zero){
       if((icmp_ln15_fu_374_p2 == zero) && (1 == ap_CS_fsm_state8))
       {
               j_1_reg_196 =  zero;
       }
       if(1 == ap_CS_fsm_state8)
       {
               i_4_reg_674 =   i_1_reg_185  + 1;
       }
       if((icmp_ln15_fu_374_p2 == zero) && (1 == ap_CS_fsm_state8))
       {
               sub_ln18_reg_679 =   ( (  (  (  ( ( i_1_reg_185  << 2 )  & 18446744073709551615 )  & 15 )  & 31 )  -  ( i_1_reg_185  & 31 )  ) & 31 ) ;
       }
       //goto ap_ST_fsm_state9;
    }

	//schduled c code
	icmp_ln15 = i_1 == 3 ? (zero+1) :  zero; //%icmp_ln15 = icmp eq i2 %i_1, -1
	//%empty_5 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
	//br i1 %icmp_ln15, label %.preheader3.preheader, label %.preheader4.preheader
	if(!icmp_ln15){
		j_1 = zero;
		i_4 = i_1 + 1; //%i_4 = add i2 %i_1, 1
		zext_ln18 = i_1; //%zext_ln18 = zext i2 %i_1 to i5
		tmp_1 = i_1 << 2; //%tmp_1 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_1, i2 0)
		zext_ln18_1 = tmp_1; //%zext_ln18_1 = zext i4 %tmp_1 to i5
		sub_ln18 = zext_ln18_1 - zext_ln18; //%sub_ln18 = sub i5 %zext_ln18_1, %zext_ln18
		//br label %.preheader4
		//goto state9;
	}
	if(icmp_ln15){
		i_2 = zero;
		i_4 = i_1 + 1; //%i_4 = add i2 %i_1, 1
		//br label %.preheader3
		//goto state11;
	}
}


void state9(){
	//generated c code
    icmp_ln17_fu_408_p2 =   ( j_1_reg_196  == 3 ? (zero+1) :  zero ) ;
    if(1 == ap_CS_fsm_state9)
    {
        res1_address0 =  ( do_twos_complement(  ( ( sub_ln18_reg_679  +  ( j_1_reg_196  & 31 )  ) & 31 )  , 5 ) & 18446744073709551615 ) ;
    }
    if(((1 == ap_CS_fsm_state9) && (icmp_ln17_fu_408_p2 == zero+1)) == zero+1){
       if((1 == ap_CS_fsm_state9) && (icmp_ln17_fu_408_p2 == zero+1))
       {
           i_1_reg_185 =  i_4_reg_674 ;
       }
       if(1 == ap_CS_fsm_state9)
       {
           j_reg_687 =   j_1_reg_196  + 1;
       }
       res1_q0=res1_ram[res1_address0];
       //goto ap_ST_fsm_state8;
   }
   if(((1 == ap_CS_fsm_state9) && (icmp_ln17_fu_408_p2 == zero+1)) == zero){
       if(1 == ap_CS_fsm_state9)
       {
               j_reg_687 =   j_1_reg_196  + 1;
       }
       if((icmp_ln17_fu_408_p2 == zero) && (1 == ap_CS_fsm_state9))
       {
               sext_ln18_reg_692 =  ( do_twos_complement(  ( ( sub_ln18_reg_679  +  ( j_1_reg_196  & 31 )  ) & 31 )  , 5 ) & 18446744073709551615 ) ;
       }
       res1_q0=res1_ram[res1_address0];
       //goto ap_ST_fsm_state10;
   }

	//schduled c code
	icmp_ln17 = j_1 == 3 ? (zero+1) :  zero; //%icmp_ln17 = icmp eq i2 %j_1, -1
	//%empty_6 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
	//br i1 %icmp_ln17, label %.preheader5.loopexit, label %4
	if(!icmp_ln17){
		j = j_1 + 1; //%j = add i2 %j_1, 1
		zext_ln18_2 = j_1; //%zext_ln18_2 = zext i2 %j_1 to i5
		add_ln18 = sub_ln18 + zext_ln18_2; //%add_ln18 = add i5 %sub_ln18, %zext_ln18_2
		sext_ln18 = add_ln18; //%sext_ln18 = sext i5 %add_ln18 to i64
		res1_addr_1 = res1[sext_ln18]; //%res1_addr_1 = getelementptr [9 x i32]* %res1, i64 0, i64 %sext_ln18
		res1_load = res1_addr_1; //%res1_load = load i32* %res1_addr_1, align 4
		//goto state10;
	}
	if(icmp_ln17){
		i_1 = i_4;
		j = j_1 + 1; //%j = add i2 %j_1, 1
		//br label %.preheader5
		//goto state8;
	}
}

void state10(){
	//generated c code
       icmp_ln15_fu_374_p2 =   ( i_1_reg_185  == 3 ? (zero+1) :  zero ) ;
       if(1 == ap_CS_fsm_state10)
       {
           res_address0 =  sext_ln18_reg_692 ;
       }
       if(1 == ap_CS_fsm_state10)
       {
           res_d0 =  res1_q0 ;
       }
       if(1 == ap_CS_fsm_state10)
       {
           j_1_reg_196 =  j_reg_687 ;
       }
       
       res_q0=res_ram[res_address0];
       res_ram[res_address0]=res_d0;
         	

	//schduled c code
	res_addr = res[sext_ln18]; //%res_addr = getelementptr [9 x i32]* @res, i64 0, i64 %sext_ln18
	res1_load = res1_addr_1; //%res1_load = load i32* %res1_addr_1, align 4
	res[sext_ln18] = res1_load; //store i32 %res1_load, i32* %res_addr, align 4
	j_1 = j;
}

void state11(){
	//generated c code
   icmp_ln23_fu_434_p2 =   ( i_2_reg_207  == 3 ? (zero+1) :  zero ) ;
   if(((1 == ap_CS_fsm_state11) && (icmp_ln23_fu_434_p2 == zero+1)) == zero+1){
       if((1 == ap_CS_fsm_state11) && (icmp_ln23_fu_434_p2 == zero+1))
       {
           i_3_reg_229 =  zero;
       }
       if(1 == ap_CS_fsm_state11)
       {
           i_5_reg_705 =   i_2_reg_207  + 1;
       }
       //goto ap_ST_fsm_state15;
   }
   if(((1 == ap_CS_fsm_state11) && (icmp_ln23_fu_434_p2 == zero+1)) == zero){
       if((icmp_ln23_fu_434_p2 == zero) && (1 == ap_CS_fsm_state11))
       {
               j_2_reg_218 =  zero;
       }
       if(1 == ap_CS_fsm_state11)
       {
               i_5_reg_705 =   i_2_reg_207  + 1;
       }
       if((icmp_ln23_fu_434_p2 == zero) && (1 == ap_CS_fsm_state11))
       {
               sub_ln25_reg_710 =   ( (  (  (  ( ( i_2_reg_207  << 2 )  & 18446744073709551615 )  & 15 )  & 31 )  -  ( i_2_reg_207  & 31 )  ) & 31 ) ;
       }
       //goto ap_ST_fsm_state12;
   }

	//schduled c code
	icmp_ln23 = i_2 == 3 ? (zero+1) :  zero; //%icmp_ln23 = icmp eq i2 %i_2, -1
	//%empty_7 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
	//br i1 %icmp_ln23, label %.preheader1.preheader, label %.preheader2.preheader	
	if(!icmp_ln23){
		j_2 = zero;
		i_5 = i_2 + 1; // %i_5 = add i2 %i_2, 1
		zext_ln25 = i_2; //%zext_ln25 = zext i2 %i_2 to i5
		tmp_2 = i_2 << 2; //%tmp_2 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_2, i2 0)
		zext_ln25_1 = tmp_2; //%zext_ln25_1 = zext i4 %tmp_2 to i5
		sub_ln25 = zext_ln25_1 - zext_ln25; //%sub_ln25 = sub i5 %zext_ln25_1, %zext_ln25
		//br label %.preheader2
		//goto state12;
	}
	if(icmp_ln23) {
		i_3 = zero;
		i_5 = i_2 + 1; // %i_5 = add i2 %i_2, 1
		//br label %.preheader1
		//goto state15;
	}
}


void state12(){
	//generated c code
       icmp_ln24_fu_468_p2 =   ( j_2_reg_218  == 3 ? (zero+1) :  zero ) ;
       if(1 == ap_CS_fsm_state12)
       {
           mat1_address0 =  ( do_twos_complement(  ( ( sub_ln25_reg_710  +  ( j_2_reg_218  & 31 )  ) & 31 )  , 5 ) & 18446744073709551615 ) ;
       }
       if(1 == ap_CS_fsm_state12)
       {
           mat2_address0 =  ( do_twos_complement(  ( ( sub_ln25_reg_710  +  ( j_2_reg_218  & 31 )  ) & 31 )  , 5 ) & 18446744073709551615 ) ;
       }
       if(1 == ap_CS_fsm_state12)
       {
           res_address0 =  ( do_twos_complement(  ( ( sub_ln25_reg_710  +  ( j_2_reg_218  & 31 )  ) & 31 )  , 5 ) & 18446744073709551615 ) ;
       }
   if(((1 == ap_CS_fsm_state12) && (icmp_ln24_fu_468_p2 == zero+1)) == zero+1){
       if((1 == ap_CS_fsm_state12) && (icmp_ln24_fu_468_p2 == zero+1))
       {
           i_2_reg_207 =  i_5_reg_705 ;
       }
       if(1 == ap_CS_fsm_state12)
       {
           j_5_reg_718 =   j_2_reg_218  + 1;
       }
       
       res_q0=res_ram[res_address0];
       mat1_q0 = mat1_ram[mat1_address0];
       mat2_q0 = mat2_ram[mat2_address0];
       
       //goto ap_ST_fsm_state11;
   }
   if(((1 == ap_CS_fsm_state12) && (icmp_ln24_fu_468_p2 == zero+1)) == zero){
       if(1 == ap_CS_fsm_state12)
       {
               j_5_reg_718 =   j_2_reg_218  + 1 ;
       }
       if((icmp_ln24_fu_468_p2 == zero) && (1 == ap_CS_fsm_state12))
       {
               res_addr_1_reg_723 =  ( do_twos_complement(  ( ( sub_ln25_reg_710  +  ( j_2_reg_218  & 31 )  ) & 31 )  , 5 ) & 18446744073709551615 ) ;
       }
       res_q0=res_ram[res_address0];
       mat1_q0 = mat1_ram[mat1_address0];
       mat2_q0 = mat2_ram[mat2_address0];
       //goto ap_ST_fsm_state13;
   }

	//schduled c code
	icmp_ln24 = j_2 == 3 ? (zero+1) :  zero; //%icmp_ln24 = icmp eq i2 %j_2, -1
	//%empty_8 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
	//br i1 %icmp_ln24, label %.preheader3.loopexit, label %5	
	if(!icmp_ln24){
		j_5 = j_2 + 1; //%j_5 = add i2 %j_2, 1
		zext_ln25_2 = j_2; //%zext_ln25_2 = zext i2 %j_2 to i5
		add_ln25_2 = sub_ln25 + zext_ln25_2; //%add_ln25_2 = add i5 %sub_ln25, %zext_ln25_2
		sext_ln25 = add_ln25_2; //%sext_ln25 = sext i5 %add_ln25_2 to i64
		res_addr_1 = res[sext_ln25]; //%res_addr_1 = getelementptr [9 x i32]* @res, i64 0, i64 %sext_ln25
		mat1_addr = mat1[sext_ln25]; //%mat1_addr = getelementptr [9 x i32]* %mat1, i64 0, i64 %sext_ln25
		mat2_addr = mat2[sext_ln25]; //%mat2_addr = getelementptr [9 x i32]* %mat2, i64 0, i64 %sext_ln25
		res_load = res_addr_1; //%res_load = load i32* %res_addr_1, align 4
		mat1_load_1 = mat1_addr; //%mat1_load_1 = load i32* %mat1_addr, align 4
		mat2_load_1 = mat2_addr; //%mat2_load_1 = load i32* %mat2_addr, align 4
		//goto state13;
	}
	if(icmp_ln24){
		i_2 = i_5;
		j_5 = j_2 + 1; //%j_5 = add i2 %j_2, 1
		//br label %.preheader3
		//goto state11;
	}
}

void state13(){
	//generated c code
	   if(1 == ap_CS_fsm_state13)
       {
           add_ln25_1_reg_738 =   ( ( ( mat1_q0  & 4294967295 )  +  ( (  ( ( res_q0  << 1 )  & 4294967295 )  + ( mat2_q0  & 4294967295 )  ) & 4294967295 )  ) & 4294967295 ) ;
       }

	//schduled c code
	res_load = res_addr_1; //%res_load = load i32* %res_addr_1, align 4
	shl_ln25 = res_load << 1; //%shl_ln25 = shl i32 %res_load, 1
	mat1_load_1 = mat1_addr; //%mat1_load_1 = load i32* %mat1_addr, align 4
	mat2_load_1 = mat2_addr; //%mat2_load_1 = load i32* %mat2_addr, align 4
	add_ln25 = shl_ln25 + mat2_load_1; //%add_ln25 = add i32 %shl_ln25, %mat2_load_1
	add_ln25_1 = mat1_load_1 + add_ln25; //%add_ln25_1 = add i32 %mat1_load_1, %add_ln25
}

void state14(){
	//generated c code
	   icmp_ln23_fu_434_p2 =   ( i_2_reg_207  == 3 ? (zero+1) :  zero ) ;
       if(1 == ap_CS_fsm_state14)
       {
           res_address0 =  res_addr_1_reg_723 ;
       }
       if(1 == ap_CS_fsm_state14)
       {
           res_d0 =  add_ln25_1_reg_738 ;
       }
       if(1 == ap_CS_fsm_state14)
       {
           j_2_reg_218 =  j_5_reg_718 ;
       }
       res_q0=res_ram[res_address0];
       res_ram[res_address0]=res_d0;
       
	//schduled c code
	res[sext_ln25] = add_ln25_1; //store i32 %add_ln25_1, i32* %res_addr_1, align 4
	j_2 = j_5;
}

void state15(){
	//generated c code
	   icmp_ln28_fu_514_p2 =   ( i_3_reg_229  == 2 ? (zero+1) :  zero ) ;
       if((1 == ap_CS_fsm_state15) && (icmp_ln28_fu_514_p2 == zero+1))
       {
           ap_done =  1;
            if(ap_done==1){
            }
       }
       if((1 == ap_CS_fsm_state15) && (icmp_ln28_fu_514_p2 == zero+1))
       {
           ap_ready =  zero+1;
       }
               icmp_ln28_fu_514_p2 =   ( i_3_reg_229  == 2 ? (zero+1) :  zero ) ;
   if(((1 == ap_CS_fsm_state15) && (icmp_ln28_fu_514_p2 == zero+1)) == zero+1){
       if(1 == ap_CS_fsm_state15)
       {
           i_6_reg_746 =   i_3_reg_229  + 1;
       }
       if(ap_done==1){
           //goto end;
       }
       //goto ap_ST_fsm_state1;
   }
   if(((1 == ap_CS_fsm_state15) && (icmp_ln28_fu_514_p2 == zero+1)) == zero){
       if((icmp_ln28_fu_514_p2 == zero) && (1 == ap_CS_fsm_state15))
       {
               j_3_reg_240 =  zero;
       }
       if(1 == ap_CS_fsm_state15)
       {
               i_6_reg_746 =   i_3_reg_229  + 1;
       }
       if((icmp_ln28_fu_514_p2 == zero) && (1 == ap_CS_fsm_state15))
       {
               zext_ln30_reg_751 =   ( (  ( (  ( i_3_reg_229  & 31 )  & 3 ) & 18446744073709551615 )  |  ( ( zext_ln30_reg_751  & 28 ) & 18446744073709551615 )  ) & 18446744073709551615 ) ;
               sub_ln30_reg_756 =   ( (  (  (  ( ( i_3_reg_229  << 2 )  & 18446744073709551615 )  & 15 )  & 31 )  -  ( i_3_reg_229  & 31 )  ) & 31 ) ;
       }
       //goto ap_ST_fsm_state16;
   }

	//schduled c code
	icmp_ln28 = i_3 == 2 ? (zero+1) :  zero; //%icmp_ln28 = icmp eq i2 %i_3, -2
	//%empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
	//br i1 %icmp_ln28, label %7, label %.preheader.preheader
	if(!icmp_ln28){
		j_3 = zero;
		i_6 = i_3 + 1; //%i_6 = add i2 %i_3, 1
		zext_ln30 = i_3; //%zext_ln30 = zext i2 %i_3 to i5
		tmp_4 = i_3 << 2; //%tmp_4 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_3, i2 0)
		zext_ln30_1 = tmp_4; //%zext_ln30_1 = zext i4 %tmp_4 to i5
		sub_ln30 = zext_ln30_1 - zext_ln30; //%sub_ln30 = sub i5 %zext_ln30_1, %zext_ln30
		//br label %.preheader
		//goto state16;
	}
	if(icmp_ln28){
		i_6 = i_3 + 1; //%i_6 = add i2 %i_3, 1
		//return; //ret void
		//goto end;		
		//goto state1;
	}
}


void state16(){
	//generated c code
	   icmp_ln29_fu_548_p2 =   ( j_3_reg_240  == 2 ? (zero+1) :  zero ) ;
       if(1 == ap_CS_fsm_state16)
       {
           res_address0 =  ( do_twos_complement(  ( (  ( (  (  (  ( ( j_3_reg_240  << 2 )  & 18446744073709551615 )  & 15 )  & 31 )  -  ( j_3_reg_240  & 31 )  ) & 31 )  + zext_ln30_reg_751  ) & 31 )  , 5 ) & 18446744073709551615 ) ;
       }
    if(((icmp_ln29_fu_548_p2 == zero+1) && (1 == ap_CS_fsm_state16)) == zero+1){
       if((icmp_ln29_fu_548_p2 == zero+1) && (1 == ap_CS_fsm_state16))
       {
           i_3_reg_229 =  i_6_reg_746 ;
       }
       if(1 == ap_CS_fsm_state16)
       {
           j_6_reg_764 =  j_3_reg_240  + 1;
       }
       res_q0=res_ram[res_address0];
       
       //goto ap_ST_fsm_state15;
   }
   if(((icmp_ln29_fu_548_p2 == zero+1) && (1 == ap_CS_fsm_state16)) == zero){
       if((icmp_ln29_fu_548_p2 == zero) && (1 == ap_CS_fsm_state16))
       {
               add_ln30_1_reg_774 =   ( ( sub_ln30_reg_756  +  ( j_3_reg_240  & 31 )  ) & 31 ) ;
       }
       if(1 == ap_CS_fsm_state16)
       {
               j_6_reg_764 =   j_3_reg_240  + 1 ;
       }
       res_q0=res_ram[res_address0];
       //goto ap_ST_fsm_state17;
   }

	//schduled c code
	icmp_ln29 = j_3 == 2 ? (zero+1) :  zero; //%icmp_ln29 = icmp eq i2 %j_3, -2
	//%empty_10 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
	//br i1 %icmp_ln29, label %.preheader1.loopexit, label %6
	if(!icmp_ln29){
		j_6 = j_3 + 1; //%j_6 = add i2 %j_3, 1
		zext_ln30_2 = j_3; //%zext_ln30_2 = zext i2 %j_3 to i5
		tmp_6 = j_3 << 2; //%tmp_6 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %j_3, i2 0)
		zext_ln30_3 = tmp_6; //%zext_ln30_3 = zext i4 %tmp_6 to i5
		sub_ln30_1 = zext_ln30_3 - zext_ln30_2; //%sub_ln30_1 = sub i5 %zext_ln30_3, %zext_ln30_2
		add_ln30 = sub_ln30_1 + zext_ln30; //%add_ln30 = add i5 %sub_ln30_1, %zext_ln30
		sext_ln30 = add_ln30; //%sext_ln30 = sext i5 %add_ln30 to i64
		res_addr_2 = res[sext_ln30]; //%res_addr_2 = getelementptr [9 x i32]* @res, i64 0, i64 %sext_ln30
		add_ln30_1 = sub_ln30 + zext_ln30_2; //%add_ln30_1 = add i5 %sub_ln30, %zext_ln30_2
		res_load_1 = res_addr_2; //%res_load_1 = load i32* %res_addr_2, align 4
		//goto state17;
	}
	if(icmp_ln29){
		i_3 = i_6;
		j_6 = j_3 + 1; //%j_6 = add i2 %j_3, 1
		//br label %.preheader1
		//goto state15;
	}
}

void state17(){
	//generated c code
	//zext_ln10_reg_623 =  ( ( zext_ln10_reg_623 & 3 ) & 31 )  ;
    	//zext_ln30_reg_751 =  ( ( zext_ln30_reg_751 & 3 ) & 31 )  ;
       icmp_ln28_fu_514_p2 =   ( i_3_reg_229  == 2 ? (zero+1) :  zero ) ;
       if(1 == ap_CS_fsm_state17)
       {
           res_address0 =  ( do_twos_complement( add_ln30_1_reg_774  , 5 ) & 18446744073709551615 ) ;
       }
       if(1 == ap_CS_fsm_state17)
       {
           res_d0 =  res_q0 ;
       }
       if(1 == ap_CS_fsm_state17)
       {
           j_3_reg_240 =  j_6_reg_764 ;
       }
       res_q0=res_ram[res_address0];
       res_ram[res_address0]=res_d0;
      
	//schduled c code
	sext_ln30_1 = add_ln30_1; //%sext_ln30_1 = sext i5 %add_ln30_1 to i64
	res_addr_3 = res[sext_ln30_1]; //%res_addr_3 = getelementptr [9 x i32]* @res, i64 0, i64 %sext_ln30_1
	res_load_1 = res_addr_2; //%res_load_1 = load i32* %res_addr_2, align 4
	res[sext_ln30_1] = res_load_1; //store i32 %res_load_1, i32* %res_addr_3, align 4
	j_3 = j_6;
}

void matrixmul(unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *mat1_address0__1,unsigned long long int *mat1_ce0__1,unsigned long long int *mat1_q0__1,unsigned long long int *mat2_address0__1,unsigned long long int *mat2_ce0__1,unsigned long long int *mat2_q0__1,long long int  *mat1_ram , long long int  *mat2_ram , int dummy){
	ap_clk=*ap_clk__1;
	ap_done=*ap_done__1;
	ap_idle=*ap_idle__1;
	ap_ready=*ap_ready__1;
	ap_rst=*ap_rst__1;
	ap_start=*ap_start__1;
	mat1_address0=*mat1_address0__1;
	mat1_ce0=*mat1_ce0__1;
	mat1_q0=*mat1_q0__1;
	mat2_address0=*mat2_address0__1;
	mat2_ce0=*mat2_ce0__1;
	mat2_q0=*mat2_q0__1;
	ap_CS_fsm_state1=0;
	ap_CS_fsm_state10=0;
	ap_CS_fsm_state11=0;
	ap_CS_fsm_state12=0;
	ap_CS_fsm_state13=0;
	ap_CS_fsm_state14=0;
	ap_CS_fsm_state15=0;
	ap_CS_fsm_state16=0;
	ap_CS_fsm_state17=0;
	ap_CS_fsm_state2=0;
	ap_CS_fsm_state3=0;
	ap_CS_fsm_state4=0;
	ap_CS_fsm_state5=0;
	ap_CS_fsm_state6=0;
	ap_CS_fsm_state7=0;
	ap_CS_fsm_state8=0;
	ap_CS_fsm_state9=0;
	mat1_d0=0;
	mat1_load_reg_651=0;
	mat1_we0=0;
	mat2_d0=0;
	mat2_load_reg_656=0;
	mat2_we0=0;
	sext_ln10_fu_306_p1=0;
	sext_ln12_1_fu_360_p1=0;
	sext_ln12_fu_332_p1=0;
	sext_ln18_fu_429_p1=0;
	sext_ln18_reg_692=0;
	sext_ln25_fu_489_p1=0;
	sext_ln30_1_fu_597_p1=0;
	sext_ln30_fu_587_p1=0;
   add_ln10_fu_301_p2=0;
   add_ln12_1_fu_327_p2=0;
   add_ln12_2_fu_355_p2=0;
   add_ln12_fu_369_p2=0;
   add_ln18_fu_424_p2=0;
   add_ln25_1_fu_508_p2=0;
   add_ln25_1_reg_738=0;
   add_ln25_2_fu_484_p2=0;
   add_ln25_fu_502_p2=0;
   add_ln30_1_fu_592_p2=0;
   add_ln30_1_reg_774=0;
   add_ln30_fu_582_p2=0;
   ap_CS_fsm=0;
   ap_NS_fsm=0;
   i_0_reg_139=0;
   i_0_reg_139_temp_11=0;
   i_1_reg_185=0;
   i_1_reg_185_temp_6=0;
   i_2_reg_207=0;
   i_2_reg_207_temp_7=0;
   i_3_reg_229=0;
   i_3_reg_229_temp_9=0;
   i_4_fu_380_p2=0;
   i_4_reg_674=0;
   i_5_fu_440_p2=0;
   i_5_reg_705=0;
   i_6_fu_520_p2=0;
   i_6_reg_746=0;
   i_fu_257_p2=0;
   i_reg_604=0;
   icmp_ln11_fu_311_p2=0;
   icmp_ln15_fu_374_p2=0;
   icmp_ln17_fu_408_p2=0;
   icmp_ln23_fu_434_p2=0;
   icmp_ln24_fu_468_p2=0;
   icmp_ln28_fu_514_p2=0;
   icmp_ln29_fu_548_p2=0;
   icmp_ln8_fu_251_p2=0;
   icmp_ln9_fu_285_p2=0;
   j_0_reg_150=0;
   j_0_reg_150=0;
   j_1_reg_196=0;
   j_2_reg_218=0;
   j_3_reg_240=0;
   j_3_reg_240_temp_10=0;
   j_4_fu_291_p2=0;
   j_4_reg_618=0;
   j_5_fu_474_p2=0;
   j_5_reg_718=0;
   j_6_fu_554_p2=0;
   j_6_reg_764=0;
   j_fu_414_p2=0;
   j_reg_687=0;
   k_0_reg_174=0;
   k_0_reg_174_temp_8=0;
   k_fu_317_p2=0;
   k_reg_636=0;
   mul_ln12_fu_365_p2=0;
   mul_ln12_reg_661=0;
   res1_addr_reg_628=0;
   res1_address0=0;
   res1_ce0=0;
   res1_load_1_reg_161=0;
   res1_load_1_reg_161__temp=0;
   res1_q0=0;
   res1_we0=0;
   res_addr_1_reg_723=0;
   res_address0=0;
   res_ce0=0;
   res_d0=0;
   res_q0=0;
   res_we0=0;
   shl_ln25_fu_496_p2=0;
   sub_ln12_1_fu_349_p2=0;
   sub_ln12_fu_279_p2=0;
   sub_ln12_reg_609=0;
   sub_ln18_fu_402_p2=0;
   sub_ln18_reg_679=0;
   sub_ln25_fu_462_p2=0;
   sub_ln25_reg_710=0;
   sub_ln30_1_fu_576_p2=0;
   sub_ln30_fu_542_p2=0;
   sub_ln30_reg_756=0;
   tmp_1_fu_390_p3=0;
   tmp_2_fu_450_p3=0;
   tmp_3_fu_337_p3=0;
   tmp_4_fu_530_p3=0;
   tmp_6_fu_564_p3=0;
   tmp_fu_267_p3=0;
   zext_ln10_fu_297_p1=0;
   zext_ln10_fu_297_p1_temp_0=0;
   zext_ln10_fu_297_p1_temp_0_temp_2=0;
   zext_ln10_reg_623=0;
   zext_ln10_reg_623_temp_1=0;
   zext_ln12_1_fu_275_p1=0;
   zext_ln12_2_fu_323_p1=0;
   zext_ln12_3_fu_345_p1=0;
   zext_ln12_fu_263_p1=0;
   zext_ln18_1_fu_398_p1=0;
   zext_ln18_2_fu_420_p1=0;
   zext_ln18_fu_386_p1=0;
   zext_ln25_1_fu_458_p1=0;
   zext_ln25_2_fu_480_p1=0;
   zext_ln25_fu_446_p1=0;
   zext_ln30_1_fu_538_p1=0;
   zext_ln30_2_fu_560_p1=0;
   zext_ln30_3_fu_572_p1=0;
   zext_ln30_fu_526_p1=0;
   zext_ln30_fu_526_p1_temp_3=0;
   zext_ln30_fu_526_p1_temp_3_temp_5=0;
   zext_ln30_reg_751=0;
   zext_ln30_reg_751_temp_4=0;
    ap_done=0;
    ap_start=1;

	i_0=0; 
	icmp_ln8=0; 
	i=0; 
	j_0=0; 
	i_1=0; 
	zext_ln12=0; 
	tmp=0; 
	zext_ln12_1=0; 
	sub_ln12=0; 
	icmp_ln9=0; 
	j_4=0; 
	k_0=0; 
	zext_ln10=0; 
	add_ln10=0; 
	sext_ln10=0; 
	res1_addr=0; 
	icmp_ln11=0; 
	k=0; 
	zext_ln12_2=0; 
	add_ln12_1=0; 
	sext_ln12=0; 
	mat1_addr_1=0;
	tmp_3=0; 
	zext_ln12_3=0; 
	sub_ln12_1=0; 
	add_ln12_2=0; 
	sext_ln12_1=0; 
	mat2_addr_1=0; 
	mat1_load=0; 
	mat2_load=0; 
	mul_ln12=0; 
	add_ln12=0; 
	res1_load_1=0; 
	icmp_ln15=0; 
	i_4=0; 
	j_1=0; 
	i_2=0; 
	zext_ln18=0; 
	tmp_1=0; 
	zext_ln18_1=0;
	sub_ln18=0; 
	icmp_ln17=0; 
	zext_ln18_2=0; 
	add_ln18=0; 
	sext_ln18=0; 
	res1_addr_1=0; 
	res_addr=0; 
	res1_load=0; 
	icmp_ln23=0; 
	i_5=0; 
	zext_ln25=0; 
	tmp_2=0; 
	zext_ln25_1=0; 
	sub_ln25=0; 
	icmp_ln24=0;
	j_5=0; 
	zext_ln25_2=0; 
	add_ln25_2=0; 
	sext_ln25=0; 
	res_addr_1=0; 
	mat1_addr=0; 
	mat2_addr=0; 
	res_load=0; 
	mat1_load_1=0; 
	mat2_load_1=0; 
	shl_ln25=0; 
	add_ln25=0; 
	add_ln25_1=0; 
	j_2=0; 
	icmp_ln28=0; 
	i_6=0; 
	j_3=0; 
	zext_ln30=0; 
	tmp_4=0;
	zext_ln30_1=0; 
	sub_ln30=0; 
	icmp_ln29=0; 
	j_6=0; 
	zext_ln30_2=0; 
	tmp_6=0; 
	zext_ln30_3=0; 
	sub_ln30_1=0; 
	add_ln30=0; 
	sext_ln30=0; 
	res_addr_2=0; 
	add_ln30_1=0; 
	res_load_1=0; 
	sext_ln30_1=0; 
	res_addr_3=0; 
	j=0;
	i_3=0;

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
    ap_CS_fsm_state17 = 0;

	state1();
    goto ap_ST_fsm_state2;

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
    ap_CS_fsm_state17 = 0;
   
	state2();
	//icmp_ln8_fu_251_p2 =   ( //i_0_reg_139  == 3 ? (zero+1) :  zero ) ;
   if(((icmp_ln8_fu_251_p2 == zero+1) && (1 == ap_CS_fsm_state2)) == zero+1){
       goto ap_ST_fsm_state8;
   }
   if(((icmp_ln8_fu_251_p2 == zero+1) && (1 == ap_CS_fsm_state2)) == zero){
       goto ap_ST_fsm_state3;
   }

   ap_ST_fsm_state3:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 1;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
    ap_CS_fsm_state17 = 0;
   
    state3();
	//icmp_ln9_fu_285_p2 =   ( j_0_reg_150__temp  == 3 ? (zero+1) :  zero );
   if(((icmp_ln9_fu_285_p2 == zero+1) && (1 == ap_CS_fsm_state3)) == zero+1){
       goto ap_ST_fsm_state2;
   }
   if(((icmp_ln9_fu_285_p2 == zero+1) && (1 == ap_CS_fsm_state3)) == zero){
       goto ap_ST_fsm_state4;
   }

   ap_ST_fsm_state4:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 1;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
    ap_CS_fsm_state17 = 0;
   
    state4();
	//icmp_ln11_fu_311_p2 =   ( //k_0_reg_174  == 3 ? (zero+1) :  zero ) ;
   if(((icmp_ln11_fu_311_p2 == zero+1) && (1 == ap_CS_fsm_state4)) == zero+1){
       goto ap_ST_fsm_state3;
   }
   if(((icmp_ln11_fu_311_p2 == zero+1) && (1 == ap_CS_fsm_state4)) == zero){
       goto ap_ST_fsm_state5;
   }

   ap_ST_fsm_state5:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 1;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
    ap_CS_fsm_state17 = 0;
   
    state5();
       goto ap_ST_fsm_state6;

   ap_ST_fsm_state6:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 1;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
    ap_CS_fsm_state17 = 0;
   
    state6();
       goto ap_ST_fsm_state7;

   ap_ST_fsm_state7:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 1;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
    ap_CS_fsm_state17 = 0;
   
    state7();
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state8:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 1;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
    ap_CS_fsm_state17 = 0;
   
    state8();
	//icmp_ln15_fu_374_p2 =   ( i_1_reg_185__temp  == 3 ? (zero+1) :  zero ) ;
   if(((1 == ap_CS_fsm_state8) && (icmp_ln15_fu_374_p2 == zero+1)) == zero+1){
       goto ap_ST_fsm_state11;
   }
   if(((1 == ap_CS_fsm_state8) && (icmp_ln15_fu_374_p2 == zero+1)) == zero){
       goto ap_ST_fsm_state9;
   }

   ap_ST_fsm_state9:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 1;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
    ap_CS_fsm_state17 = 0;
   
    state9();
	//icmp_ln17_fu_408_p2 =   ( j_1_reg_196__temp  == 3 ? (zero+1) :  zero ) ;
   if(((1 == ap_CS_fsm_state9) && (icmp_ln17_fu_408_p2 == zero+1)) == zero+1){
       goto ap_ST_fsm_state8;
   }
   if(((1 == ap_CS_fsm_state9) && (icmp_ln17_fu_408_p2 == zero+1)) == zero){
       goto ap_ST_fsm_state10;
   }

   ap_ST_fsm_state10:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 1;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
    ap_CS_fsm_state17 = 0;
   
    state10();
       goto ap_ST_fsm_state9;

   ap_ST_fsm_state11:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 1;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
    ap_CS_fsm_state17 = 0;
   
    state11();
	//icmp_ln23_fu_434_p2 =   ( i_2_reg_207__temp  == 3 ? (zero+1) :  zero ) ;
   if(((1 == ap_CS_fsm_state11) && (icmp_ln23_fu_434_p2 == zero+1)) == zero+1){
       goto ap_ST_fsm_state15;
   }
   if(((1 == ap_CS_fsm_state11) && (icmp_ln23_fu_434_p2 == zero+1)) == zero){
       goto ap_ST_fsm_state12;
   }

   ap_ST_fsm_state12:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 1;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
    ap_CS_fsm_state17 = 0;
   
    state12();
	//icmp_ln24_fu_468_p2 =   ( j_2_reg_218__temp  == 3 ? (zero+1) :  zero ) ;
   if(((1 == ap_CS_fsm_state12) && (icmp_ln24_fu_468_p2 == zero+1)) == zero+1){
       goto ap_ST_fsm_state11;
   }
   if(((1 == ap_CS_fsm_state12) && (icmp_ln24_fu_468_p2 == zero+1)) == zero){
       goto ap_ST_fsm_state13;
   }

   ap_ST_fsm_state13:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 1;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
    ap_CS_fsm_state17 = 0;
   
    state13();
       goto ap_ST_fsm_state14;

   ap_ST_fsm_state14:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 1;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
    ap_CS_fsm_state17 = 0;
   
    state14();
       goto ap_ST_fsm_state12;

   ap_ST_fsm_state15:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 1;
    ap_CS_fsm_state16 = 0;
    ap_CS_fsm_state17 = 0;
   
    state15();
	//icmp_ln28_fu_514_p2 =   ( i_3_reg_229__temp  == 2 ? (zero+1) :  zero ) ;
   if(((1 == ap_CS_fsm_state15) && (icmp_ln28_fu_514_p2 == zero+1)) == zero+1){
       if(ap_done==1){
           goto end;
       }
       goto ap_ST_fsm_state1;
   }
   if(((1 == ap_CS_fsm_state15) && (icmp_ln28_fu_514_p2 == zero+1)) == zero){
       goto ap_ST_fsm_state16;
   }

   ap_ST_fsm_state16:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 1;
    ap_CS_fsm_state17 = 0;
   
    state16();
	//icmp_ln29_fu_548_p2 =   ( j_3_reg_240__temp  == 2 ? (zero+1) :  zero ) ;
   if(((icmp_ln29_fu_548_p2 == zero+1) && (1 == ap_CS_fsm_state16)) == zero+1){
       goto ap_ST_fsm_state15;
   }
   if(((icmp_ln29_fu_548_p2 == zero+1) && (1 == ap_CS_fsm_state16)) == zero){
       goto ap_ST_fsm_state17;
   }

   ap_ST_fsm_state17:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
    ap_CS_fsm_state6 = 0;
    ap_CS_fsm_state7 = 0;
    ap_CS_fsm_state8 = 0;
    ap_CS_fsm_state9 = 0;
    ap_CS_fsm_state10 = 0;
    ap_CS_fsm_state11 = 0;
    ap_CS_fsm_state12 = 0;
    ap_CS_fsm_state13 = 0;
    ap_CS_fsm_state14 = 0;
    ap_CS_fsm_state15 = 0;
    ap_CS_fsm_state16 = 0;
    ap_CS_fsm_state17 = 1;
   
    state17();
       goto ap_ST_fsm_state16;
   end:
    *ap_clk__1=ap_clk;
    *ap_done__1=ap_done;
    *ap_idle__1=ap_idle;
    *ap_ready__1=ap_ready;
    *ap_rst__1=ap_rst;
    *ap_start__1=ap_start;
    *mat1_address0__1=mat1_address0;
    *mat1_ce0__1=mat1_ce0;
    *mat1_q0__1=mat1_q0;
    *mat2_address0__1=mat2_address0;
    *mat2_ce0__1=mat2_ce0;
    *mat2_q0__1=mat2_q0;
	for(int i=0; i<9; i++){
		printf("%llu ",res_ram[i]);
	}
	int flag = 0;
	for(int x=0; x<9; x++){
		if(res_ram[x] != res[x]){
			flag = 1;			
		}	
	}
	if(flag){
		printf("F\n");		
	}else{
		printf("T\n");
	}
    return;
}

int main(){
	for(int i=0; i<7; i++){
		unsigned long long int ap_clk__1 = 1;
		unsigned long long int ap_done__1 = 0;
		unsigned long long int ap_idle__1 = 0;
		unsigned long long int ap_ready__1 = 1;
		unsigned long long int ap_return1__1 = 0;
		unsigned long long int ap_return1_ap_vld__1 = 0;
		unsigned long long int ap_rst__1 = 0;
		unsigned long long int ap_start__1 = 1;
		unsigned long long int mat1_address0__1 = 0;
		unsigned long long int mat1_ce0__1 = 0;
		unsigned long long int mat1_q0__1 = 0;
		unsigned long long int mat2_address0__1 = 0;
		unsigned long long int mat2_ce0__1 = 0;
		unsigned long long int mat2_q0__1 = 0;
		scanf("%lld",&zero);
		int dummy = 1;
		for(int j=0; j<3; j++){
			for(int k=0; k<3; k++){
				scanf("%lld",&mat1_ram[j*3+k]);
				mat1[j*3+k] = mat1_ram[j*3+k];
				res[j*3+k] = 0;
				res1[j*3+k] = 0;
				res_ram[j*3+k] = 0;
				res1_ram[j*3+k] = 0;
			}
		}
		for(int j=0; j<3; j++){
			for(int k=0; k<3; k++){
				scanf("%lld",&mat2_ram[j*3+k]);
				mat2[j*3+k] = mat2_ram[j*3+k];
			}
		}
		matrixmul(&ap_clk__1,&ap_done__1,&ap_idle__1,&ap_ready__1,&ap_rst__1,&ap_start__1,&mat1_address0__1,&mat1_ce0__1,&mat1_q0__1,&mat2_address0__1,&mat2_ce0__1,&mat2_q0__1,mat1_ram , mat2_ram , dummy);
	}
return 0;
}

