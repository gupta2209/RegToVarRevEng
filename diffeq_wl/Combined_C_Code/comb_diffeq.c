#include<stdio.h>

long long int ap_clk;
long long int ap_done;
long long int ap_idle;
long long int ap_ready;
long long int ap_return;
long long int ap_rst;
long long int ap_start;
long long int ap_clk__temp;
long long int ap_done__temp;
long long int ap_idle__temp;
long long int ap_ready__temp;
long long int ap_return__temp;
long long int ap_rst__temp;
long long int ap_start__temp;
long long int ap_CS_fsm_state1;
long long int ap_CS_fsm_state2;
long long int ap_CS_fsm_state3;
long long int ap_CS_fsm_state4;
long long int ap_CS_fsm_state5;
long long int dx;
long long int u;
long long int x;
long long int y;
long long int add_ln20_fu_96_p0;
long long int add_ln20_fu_96_p0__temp;
long long int mul_ln14_fu_56_p0;
long long int mul_ln14_fu_56_p0__temp;
long long int mul_ln14_fu_56_p1;
long long int mul_ln14_fu_56_p1__temp;
long long int mul_ln14_fu_56_p2;
long long int mul_ln14_fu_56_p2__temp;
long long int mul_ln14_reg_115;
long long int mul_ln14_reg_115__temp;
long long int shl_ln15_fu_62_p0;
long long int shl_ln15_fu_62_p0__temp;
long long int sub_ln18_fu_87_p2;
long long int sub_ln18_fu_87_p2__temp;
long long int sub_ln18_reg_140;
long long int sub_ln18_reg_140__temp;
long long int t1_fu_50_p2;
long long int t1_fu_50_p2__temp;
long long int t1_reg_110;
long long int t1_reg_110__temp;
long long int t4_fu_68_p1;
long long int t4_fu_68_p1__temp;
long long int t4_fu_68_p2;
long long int t4_fu_68_p2__temp;
long long int t4_reg_120;
long long int t4_reg_120__temp;
long long int t5_fu_78_p0;
long long int t5_fu_78_p0__temp;
long long int t6_fu_83_p0;
long long int t6_fu_83_p0__temp;
long long int t7_fu_92_p0;
long long int t7_fu_92_p0__temp;
long long int ap_CS_fsm;
long long int ap_CS_fsm__temp;
long long int ap_NS_fsm;
long long int ap_NS_fsm__temp;
long long int ap_done__temp;
long long int dx__temp;
long long int shl_ln12_fu_44_p2;
long long int shl_ln12_fu_44_p2__temp;
long long int shl_ln15_fu_62_p2;
long long int shl_ln15_fu_62_p2__temp;
long long int t3_fu_74_p2;
long long int t3_fu_74_p2__temp;
long long int t3_reg_130;
long long int t3_reg_130__temp;
long long int t5_fu_78_p2;
long long int t5_fu_78_p2__temp;
long long int t5_reg_135;
long long int t5_reg_135__temp;
long long int t6_fu_83_p2;
long long int t6_fu_83_p2__temp;
long long int t7_fu_92_p2;
long long int t7_fu_92_p2__temp;
long long int t7_reg_145;
long long int t7_reg_145__temp;
long long int u__temp;
long long int x__temp;
long long int y__temp;

long long int u_read;
long long int dx_read;
long long int x_read;
long long int t1;
long long int mul_ln14;
long long int shl_ln12;
long long int shl_ln15;
long long int t4;
long long int y_read;
long long int t3;
long long int t5;
long long int t6;
long long int sub_ln18;
long long int t7;
long long int add_ln20;

void state1(){
	//generated c code
   	t4_reg_120 =   (dx << 2)  - dx ;
   	t1_reg_110 =   (x__temp << 2)  - x__temp ;
   	mul_ln14_reg_115 =   dx  * u;

	//scheduled c code
	u_read = u;
	dx_read = dx;
	x_read = x;
	shl_ln12 = x_read << 2;
	t1 = shl_ln12 - x_read;
	mul_ln14 = dx_read * u_read;
	shl_ln15 = dx_read << 2;
	t4 = shl_ln15 - dx_read;
}

void state2(){
	//generated c code
	t5_reg_135 =   y  * t4_reg_120__temp;
    t3_reg_130 =   mul_ln14_reg_115__temp  * t1_reg_110__temp ;
	
	//scheduled c code
	y_read = y;
	t3 = mul_ln14 * t1;
	t5 = y_read * t4;
}

