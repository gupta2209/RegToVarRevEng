
State1:
%reg = alloca [32 x i32], align 16
%dmem = alloca [64 x i32], align 16
//br label %1

State2:
%i_0 = phi i6 [ 0, %0 ], [ %i, %2 ]
icmp_ln128 = i_0 == -32 ? 1 : 0;
%empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) nounwind
i = i_0 + 1 ;
//br i1 %icmp_ln128, label %3, label %2
zext_ln130 = i_0 ;
%reg_addr_1 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln130
store i32 0, i32* %reg_addr_1, align 4
//br label %1
%reg_addr = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 29
store i32 2147479548, i32* %reg_addr, align 4
//br label %4

State3:
%i_1 = phi i7 [ 0, %3 ], [ %i_2, %5 ]
icmp_ln134 = i_1 == -64 ? 1 : 0;
%empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 64, i64 64, i64 64) nounwind
i_2 = i_1 + 1 ;
//br i1 %icmp_ln134, label %.preheader.preheader, label %5
zext_ln136 = i_1 ;
%A_addr = getelementptr [8 x i7]* @A, i64 0, i64 %zext_ln136
%A_load = load i7* %A_addr, align 1
%pc_6 = alloca i32
%Hi_2 = alloca i32
%Lo = alloca i32
%reg_addr_2 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 0
%reg_addr_3 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 31
store i32 0, i32* %Lo
store i32 0, i32* %Hi_2
store i32 4194304, i32* %pc_6
//br label %.preheader

State4:
%A_load = load i7* %A_addr, align 1
%sext_ln136 = sext i7 %A_load to i32
%dmem_addr = getelementptr inbounds [64 x i32]* %dmem, i64 0, i64 %zext_ln136
store i32 %sext_ln136, i32* %dmem_addr, align 4
//br label %4

State5:
%pc_6_load = load i32* %pc_6
%trunc_ln143_1 = call i6 @_ssdm_op_PartSelect.i6.i32.i32.i32(i32 %pc_6_load, i32 2, i32 7)
zext_ln143 = trunc_ln143_1 ;
%imem_addr = getelementptr inbounds [44 x i32]* @imem, i64 0, i64 %zext_ln143
%ins = load i32* %imem_addr, align 4

