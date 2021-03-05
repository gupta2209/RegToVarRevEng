#include<stdio.h>

int G2_read, G1_read, i4_read, i3_read, i6_read, i5_read, add_ln25, op13, add_ln27, op14;
int op5,op6,op7,op8;
int op17,op18,mul_ln33,mul_ln33_1,op19,op20,GG2_read,GG1_read,i2_read,i1_read;
int op2,op21,op22,tmp,tmp2,add_ln41,add_ln41_1,op27,tmp1,tmp2,add_ln41,add_ln41_1;
int add_ln46, add_ln46_1, add_ln46_2,op1,tmp3,op28;

void hls_macc(int i1,int i2,int i3,int i4,int i5,int i6,int *o1,int *o2,int *o3,int *o4,int G1,int G2, int G3, int G4, int GG1, int GG2,int *ap_return1){
	state1:
		G2_read = G2;
		G1_read = G1;
		i4_read = i4;
		i3_read = i3;
		op5 = G1_read * i3_read;
		op6 = G2_read * i4_read;
		op7 = G1_read * i4_read;
		op8 = G2_read * i3_read;
	state2:
		i6_read = i6;
		i5_read = i5;
		add_ln25 = op6 + i5_read;
		op13 = add_ln25 + op5;
		add_ln27 = op8 + i6_read;
		op14 = add_ln27 + op7;
	state3:
		op17 = op13 * G1_read;
		op18 = op14 * G2_read;
		mul_ln33 = op14 * G1_read;
		mul_ln33_1 = op13 * G2_read;
	state4:
		op19 = mul_ln33_1 * mul_ln33;
		op20 = op17 + op18;
	state5:
		GG2_read = GG2;
		GG1_read = GG1;
		i2_read = i2;
		i1_read = i1;
		op1 = GG1_read * i1_read;
		op2 = GG2_read * i2_read;
		op21 = op20 * G1_read;
		op22 = op19 * G2_read;
		tmp = op20 + i1_read;
		tmp2 = op19 + i2_read;
	state6:
		add_ln41 = op1 + op22;
		add_ln41_1 = op2 + op21;
		op27 = add_ln41_1 + add_ln41;
		tmp1 = tmp * G2_read;
		tmp3 = tmp2 * G1_read;
	state7:
		*o1 = op13;
		*o2 = op14;
		*o3 = op27;
		op28 = tmp3 + tmp1;
		*o4 = op28;
		add_ln46 = op13 + op28;
		add_ln46_1 = op14 + op27;
		add_ln46_2 = add_ln46_1 + add_ln46;	
		*ap_return1 = add_ln46_2;	
		printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d ",op5, op6, op7,op8,op17,op18,op19,op20,op2,op21,op22,op21,op22,op13,op14,op27,op1);
		return;
}

int main(){
	int o1=0;
	int o2=0;
	int o3=0;
	int o4=0;
	int ap_return2 = 0;
 	hls_macc(1,2,3,4,5,6,&o1,&o2,&o3,&o4,10,11,12,13,14,15,&ap_return2);
	printf("%d\n",o1);
	printf("%d\n",o2);
	printf("%d\n",o3);
	printf("%d\n",o4);
}
