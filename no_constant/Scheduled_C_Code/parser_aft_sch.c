#include<stdio.h>

void hls_macc(int i1, int i2, int i3, int i4, int i6, int* o1, int* o2, int* o3, int* o4,int G1, int G2,  int G3,  int G4, int GG1, int GG2){

int G2_read, G1_read, i4_read, i3_read, i1_read, op4, op5, op5_2, GG1_read, icmp_ln16, op5_1, op5_3, icmp_ln27, i2_read, op3, op6_3, op7, op8, i6_read, op6, op6_1, op6_2, op6_4, op6_5, add_ln47, op13;
int add_ln49, op14, o3_read, o4_read, add_ln52, add_ln52_1, add_ln52_2;

state1:
G2_read = G2; //%G2_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %G2) nounwind
G1_read = G1; //%G1_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %G1) nounwind
i4_read = i4; //%i4_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %i4) nounwind
i3_read = i3; //%i3_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %i3) nounwind
i1_read = i1; //%i1_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %i1) nounwind
op4 = G2_read * i1_read; //%op4 = mul nsw i32 %G2_read, %i1_read
op5 = G1_read * i3_read; //%op5 = mul nsw i32 %G1_read, %i3_read
op5_2 = i4_read * i3_read; //%op5_2 = mul nsw i32 %i4_read, %i3_read4
goto state2;

state2:
GG1_read = GG1; //%GG1_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %GG1) nounwind
icmp_ln16 = G1_read > 10 ? 1 : 0; //%icmp_ln16 = icmp sgt i32 %G1_read, 10
op5_1 = op5 + GG1_read; //%op5_1 = add nsw i32 %op5, %GG1_read
op5_3 = icmp_ln16 ? op5_1 : op5_2; //%op5_3 = select i1 %icmp_ln16, i32 %op5_1, i32 %op5_2
icmp_ln27 = op5_3 < op4 ? 1 : 0; //%icmp_ln27 = icmp slt i32 %op5_3, %op4
goto state3;

state3:
i2_read = i2; //%i2_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %i2) nounwind
if(!icmp_ln16 & !icmp_ln27){
	op3 = G1_read * i2_read; //%op3 = mul nsw i32 %G1_read, %i2_read
}
if(icmp_ln27){
	op6_3 = G2_read * i4_read; //%op6_3 = mul nsw i32 %G2_read, %i4_read
}
op7 = G1_read * i4_read; //%op7 = mul nsw i32 %G1_read, %i4_read
op8 = G2_read * i3_read; //%op8 = mul nsw i32 %G2_read, %i3_read
goto state4;

state4:
i6_read = i6; //%i6_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %i6) nounwind
if(icmp_ln16 & !icmp_ln27){
	op6 = op5_1 - op4; //%op6 = sub nsw i32 %op5_1, %op4
}
if(!icmp_ln16 & !icmp_ln27){
	op6_1 = op5_2 - op3; //%op6_1 = sub nsw i32 %op5_2, %op3
}
if(!icmp_ln27){
	op6_2 = icmp_ln16 ? op6: op6_1; //%op6_2 = select i1 %icmp_ln16, i32 %op6, i32 %op6_1
}
if(icmp_ln27){
	op6_4 = op6_3 - i3_read; //%op6_4 = sub nsw i32 %op6_3, %i3_read
}
op6_5 = icmp_ln27 ? op6_4 : op6_2; //%op6_5 = select i1 %icmp_ln27, i32 %op6_4, i32 %op6_2
add_ln47 = op6_5 + G1_read; //%add_ln47 = add i32 %op6_5, %G1_read
op13 = add_ln47 + op4; //%op13 = add i32 %add_ln47, %op4
add_ln49 = op8 + i6_read; //%add_ln49 = add i32 %op8, %i6_read
op14 = add_ln49 + op7; //%op14 = add i32 %add_ln49, %op7
goto state5;

state5:
o3_read = *o3; //%o3_read = call i32 @_ssdm_op_Read.ap_auto.i32P(i32* %o3) nounwind
o4_read = *o4; //%o4_read = call i32 @_ssdm_op_Read.ap_auto.i32P(i32* %o4) nounwind
add_ln52 = o3_read + o4_read; //%add_ln52 = add i32 %o3_read, %o4_read
add_ln52_1 = op13 + op14; //%add_ln52_1 = add i32 %op13, %op14
add_ln52_2 = add_ln52_1 + add_ln52; //%add_ln52_2 = add i32 %add_ln52_1, %add_ln52

printf("%d\n",add_ln52_1); //ret void
}

int main(){
	for(int i=0; i<100; i++){
		int o1 = 0;
		int o2 = 0;
		int o3 = 0;
		int o4 = 0;
		int i1,i2,i3,i4,i6,G1,G2,G3,G4,GG1,GG2;
		scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&i1,&i2,&i3,&i4,&i6,&o1,&o2,&o3,&o4,&G1,&G2,&G3,&G4,&GG1, &GG2);
		hls_macc(i1, i2, i3, i4, i6, &o1, &o2, &o3, &o4, G1, G2, G3, G4, GG1, GG2);
	}
	return 0;
}
//16 9 5 16 15 11 7 4 -2 -10 4 3 -16 13 6 