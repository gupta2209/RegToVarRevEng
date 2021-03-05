int check(){
	state1:
		reg =  ;//%reg = alloca [32 x i32], align 16
		//%dmem = alloca [64 x i32], align 16
		//br label %1

	state2:
		//%i_0 = phi i6 [ 0, %0 ], [ %i, %2 ]
		icmp_ln128 = i_0 == -32 ? 1 : 0; //%icmp_ln128 = icmp eq i6 %i_0, -32
		i = i_0 + 1; //%i = add i6 %i_0, 1
		//br i1 %icmp_ln128, label %3, label %2
		zext_ln130 = i_0 //%zext_ln130 = zext i6 %i_0 to i64
		%reg_addr_1 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln130 //%reg_addr_1 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln130
		//store i32 0, i32* %reg_addr_1, align 4
		//br label %1
		%reg_addr = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 29 //%reg_addr = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 29
		//store i32 2147479548, i32* %reg_addr, align 4
		//br label %4

	state3:
		//%i_1 = phi i7 [ 0, %3 ], [ %i_2, %5 ]
		%icmp_ln134 = icmp eq i7 %i_1, -64 //%icmp_ln134 = icmp eq i7 %i_1, -64
		//%empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 64, i64 64, i64 64) nounwind
		%i_2 = add i7 %i_1, 1 //%i_2 = add i7 %i_1, 1
		//br i1 %icmp_ln134, label %.preheader.preheader, label %5
		%zext_ln136 = zext i7 %i_1 to i64 //%zext_ln136 = zext i7 %i_1 to i64
		%A_addr = getelementptr [8 x i7]* @A, i64 0, i64 %zext_ln136 //%A_addr = getelementptr [8 x i7]* @A, i64 0, i64 %zext_ln136
		%A_load = load i7* %A_addr, align 1 //%A_load = load i7* %A_addr, align 1
		%pc_6 = alloca i32 //%pc_6 = alloca i32
		%Hi_2 = alloca i32 //%Hi_2 = alloca i32
		%Lo = alloca i32 //%Lo = alloca i32
		%reg_addr_2 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 0 //%reg_addr_2 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 0
		%reg_addr_3 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 31 //%reg_addr_3 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 31
		store i32 0, i32* %Lo //store i32 0, i32* %Lo
		store i32 0, i32* %Hi_2 //store i32 0, i32* %Hi_2
		store i32 4194304, i32* %pc_6 //store i32 4194304, i32* %pc_6
		//br label %.preheader

	state4:
		%A_load = load i7* %A_addr, align 1 //%A_load = load i7* %A_addr, align 1
		%sext_ln136 = sext i7 %A_load to i32 //%sext_ln136 = sext i7 %A_load to i32
		%dmem_addr = getelementptr inbounds [64 x i32]* %dmem, i64 0, i64 %zext_ln136 //%dmem_addr = getelementptr inbounds [64 x i32]* %dmem, i64 0, i64 %zext_ln136
		store i32 %sext_ln136, i32* %dmem_addr, align 4 //store i32 %sext_ln136, i32* %dmem_addr, align 4
		//br label %4

	state5:
		%pc_6_load = load i32* %pc_6 //%pc_6_load = load i32* %pc_6
		//%trunc_ln143_1 = call i6 @_ssdm_op_PartSelect.i6.i32.i32.i32(i32 %pc_6_load, i32 2, i32 7)
		%zext_ln143 = zext i6 %trunc_ln143_1 to i64 //%zext_ln143 = zext i6 %trunc_ln143_1 to i64
		//%imem_addr = getelementptr inbounds [44 x i32]* @imem, i64 0, i64 %zext_ln143
		%ins = load i32* %imem_addr, align 4 //%ins = load i32* %imem_addr, align 4
		
	state6:
		//%n_inst_0 = phi i32 [ 0, %.preheader.preheader ], [ %n_inst, %._crit_edge ]
		%ins = load i32* %imem_addr, align 4 //%ins = load i32* %imem_addr, align 4
		%address = trunc i32 %ins to i16 //%address = trunc i32 %ins to i16
		%funct = trunc i32 %ins to i6 //%funct = trunc i32 %ins to i6
		%pc = add nsw i32 4, %pc_6_load //%pc = add nsw i32 4, %pc_6_load
		%tmp_1 = call i6 @_ssdm_op_PartSelect.i6.i32.i32.i32(i32 %ins, i32 26, i32 31) //%tmp_1 = call i6 @_ssdm_op_PartSelect.i6.i32.i32.i32(i32 %ins, i32 26, i32 31)
		%n_inst = add nsw i32 1, %n_inst_0 //%n_inst = add nsw i32 1, %n_inst_0
		//switch i6 %tmp_1, label %25 [ i6 0, label %6 i6 2, label %23 i6 3, label %24]
		store i32 %pc, i32* %reg_addr_3, align 4 //store i32 %pc, i32* %reg_addr_3, align 4
		%trunc_ln232 = trunc i32 %ins to i26 //%trunc_ln232 = trunc i32 %ins to i26
		%pc_2 = call i28 @_ssdm_op_BitConcatenate.i28.i26.i2(i26 %trunc_ln232, i2 0) //%pc_2 = call i28 @_ssdm_op_BitConcatenate.i28.i26.i2(i26 %trunc_ln232, i2 0)
		%zext_ln232 = zext i28 %pc_2 to i32 //%zext_ln232 = zext i28 %pc_2 to i32
		store i32 %zext_ln232, i32* %pc_6 //store i32 %zext_ln232, i32* %pc_6
		%trunc_ln227 = trunc i32 %ins to i26 //%trunc_ln227 = trunc i32 %ins to i26
		%pc_1 = call i28 @_ssdm_op_BitConcatenate.i28.i26.i2(i26 %trunc_ln227, i2 0) //%pc_1 = call i28 @_ssdm_op_BitConcatenate.i28.i26.i2(i26 %trunc_ln227, i2 0)
		%zext_ln227 = zext i28 %pc_1 to i32 //%zext_ln227 = zext i28 %pc_1 to i32
		store i32 %zext_ln227, i32* %pc_6 //store i32 %zext_ln227, i32* %pc_6
		//br label %._crit_edge
		%shamt = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 6, i32 10) //%shamt = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 6, i32 10)
		%zext_ln152 = zext i5 %shamt to i32 //%zext_ln152 = zext i5 %shamt to i32
		%rd = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 11, i32 15) //%rd = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 11, i32 15)
		%rt_1 = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 16, i32 20) //%rt_1 = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 16, i32 20)
		%rs_1 = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 21, i32 25) //%rs_1 = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 21, i32 25)
		//switch i6 %funct, label %.._crit_edge_crit_edge [ i6 -31, label %7 i6 -29, label %8 i6 24, label %9 i6 25, label %10 i6 16, label %11 i6 18, label %12 i6 -28, label %13 i6 -27, label %14 i6 -26, label %15 i6 0, label %16 i6 2, label %17 i6 4, label %18 i6 6, label %19 i6 -22, label %20 i6 -21, label %21 i6 8, label %22]
		%zext_ln217 = zext i5 %rs_1 to i64 //%zext_ln217 = zext i5 %rs_1 to i64
		%reg_addr_63 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln217 //%reg_addr_63 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln217
		%pc_8 = load i32* %reg_addr_63, align 4 //%pc_8 = load i32* %reg_addr_63, align 4
		%zext_ln213 = zext i5 %rs_1 to i64 //%zext_ln213 = zext i5 %rs_1 to i64
		%reg_addr_60 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln213 //%reg_addr_60 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln213
		%reg_load_36 = load i32* %reg_addr_60, align 4 //%reg_load_36 = load i32* %reg_addr_60, align 4
		%zext_ln213_1 = zext i5 %rt_1 to i64 //%zext_ln213_1 = zext i5 %rt_1 to i64
		%reg_addr_61 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln213_1 //%reg_addr_61 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln213_1
		%reg_load_37 = load i32* %reg_addr_61, align 4 //%reg_load_37 = load i32* %reg_addr_61, align 4"
		store i32 %pc, i32* %pc_6 //store i32 %pc, i32* %pc_6
		%zext_ln210 = zext i5 %rs_1 to i64 //%zext_ln210 = zext i5 %rs_1 to i64
		%reg_addr_57 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln210 //%reg_addr_57 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln210
		%reg_load_34 = load i32* %reg_addr_57, align 4 //%reg_load_34 = load i32* %reg_addr_57, align 4
		%zext_ln210_1 = zext i5 %rt_1 to i64 //%zext_ln210_1 = zext i5 %rt_1 to i64
		%reg_addr_58 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln210_1 //%reg_addr_58 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln210_1
		%reg_load_35 = load i32* %reg_addr_58, align 4 //%reg_load_35 = load i32* %reg_addr_58, align 4
		store i32 %pc, i32* %pc_6 //store i32 %pc, i32* %pc_6
		%zext_ln206 = zext i5 %rt_1 to i64 //%zext_ln206 = zext i5 %rt_1 to i64
		%reg_addr_54 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln206 //%reg_addr_54 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln206
		%reg_load_32 = load i32* %reg_addr_54, align 4 //%reg_load_32 = load i32* %reg_addr_54, align 4
		%zext_ln206_1 = zext i5 %rs_1 to i64 //%zext_ln206_1 = zext i5 %rs_1 to i64
		%reg_addr_55 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln206_1 //%reg_addr_55 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln206_1
		%reg_load_33 = load i32* %reg_addr_55, align 4 //%reg_load_33 = load i32* %reg_addr_55, align 4"
		store i32 %pc, i32* %pc_6 //store i32 %pc, i32* %pc_6
		%zext_ln203 = zext i5 %rt_1 to i64 //%zext_ln203 = zext i5 %rt_1 to i64
		%reg_addr_51 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln203 //%reg_addr_51 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln203
		%reg_load_30 = load i32* %reg_addr_51, align 4 //%reg_load_30 = load i32* %reg_addr_51, align 4
		%zext_ln203_1 = zext i5 %rs_1 to i64 //%zext_ln203_1 = zext i5 %rs_1 to i64
		%reg_addr_52 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln203_1 //%reg_addr_52 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln203_1
		%reg_load_31 = load i32* %reg_addr_52, align 4 //%reg_load_31 = load i32* %reg_addr_52, align 4
		store i32 %pc, i32* %pc_6 //store i32 %pc, i32* %pc_6
		%zext_ln200 = zext i5 %rt_1 to i64 //%zext_ln200 = zext i5 %rt_1 to i64
		%reg_addr_49 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln200 //%reg_addr_49 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln200
		%reg_load_29 = load i32* %reg_addr_49, align 4 //%reg_load_29 = load i32* %reg_addr_49, align 4
		store i32 %pc, i32* %pc_6 //store i32 %pc, i32* %pc_6
		%zext_ln197 = zext i5 %rt_1 to i64 //%zext_ln197 = zext i5 %rt_1 to i64
		%reg_addr_47 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln197 //%reg_addr_47 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln197
		%reg_load_28 = load i32* %reg_addr_47, align 4 //%reg_load_28 = load i32* %reg_addr_47, align 4
		store i32 %pc, i32* %pc_6 //store i32 %pc, i32* %pc_6
		%zext_ln194 = zext i5 %rs_1 to i64 //%zext_ln194 = zext i5 %rs_1 to i64
		%reg_addr_44 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln194 //%reg_addr_44 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln194
		%reg_load_26 = load i32* %reg_addr_44, align 4 //%reg_load_26 = load i32* %reg_addr_44, align 4
		%zext_ln194_1 = zext i5 %rt_1 to i64 //%zext_ln194_1 = zext i5 %rt_1 to i64
		%reg_addr_45 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln194_1 //%reg_addr_45 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln194_1
		%reg_load_27 = load i32* %reg_addr_45, align 4 //%reg_load_27 = load i32* %reg_addr_45, align 4
		store i32 %pc, i32* %pc_6 //store i32 %pc, i32* %pc_6
		%zext_ln191 = zext i5 %rs_1 to i64 //%zext_ln191 = zext i5 %rs_1 to i64
		%reg_addr_41 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln191 //%reg_addr_41 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln191
		%reg_load_24 = load i32* %reg_addr_41, align 4 //%reg_load_24 = load i32* %reg_addr_41, align 4
		%zext_ln191_1 = zext i5 %rt_1 to i64 //%zext_ln191_1 = zext i5 %rt_1 to i64
		%reg_addr_42 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln191_1 //%reg_addr_42 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln191_1
		%reg_load_25 = load i32* %reg_addr_42, align 4 //%reg_load_25 = load i32* %reg_addr_42, align 4
		store i32 %pc, i32* %pc_6 //store i32 %pc, i32* %pc_6
		%zext_ln188 = zext i5 %rs_1 to i64 //%zext_ln188 = zext i5 %rs_1 to i64
		%reg_addr_38 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln188 //%reg_addr_38 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln188
		%reg_load_22 = load i32* %reg_addr_38, align 4 //%reg_load_22 = load i32* %reg_addr_38, align 4
		%zext_ln188_1 = zext i5 %rt_1 to i64 //%zext_ln188_1 = zext i5 %rt_1 to i64
		%reg_addr_39 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln188_1 //%reg_addr_39 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln188_1
		%reg_load_23 = load i32* %reg_addr_39, align 4 //%reg_load_23 = load i32* %reg_addr_39, align 4
		store i32 %pc, i32* %pc_6 //store i32 %pc, i32* %pc_6
		%Lo_load = load i32* %Lo //%Lo_load = load i32* %Lo
		%zext_ln184 = zext i5 %rd to i64 //%zext_ln184 = zext i5 %rd to i64
		%reg_addr_37 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln184 //%reg_addr_37 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln184
		store i32 %Lo_load, i32* %reg_addr_37, align 4 //store i32 %Lo_load, i32* %reg_addr_37, align 4
		store i32 %pc, i32* %pc_6 //store i32 %pc, i32* %pc_6
		//br label %._crit_edge
		%Hi_2_load = load i32* %Hi_2 //%Hi_2_load = load i32* %Hi_2
		%zext_ln181 = zext i5 %rd to i64 //%zext_ln181 = zext i5 %rd to i64
		%reg_addr_36 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln181 //%reg_addr_36 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln181
		store i32 %Hi_2_load, i32* %reg_addr_36, align 4 //store i32 %Hi_2_load, i32* %reg_addr_36, align 4
		store i32 %pc, i32* %pc_6 //store i32 %pc, i32* %pc_6
		//br label %._crit_edge
		%zext_ln173 = zext i5 %rs_1 to i64 //%zext_ln173 = zext i5 %rs_1 to i64
		%reg_addr_34 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln173 //%reg_addr_34 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln173
		%reg_load_20 = load i32* %reg_addr_34, align 4 //%reg_load_20 = load i32* %reg_addr_34, align 4
		%zext_ln173_2 = zext i5 %rt_1 to i64 //%zext_ln173_2 = zext i5 %rt_1 to i64
		%reg_addr_35 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln173_2 //%reg_addr_35 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln173_2
		%reg_load_21 = load i32* %reg_addr_35, align 4 //%reg_load_21 = load i32* %reg_addr_35, align 4
		store i32 %pc, i32* %pc_6 //store i32 %pc, i32* %pc_6
		%zext_ln168 = zext i5 %rs_1 to i64 //%zext_ln168 = zext i5 %rs_1 to i64
		%reg_addr_32 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln168 //%reg_addr_32 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln168
		%reg_load_18 = load i32* %reg_addr_32, align 4 //%reg_load_18 = load i32* %reg_addr_32, align 4
		%zext_ln168_1 = zext i5 %rt_1 to i64 //%zext_ln168_1 = zext i5 %rt_1 to i64
		%reg_addr_33 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln168_1 //%reg_addr_33 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln168_1
		%reg_load_19 = load i32* %reg_addr_33, align 4 //%reg_load_19 = load i32* %reg_addr_33, align 4
		store i32 %pc, i32* %pc_6 //store i32 %pc, i32* %pc_6
		%zext_ln164 = zext i5 %rs_1 to i64 //%zext_ln164 = zext i5 %rs_1 to i64
		%reg_addr_29 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln164 //%reg_addr_29 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln164
		%reg_load_16 = load i32* %reg_addr_29, align 4 //%reg_load_16 = load i32* %reg_addr_29, align 4
		%zext_ln164_1 = zext i5 %rt_1 to i64 //%zext_ln164_1 = zext i5 %rt_1 to i64
		%reg_addr_30 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln164_1 //%reg_addr_30 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln164_1
		%reg_load_17 = load i32* %reg_addr_30, align 4 //%reg_load_17 = load i32* %reg_addr_30, align 4
		store i32 %pc, i32* %pc_6 //store i32 %pc, i32* %pc_6
		%zext_ln161 = zext i5 %rs_1 to i64 //%zext_ln161 = zext i5 %rs_1 to i64
		%reg_addr_26 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln161 //%reg_addr_26 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln161
		%reg_load_14 = load i32* %reg_addr_26, align 4 //%reg_load_14 = load i32* %reg_addr_26, align 4
		%zext_ln161_1 = zext i5 %rt_1 to i64 //%zext_ln161_1 = zext i5 %rt_1 to i64
		%reg_addr_27 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln161_1 //%reg_addr_27 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln161_1
		%reg_load_15 = load i32* %reg_addr_27, align 4 //%reg_load_15 = load i32* %reg_addr_27, align 4
		store i32 %pc, i32* %pc_6 //store i32 %pc, i32* %pc_6
		store i32 0, i32* %pc_6 //store i32 0, i32* %pc_6
		//br label %._crit_edge
		%rt = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 16, i32 20) //%rt = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 16, i32 20)
		%rs = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 21, i32 25) //%rs = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 21, i32 25)
		//switch i6 %tmp_1, label %.._crit_edge_crit_edge2 [i6 9, label %26 i6 12, label %27 i6 13, label %28 i6 14, label %29 i6 -29, label %30 i6 -21, label %31 i6 15, label %32 i6 4, label %33 i6 5, label %35 i6 1, label %37 i6 10, label %39 i6 11, label %40]
		%zext_ln285 = zext i5 %rs to i64 //%zext_ln285 = zext i5 %rs to i64
		%reg_addr_24 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln285 //%reg_addr_24 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln285
		%reg_load_13 = load i32* %reg_addr_24, align 4 //%reg_load_13 = load i32* %reg_addr_24, align 4
		store i32 %pc, i32* %pc_6 //store i32 %pc, i32* %pc_6
		%zext_ln281 = zext i5 %rs to i64 //%zext_ln281 = zext i5 %rs to i64
		%reg_addr_22 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln281 //%reg_addr_22 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln281
		%reg_load_12 = load i32* %reg_addr_22, align 4 //%reg_load_12 = load i32* %reg_addr_22, align 4
		store i32 %pc, i32* %pc_6 //store i32 %pc, i32* %pc_6
		%zext_ln276 = zext i5 %rs to i64 //%zext_ln276 = zext i5 %rs to i64
		%reg_addr_21 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln276 //%reg_addr_21 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln276
		%reg_load_11 = load i32* %reg_addr_21, align 4 //%reg_load_11 = load i32* %reg_addr_21, align 4
		%zext_ln272 = zext i5 %rs to i64 //%zext_ln272 = zext i5 %rs to i64
		%reg_addr_19 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln272 //%reg_addr_19 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln272
		%reg_load_9 = load i32* %reg_addr_19, align 4 //%reg_load_9 = load i32* %reg_addr_19, align 4
		%zext_ln272_1 = zext i5 %rt to i64 //%zext_ln272_1 = zext i5 %rt to i64
		%reg_addr_20 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln272_1 //%reg_addr_20 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln272_1
		%reg_load_10 = load i32* %reg_addr_20, align 4 //%reg_load_10 = load i32* %reg_addr_20, align 4
		%zext_ln268 = zext i5 %rs to i64 //%zext_ln268 = zext i5 %rs to i64
		%reg_addr_17 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln268 //%reg_addr_17 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln268
		%reg_load_7 = load i32* %reg_addr_17, align 4 //%reg_load_7 = load i32* %reg_addr_17, align 4
		%zext_ln268_1 = zext i5 %rt to i64 //%zext_ln268_1 = zext i5 %rt to i64
		
		
		
		
		
		
		




























		
}
