#include<stdio.h>

int diffeq(int x,int dx,int u,int y){
	int u_read,dx_read,x_read,t1,mul_ln14,shl_ln12,shl_ln15,t4,y_read,t3,t5,t6,sub_ln18,t7,add_ln20;	
	state1:
		u_read = u;
		dx_read = dx;
		x_read = x;
		shl_ln12 = x_read << 2;
		t1 = shl_ln12 - x_read;
		mul_ln14 = dx_read * u_read;
		shl_ln15 = dx_read << 2;
		t4 = shl_ln15 - dx_read;
		
	state2:
		y_read = y;
		t3 = mul_ln14 * t1;
		t5 = y_read * t4;

	state3:
		t6 = u_read - t3;
		sub_ln18 = t6 - t5;

	state4:
		t7 = dx_read * sub_ln18;

	state5:
		add_ln20 = y_read + t7;
		return add_ln20;
}

int main(){
	printf("%d", diffeq(4,1,5,2));
return 0;
}
