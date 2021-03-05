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
long long int ap_CS_fsm__temp;
long long int ap_NS_fsm;
long long int ap_NS_fsm__temp;
long long int ap_clk__temp;
long long int ap_done__temp;
long long int ap_idle__temp;
long long int ap_ready__temp;
long long int ap_return__temp;
long long int ap_rst__temp;
long long int ap_start__temp;
long long int icmp_ln19_fu_150_p2;
long long int icmp_ln19_fu_150_p2__temp;
long long int icmp_ln19_fu_150_p2_temp_5;
long long int icmp_ln19_fu_150_p2_temp_5__temp;
long long int icmp_ln21_fu_72_p2;
long long int icmp_ln21_fu_72_p2__temp;
long long int icmp_ln21_fu_72_p2_temp_2;
long long int icmp_ln21_fu_72_p2_temp_2__temp;
long long int icmp_ln24_fu_110_p2;
long long int icmp_ln24_fu_110_p2__temp;
long long int icmp_ln24_fu_110_p2_temp_1;
long long int icmp_ln24_fu_110_p2_temp_1__temp;
long long int icmp_ln31_fu_78_p2;
long long int icmp_ln31_fu_78_p2__temp;
long long int icmp_ln31_fu_78_p2_temp_4;
long long int icmp_ln31_fu_78_p2_temp_4__temp;
long long int icmp_ln41_fu_155_p2;
long long int icmp_ln41_fu_155_p2__temp;
long long int icmp_ln41_fu_155_p2_temp_3;
long long int icmp_ln41_fu_155_p2_temp_3__temp;
long long int icmp_ln46_fu_186_p2;
long long int icmp_ln46_fu_186_p2__temp;
long long int icmp_ln46_fu_186_p2_temp_0;
long long int icmp_ln46_fu_186_p2_temp_0__temp;
long long int in1__temp;
long long int in2__temp;
long long int in3__temp;
long long int in4__temp;
long long int in5__temp;
long long int in6__temp;
long long int out1_1_fu_197_p2;
long long int out1_1_fu_197_p2__temp;
long long int out1_fu_192_p2;
long long int out1_fu_192_p2__temp;
long long int sub_ln21_fu_66_p2;
long long int sub_ln21_fu_66_p2__temp;
long long int t4_1_fu_116_p2;
long long int t4_1_fu_116_p2__temp;
long long int t4_2_fu_122_p2;
long long int t4_2_fu_122_p2__temp;
long long int t4_3_fu_128_p3;
long long int t4_3_fu_128_p3__temp;
long long int t4_4_fu_136_p3;
long long int t4_4_fu_136_p3__temp;
long long int t4_fu_104_p2;
long long int t4_fu_104_p2__temp;
long long int t6_1_fu_166_p2;
long long int t6_1_fu_166_p2__temp;
long long int t6_2_fu_171_p3;
long long int t6_2_fu_171_p3__temp;
long long int t6_3_fu_84_p2;
long long int t6_3_fu_84_p2__temp;
long long int t6_4_fu_90_p2;
long long int t6_4_fu_90_p2__temp;
long long int t6_5_fu_96_p3;
long long int t6_5_fu_96_p3__temp;
long long int t6_6_fu_144_p2;
long long int t6_6_fu_144_p2__temp;
long long int t6_6_reg_231;
long long int t6_6_reg_231__temp;
long long int t6_7_fu_179_p3;
long long int t6_7_fu_179_p3__temp;
long long int t6_fu_161_p2;
long long int t6_fu_161_p2__temp;

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
ap_CS_fsm__temp=0;
ap_NS_fsm=0;
ap_NS_fsm__temp=0;
ap_clk__temp=0;
ap_done__temp=0;
ap_idle__temp=0;
ap_ready__temp=0;
ap_return__temp=0;
ap_rst__temp=0;
ap_start__temp=0;
icmp_ln19_fu_150_p2=0;
icmp_ln19_fu_150_p2__temp=0;
icmp_ln19_fu_150_p2_temp_5=0;
icmp_ln19_fu_150_p2_temp_5__temp=0;
icmp_ln21_fu_72_p2=0;
icmp_ln21_fu_72_p2__temp=0;
icmp_ln21_fu_72_p2_temp_2=0;
icmp_ln21_fu_72_p2_temp_2__temp=0;
icmp_ln24_fu_110_p2=0;
icmp_ln24_fu_110_p2__temp=0;
icmp_ln24_fu_110_p2_temp_1=0;
icmp_ln24_fu_110_p2_temp_1__temp=0;
icmp_ln31_fu_78_p2=0;
icmp_ln31_fu_78_p2__temp=0;
icmp_ln31_fu_78_p2_temp_4=0;
icmp_ln31_fu_78_p2_temp_4__temp=0;
icmp_ln41_fu_155_p2=0;
icmp_ln41_fu_155_p2__temp=0;
icmp_ln41_fu_155_p2_temp_3=0;
icmp_ln41_fu_155_p2_temp_3__temp=0;
icmp_ln46_fu_186_p2=0;
icmp_ln46_fu_186_p2__temp=0;
icmp_ln46_fu_186_p2_temp_0=0;
icmp_ln46_fu_186_p2_temp_0__temp=0;
in1__temp=0;
in2__temp=0;
in3__temp=0;
in4__temp=0;
in5__temp=0;
in6__temp=0;
out1_1_fu_197_p2=0;
out1_1_fu_197_p2__temp=0;
out1_fu_192_p2=0;
out1_fu_192_p2__temp=0;
sub_ln21_fu_66_p2=0;
sub_ln21_fu_66_p2__temp=0;
t4_1_fu_116_p2=0;
t4_1_fu_116_p2__temp=0;
t4_2_fu_122_p2=0;
t4_2_fu_122_p2__temp=0;
t4_3_fu_128_p3=0;
t4_3_fu_128_p3__temp=0;
t4_4_fu_136_p3=0;
t4_4_fu_136_p3__temp=0;
t4_fu_104_p2=0;
t4_fu_104_p2__temp=0;
t6_1_fu_166_p2=0;
t6_1_fu_166_p2__temp=0;
t6_2_fu_171_p3=0;
t6_2_fu_171_p3__temp=0;
t6_3_fu_84_p2=0;
t6_3_fu_84_p2__temp=0;
t6_4_fu_90_p2=0;
t6_4_fu_90_p2__temp=0;
t6_5_fu_96_p3=0;
t6_5_fu_96_p3__temp=0;
t6_6_fu_144_p2=0;
t6_6_fu_144_p2__temp=0;
t6_6_reg_231=0;
t6_6_reg_231__temp=0;
t6_7_fu_179_p3=0;
t6_7_fu_179_p3__temp=0;
t6_fu_161_p2=0;
t6_fu_161_p2__temp=0;
    ap_done=0;
    ap_start=1;

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
   t6_6_reg_231__temp = t6_6_reg_231 ;
   out1_1_fu_197_p2__temp = out1_1_fu_197_p2 ;
   sub_ln21_fu_66_p2__temp = sub_ln21_fu_66_p2 ;
   icmp_ln46_fu_186_p2__temp = icmp_ln46_fu_186_p2 ;
   t6_3_fu_84_p2__temp = t6_3_fu_84_p2 ;
   t4_3_fu_128_p3__temp = t4_3_fu_128_p3 ;
   out1_fu_192_p2__temp = out1_fu_192_p2 ;
   ap_idle__temp = ap_idle ;
   ap_rst__temp = ap_rst ;
   icmp_ln24_fu_110_p2_temp_1__temp = icmp_ln24_fu_110_p2_temp_1 ;
   icmp_ln24_fu_110_p2__temp = icmp_ln24_fu_110_p2 ;
   t4_4_fu_136_p3__temp = t4_4_fu_136_p3 ;
   ap_ready__temp = ap_ready ;
   icmp_ln46_fu_186_p2_temp_0__temp = icmp_ln46_fu_186_p2_temp_0 ;
   icmp_ln19_fu_150_p2_temp_5__temp = icmp_ln19_fu_150_p2_temp_5 ;
   in1__temp = in1 ;
   t4_2_fu_122_p2__temp = t4_2_fu_122_p2 ;
   t6_fu_161_p2__temp = t6_fu_161_p2 ;
   t6_2_fu_171_p3__temp = t6_2_fu_171_p3 ;
   in6__temp = in6 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   t6_4_fu_90_p2__temp = t6_4_fu_90_p2 ;
   in2__temp = in2 ;
   t6_1_fu_166_p2__temp = t6_1_fu_166_p2 ;
   t6_5_fu_96_p3__temp = t6_5_fu_96_p3 ;
   icmp_ln19_fu_150_p2__temp = icmp_ln19_fu_150_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   icmp_ln21_fu_72_p2__temp = icmp_ln21_fu_72_p2 ;
   ap_done__temp = ap_done ;
   icmp_ln21_fu_72_p2_temp_2__temp = icmp_ln21_fu_72_p2_temp_2 ;
   t4_1_fu_116_p2__temp = t4_1_fu_116_p2 ;
   ap_clk__temp = ap_clk ;
   t4_fu_104_p2__temp = t4_fu_104_p2 ;
   ap_return__temp = ap_return ;
   t6_7_fu_179_p3__temp = t6_7_fu_179_p3 ;
   ap_start__temp = ap_start ;
   in3__temp = in3 ;
   in5__temp = in5 ;
   icmp_ln31_fu_78_p2__temp = icmp_ln31_fu_78_p2 ;
   in4__temp = in4 ;
   icmp_ln31_fu_78_p2_temp_4__temp = icmp_ln31_fu_78_p2_temp_4 ;
   icmp_ln41_fu_155_p2_temp_3__temp = icmp_ln41_fu_155_p2_temp_3 ;
   t6_6_fu_144_p2__temp = t6_6_fu_144_p2 ;
   icmp_ln41_fu_155_p2__temp = icmp_ln41_fu_155_p2 ;

       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
   if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) == 1){
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
           t6_6_reg_231 =   ( (  ( (  ( in2__temp  ==  ( 0 - in3__temp )  ? 1 : 0 )  & 1 )  == 1 ?  ( (  (  ( ( in4__temp  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( 0 - in2__temp ) :   ( in2__temp  + in1__temp  )  )  - in4__temp  ) )  :   ( (  ( in1__temp  == 4 ? 1 :  0 )  & 1 )  == 1 ?  ( in3__temp  - in5__temp  )   :  ( in2__temp  + 4 )  )  )  + in4__temp ) ) ;
       }
       goto ap_ST_fsm_state2;
   }

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
   t6_6_reg_231__temp = t6_6_reg_231 ;
   out1_1_fu_197_p2__temp = out1_1_fu_197_p2 ;
   sub_ln21_fu_66_p2__temp = sub_ln21_fu_66_p2 ;
   icmp_ln46_fu_186_p2__temp = icmp_ln46_fu_186_p2 ;
   t6_3_fu_84_p2__temp = t6_3_fu_84_p2 ;
   t4_3_fu_128_p3__temp = t4_3_fu_128_p3 ;
   out1_fu_192_p2__temp = out1_fu_192_p2 ;
   ap_idle__temp = ap_idle ;
   ap_rst__temp = ap_rst ;
   icmp_ln24_fu_110_p2_temp_1__temp = icmp_ln24_fu_110_p2_temp_1 ;
   icmp_ln24_fu_110_p2__temp = icmp_ln24_fu_110_p2 ;
   t4_4_fu_136_p3__temp = t4_4_fu_136_p3 ;
   ap_ready__temp = ap_ready ;
   icmp_ln46_fu_186_p2_temp_0__temp = icmp_ln46_fu_186_p2_temp_0 ;
   icmp_ln19_fu_150_p2_temp_5__temp = icmp_ln19_fu_150_p2_temp_5 ;
   in1__temp = in1 ;
   t4_2_fu_122_p2__temp = t4_2_fu_122_p2 ;
   t6_fu_161_p2__temp = t6_fu_161_p2 ;
   t6_2_fu_171_p3__temp = t6_2_fu_171_p3 ;
   in6__temp = in6 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   t6_4_fu_90_p2__temp = t6_4_fu_90_p2 ;
   in2__temp = in2 ;
   t6_1_fu_166_p2__temp = t6_1_fu_166_p2 ;
   t6_5_fu_96_p3__temp = t6_5_fu_96_p3 ;
   icmp_ln19_fu_150_p2__temp = icmp_ln19_fu_150_p2 ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   icmp_ln21_fu_72_p2__temp = icmp_ln21_fu_72_p2 ;
   ap_done__temp = ap_done ;
   icmp_ln21_fu_72_p2_temp_2__temp = icmp_ln21_fu_72_p2_temp_2 ;
   t4_1_fu_116_p2__temp = t4_1_fu_116_p2 ;
   ap_clk__temp = ap_clk ;
   t4_fu_104_p2__temp = t4_fu_104_p2 ;
   ap_return__temp = ap_return ;
   t6_7_fu_179_p3__temp = t6_7_fu_179_p3 ;
   ap_start__temp = ap_start ;
   in3__temp = in3 ;
   in5__temp = in5 ;
   icmp_ln31_fu_78_p2__temp = icmp_ln31_fu_78_p2 ;
   in4__temp = in4 ;
   icmp_ln31_fu_78_p2_temp_4__temp = icmp_ln31_fu_78_p2_temp_4 ;
   icmp_ln41_fu_155_p2_temp_3__temp = icmp_ln41_fu_155_p2_temp_3 ;
   t6_6_fu_144_p2__temp = t6_6_fu_144_p2 ;
   icmp_ln41_fu_155_p2__temp = icmp_ln41_fu_155_p2 ;

       if(1 == ap_CS_fsm_state2)
       {
           ap_done =  1;
            if(ap_done==1){
          ap_return =  (  ( (  (  ( (  ( in5  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( (  ( in6  == 0 ? 1 :  0 )  & 1 )  == 1 ?  ( 8 - in4  )  :   ( in2  + 5 )  )  :  t6_6_reg_231 )  == 0 ? 1 :  0 )  & 1 ) )  == 1 ?  ( in5 + 8 )  :   ( in1  - 5)  ) ;
            }
       }
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
	printf("%lld\n",ap_return);

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
