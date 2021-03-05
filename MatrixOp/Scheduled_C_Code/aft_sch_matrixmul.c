#include<stdio.h>

int res[3][3] = {0,0,0,0,0,0,0,0,0};

void matrixmul(int mat1[3][3],int mat2[3][3]){
	
	int i_0,icmp_ln8,i,j_0,i_1,zext_ln12,tmp,zext_ln12_1,sub_ln12,icmp_ln9,j_4,k_0,zext_ln10,add_ln10,sext_ln10,res1_addr,icmp_ln11,k,zext_ln12_2,add_ln12_1,sext_ln12,mat1_addr_1;
	int tmp_3,zext_ln12_3,sub_ln12_1,add_ln12_2,sext_ln12_1,mat2_addr_1,mat1_load,mat2_load,mul_ln12,add_ln12,res1_load_1,icmp_ln15,i_4,j_1,i_2,zext_ln18,tmp_1,zext_ln18_1;
	int sub_ln18,icmp_ln17,zext_ln18_2,add_ln18,sext_ln18,res1_addr_1,res_addr,res1_load,icmp_ln23,i_5,zext_ln25,tmp_2,zext_ln25_1,sub_ln25,icmp_ln24;
	int j_5,zext_ln25_2,add_ln25_2,sext_ln25,res_addr_1,mat1_addr,mat2_addr,res_load,mat1_load_1,mat2_load_1,shl_ln25,add_ln25,add_ln25_1,j_2,icmp_ln28,i_6,j_3,zext_ln30,tmp_4;
	int zext_ln30_1,sub_ln30,icmp_ln29,j_6,zext_ln30_2,tmp_6,zext_ln30_3,sub_ln30_1,add_ln30,sext_ln30,res_addr_2,add_ln30_1,res_load_1,sext_ln30_1,res_addr_3,j;
	int res1[3][3],i_3; //%res1 = alloca [9 x i32], align 4

	state1:
	//br label %.loopexit
	i_0 = 0;
	
	state2:
	//%i_0 = phi i2 [ 0, %0 ], [ %i, %.loopexit.loopexit ]
	icmp_ln8 = i_0 == 3; //%icmp_ln8 = icmp eq i2 %i_0, -1
	//%empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
	i = i_0 + 1; //%i = add i2 %i_0, 1
	//br i1 %icmp_ln8, label %.preheader5.preheader, label %.preheader6.preheader
	j_0 = 0;
	i_1 = 0;
	if(!icmp_ln8){
		zext_ln12 = i_0; //%zext_ln12 = zext i2 %i_0 to i5
		tmp = i_0; //%tmp = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_0, i2 0)
		zext_ln12_1 = tmp << 2; //%zext_ln12_1 = zext i4 %tmp to i5
		sub_ln12 = zext_ln12_1 - zext_ln12; //%sub_ln12 = sub i5 %zext_ln12_1, %zext_ln12
		//br label %.preheader
		goto state3;
	}
	if(icmp_ln8){
		//br label %.preheader5
		goto state8;
	}

	state3:
	//%j_0 = phi i2 [ 0, %.preheader6.preheader ], [ %j_4, %.preheader6.loopexit ]
	icmp_ln9 = j_0 == 3; //%icmp_ln9 = icmp eq i2 %j_0, -1
	//%empty_3 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
	j_4 = j_0 + 1; //%j_4 = add i2 %j_0, 1
	//br i1 %icmp_ln9, label %.loopexit.loopexit, label %1
	i_0 = i;
	res1_load_1 = 0;
	k_0 = 0;
	if(!icmp_ln9){
		zext_ln10 = j_0; //%zext_ln10 = zext i2 %j_0 to i5
		add_ln10 = sub_ln12 + zext_ln10; //%add_ln10 = add i5 %sub_ln12, %zext_ln10
		sext_ln10 = add_ln10; //%sext_ln10 = sext i5 %add_ln10 to i64
		res1_addr = res1[0][sext_ln10]; // %res1_addr = getelementptr [9 x i32]* %res1, i64 0, i64 %sext_ln10
		//br label %2
		goto state4;
	}
	if(icmp_ln9){
		//br label %.loopexit
		goto state2;
	}

	state4:
	//%res1_load_1 = phi i32 [ 0, %1 ], [ %add_ln12, %3 ]
	//%k_0 = phi i2 [ 0, %1 ], [ %k, %3 ]
	res1[0][sext_ln10] = res1_load_1; //store i32 %res1_load_1, i32* %res1_addr, align 4
	icmp_ln11 = k_0 == 3; //%icmp_ln11 = icmp eq i2 %k_0, -1
	//%empty_4 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
	k = k_0 + 1; //%k = add i2 %k_0, 1
	//br i1 %icmp_ln11, label %.preheader6.loopexit, label %3
	j_0 = j_4;
	if(!icmp_ln11){
		zext_ln12_2 = k_0; //%zext_ln12_2 = zext i2 %k_0 to i5
		add_ln12_1 = sub_ln12 + zext_ln12_2; //%add_ln12_1 = add i5 %sub_ln12, %zext_ln12_2
		sext_ln12 = add_ln12_1; //%sext_ln12 = sext i5 %add_ln12_1 to i64
		mat1_addr_1 = mat1[0][sext_ln12]; //%mat1_addr_1 = getelementptr [9 x i32]* %mat1, i64 0, i64 %sext_ln12
		tmp_3 = k_0 << 2; //%tmp_3 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %k_0, i2 0)
		zext_ln12_3 = tmp_3; //%zext_ln12_3 = zext i4 %tmp_3 to i5
		sub_ln12_1 = zext_ln12_3 - zext_ln12_2; //%sub_ln12_1 = sub i5 %zext_ln12_3, %zext_ln12_2
		add_ln12_2 = sub_ln12_1 + zext_ln10; //%add_ln12_2 = add i5 %sub_ln12_1, %zext_ln10
		sext_ln12_1 = add_ln12_2; //%sext_ln12_1 = sext i5 %add_ln12_2 to i64
		mat2_addr_1 = mat2[0][sext_ln12_1]; //%mat2_addr_1 = getelementptr [9 x i32]* %mat2, i64 0, i64 %sext_ln12_1
		mat1_load = mat1_addr_1; //%mat1_load = load i32* %mat1_addr_1, align 4
		mat2_load = mat2_addr_1; //%mat2_load = load i32* %mat2_addr_1, align 4
		goto state5;
	}
	if(icmp_ln11){
		//br label %.preheader6
		//res1[0][] = res1_load_1;
		goto state3;
	}

	state5:
	mat1_load = mat1_addr_1; //%mat1_load = load i32* %mat1_addr_1, align 4
	mat2_load = mat2_addr_1; //%mat2_load = load i32* %mat2_addr_1, align 4
	
	state6:
	mul_ln12 = mat2_load * mat1_load; //%mul_ln12 = mul nsw i32 %mat2_load, %mat1_load
	
	state7:
	add_ln12 = mul_ln12 + res1_load_1; //%add_ln12 = add nsw i32 %mul_ln12, %res1_load_1
	res1_load_1 = add_ln12;
	k_0 = k;
	goto state4;
	//br label %2

	state8:
	//%i_1 = phi i2 [ %i_4, %.preheader5.loopexit ], [ 0, %.preheader5.preheader ]
	icmp_ln15 = i_1 == 3; //%icmp_ln15 = icmp eq i2 %i_1, -1
	//%empty_5 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
	i_4 = i_1 + 1; //%i_4 = add i2 %i_1, 1
	//br i1 %icmp_ln15, label %.preheader3.preheader, label %.preheader4.preheader
	j_1 = 0;
	i_2 = 0;
	if(!icmp_ln15){
		zext_ln18 = i_1; //%zext_ln18 = zext i2 %i_1 to i5
		tmp_1 = i_1 << 2; //%tmp_1 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_1, i2 0)
		zext_ln18_1 = tmp_1; //%zext_ln18_1 = zext i4 %tmp_1 to i5
		sub_ln18 = zext_ln18_1 - zext_ln18; //%sub_ln18 = sub i5 %zext_ln18_1, %zext_ln18
		//br label %.preheader4
		goto state9;
	}
	if(icmp_ln15){
		//br label %.preheader3
		goto state11;
	}

	state9:
	//%j_1 = phi i2 [ %j, %4 ], [ 0, %.preheader4.preheader ]
	icmp_ln17 = j_1 == 3; //%icmp_ln17 = icmp eq i2 %j_1, -1
	//%empty_6 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
	j = j_1 + 1; //%j = add i2 %j_1, 1
	//br i1 %icmp_ln17, label %.preheader5.loopexit, label %4
	i_1 = i_4;
	if(!icmp_ln17){
		zext_ln18_2 = j_1; //%zext_ln18_2 = zext i2 %j_1 to i5
		add_ln18 = sub_ln18 + zext_ln18_2; //%add_ln18 = add i5 %sub_ln18, %zext_ln18_2
		sext_ln18 = add_ln18; //%sext_ln18 = sext i5 %add_ln18 to i64
		res1_addr_1 = res1[0][sext_ln18]; //%res1_addr_1 = getelementptr [9 x i32]* %res1, i64 0, i64 %sext_ln18
		res1_load = res1_addr_1; //%res1_load = load i32* %res1_addr_1, align 4
		goto state10;
	}
	if(icmp_ln17){
		//br label %.preheader5
		goto state8;
	}
	
	state10:
	res_addr = res[0][sext_ln18]; //%res_addr = getelementptr [9 x i32]* @res, i64 0, i64 %sext_ln18
	res1_load = res1_addr_1; //%res1_load = load i32* %res1_addr_1, align 4
	res[0][sext_ln18] = res1_load; //store i32 %res1_load, i32* %res_addr, align 4
	j_1 = j;
	goto state9;
	//br label %.preheader4

	state11:
	//%i_2 = phi i2 [ %i_5, %.preheader3.loopexit ], [ 0, %.preheader3.preheader ]
	icmp_ln23 = i_2 == 3; //%icmp_ln23 = icmp eq i2 %i_2, -1
	//%empty_7 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
	i_5 = i_2 + 1; // %i_5 = add i2 %i_2, 1
	//br i1 %icmp_ln23, label %.preheader1.preheader, label %.preheader2.preheader
	j_2 = 0;
	i_3 = 0;	
	if(!icmp_ln23){
		zext_ln25 = i_2; //%zext_ln25 = zext i2 %i_2 to i5
		tmp_2 = i_2 << 2; //%tmp_2 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_2, i2 0)
		zext_ln25_1 = tmp_2; //%zext_ln25_1 = zext i4 %tmp_2 to i5
		sub_ln25 = zext_ln25_1 - zext_ln25; //%sub_ln25 = sub i5 %zext_ln25_1, %zext_ln25
		//br label %.preheader2
		goto state12;
	}
	if(icmp_ln23) {
		//br label %.preheader1
		goto state15;
	}

	state12:
	//%j_2 = phi i2 [ %j_5, %5 ], [ 0, %.preheader2.preheader ]
	icmp_ln24 = j_2 == 3; //%icmp_ln24 = icmp eq i2 %j_2, -1
	//%empty_8 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 3, i64 3, i64 3) nounwind
	j_5 = j_2 + 1; //%j_5 = add i2 %j_2, 1
	//br i1 %icmp_ln24, label %.preheader3.loopexit, label %5
	i_2 = i_5;	
	if(!icmp_ln24){
		zext_ln25_2 = j_2; //%zext_ln25_2 = zext i2 %j_2 to i5
		add_ln25_2 = sub_ln25 + zext_ln25_2; //%add_ln25_2 = add i5 %sub_ln25, %zext_ln25_2
		sext_ln25 = add_ln25_2; //%sext_ln25 = sext i5 %add_ln25_2 to i64
		res_addr_1 = res[0][sext_ln25]; //%res_addr_1 = getelementptr [9 x i32]* @res, i64 0, i64 %sext_ln25
		mat1_addr = mat1[0][sext_ln25]; //%mat1_addr = getelementptr [9 x i32]* %mat1, i64 0, i64 %sext_ln25
		mat2_addr = mat2[0][sext_ln25]; //%mat2_addr = getelementptr [9 x i32]* %mat2, i64 0, i64 %sext_ln25
		res_load = res_addr_1; //%res_load = load i32* %res_addr_1, align 4
		mat1_load_1 = mat1_addr; //%mat1_load_1 = load i32* %mat1_addr, align 4
		mat2_load_1 = mat2_addr; //%mat2_load_1 = load i32* %mat2_addr, align 4
		goto state13;
	}
	if(icmp_ln24){
		//br label %.preheader3
		goto state11;
	}
	
	state13:
	res_load = res_addr_1; //%res_load = load i32* %res_addr_1, align 4
	shl_ln25 = res_load << 1; //%shl_ln25 = shl i32 %res_load, 1
	mat1_load_1 = mat1_addr; //%mat1_load_1 = load i32* %mat1_addr, align 4
	mat2_load_1 = mat2_addr; //%mat2_load_1 = load i32* %mat2_addr, align 4
	add_ln25 = shl_ln25 + mat2_load_1; //%add_ln25 = add i32 %shl_ln25, %mat2_load_1
	add_ln25_1 = mat1_load_1 + add_ln25; //%add_ln25_1 = add i32 %mat1_load_1, %add_ln25

	state14:
	res[0][sext_ln25] = add_ln25_1; //store i32 %add_ln25_1, i32* %res_addr_1, align 4
	j_2 = j_5;
	goto state12;
	//br label %.preheader2

	state15:
	//%i_3 = phi i2 [ %i_6, %.preheader1.loopexit ], [ 0, %.preheader1.preheader ]
	icmp_ln28 = i_3 == 2; //%icmp_ln28 = icmp eq i2 %i_3, -2
	//%empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
	i_6 = i_3 + 1; //%i_6 = add i2 %i_3, 1
	//br i1 %icmp_ln28, label %7, label %.preheader.preheader
	j_3 = 0;
	if(!icmp_ln28){
		zext_ln30 = i_3; //%zext_ln30 = zext i2 %i_3 to i5
		tmp_4 = i_3 << 2; //%tmp_4 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %i_3, i2 0)
		zext_ln30_1 = tmp_4; //%zext_ln30_1 = zext i4 %tmp_4 to i5
		sub_ln30 = zext_ln30_1 - zext_ln30; //%sub_ln30 = sub i5 %zext_ln30_1, %zext_ln30
		//br label %.preheader
		goto state16;
	}
	if(icmp_ln28){
		//return; //ret void
		goto end;		
		goto state1;
	}
	
	state16:
	//%j_3 = phi i2 [ %j_6, %6 ], [ 0, %.preheader.preheader ]
	icmp_ln29 = j_3 == 2; //%icmp_ln29 = icmp eq i2 %j_3, -2
	//%empty_10 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 2, i64 2, i64 2) nounwind
	j_6 = j_3 + 1; //%j_6 = add i2 %j_3, 1
	//br i1 %icmp_ln29, label %.preheader1.loopexit, label %6
	i_3 = i_6;
	if(!icmp_ln29){
		zext_ln30_2 = j_3; //%zext_ln30_2 = zext i2 %j_3 to i5
		tmp_6 = j_3 << 2; //%tmp_6 = call i4 @_ssdm_op_BitConcatenate.i4.i2.i2(i2 %j_3, i2 0)
		zext_ln30_3 = tmp_6; //%zext_ln30_3 = zext i4 %tmp_6 to i5
		sub_ln30_1 = zext_ln30_3 - zext_ln30_2; //%sub_ln30_1 = sub i5 %zext_ln30_3, %zext_ln30_2
		add_ln30 = sub_ln30_1 + zext_ln30; //%add_ln30 = add i5 %sub_ln30_1, %zext_ln30
		sext_ln30 = add_ln30; //%sext_ln30 = sext i5 %add_ln30 to i64
		res_addr_2 = res[0][sext_ln30]; //%res_addr_2 = getelementptr [9 x i32]* @res, i64 0, i64 %sext_ln30
		add_ln30_1 = sub_ln30 + zext_ln30_2; //%add_ln30_1 = add i5 %sub_ln30, %zext_ln30_2
		res_load_1 = res_addr_2; //%res_load_1 = load i32* %res_addr_2, align 4
		goto state17;
	}
	if(icmp_ln29){
		//br label %.preheader1
		goto state15;
	}

	state17:
	sext_ln30_1 = add_ln30_1; //%sext_ln30_1 = sext i5 %add_ln30_1 to i64
	res_addr_3 = res[0][sext_ln30_1]; //%res_addr_3 = getelementptr [9 x i32]* @res, i64 0, i64 %sext_ln30_1
	res_load_1 = res_addr_2; //%res_load_1 = load i32* %res_addr_2, align 4
	res[0][sext_ln30_1] = res_load_1; //store i32 %res_load_1, i32* %res_addr_3, align 4
	j_3 = j_6;
	goto state16;
	//br label %.preheader

	end:
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}	
}

int main(){
	int mat1[3][3] = {4,8,2,9,7,5,11,20,13},mat2[3][3] = {3,9,2,5,6,1,4,7,8};
	// for(int i=0; i<3; i++){
	// 	for(int j=0; j<3; j++){
	// 		scanf("%d",&mat1[i][j]);
	// 	}
	// }
	// for(int i=0; i<3; i++){
	// 	for(int j=0; j<3; j++){
	// 		scanf("%d",&mat2[i][j]);
	// 	}
	// }
	matrixmul(mat1,mat2);
return 0;
}
