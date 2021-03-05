#include<stdio.h>

long long int ap_clk;
long long int ap_done;
long long int ap_idle;
long long int ap_ready;
long long int ap_return;
long long int ap_rst;
long long int ap_start;
long long int in1;
long long int in2;
long long int in3;
long long int in4;
long long int in5;
long long int in6;
long long int ap_CS_fsm_state1;
long long int ap_CS_fsm_state2;
long long int ap_CS_fsm;
long long int ap_NS_fsm;
long long int icmp_ln19_fu_150_p2;
long long int icmp_ln19_fu_150_p2_temp_5;
long long int icmp_ln21_fu_72_p2;
long long int icmp_ln21_fu_72_p2_temp_2;
long long int icmp_ln24_fu_110_p2;
long long int icmp_ln24_fu_110_p2_temp_1;
long long int icmp_ln31_fu_78_p2;
long long int icmp_ln31_fu_78_p2_temp_4;
long long int icmp_ln41_fu_155_p2;
long long int icmp_ln41_fu_155_p2_temp_3;
long long int icmp_ln46_fu_186_p2;
long long int icmp_ln46_fu_186_p2_temp_0;
long long int out1_1_fu_197_p2;
long long int out1_fu_192_p2;
long long int sub_ln21_fu_66_p2;
long long int t4_1_fu_116_p2;
long long int t4_2_fu_122_p2;
long long int t4_3_fu_128_p3;
long long int t4_4_fu_136_p3;
long long int t4_fu_104_p2;
long long int t6_1_fu_166_p2;
long long int t6_2_fu_171_p3;
long long int t6_3_fu_84_p2;
long long int t6_4_fu_90_p2;
long long int t6_5_fu_96_p3;
long long int t6_6_fu_144_p2;
long long int t6_6_reg_231;
long long int t6_7_fu_179_p3;
long long int t6_fu_161_p2;

long long int in5_read;
long long int in4_read;
long long int in3_read;
long long int in2_read;
long long int in1_read;
long long int sub_ln21;
long long int icmp_ln21;
long long int icmp_ln31;
long long int t6_3;
long long int t6_4;
long long int t6_5;
long long int t4;
long long int icmp_ln24;
long long int t4_1;
long long int t4_2;
long long int t4_3;
long long int t4_4;
long long int t6_6;
long long int in6_read;
long long int icmp_ln19;
long long int icmp_ln41;
long long int t6;
long long int t6_1;
long long int t6_2;
long long int t6_7;	
long long int icmp_ln46;
long long int out1;
long long int out1_1;
long long int out1_2;

