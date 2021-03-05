#include<stdio.h>
/*
int diffeq(int x,int dx,int u,int y){
	u = u - (3 * x * u * dx) - (3 * y * dx);
	y = y + (u * dx);
	x = x + dx;
return y;
}
*/
int diffeq(int x,int dx,int u,int y){
	int t1,t2,t3,t4,t5,t6,t7;
	t1 = 3*x;
	t2 = t1*u;
	t3 = t2*dx;
	t4 = 3*y;
	t5 = t4*dx;
	t6 = u-t3;
	u = t6-t5;
	t7 = u*dx;
	y = y+t7;
return y;
}

int main(){
	printf("%d", diffeq(4,1,5,2));
return 0;
}
