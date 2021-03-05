#include<stdio.h>

int in5_read;
int in4_read;
int in3_read;
int in2_read;
int in1_read;
int sub_ln21;
int icmp_ln21;
int icmp_ln31;
int t6_3;
int t6_4;
int t6_5;
int t4;
int icmp_ln24;
int t4_1;
int t4_2;
int t4_3;
int t4_4;
int t6_6;
int in6_read;
int icmp_ln19;
int icmp_ln41;
int t6;
int t6_1;
int t6_2;
int t6_7;	
int icmp_ln46;
int out1;
int out1_1;
int out1_2;

int parker(int in1, int in2, int in3, int in4, int in5, int in6){
	state1:
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
		
	state2:
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
		return out1_2;
}

int main(){
	for(int i=0; i<100; i++){
		int in1,in2,in3,in4,in5,in6;
		scanf("%d %d %d %d %d %d",&in1,&in2,&in3,&in4,&in5,&in6);		
		printf("%d\n",parker(in1,in2,in3,in4,in5,in6));
	}
return 0;
}