void state1(){
	//generated c code
	if((ap_start == 1) && (1 == ap_CS_fsm_state1))
   	{
       t6_6_reg_231 =   ( (  ( (  ( in2  ==  ( 0 - in3 )  ? 1 : 0 )  & 1 )  == 1 ?  ( (  (  ( ( in4  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( 0 - in2 ) :   ( in2  + in1  )  )  - in4  ) )  :   ( (  ( in1  == 4 ? 1 :  0 )  & 1 )  == 1 ?  ( in3  - in5  )   :  ( in2  + 4 )  )  )  + in4 ) ) ;
   	}

	//scheduled c code
	in5_read = in5;
	in4_read = in4;
	in3_read = in3;
	in2_read = in2;
	in1_read = in1;
	sub_ln21 = 0 - in3_read;
	icmp_ln21 = in2_read == sub_ln21 ? 1 : 0;
	icmp_ln31 = in4_read == 0 ? 1 : 0;
	t6_3 = in2_read + in1_read;
	t6_4 = 0 - in2_read;
	t6_5 = icmp_ln31 ? t6_4 : t6_3;
	t4 = t6_5 - in4_read;
	icmp_ln24 = in1_read == 4 ? 1 : 0;
	t4_1 = in2_read + 4;
	t4_2 = in3_read - in5_read;
	t4_3 = icmp_ln24 ? t4_2 : t4_1;
	t4_4 = icmp_ln21 ? t4 : t4_3;
	t6_6 = t4_4 + in4_read;
}

void state2(){
	//generated c code
	if(1 == ap_CS_fsm_state2)
    {
       ap_done =  1;
        if(ap_done==1){
      ap_return =  (  ( (  (  ( (  ( in5  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( (  ( in6  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( 8 - in4  )  :   ( in2  + 5 )  )  :  t6_6_reg_231 )  == 0 ? 1 :  0 )  & 1 ) )  == 1 ?  ( in5 + 8 )  :   ( in1  - 5)  ) ;
        }
    }

	//scheduled c code
	in6_read = in6;
	icmp_ln19 = in5_read == 0 ? 1 : 0;
	icmp_ln41 = in6_read == 0 ? 1 : 0;
	t6 = in2_read + 5;
	t6_1 = 8 - in4_read;
	t6_2 = icmp_ln41 ? t6_1 : t6;
	t6_7 = icmp_ln19 ? t6_2 : t6_6;	
	icmp_ln46 = t6_7 == 0 ? 1 : 0;
	out1 = in1_read - 5;
	out1_1 = in5_read + 8;
	out1_2 = icmp_ln46 ? out1_1 : out1;
}

void parker(long long int *ap_clk__1,long long int *ap_done__1,long long int *ap_idle__1,long long int *ap_ready__1,long long int *ap_return__1,long long int *ap_rst__1,long long int *ap_start__1,long long int *in1__1,long long int *in2__1,long long int *in3__1,long long int *in4__1,long long int *in5__1,long long int *in6__1,int dummy){
ap_clk=*ap_clk__1;
ap_done=*ap_done__1;
ap_idle=*ap_idle__1;
ap_ready=*ap_ready__1;
ap_return=*ap_return__1;
ap_rst=*ap_rst__1;
ap_start=*ap_start__1;
in1=*in1__1;
in2=*in2__1;
in3=*in3__1;
in4=*in4__1;
in5=*in5__1;
in6=*in6__1;
ap_CS_fsm_state1=0;
ap_CS_fsm_state2=0;
ap_CS_fsm=0;
ap_NS_fsm=0;
icmp_ln19_fu_150_p2=0;
icmp_ln19_fu_150_p2_temp_5=0;
icmp_ln21_fu_72_p2=0;
icmp_ln21_fu_72_p2_temp_2=0;
icmp_ln24_fu_110_p2=0;
icmp_ln24_fu_110_p2_temp_1=0;
icmp_ln31_fu_78_p2=0;
icmp_ln31_fu_78_p2_temp_4=0;
icmp_ln41_fu_155_p2=0;
icmp_ln41_fu_155_p2_temp_3=0;
icmp_ln46_fu_186_p2=0;
icmp_ln46_fu_186_p2_temp_0=0;
out1_1_fu_197_p2=0;
out1_fu_192_p2=0;
sub_ln21_fu_66_p2=0;
t4_1_fu_116_p2=0;
t4_2_fu_122_p2=0;
t4_3_fu_128_p3=0;
t4_4_fu_136_p3=0;
t4_fu_104_p2=0;
t6_1_fu_166_p2=0;
t6_2_fu_171_p3=0;
t6_3_fu_84_p2=0;
t6_4_fu_90_p2=0;
t6_5_fu_96_p3=0;
t6_6_fu_144_p2=0;
t6_6_reg_231=0;
t6_7_fu_179_p3=0;
t6_fu_161_p2=0;
    ap_done=0;
    ap_start=1;

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
   if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) == 1){
       state1();
       goto ap_ST_fsm_state2;
   }

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;

       state2();
       if(1 == ap_CS_fsm_state2)
       {
           ap_ready =  1;
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
    *in2__1=in2;
    *in3__1=in3;
    *in4__1=in4;
    *in5__1=in5;
    *in6__1=in6;
	if(out1_2 == ap_return){
		printf("T");
	}else{
		printf("F %lld %lld\n",ap_return,out1_2);
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
		//int dummy = 1;

		scanf("%llu %llu %llu %llu %llu %llu",&in1__1,&in2__1,&in3__1,&in4__1,&in5__1,&in6__1);	
		int dummy = 1;
	parker(&ap_clk__1,&ap_done__1,&ap_idle__1,&ap_ready__1,&ap_return__1,&ap_rst__1,&ap_start__1,&in1__1,&in2__1,&in3__1,&in4__1,&in5__1,&in6__1,dummy);
}
return 0;
}
