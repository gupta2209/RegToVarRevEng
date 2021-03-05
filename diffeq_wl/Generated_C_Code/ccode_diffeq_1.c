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
void diffeq(unsigned long long int *ap_clk__1,unsigned long long int *ap_done__1,unsigned long long int *ap_idle__1,unsigned long long int *ap_ready__1,unsigned long long int *ap_return__1,unsigned long long int *ap_rst__1,unsigned long long int *ap_start__1,unsigned long long int *dx__1,unsigned long long int *u__1,unsigned long long int *x__1,unsigned long long int *y__1,int dummy){
unsigned long long int ap_clk=*ap_clk__1;
unsigned long long int ap_done=*ap_done__1;
unsigned long long int ap_idle=*ap_idle__1;
unsigned long long int ap_ready=*ap_ready__1;
unsigned long long int ap_return=*ap_return__1;
unsigned long long int ap_rst=*ap_rst__1;
unsigned long long int ap_start=*ap_start__1;
unsigned long long int dx=*dx__1;
unsigned long long int u=*u__1;
unsigned long long int x=*x__1;
unsigned long long int y=*y__1;
   long long int add_ln20_fu_96_p0=0;
   long long int add_ln20_fu_96_p0__temp=0;
   long long int ap_CS_fsm_state1=0;
   long long int ap_CS_fsm_state2=0;
   long long int ap_CS_fsm_state3=0;
   long long int ap_CS_fsm_state4=0;
   long long int ap_CS_fsm_state5=0;
   long long int mul_ln14_fu_56_p0=0;
   long long int mul_ln14_fu_56_p0__temp=0;
   long long int mul_ln14_fu_56_p1=0;
   long long int mul_ln14_fu_56_p1__temp=0;
   long long int mul_ln14_fu_56_p2=0;
   long long int mul_ln14_fu_56_p2__temp=0;
   long long int mul_ln14_reg_115=0;
   long long int mul_ln14_reg_115__temp=0;
   long long int shl_ln15_fu_62_p0=0;
   long long int shl_ln15_fu_62_p0__temp=0;
   long long int sub_ln18_fu_87_p2=0;
   long long int sub_ln18_fu_87_p2__temp=0;
   long long int sub_ln18_reg_140=0;
   long long int sub_ln18_reg_140__temp=0;
   long long int t1_fu_50_p2=0;
   long long int t1_fu_50_p2__temp=0;
   long long int t1_reg_110=0;
   long long int t1_reg_110__temp=0;
   long long int t4_fu_68_p1=0;
   long long int t4_fu_68_p1__temp=0;
   long long int t4_fu_68_p2=0;
   long long int t4_fu_68_p2__temp=0;
   long long int t4_reg_120=0;
   long long int t4_reg_120__temp=0;
   long long int t5_fu_78_p0=0;
   long long int t5_fu_78_p0__temp=0;
   long long int t6_fu_83_p0=0;
   long long int t6_fu_83_p0__temp=0;
   long long int t7_fu_92_p0=0;
   long long int t7_fu_92_p0__temp=0;
   unsigned long long int ap_CS_fsm=0;
   unsigned long long int ap_CS_fsm__temp=0;
   unsigned long long int ap_NS_fsm=0;
   unsigned long long int ap_NS_fsm__temp=0;
   unsigned long long int ap_clk__temp=0;
   unsigned long long int ap_done__temp=0;
   unsigned long long int ap_idle__temp=0;
   unsigned long long int ap_ready__temp=0;
   unsigned long long int ap_return__temp=0;
   unsigned long long int ap_rst__temp=0;
   unsigned long long int ap_start__temp=0;
   unsigned long long int dx__temp=0;
   unsigned long long int shl_ln12_fu_44_p2=0;
   unsigned long long int shl_ln12_fu_44_p2__temp=0;
   unsigned long long int shl_ln15_fu_62_p2=0;
   unsigned long long int shl_ln15_fu_62_p2__temp=0;
   unsigned long long int t3_fu_74_p2=0;
   unsigned long long int t3_fu_74_p2__temp=0;
   unsigned long long int t3_reg_130=0;
   unsigned long long int t3_reg_130__temp=0;
   unsigned long long int t5_fu_78_p2=0;
   unsigned long long int t5_fu_78_p2__temp=0;
   unsigned long long int t5_reg_135=0;
   unsigned long long int t5_reg_135__temp=0;
   unsigned long long int t6_fu_83_p2=0;
   unsigned long long int t6_fu_83_p2__temp=0;
   unsigned long long int t7_fu_92_p2=0;
   unsigned long long int t7_fu_92_p2__temp=0;
   unsigned long long int t7_reg_145=0;
   unsigned long long int t7_reg_145__temp=0;
   unsigned long long int u__temp=0;
   unsigned long long int x__temp=0;
   unsigned long long int y__temp=0;
    ap_done=0;
    ap_start=1;

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
   t6_fu_83_p0__temp = t6_fu_83_p0 ;
   t1_reg_110__temp = t1_reg_110 ;
   t1_fu_50_p2__temp = t1_fu_50_p2 ;
   t4_reg_120__temp = t4_reg_120 ;
   sub_ln18_reg_140__temp = sub_ln18_reg_140 ;
   mul_ln14_fu_56_p0__temp = mul_ln14_fu_56_p0 ;
   shl_ln15_fu_62_p0__temp = shl_ln15_fu_62_p0 ;
   add_ln20_fu_96_p0__temp = add_ln20_fu_96_p0 ;
   t4_fu_68_p2__temp = t4_fu_68_p2 ;
   mul_ln14_fu_56_p2__temp = mul_ln14_fu_56_p2 ;
   t4_fu_68_p1__temp = t4_fu_68_p1 ;
   mul_ln14_fu_56_p1__temp = mul_ln14_fu_56_p1 ;
   mul_ln14_reg_115__temp = mul_ln14_reg_115 ;
   sub_ln18_fu_87_p2__temp = sub_ln18_fu_87_p2 ;
   t5_fu_78_p0__temp = t5_fu_78_p0 ;
   t7_fu_92_p0__temp = t7_fu_92_p0 ;
   ap_done__temp = ap_done ;
   t7_fu_92_p2__temp = t7_fu_92_p2 ;
   t5_fu_78_p2__temp = t5_fu_78_p2 ;
   t6_fu_83_p2__temp = t6_fu_83_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   u__temp = u ;
   ap_clk__temp = ap_clk ;
   ap_idle__temp = ap_idle ;
   shl_ln15_fu_62_p2__temp = shl_ln15_fu_62_p2 ;
   t3_fu_74_p2__temp = t3_fu_74_p2 ;
   ap_return__temp = ap_return ;
   shl_ln12_fu_44_p2__temp = shl_ln12_fu_44_p2 ;
   t3_reg_130__temp = t3_reg_130 ;
   x__temp = x ;
   t5_reg_135__temp = t5_reg_135 ;
   t7_reg_145__temp = t7_reg_145 ;
   ap_start__temp = ap_start ;
   ap_ready__temp = ap_ready ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   y__temp = y ;
   dx__temp = dx ;
   ap_rst__temp = ap_rst ;

       if((ap_start == 0) && (1 == ap_CS_fsm_state1))
       {
           ap_idle =  1;
       }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 1){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
           t4_reg_120 =   ( ( do_twos_complement(  ( (  ( dx & 4294967295 )  << 2 )  & 4294967295 )  , 32 )  - do_twos_complement(  ( dx & 4294967295 )  , 32 )  ) & 4294967295 ) ;
           t1_reg_110 =   ( (  ( ( ( x__temp  & 4294967295 )  << 2 )  & 4294967295 )  - ( x__temp  & 4294967295 )  ) & 4294967295 ) ;
           mul_ln14_reg_115 =   ( ( do_twos_complement(  ( dx & 4294967295 )  , 32 )  * do_twos_complement(  ( u & 4294967295 )  , 32 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state2;
   }
   if(((1 == ap_CS_fsm_state1) && (ap_start == 1)) == 0){
       if((1 == ap_CS_fsm_state1) && (ap_start == 1))
       {
               t4_reg_120 =   ( ( do_twos_complement(  ( (  ( dx & 4294967295 )  << 2 )  & 4294967295 )  , 32 )  - do_twos_complement(  ( dx & 4294967295 )  , 32 )  ) & 4294967295 ) ;
               t1_reg_110 =   ( (  ( ( ( x__temp  & 4294967295 )  << 2 )  & 4294967295 )  - ( x__temp  & 4294967295 )  ) & 4294967295 ) ;
               mul_ln14_reg_115 =   ( ( do_twos_complement(  ( dx & 4294967295 )  , 32 )  * do_twos_complement(  ( u & 4294967295 )  , 32 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state1;
   }

   ap_ST_fsm_state2:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 1;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
   t6_fu_83_p0__temp = t6_fu_83_p0 ;
   t1_reg_110__temp = t1_reg_110 ;
   t1_fu_50_p2__temp = t1_fu_50_p2 ;
   t4_reg_120__temp = t4_reg_120 ;
   sub_ln18_reg_140__temp = sub_ln18_reg_140 ;
   mul_ln14_fu_56_p0__temp = mul_ln14_fu_56_p0 ;
   shl_ln15_fu_62_p0__temp = shl_ln15_fu_62_p0 ;
   add_ln20_fu_96_p0__temp = add_ln20_fu_96_p0 ;
   t4_fu_68_p2__temp = t4_fu_68_p2 ;
   mul_ln14_fu_56_p2__temp = mul_ln14_fu_56_p2 ;
   t4_fu_68_p1__temp = t4_fu_68_p1 ;
   mul_ln14_fu_56_p1__temp = mul_ln14_fu_56_p1 ;
   mul_ln14_reg_115__temp = mul_ln14_reg_115 ;
   sub_ln18_fu_87_p2__temp = sub_ln18_fu_87_p2 ;
   t5_fu_78_p0__temp = t5_fu_78_p0 ;
   t7_fu_92_p0__temp = t7_fu_92_p0 ;
   ap_done__temp = ap_done ;
   t7_fu_92_p2__temp = t7_fu_92_p2 ;
   t5_fu_78_p2__temp = t5_fu_78_p2 ;
   t6_fu_83_p2__temp = t6_fu_83_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   u__temp = u ;
   ap_clk__temp = ap_clk ;
   ap_idle__temp = ap_idle ;
   shl_ln15_fu_62_p2__temp = shl_ln15_fu_62_p2 ;
   t3_fu_74_p2__temp = t3_fu_74_p2 ;
   ap_return__temp = ap_return ;
   shl_ln12_fu_44_p2__temp = shl_ln12_fu_44_p2 ;
   t3_reg_130__temp = t3_reg_130 ;
   x__temp = x ;
   t5_reg_135__temp = t5_reg_135 ;
   t7_reg_145__temp = t7_reg_145 ;
   ap_start__temp = ap_start ;
   ap_ready__temp = ap_ready ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   y__temp = y ;
   dx__temp = dx ;
   ap_rst__temp = ap_rst ;

       if(1 == ap_CS_fsm_state2)
       {
           t5_reg_135 =   ( ( do_twos_complement(  ( y & 4294967295 )  , 32 )  * do_twos_complement( t4_reg_120__temp  , 32 )  ) & 4294967295 ) ;
           t3_reg_130 =   ( ( do_twos_complement( mul_ln14_reg_115__temp  , 32 )  * do_twos_complement( t1_reg_110__temp  , 32 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state3;

   ap_ST_fsm_state3:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 1;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
   t6_fu_83_p0__temp = t6_fu_83_p0 ;
   t1_reg_110__temp = t1_reg_110 ;
   t1_fu_50_p2__temp = t1_fu_50_p2 ;
   t4_reg_120__temp = t4_reg_120 ;
   sub_ln18_reg_140__temp = sub_ln18_reg_140 ;
   mul_ln14_fu_56_p0__temp = mul_ln14_fu_56_p0 ;
   shl_ln15_fu_62_p0__temp = shl_ln15_fu_62_p0 ;
   add_ln20_fu_96_p0__temp = add_ln20_fu_96_p0 ;
   t4_fu_68_p2__temp = t4_fu_68_p2 ;
   mul_ln14_fu_56_p2__temp = mul_ln14_fu_56_p2 ;
   t4_fu_68_p1__temp = t4_fu_68_p1 ;
   mul_ln14_fu_56_p1__temp = mul_ln14_fu_56_p1 ;
   mul_ln14_reg_115__temp = mul_ln14_reg_115 ;
   sub_ln18_fu_87_p2__temp = sub_ln18_fu_87_p2 ;
   t5_fu_78_p0__temp = t5_fu_78_p0 ;
   t7_fu_92_p0__temp = t7_fu_92_p0 ;
   ap_done__temp = ap_done ;
   t7_fu_92_p2__temp = t7_fu_92_p2 ;
   t5_fu_78_p2__temp = t5_fu_78_p2 ;
   t6_fu_83_p2__temp = t6_fu_83_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   u__temp = u ;
   ap_clk__temp = ap_clk ;
   ap_idle__temp = ap_idle ;
   shl_ln15_fu_62_p2__temp = shl_ln15_fu_62_p2 ;
   t3_fu_74_p2__temp = t3_fu_74_p2 ;
   ap_return__temp = ap_return ;
   shl_ln12_fu_44_p2__temp = shl_ln12_fu_44_p2 ;
   t3_reg_130__temp = t3_reg_130 ;
   x__temp = x ;
   t5_reg_135__temp = t5_reg_135 ;
   t7_reg_145__temp = t7_reg_145 ;
   ap_start__temp = ap_start ;
   ap_ready__temp = ap_ready ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   y__temp = y ;
   dx__temp = dx ;
   ap_rst__temp = ap_rst ;

       if(1 == ap_CS_fsm_state3)
       {
           sub_ln18_reg_140 =   ( (  ( ( do_twos_complement(  ( u & 4294967295 )  , 32 )  - do_twos_complement( t3_reg_130__temp  , 32 )  ) & 4294967295 )  - t5_reg_135__temp  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state4;

   ap_ST_fsm_state4:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 1;
    ap_CS_fsm_state5 = 0;
   t6_fu_83_p0__temp = t6_fu_83_p0 ;
   t1_reg_110__temp = t1_reg_110 ;
   t1_fu_50_p2__temp = t1_fu_50_p2 ;
   t4_reg_120__temp = t4_reg_120 ;
   sub_ln18_reg_140__temp = sub_ln18_reg_140 ;
   mul_ln14_fu_56_p0__temp = mul_ln14_fu_56_p0 ;
   shl_ln15_fu_62_p0__temp = shl_ln15_fu_62_p0 ;
   add_ln20_fu_96_p0__temp = add_ln20_fu_96_p0 ;
   t4_fu_68_p2__temp = t4_fu_68_p2 ;
   mul_ln14_fu_56_p2__temp = mul_ln14_fu_56_p2 ;
   t4_fu_68_p1__temp = t4_fu_68_p1 ;
   mul_ln14_fu_56_p1__temp = mul_ln14_fu_56_p1 ;
   mul_ln14_reg_115__temp = mul_ln14_reg_115 ;
   sub_ln18_fu_87_p2__temp = sub_ln18_fu_87_p2 ;
   t5_fu_78_p0__temp = t5_fu_78_p0 ;
   t7_fu_92_p0__temp = t7_fu_92_p0 ;
   ap_done__temp = ap_done ;
   t7_fu_92_p2__temp = t7_fu_92_p2 ;
   t5_fu_78_p2__temp = t5_fu_78_p2 ;
   t6_fu_83_p2__temp = t6_fu_83_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   u__temp = u ;
   ap_clk__temp = ap_clk ;
   ap_idle__temp = ap_idle ;
   shl_ln15_fu_62_p2__temp = shl_ln15_fu_62_p2 ;
   t3_fu_74_p2__temp = t3_fu_74_p2 ;
   ap_return__temp = ap_return ;
   shl_ln12_fu_44_p2__temp = shl_ln12_fu_44_p2 ;
   t3_reg_130__temp = t3_reg_130 ;
   x__temp = x ;
   t5_reg_135__temp = t5_reg_135 ;
   t7_reg_145__temp = t7_reg_145 ;
   ap_start__temp = ap_start ;
   ap_ready__temp = ap_ready ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   y__temp = y ;
   dx__temp = dx ;
   ap_rst__temp = ap_rst ;

       if(1 == ap_CS_fsm_state4)
       {
           t7_reg_145 =   ( ( do_twos_complement(  ( dx & 4294967295 )  , 32 )  * do_twos_complement( sub_ln18_reg_140__temp  , 32 )  ) & 4294967295 ) ;
       }
       goto ap_ST_fsm_state5;

   ap_ST_fsm_state5:

    ap_CS_fsm_state1 = 0;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 1;
   t6_fu_83_p0__temp = t6_fu_83_p0 ;
   t1_reg_110__temp = t1_reg_110 ;
   t1_fu_50_p2__temp = t1_fu_50_p2 ;
   t4_reg_120__temp = t4_reg_120 ;
   sub_ln18_reg_140__temp = sub_ln18_reg_140 ;
   mul_ln14_fu_56_p0__temp = mul_ln14_fu_56_p0 ;
   shl_ln15_fu_62_p0__temp = shl_ln15_fu_62_p0 ;
   add_ln20_fu_96_p0__temp = add_ln20_fu_96_p0 ;
   t4_fu_68_p2__temp = t4_fu_68_p2 ;
   mul_ln14_fu_56_p2__temp = mul_ln14_fu_56_p2 ;
   t4_fu_68_p1__temp = t4_fu_68_p1 ;
   mul_ln14_fu_56_p1__temp = mul_ln14_fu_56_p1 ;
   mul_ln14_reg_115__temp = mul_ln14_reg_115 ;
   sub_ln18_fu_87_p2__temp = sub_ln18_fu_87_p2 ;
   t5_fu_78_p0__temp = t5_fu_78_p0 ;
   t7_fu_92_p0__temp = t7_fu_92_p0 ;
   ap_done__temp = ap_done ;
   t7_fu_92_p2__temp = t7_fu_92_p2 ;
   t5_fu_78_p2__temp = t5_fu_78_p2 ;
   t6_fu_83_p2__temp = t6_fu_83_p2 ;
   ap_CS_fsm__temp = ap_CS_fsm ;
   u__temp = u ;
   ap_clk__temp = ap_clk ;
   ap_idle__temp = ap_idle ;
   shl_ln15_fu_62_p2__temp = shl_ln15_fu_62_p2 ;
   t3_fu_74_p2__temp = t3_fu_74_p2 ;
   ap_return__temp = ap_return ;
   shl_ln12_fu_44_p2__temp = shl_ln12_fu_44_p2 ;
   t3_reg_130__temp = t3_reg_130 ;
   x__temp = x ;
   t5_reg_135__temp = t5_reg_135 ;
   t7_reg_145__temp = t7_reg_145 ;
   ap_start__temp = ap_start ;
   ap_ready__temp = ap_ready ;
   ap_NS_fsm__temp = ap_NS_fsm ;
   y__temp = y ;
   dx__temp = dx ;
   ap_rst__temp = ap_rst ;

       if(1 == ap_CS_fsm_state5)
       {
           ap_done =  1;
            if(ap_done==1){
          ap_return =  ( ( do_twos_complement(  ( y & 4294967295 )  , 32 )  + do_twos_complement( t7_reg_145 , 32 )  ) & 4294967295 ) ;
            }
       }
       if(1 == ap_CS_fsm_state5)
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
    *dx__1=dx;
    *u__1=u;
    *x__1=x;
    *y__1=y;
printf("%lld",ap_return);
       return;
}

int main(){
	long long int ap_clk__1 = 1;
	long long int ap_done__1 = 0;
	long long int ap_idle__1 = 0;
	long long int ap_ready__1 = 1;
	long long int ap_return1__1 = 0;
	//long long int ap_return1_ap_vld__1 = 0;
	long long int ap_rst__1 = 0;
	long long int ap_start__1 = 1;
	long long int dx__1 = 1;
	long long int u__1 = 5;
	long long int x__1 = 4;
	long long int y__1 = 2;
	int dummy = 1;	diffeq(&ap_clk__1,&ap_done__1,&ap_idle__1,&ap_ready__1,&ap_return1__1,&ap_rst__1,&ap_start__1,&dx__1,&u__1,&x__1,&y__1, dummy);
return 0;
}
