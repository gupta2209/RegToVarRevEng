#include<stdio.h>
int t25; 
int in2_read; 
int in2;
int t23; 
int in17_read;
int in17; 
int in32_read;
int in32; 
int in4_read;
int in4; 
int add_ln31_1; 
int add_ln30; 
int in29_read;
int in29; 
int add_ln12; 
int t16_1; 
int in24_read;
int in24; 
int in15_read;
int in15; 
int t26_1; 
int in28_read;
int in28; 
int t11; 
int add_ln21; 
int t26_2; 
int in22_read;
int in22; 
int in27_read;
int in27; 
int t5; 
int in7_read;
int in7; 
int add_ln26; 
int add_ln28; 
int in3_read;
int in3; 
int in8_read;
int in8; 
int in20_read;
int in20; 
int t16; 
int icmp_ln13; 
int t26; 
int add_ln31; 
int in19_read;
int in19; 
int in10_read;
int in10; 
int sub_ln11; 
int in1_read;
int in1; 
int in14_read;
int in14;
int in9; 
int in12; 
int in9_read; 
int in12_read; 
int icmp_ln18; 
int t16_0;
int out30; 
int out30_read; 

int hls_macc(int in1,int in2,int in3,int in4,int in7,int in8,int in9,int in10,int in12,int in14,int in15,int in17,int in19,int in20,int in22,int in24,int in27,int in28,int in29,int in32){

state1:
//printf("s1");
in32_read = in32; //%in32_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in32) nounwind
in29_read = in29; //%in29_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in29) nounwind
in28_read = in28; //%in28_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in28) nounwind
in27_read = in27; //%in27_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in27) nounwind
in24_read = in24; //%in24_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in24) nounwind
in22_read = in22; //%in22_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in22) nounwind
in20_read = in20; //%in20_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in20) nounwind
in19_read = in19; //%in19_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in19) nounwind
in17_read = in17; //%in17_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in17) nounwind
in15_read = in15; //%in15_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in15) nounwind
in12_read = in12; //%in12_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in12) nounwind
in14_read = in14; //%in14_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in14) nounwind
in10_read = in10; //%in10_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in10) nounwind
in9_read = in9; //%in9_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in9) nounwind
in8_read = in8; //%in8_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in8) nounwind
in7_read = in7; //%in7_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in7) nounwind
in4_read = in4; //%in4_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in4) nounwind
in3_read = in3; //%in3_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in3) nounwind
in2_read = in2; //%in2_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in2) nounwind
in1_read = in1; //%in1_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in1) nounwind
t5 = in3_read - in4_read; //%t5 = sub nsw i32 %in3_read, %in4_read
sub_ln11 = in14_read - in15_read; //%sub_ln11 = sub nsw i32 %in14_read, %in15_read
add_ln12 = in7_read + in12_read; //%add_ln12 = add i32 %in7_read, %in12_read
t11 = add_ln12 + in8_read; //%t11 = add i32 %add_ln12, %in8_read
icmp_ln13 = in2_read == in1_read ? 1 : 0; //%icmp_ln13 = icmp eq i32 %in2_read, %in1_read
//br i1 %icmp_ln13, label %1, label %_ifconv
if(!icmp_ln13){
icmp_ln18 = in9_read < in10_read ? 1 : 0; //%icmp_ln18 = icmp slt i32 %in9_read, %in10_read
add_ln21 = t5 + in22_read; //%add_ln21 = add i32 %t5, %in22_read
t23 = add_ln21 + t11; //%t23 = add i32 %add_ln21, %t11
add_ln26 = in19_read + in20_read; //%add_ln26 = add i32 %in19_read, %in20_read
t26_1 = add_ln26 + t5; //%t26_1 = add i32 %add_ln26, %t5
}
if(icmp_ln13){
t16 = t11 - in17_read; //%t16 = sub nsw i32 %t11, %in17_read
//br label %
t16_0 = t16;
goto state3;
}
goto state2;

state2:
//printf("s2");
if(icmp_ln18){
t25 = t23 - in24_read; //%t25 = sub i32 %t23, %in24_read
t26 = t25 + in27_read; //%t26 = add i32 %t25, %in27_read
}
t26_2 = icmp_ln18 ? t26 : t26_1; //%t26_2 = select i1 %icmp_ln18, i32 %t26, i32 %t26_1
t16_1 = t26_2 - in28_read; //%t16_1 = sub nsw i32 %t26_2, %in28_read
add_ln28 = t26_2 + in29_read; //%add_ln28 = add nsw i32 %t26_2, %in29_read
out30 = add_ln28;
goto state3;

state3:
//printf("s3");
//t16_0 = phi i32 [ %t16, %1 ], [ %t16_1, %_ifconv ] //%t16_0 = phi i32 [ %t16, %1 ], [ %t16_1, %_ifconv ]
if(!icmp_ln13){
	t16_0 = t16_1;
}
add_ln30 = t16_0 + in32_read; //%add_ln30 = add nsw i32 %t16_0, %in32_read
out30_read = out30; //%out30_read = call i32 @_ssdm_op_Read.ap_auto.i32P(i32* %out30) nounwind
add_ln31 = sub_ln11 + add_ln30; //%add_ln31 = add i32 %sub_ln11, %add_ln30
add_ln31_1 = add_ln31 + out30_read; //%add_ln31_1 = add i32 %add_ln31, %out30_read
return add_ln31_1; //ret i32 %add_ln31_1
}

int main(){
	for(int i=0; i<3; i++){
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &in1, &in2, &in3, &in4, &in7, &in8, &in9, &in10, &in12, &in14, &in15, &in17, &in19, &in20, &in22, &in24, &in27, &in28, &in29, &in32);
	printf("%d",hls_macc(in1, in2,in3, in4, in7,in8, in9,in10, in12, in14, in15, in17, in19, in20, in22, in24, in27, in28, in29, in32));
	}
	return 0;
}