void state3(){
	//generated c code
	sub_ln18_reg_140 =  u   - t3_reg_130__temp  - t5_reg_135__temp ;

	//scheduled c code
	t6 = u_read - t3;
	sub_ln18 = t6 - t5;
}

void state4(){
	//generated c code
	t7_reg_145 =   dx  * sub_ln18_reg_140__temp;

	//scheduled c code
	t7 = dx_read * sub_ln18;
}

void state5(){
	//generated c code
	ap_done =  1;
    if(ap_done==1){
  		ap_return =  y  + t7_reg_145 ;
    }

	//scheduled c code
	add_ln20 = y_read + t7;
}

void diffeq(long long int *ap_clk__1,long long int *ap_done__1,long long int *ap_idle__1,long long int *ap_ready__1,long long int *ap_return__1,long long int *ap_rst__1,long long int *ap_start__1,long long int *dx__1,long long int *u__1,long long int *x__1,long long int *y__1,int dummy){
	ap_clk=*ap_clk__1;
	ap_done=*ap_done__1;
	ap_idle=*ap_idle__1;
	ap_ready=*ap_ready__1;
	ap_return=*ap_return__1;
	ap_rst=*ap_rst__1;
	ap_start=*ap_start__1;
	dx=*dx__1;
	u=*u__1;
	x=*x__1;
	y=*y__1;
   	add_ln20_fu_96_p0=0;
   	add_ln20_fu_96_p0__temp=0;
   ap_CS_fsm_state1=0;
   ap_CS_fsm_state2=0;
   ap_CS_fsm_state3=0;
   ap_CS_fsm_state4=0;
   ap_CS_fsm_state5=0;
   mul_ln14_fu_56_p0=0;
   mul_ln14_fu_56_p0__temp=0;
   mul_ln14_fu_56_p1=0;
   mul_ln14_fu_56_p1__temp=0;
   mul_ln14_fu_56_p2=0;
   mul_ln14_fu_56_p2__temp=0;
   mul_ln14_reg_115=0;
   mul_ln14_reg_115__temp=0;
   shl_ln15_fu_62_p0=0;
   shl_ln15_fu_62_p0__temp=0;
   sub_ln18_fu_87_p2=0;
   sub_ln18_fu_87_p2__temp=0;
   sub_ln18_reg_140=0;
   sub_ln18_reg_140__temp=0;
   t1_fu_50_p2=0;
   t1_fu_50_p2__temp=0;
   t1_reg_110=0;
   t1_reg_110__temp=0;
   t4_fu_68_p1=0;
   t4_fu_68_p1__temp=0;
   t4_fu_68_p2=0;
   t4_fu_68_p2__temp=0;
   t4_reg_120=0;
   t4_reg_120__temp=0;
   t5_fu_78_p0=0;
   t5_fu_78_p0__temp=0;
   t6_fu_83_p0=0;
   t6_fu_83_p0__temp=0;
   t7_fu_92_p0=0;
   t7_fu_92_p0__temp=0;
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
   dx__temp=0;
   shl_ln12_fu_44_p2=0;
   shl_ln12_fu_44_p2__temp=0;
   shl_ln15_fu_62_p2=0;
   shl_ln15_fu_62_p2__temp=0;
   t3_fu_74_p2=0;
   t3_fu_74_p2__temp=0;
   t3_reg_130=0;
   t3_reg_130__temp=0;
   t5_fu_78_p2=0;
   t5_fu_78_p2__temp=0;
   t5_reg_135=0;
   t5_reg_135__temp=0;
   t6_fu_83_p2=0;
   t6_fu_83_p2__temp=0;
   t7_fu_92_p2=0;
   t7_fu_92_p2__temp=0;
   t7_reg_145=0;
   t7_reg_145__temp=0;
   u__temp=0;
   x__temp=0;
   y__temp=0;
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
   
   state1();

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

    state2();
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

       state3();
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

       state4();
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
           state5();
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
	if(ap_return == add_ln20){
		printf("T\n");
	}else{
		printf("F\n");
	}
	printf("%lld\n",ap_return);
       return;
}

int main(){
	for(int i=0; i<10; i++){	
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
		int dummy = 1;	
		scanf("%lld %lld %lld %lld",&dx__1,&u__1,&x__1,&y__1);
		diffeq(&ap_clk__1,&ap_done__1,&ap_idle__1,&ap_ready__1,&ap_return1__1,&ap_rst__1,&ap_start__1,&dx__1,&u__1,&x__1,&y__1, dummy);
	}
return 0;
}