State6:
%n_inst_0 = phi i32 [ 0, %.preheader.preheader ], [ %n_inst, %._crit_edge ]
%ins = load i32* %imem_addr, align 4
%address = trunc i32 %ins to i16
%funct = trunc i32 %ins to i6
pc = i32 + 4, ;
%tmp_1 = call i6 @_ssdm_op_PartSelect.i6.i32.i32.i32(i32 %ins, i32 26, i32 31)
n_inst = i32 + 1, ;
switch i6 %tmp_1, label %25 [i6 0, label %6 i6 2, label %23 i6 3, label %24]
store i32 %pc, i32* %reg_addr_3, align 4
%trunc_ln232 = trunc i32 %ins to i26
%pc_2 = call i28 @_ssdm_op_BitConcatenate.i28.i26.i2(i26 %trunc_ln232, i2 0)
zext_ln232 = pc_2 ;
store i32 %zext_ln232, i32* %pc_6
//br label %._crit_edge
%trunc_ln227 = trunc i32 %ins to i26
%pc_1 = call i28 @_ssdm_op_BitConcatenate.i28.i26.i2(i26 %trunc_ln227, i2 0)
zext_ln227 = pc_1 ;
store i32 %zext_ln227, i32* %pc_6
//br label %._crit_edge
%shamt = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 6, i32 10)
zext_ln152 = shamt ;
%rd = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 11, i32 15)
%rt_1 = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 16, i32 20)
%rs_1 = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 21, i32 25)
switch i6 %funct, label %.._crit_edge_crit_edge [i6 -31, label %7 i6 -29, label %8 i6 24, label %9 i6 25, label %10 i6 16, label %11 i6 18, label %12 i6 -28, label %13 i6 -27, label %14 i6 -26, label %15 i6 0, label %16 i6 2, label %17 i6 4, label %18 i6 6, label %19 i6 -22, label %20 i6 -21, label %21 i6 8, label %22]
zext_ln217 = rs_1 ;
%reg_addr_63 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln217
%pc_8 = load i32* %reg_addr_63, align 4
zext_ln213 = rs_1 ;
%reg_addr_60 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln213
%reg_load_36 = load i32* %reg_addr_60, align 4
zext_ln213_1 = rt_1 ;
%reg_addr_61 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln213_1
%reg_load_37 = load i32* %reg_addr_61, align 4
store i32 %pc, i32* %pc_6
zext_ln210 = rs_1 ;
%reg_addr_57 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln210
%reg_load_34 = load i32* %reg_addr_57, align 4
zext_ln210_1 = rt_1 ;
%reg_addr_58 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln210_1
%reg_load_35 = load i32* %reg_addr_58, align 4
store i32 %pc, i32* %pc_6
zext_ln206 = rt_1 ;
%reg_addr_54 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln206
%reg_load_32 = load i32* %reg_addr_54, align 4
zext_ln206_1 = rs_1 ;
%reg_addr_55 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln206_1
%reg_load_33 = load i32* %reg_addr_55, align 4
store i32 %pc, i32* %pc_6
zext_ln203 = rt_1 ;
%reg_addr_51 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln203
%reg_load_30 = load i32* %reg_addr_51, align 4
zext_ln203_1 = rs_1 ;
%reg_addr_52 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln203_1
%reg_load_31 = load i32* %reg_addr_52, align 4
store i32 %pc, i32* %pc_6
zext_ln200 = rt_1 ;
%reg_addr_49 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln200
%reg_load_29 = load i32* %reg_addr_49, align 4
store i32 %pc, i32* %pc_6
zext_ln197 = rt_1 ;
%reg_addr_47 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln197
%reg_load_28 = load i32* %reg_addr_47, align 4
store i32 %pc, i32* %pc_6
zext_ln194 = rs_1 ;
%reg_addr_44 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln194
%reg_load_26 = load i32* %reg_addr_44, align 4
zext_ln194_1 = rt_1 ;
%reg_addr_45 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln194_1
%reg_load_27 = load i32* %reg_addr_45, align 4
store i32 %pc, i32* %pc_6
zext_ln191 = rs_1 ;
%reg_addr_41 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln191
%reg_load_24 = load i32* %reg_addr_41, align 4
zext_ln191_1 = rt_1 ;
%reg_addr_42 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln191_1
%reg_load_25 = load i32* %reg_addr_42, align 4
store i32 %pc, i32* %pc_6
zext_ln188 = rs_1 ;
%reg_addr_38 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln188
%reg_load_22 = load i32* %reg_addr_38, align 4
zext_ln188_1 = rt_1 ;
%reg_addr_39 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln188_1
%reg_load_23 = load i32* %reg_addr_39, align 4
store i32 %pc, i32* %pc_6
%Lo_load = load i32* %Lo
zext_ln184 = rd ;
%reg_addr_37 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln184
store i32 %Lo_load, i32* %reg_addr_37, align 4
store i32 %pc, i32* %pc_6
//br label %._crit_edge
%Hi_2_load = load i32* %Hi_2
zext_ln181 = rd ;
%reg_addr_36 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln181
store i32 %Hi_2_load, i32* %reg_addr_36, align 4
store i32 %pc, i32* %pc_6
//br label %._crit_edge
zext_ln173 = rs_1 ;
%reg_addr_34 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln173
%reg_load_20 = load i32* %reg_addr_34, align 4
zext_ln173_2 = rt_1 ;
%reg_addr_35 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln173_2
%reg_load_21 = load i32* %reg_addr_35, align 4
store i32 %pc, i32* %pc_6
zext_ln168 = rs_1 ;
%reg_addr_32 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln168
%reg_load_18 = load i32* %reg_addr_32, align 4
zext_ln168_1 = rt_1 ;
%reg_addr_33 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln168_1
%reg_load_19 = load i32* %reg_addr_33, align 4
store i32 %pc, i32* %pc_6
zext_ln164 = rs_1 ;
%reg_addr_29 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln164
%reg_load_16 = load i32* %reg_addr_29, align 4
zext_ln164_1 = rt_1 ;
%reg_addr_30 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln164_1
%reg_load_17 = load i32* %reg_addr_30, align 4
store i32 %pc, i32* %pc_6
zext_ln161 = rs_1 ;
%reg_addr_26 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln161
%reg_load_14 = load i32* %reg_addr_26, align 4
zext_ln161_1 = rt_1 ;
%reg_addr_27 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln161_1
%reg_load_15 = load i32* %reg_addr_27, align 4
store i32 %pc, i32* %pc_6
store i32 0, i32* %pc_6
//br label %._crit_edge
%rt = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 16, i32 20)
%rs = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 21, i32 25)
switch i6 %tmp_1, label %.._crit_edge_crit_edge2 [i6 9, label %26 i6 12, label %27 i6 13, label %28 i6 14, label %29 i6 -29, label %30 i6 -21, label %31 i6 15, label %32 i6 4, label %33 i6 5, label %35 i6 1, label %37 i6 10, label %39 i6 11, label %40]
zext_ln285 = rs ;
%reg_addr_24 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln285
%reg_load_13 = load i32* %reg_addr_24, align 4
store i32 %pc, i32* %pc_6
zext_ln281 = rs ;
%reg_addr_22 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln281
%reg_load_12 = load i32* %reg_addr_22, align 4
store i32 %pc, i32* %pc_6
zext_ln276 = rs ;
%reg_addr_21 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln276
%reg_load_11 = load i32* %reg_addr_21, align 4
zext_ln272 = rs ;
%reg_addr_19 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln272
%reg_load_9 = load i32* %reg_addr_19, align 4
zext_ln272_1 = rt ;
%reg_addr_20 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln272_1
%reg_load_10 = load i32* %reg_addr_20, align 4
zext_ln268 = rs ;
%reg_addr_17 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln268
%reg_load_7 = load i32* %reg_addr_17, align 4
zext_ln268_1 = rt ;
%reg_addr_18 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln268_1
%reg_load_8 = load i32* %reg_addr_18, align 4
%shl_ln264 = shl i32 %ins, 16
zext_ln264 = rt ;
%reg_addr_16 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln264
store i32 %shl_ln264, i32* %reg_addr_16, align 4
store i32 %pc, i32* %pc_6
//br label %._crit_edge
zext_ln260 = rt ;
%reg_addr_14 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln260
%reg_load_5 = load i32* %reg_addr_14, align 4
zext_ln260_1 = rs ;
%reg_addr_15 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln260_1
%reg_load_6 = load i32* %reg_addr_15, align 4
%trunc_ln260_1 = trunc i32 %ins to i8
store i32 %pc, i32* %pc_6
zext_ln257 = rs ;
%reg_addr_12 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln257
%reg_load_4 = load i32* %reg_addr_12, align 4
%trunc_ln257_1 = trunc i32 %ins to i8
store i32 %pc, i32* %pc_6
zext_ln253 = rs ;
%reg_addr_10 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln253
%reg_load_3 = load i32* %reg_addr_10, align 4
store i32 %pc, i32* %pc_6
zext_ln250 = rs ;
%reg_addr_8 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln250
%reg_load_2 = load i32* %reg_addr_8, align 4
store i32 %pc, i32* %pc_6
zext_ln247 = rs ;
%reg_addr_6 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln247
%reg_load_1 = load i32* %reg_addr_6, align 4
store i32 %pc, i32* %pc_6
zext_ln243 = rs ;
%reg_addr_4 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln243
%reg_load = load i32* %reg_addr_4, align 4
store i32 %pc, i32* %pc_6
store i32 0, i32* %pc_6
//br label %._crit_edge

