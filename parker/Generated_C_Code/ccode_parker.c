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
void parker(long long int *ap_clk__1,long long int *ap_done__1,long long int *ap_idle__1,long long int *ap_ready__1,long long int *ap_return__1,long long int *ap_rst__1,long long int *ap_start__1,long long int *in1__1,long long int *in2__1,long long int *in3__1,long long int *in4__1,long long int *in5__1,long long int *in6__1,int dummy){
long long int ap_clk=*ap_clk__1;
long long int ap_done=*ap_done__1;
long long int ap_idle=*ap_idle__1;
long long int ap_ready=*ap_ready__1;
long long int ap_return=*ap_return__1;
long long int ap_rst=*ap_rst__1;
long long int ap_start=*ap_start__1;
long long int in1=*in1__1;
long long int in2=*in2__1;
long long int in3=*in3__1;
long long int in4=*in4__1;
long long int in5=*in5__1;
long long int in6=*in6__1;
long long int ap_CS_fsm_state1=0;
long long int ap_CS_fsm_state2=0;
long long int ap_CS_fsm=0;
long long int ap_CS_fsm__temp=0;
long long int ap_NS_fsm=0;
long long int ap_NS_fsm__temp=0;
long long int ap_clk__temp=0;
long long int ap_done__temp=0;
long long int ap_idle__temp=0;
long long int ap_ready__temp=0;
long long int ap_return__temp=0;
long long int ap_rst__temp=0;
long long int ap_start__temp=0;
long long int icmp_ln19_fu_150_p2=0;
long long int icmp_ln19_fu_150_p2__temp=0;
long long int icmp_ln19_fu_150_p2_temp_5=0;
long long int icmp_ln19_fu_150_p2_temp_5__temp=0;
long long int icmp_ln21_fu_72_p2=0;
long long int icmp_ln21_fu_72_p2__temp=0;
long long int icmp_ln21_fu_72_p2_temp_2=0;
long long int icmp_ln21_fu_72_p2_temp_2__temp=0;
long long int icmp_ln24_fu_110_p2=0;
long long int icmp_ln24_fu_110_p2__temp=0;
long long int icmp_ln24_fu_110_p2_temp_1=0;
long long int icmp_ln24_fu_110_p2_temp_1__temp=0;
long long int icmp_ln31_fu_78_p2=0;
long long int icmp_ln31_fu_78_p2__temp=0;
long long int icmp_ln31_fu_78_p2_temp_4=0;
long long int icmp_ln31_fu_78_p2_temp_4__temp=0;
long long int icmp_ln41_fu_155_p2=0;
long long int icmp_ln41_fu_155_p2__temp=0;
long long int icmp_ln41_fu_155_p2_temp_3=0;
long long int icmp_ln41_fu_155_p2_temp_3__temp=0;
long long int icmp_ln46_fu_186_p2=0;
long long int icmp_ln46_fu_186_p2__temp=0;
long long int icmp_ln46_fu_186_p2_temp_0=0;
long long int icmp_ln46_fu_186_p2_temp_0__temp=0;
long long int in1__temp=0;
long long int in2__temp=0;
long long int in3__temp=0;
long long int in4__temp=0;
long long int in5__temp=0;
long long int in6__temp=0;
long long int out1_1_fu_197_p2=0;
long long int out1_1_fu_197_p2__temp=0;
long long int out1_fu_192_p2=0;
long long int out1_fu_192_p2__temp=0;
long long int sub_ln21_fu_66_p2=0;
long long int sub_ln21_fu_66_p2__temp=0;
long long int t4_1_fu_116_p2=0;
long long int t4_1_fu_116_p2__temp=0;
long long int t4_2_fu_122_p2=0;
long long int t4_2_fu_122_p2__temp=0;
long long int t4_3_fu_128_p3=0;
long long int t4_3_fu_128_p3__temp=0;
long long int t4_4_fu_136_p3=0;
long long int t4_4_fu_136_p3__temp=0;
long long int t4_fu_104_p2=0;
long long int t4_fu_104_p2__temp=0;
long long int t6_1_fu_166_p2=0;
long long int t6_1_fu_166_p2__temp=0;
long long int t6_2_fu_171_p3=0;
long long int t6_2_fu_171_p3__temp=0;
long long int t6_3_fu_84_p2=0;
long long int t6_3_fu_84_p2__temp=0;
long long int t6_4_fu_90_p2=0;
long long int t6_4_fu_90_p2__temp=0;
long long int t6_5_fu_96_p3=0;
long long int t6_5_fu_96_p3__temp=0;
long long int t6_6_fu_144_p2=0;
long long int t6_6_fu_144_p2__temp=0;
long long int t6_6_reg_231=0;
long long int t6_6_reg_231__temp=0;
long long int t6_7_fu_179_p3=0;
long long int t6_7_fu_179_p3__temp=0;
long long int t6_fu_161_p2=0;
long long int t6_fu_161_p2__temp=0;
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
           t6_6_reg_231 =   ( (  (  ( (  ( ( in2__temp  & 4294967295 )  ==  ( ( 0 - ( in3__temp  & 4294967295 )  ) & 4294967295 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( (  (  ( (  ( ( in4__temp  & 4294967295 )  == 0 ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( 0 - ( in2__temp  & 4294967295 )  ) & 4294967295 )  :   ( ( ( in2__temp  & 4294967295 )  + ( in1__temp  & 4294967295 )  ) & 4294967295 )  )  - ( in4__temp  & 4294967295 )  ) & 4294967295 )  :   (  ( (  ( ( in1__temp  & 4294967295 )  == 4 ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( ( in3__temp  & 4294967295 )  - ( in5__temp  & 4294967295 )  ) & 4294967295 )  :   ( ( ( in2__temp  & 4294967295 )  + 4 ) & 4294967295 )  )  )  + ( in4__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state2;
   }
   if(((ap_start == 1) && (1 == ap_CS_fsm_state1)) == 0){
       if((ap_start == 1) && (1 == ap_CS_fsm_state1))
       {
               t6_6_reg_231 =   ( (  (  ( (  ( ( in2__temp  & 4294967295 )  ==  ( ( 0 - ( in3__temp  & 4294967295 )  ) & 4294967295 )  ? 1 : 0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( (  (  ( (  ( ( in4__temp  & 4294967295 )  == 0 ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( 0 - ( in2__temp  & 4294967295 )  ) & 4294967295 )  :   ( ( ( in2__temp  & 4294967295 )  + ( in1__temp  & 4294967295 )  ) & 4294967295 )  )  - ( in4__temp  & 4294967295 )  ) & 4294967295 )  :   (  ( (  ( ( in1__temp  & 4294967295 )  == 4 ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( ( in3__temp  & 4294967295 )  - ( in5__temp  & 4294967295 )  ) & 4294967295 )  :   ( ( ( in2__temp  & 4294967295 )  + 4 ) & 4294967295 )  )  )  + ( in4__temp  & 4294967295 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state1;
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
          ap_return =  (  ( (  (  (  ( (  ( ( in5 & 4294967295 )  == 0 ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  (  ( (  ( ( in6 & 4294967295 )  == 0 ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( 8 - ( in4 & 4294967295 )  ) & 4294967295 )  :   ( ( ( in2 & 4294967295 )  + 5 ) & 4294967295 )  )  :  t6_6_reg_231 )  == 0 ? 1 :  0 )  & 1 ) & 18446744073709551615 )  == 1 ?  ( ( ( in5 & 4294967295 )  + 8 ) & 4294967295 )  :   ( ( do_twos_complement( ( in1 & 4294967295 )  , 32 )  + do_twos_complement( 4294967291 , 32 )  ) & 4294967295 )  ) ;
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
	printf("%lld\n",do_twos_complement(ap_return,32));

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
