#include<stdio.h>

long long int mul_ln14_reg_115;
long long int sub_ln18_reg_140;
long long int t1_reg_110;
long long int t4_reg_120;
long long int t3_reg_130;
long long int t5_reg_135;
long long int t7_reg_145;

long long int t1;
long long int mul_ln14;
long long int shl_ln12;
long long int shl_ln15;
long long int t4;
long long int t3;
long long int t5;
long long int t6;
long long int sub_ln18;
long long int t7;
long long int add_ln20;

//inputs and signals of generated c code
long long int ap_clk;
long long int ap_done;
long long int ap_idle;
long long int ap_ready;
long long int ap_return;
long long int ap_rst;
long long int ap_start;
long long int ap_CS_fsm_state1;
long long int ap_CS_fsm_state2;
long long int ap_CS_fsm_state3;
long long int ap_CS_fsm_state4;
long long int ap_CS_fsm_state5;
long long int ap_CS_fsm;
long long int ap_NS_fsm;
long long int dx;
long long int u;
long long int x;
long long int y;

void state1(){
	//generated c code
   	t4_reg_120 =   (dx << 2)  - dx ;
   	t1_reg_110 =   (x << 2)  - x ;
   	mul_ln14_reg_115 =   dx  * u;

	//scheduled c code
	shl_ln12 = x << 2;
	t1 = shl_ln12 - x;
	mul_ln14 = dx * u;
	shl_ln15 = dx << 2;
	t4 = shl_ln15 - dx;
}

void state2(){
	//generated c code
	t5_reg_135 =   y  * t4_reg_120;
    t3_reg_130 =   mul_ln14_reg_115  * t1_reg_110 ;
	
	//scheduled c code
	t3 = mul_ln14 * t1;
	t5 = y * t4;
}

void state3(){
	//generated c code
	sub_ln18_reg_140 =  u   - t3_reg_130  - t5_reg_135 ;

	//scheduled c code
	t6 = u - t3;
	sub_ln18 = t6 - t5;
}

void state4(){
	//generated c code
	t7_reg_145 =   dx  * sub_ln18_reg_140;

	//scheduled c code
	t7 = dx * sub_ln18;
}

void state5(){
	//generated c code
	ap_done =  1;
    if(ap_done==1){
  		ap_return =  y  + t7_reg_145 ;
    }

	//scheduled c code
	add_ln20 = y + t7;
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
   ap_CS_fsm_state1=0;
   ap_CS_fsm_state2=0;
   ap_CS_fsm_state3=0;
   ap_CS_fsm_state4=0;
   ap_CS_fsm_state5=0;
   
    ap_done=0;
    ap_start=1;

   ap_ST_fsm_state1:

    ap_CS_fsm_state1 = 1;
    ap_CS_fsm_state2 = 0;
    ap_CS_fsm_state3 = 0;
    ap_CS_fsm_state4 = 0;
    ap_CS_fsm_state5 = 0;
   
   state1();

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