State7:
%pc_8 = load i32* %reg_addr_63, align 4
store i32 %pc_8, i32* %pc_6
//br label %._crit_edge

State8:
%reg_load_36 = load i32* %reg_addr_60, align 4
%reg_load_37 = load i32* %reg_addr_61, align 4
%reg_load_34 = load i32* %reg_addr_57, align 4
%reg_load_35 = load i32* %reg_addr_58, align 4
%reg_load_32 = load i32* %reg_addr_54, align 4
%reg_load_33 = load i32* %reg_addr_55, align 4
%ashr_ln206 = ashr i32 %reg_load_32, %reg_load_33
%reg_load_30 = load i32* %reg_addr_51, align 4
%reg_load_31 = load i32* %reg_addr_52, align 4
%shl_ln203 = shl i32 %reg_load_30, %reg_load_31
%reg_load_29 = load i32* %reg_addr_49, align 4
%ashr_ln200 = ashr i32 %reg_load_29, %zext_ln152
%reg_load_28 = load i32* %reg_addr_47, align 4
%shl_ln197 = shl i32 %reg_load_28, %zext_ln152

State9:
zext_ln213_2 = icmp_ln213 ;
zext_ln213_3 = rd ;
%reg_addr_62 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln213_3
store i32 %zext_ln213_2, i32* %reg_addr_62, align 4
//br label %._crit_edge
zext_ln210_2 = icmp_ln210 ;
zext_ln210_3 = rd ;
%reg_addr_59 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln210_3
store i32 %zext_ln210_2, i32* %reg_addr_59, align 4
//br label %._crit_edge
zext_ln206_2 = rd ;
%reg_addr_56 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln206_2
store i32 %ashr_ln206, i32* %reg_addr_56, align 4
//br label %._crit_edge
zext_ln203_2 = rd ;
%reg_addr_53 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln203_2
store i32 %shl_ln203, i32* %reg_addr_53, align 4
//br label %._crit_edge
zext_ln200_1 = rd ;
%reg_addr_50 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln200_1
store i32 %ashr_ln200, i32* %reg_addr_50, align 4
//br label %._crit_edge
zext_ln197_1 = rd ;
%reg_addr_48 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln197_1
store i32 %shl_ln197, i32* %reg_addr_48, align 4
//br label %._crit_edge

