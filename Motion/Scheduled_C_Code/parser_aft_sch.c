#include<stdio.h>

int trunc_ln; 
int in8_read; 
int add14; 
int out1; 
int out3; 
int add_ln40; 
int in7_read; 
int tmp5; 
int add6; 
int add_ln49_1; 
int tmp3; 
int tmp7; 
int add_ln49; 
int add_ln30; 
int mult13; 
int in10_read; 
int in6_read; 
int mult11; 
int in1_read; 
int in5_read; 
int tmp6; 
int in9_read; 
int shf1; 
int tmp4; 
int in3_read; 
int add_ln51_1; 
int add3; 
int in4_read; 
int in2_read; 
int mult10; 
int out2; 
int add5; 
int add2; 
int mult2; 
int add_ln42; 
int mult7; 
int add_ln51; 
int add_ln40_1; 
int add9; 
int add13; 
int mul_ln24; 
int shf2; 
int tmp; 

int hls_macc(int in1,int in2,int in3,int in4,int in5,int in6,int in7,int in8,int in9,int in10){
state1:
in10_read = in10; //%in10_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in10) nounwind
in7_read = in7; //%in7_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in7) nounwind
in4_read = in4; //%in4_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in4) nounwind
add3 = in7_read * in4_read; //%add3 = mul i32 %in7_read, %in4_read
add5 = in10_read * in10_read; //%add5 = mul i32 %in10_read, %in10_read

state2:
in9_read = in9; //%in9_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in9) nounwind
in6_read = in6; //%in6_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in6) nounwind
in3_read = in3; //%in3_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in3) nounwind
in2_read = in2; //%in2_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in2) nounwind
in1_read = in1; //%in1_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in1) nounwind
mult2 = in3_read * in1_read; //%mult2 = mul nsw i32 %in3_read, %in1_read
mult10 = in9_read * in6_read; //%mult10 = mul nsw i32 %in9_read, %in6_read
tmp = in2_read + add3; //%tmp = add i32 %in2_read, %add3
tmp6 = in7_read + add5; //%tmp6 = add i32 %in7_read, %add5

state3:
in8_read = in8; //%in8_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in8) nounwind
in5_read = in5; //%in5_read = call i32 @_ssdm_op_Read.ap_auto.i32(i32 %in5) nounwind
mult7 = in6_read * in3_read; //%mult7 = mul nsw i32 %in6_read, %in3_read
mult11 = in8_read * in6_read; //%mult11 = mul nsw i32 %in8_read, %in6_read
mult13 = in8_read * in7_read; //%mult13 = mul nsw i32 %in8_read, %in7_read
mul_ln24 = in5_read * in4_read; //%mul_ln24 = mul i32 %in5_read, %in4_read
add_ln30 = in2_read + mult2; //%add_ln30 = add i32 %in2_read, %mult2
tmp3 = in5_read * tmp; //%tmp3 = mul i32 %in5_read, %tmp
tmp4 = in7_read + in2_read; //%tmp4 = add i32 %in7_read, %in2_read
add_ln42 = in8_read + mult10; //%add_ln42 = add i32 %in8_read, %mult10
tmp7 = in9_read * tmp6; //%tmp7 = mul i32 %in9_read, %tmp6

state4:
add2 = in4_read * mul_ln24; //%add2 = mul i32 %in4_read, %mul_ln24
add6 = in1_read * add_ln30; //%add6 = mul i32 %in1_read, %add_ln30
add9 = tmp3 + mult7; //%add9 = add nsw i32 %tmp3, %mult7
tmp5 = in3_read * tmp4; //%tmp5 = mul i32 %in3_read, %tmp4
add13 = in4_read * add_ln42; //%add13 = mul i32 %in4_read, %add_ln42
add14 = tmp7 + mult13; //%add14 = add nsw i32 %tmp7, %mult13
trunc_ln = (add14 >> 3) & 536870911; //%trunc_ln = call i29 @_ssdm_op_PartSelect.i29.i32.i32.i32(i32 %add14, i32 3, i32 31)

state5:
out1 = add6; //call void @_ssdm_op_Write.ap_auto.i32P(i32* %out1, i32 %add6) nounwind
shf1 = add9 << 3; //%shf1 = shl i32 %add9, 3
add_ln40_1 = shf1 + tmp5; //%add_ln40_1 = add i32 %shf1, %tmp5
add_ln40 = add2 + add_ln40_1; //%add_ln40 = add i32 %add2, %add_ln40_1
out2 = add_ln40; //call void @_ssdm_op_Write.ap_auto.i32P(i32* %out2, i32 %add_ln40) nounwind
shf2 = trunc_ln; //%shf2 = sext i29 %trunc_ln to i32
add_ln49_1 = shf2 + add13; //%add_ln49_1 = add i32 %shf2, %add13
add_ln49 = mult11 + add_ln49_1; //%add_ln49 = add i32 %mult11, %add_ln49_1
out3 = add_ln49; //call void @_ssdm_op_Write.ap_auto.i32P(i32* %out3, i32 %add_ln49) nounwind
add_ln51 = add_ln40 + add6; //%add_ln51 = add i32 %add_ln40, %add6
add_ln51_1 = add_ln49 + add_ln51; //%add_ln51_1 = add i32 %add_ln49, %add_ln51
return add_ln51_1; //ret i32 %add_ln51_1
}

int main(){
	for(int i=0; i<1; i++){
		int in1,in2,in3,in4,in5,in6,in7,in8,in9,in10;
		scanf("%d %d %d %d %d %d %d %d %d %d",&in1,&in2,&in3,&in4,&in5,&in6,&in7,&in8,&in9,&in10);
		printf("%d ",hls_macc(in1,in2,in3,in4,in5,in6,in7,in8,in9,in10));
	}
return 0;
}