State10:
%reg_load_26 = load i32* %reg_addr_44, align 4
%reg_load_27 = load i32* %reg_addr_45, align 4
%xor_ln194 = xor i32 %reg_load_27, %reg_load_26
zext_ln194_2 = rd ;
%reg_addr_46 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln194_2
store i32 %xor_ln194, i32* %reg_addr_46, align 4
//br label %._crit_edge
%reg_load_24 = load i32* %reg_addr_41, align 4
%reg_load_25 = load i32* %reg_addr_42, align 4
%or_ln191 = or i32 %reg_load_25, %reg_load_24
zext_ln191_2 = rd ;
%reg_addr_43 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln191_2
store i32 %or_ln191, i32* %reg_addr_43, align 4
//br label %._crit_edge
%reg_load_22 = load i32* %reg_addr_38, align 4
%reg_load_23 = load i32* %reg_addr_39, align 4
%and_ln188 = and i32 %reg_load_23, %reg_load_22
zext_ln188_2 = rd ;
%reg_addr_40 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln188_2
store i32 %and_ln188, i32* %reg_addr_40, align 4
//br label %._crit_edge

State11:
%reg_load_20 = load i32* %reg_addr_34, align 4
%reg_load_21 = load i32* %reg_addr_35, align 4
%reg_load_18 = load i32* %reg_addr_32, align 4
%reg_load_19 = load i32* %reg_addr_33, align 4

State12:
zext_ln173_1 = reg_load_20 ;
zext_ln173_3 = reg_load_21 ;
%hilo_1 = mul i64 %zext_ln173_1, %zext_ln173_3
%Lo_2 = trunc i64 %hilo_1 to i32
%Hi_1 = call i32 @_ssdm_op_PartSelect.i32.i64.i32.i32(i64 %hilo_1, i32 32, i32 63)
%sext_ln168 = sext i32 %reg_load_18 to i64
%sext_ln168_1 = sext i32 %reg_load_19 to i64
%hilo = mul nsw i64 %sext_ln168, %sext_ln168_1
%Lo_1 = trunc i64 %hilo to i32
%Hi = call i32 @_ssdm_op_PartSelect.i32.i64.i32.i32(i64 %hilo, i32 32, i32 63)

State13:
store i32 %Lo_2, i32* %Lo
store i32 %Hi_1, i32* %Hi_2
//br label %._crit_edge
store i32 %Lo_1, i32* %Lo
store i32 %Hi, i32* %Hi_2
//br label %._crit_edge

State14:
%reg_load_16 = load i32* %reg_addr_29, align 4
%reg_load_17 = load i32* %reg_addr_30, align 4
%sub_ln164 = sub nsw i32 %reg_load_16, %reg_load_17
%reg_load_14 = load i32* %reg_addr_26, align 4
%reg_load_15 = load i32* %reg_addr_27, align 4
add_ln161 = i32 + reg_load_15, ;

State15:
zext_ln164_2 = rd ;
%reg_addr_31 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln164_2
store i32 %sub_ln164, i32* %reg_addr_31, align 4
//br label %._crit_edge
zext_ln161_2 = rd ;
%reg_addr_28 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln161_2
store i32 %add_ln161, i32* %reg_addr_28, align 4
//br label %._crit_edge

State16:
%reg_load_13 = load i32* %reg_addr_24, align 4
zext_ln285_1 = address ;
%reg_load_12 = load i32* %reg_addr_22, align 4
%sext_ln281 = sext i16 %address to i32

State17:
zext_ln285_2 = icmp_ln285 ;
zext_ln285_3 = rt ;
%reg_addr_25 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln285_3
store i32 %zext_ln285_2, i32* %reg_addr_25, align 4
//br label %._crit_edge
zext_ln281_1 = icmp_ln281 ;
zext_ln281_2 = rt ;
%reg_addr_23 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln281_2
store i32 %zext_ln281_1, i32* %reg_addr_23, align 4
//br label %._crit_edge

State18:
%reg_load_11 = load i32* %reg_addr_21, align 4
%tmp_2 = call i1 @_ssdm_op_BitSelect.i1.i32.i32(i32 %reg_load_11, i32 31)
//br i1 %tmp_2, label %.._crit_edge_crit_edge5, label %38
%shl_ln3 = call i18 @_ssdm_op_BitConcatenate.i18.i16.i2(i16 %address, i2 0)
%sext_ln277 = sext i18 %shl_ln3 to i32
pc_11 = i32 + pc_6_load, ;
store i32 %pc_11, i32* %pc_6
//br label %._crit_edge
store i32 %pc, i32* %pc_6
//br label %._crit_edge
%reg_load_9 = load i32* %reg_addr_19, align 4
%reg_load_10 = load i32* %reg_addr_20, align 4
icmp_ln272 = reg_load_9 == %reg_load_10 ? 1 : 0;
//br i1 %icmp_ln272, label %.._crit_edge_crit_edge4, label %36
%shl_ln2 = call i18 @_ssdm_op_BitConcatenate.i18.i16.i2(i16 %address, i2 0)
%sext_ln273 = sext i18 %shl_ln2 to i32
pc_10 = i32 + pc_6_load, ;
store i32 %pc_10, i32* %pc_6
//br label %._crit_edge
store i32 %pc, i32* %pc_6
//br label %._crit_edge
%reg_load_7 = load i32* %reg_addr_17, align 4
%reg_load_8 = load i32* %reg_addr_18, align 4
icmp_ln268 = reg_load_7 == %reg_load_8 ? 1 : 0;
//br i1 %icmp_ln268, label %34, label %.._crit_edge_crit_edge3
store i32 %pc, i32* %pc_6
//br label %._crit_edge
%shl_ln1 = call i18 @_ssdm_op_BitConcatenate.i18.i16.i2(i16 %address, i2 0)
%sext_ln269 = sext i18 %shl_ln1 to i32
pc_9 = i32 + pc_6_load, ;
store i32 %pc_9, i32* %pc_6
//br label %._crit_edge

State19:
%reg_load_5 = load i32* %reg_addr_14, align 4
%reg_load_6 = load i32* %reg_addr_15, align 4
%trunc_ln260 = trunc i32 %reg_load_6 to i8
add_ln260 = trunc_ln260_1 + trunc_ln260 ;
%trunc_ln260_2 = call i6 @_ssdm_op_PartSelect.i6.i8.i32.i32(i8 %add_ln260, i32 2, i32 7)
zext_ln260_2 = trunc_ln260_2 ;
%dmem_addr_2 = getelementptr inbounds [64 x i32]* %dmem, i64 0, i64 %zext_ln260_2
store i32 %reg_load_5, i32* %dmem_addr_2, align 4
//br label %._crit_edge

State20:
%reg_load_4 = load i32* %reg_addr_12, align 4
%trunc_ln257 = trunc i32 %reg_load_4 to i8
add_ln257 = trunc_ln257_1 + trunc_ln257 ;
%trunc_ln257_2 = call i6 @_ssdm_op_PartSelect.i6.i8.i32.i32(i8 %add_ln257, i32 2, i32 7)
zext_ln257_1 = trunc_ln257_2 ;
%dmem_addr_1 = getelementptr inbounds [64 x i32]* %dmem, i64 0, i64 %zext_ln257_1
%dmem_load = load i32* %dmem_addr_1, align 4

State21:
%dmem_load = load i32* %dmem_addr_1, align 4
zext_ln257_2 = rt ;
%reg_addr_13 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln257_2
store i32 %dmem_load, i32* %reg_addr_13, align 4
//br label %._crit_edge

State22:
%reg_load_3 = load i32* %reg_addr_10, align 4
zext_ln253_1 = address ;
%xor_ln253 = xor i32 %reg_load_3, %zext_ln253_1
zext_ln253_2 = rt ;
%reg_addr_11 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln253_2
store i32 %xor_ln253, i32* %reg_addr_11, align 4
//br label %._crit_edge
%reg_load_2 = load i32* %reg_addr_8, align 4
%trunc_ln250 = trunc i32 %reg_load_2 to i16
%or_ln250 = or i16 %trunc_ln250, %address
%tmp = call i16 @_ssdm_op_PartSelect.i16.i32.i32.i32(i32 %reg_load_2, i32 16, i32 31)
%or_ln = call i32 @_ssdm_op_BitConcatenate.i32.i16.i16(i16 %tmp, i16 %or_ln250)
zext_ln250_1 = rt ;
%reg_addr_9 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln250_1
store i32 %or_ln, i32* %reg_addr_9, align 4
//br label %._crit_edge
%reg_load_1 = load i32* %reg_addr_6, align 4
%trunc_ln247 = trunc i32 %reg_load_1 to i16
%and_ln247 = and i16 %trunc_ln247, %address
zext_ln247_1 = and_ln247 ;
zext_ln247_2 = rt ;
%reg_addr_7 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln247_2
store i32 %zext_ln247_1, i32* %reg_addr_7, align 4
//br label %._crit_edge

State23:
%reg_load = load i32* %reg_addr_4, align 4
%sext_ln243 = sext i16 %address to i32
add_ln243 = i32 + reg_load, ;

State24:
zext_ln243_1 = rt ;
%reg_addr_5 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln243_1
store i32 %add_ln243, i32* %reg_addr_5, align 4
//br label %._crit_edge

State25:
%pc_6_load_1 = load i32* %pc_6
store i32 0, i32* %reg_addr_2, align 16
icmp_ln296 = pc_6_load_1 == 0 ? 1 : 0;
//br i1 %icmp_ln296, label %41, label %.preheader
zext_ln299 = icmp_ln299 ;
//br label %42

State26:
%main_result_0 = phi i4 [ %zext_ln299, %41 ], [ %main_result, %43 ]
%j_0 = phi i4 [ 0, %41 ], [ %j, %43 ]
icmp_ln300 = j_0 == -8 ? 1 : 0;
%empty_10 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
j = j_0 + 1 ;
//br i1 %icmp_ln300, label %44, label %43
zext_ln302 = j_0 ;
%dmem_addr_3 = getelementptr inbounds [64 x i32]* %dmem, i64 0, i64 %zext_ln302
%dmem_load_1 = load i32* %dmem_addr_3, align 4
%outData_addr = getelementptr [8 x i7]* @outData, i64 0, i64 %zext_ln302
%outData_load = load i7* %outData_addr, align 1
zext_ln300 = main_result_0 ;
ret i32 %zext_ln300

State27:
%dmem_load_1 = load i32* %dmem_addr_3, align 4
%outData_load = load i7* %outData_addr, align 1
%sext_ln302 = sext i7 %outData_load to i32
zext_ln304 = icmp_ln304 ;
main_result = zext_ln304 + main_result_0 ;
//br label %42
