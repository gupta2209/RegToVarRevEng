#include<stdio.h>
long long int check(){

long long int A[8] = { 22, 5, -9, 3, -17, 38, 0, 11 };
long long int outData[8] = { -17, -9, 0, 3, 5, 11, 22, 38 };
unsigned long imem[44] = {
  0x8fa40000,			// [0x00400000]  lw $4, 0($29)                   ; 175: lw $a0 0($sp)               # argc
  0x27a50004,			// [0x00400004]  addiu $5, $29, 4                ; 176: addiu $a1 $sp 4             # argv
  0x24a60004,			// [0x00400008]  addiu $6, $5, 4                 ; 177: addiu $a2 $a1 4             # envp
  0x00041080,			// [0x0040000c]  sll $2, $4, 2                   ; 178: sll $v0 $a0 2
  0x00c23021,			// [0x00400010]  addu $6, $6, $2                 ; 179: addu $a2 $a2 $v0
  0x0c100016,			// [0x00400014]  jal 0x00400058 [main]           ; 180: jal main
  0x00000000,			// [0x00400018]  nop                             ; 181: nop
  0x3402000a,			// [0x0040001c]  ori $2, $0, 10                  ; 183: li $v0 10
  0x0000000c,			// [0x00400020]  syscall                         ; 184: syscall                     # syscall 10 (exit)
  0x3c011001,			// [0x00400024]  lui $1, 4097 [A]                ; 4: la   $t0,A           ; C&S
  0x34280000,			// [0x00400028]  ori $8, $1, 0 [A]
  0x00044880,			// [0x0040002c]  sll $9, $4, 2                   ; 5: sll  $t1,$a0,2
  0x01094821,			// [0x00400030]  addu $9, $8, $9                 ; 6: addu $t1,$t0,$t1
  0x8d2a0000,			// [0x00400034]  lw $10, 0($9)                   ; 7: lw   $t2,($t1)
  0x00055880,			// [0x00400038]  sll $11, $5, 2                  ; 8: sll  $t3,$a1,2
  0x010b5821,			// [0x0040003c]  addu $11, $8, $11               ; 9: addu $t3,$t0,$t3
  0x8d6c0000,			// [0x00400040]  lw $12, 0($11)                  ; 10: lw   $t4,($t3)
  0x018a682a,			// [0x00400044]  slt $13, $12, $10               ; 11: slt  $t5,$t4,$t2
  0x11a00003,			// [0x00400048]  beq $13, $0, 12 [L1-0x00400048] ; 12: beq  $t5,$zero,L1
  0xad2c0000,			// [0x0040004c]  sw $12, 0($9)                   ; 13: sw   $t4,($t1)
  0xad6a0000,			// [0x00400050]  sw $10, 0($11)                  ; 14: sw   $t2,($t3)
  0x03e00008,			// [0x00400054]  jr $31                          ; 15: jr   $ra            ; L1
  0x27bdfff4,			// [0x00400058]  addiu $29, $29, -12             ; 17: addiu $sp,$sp,-12   ; main
  0xafbf0008,			// [0x0040005c]  sw $31, 8($29)                  ; 18: sw   $ra,8($sp)
  0xafb10004,			// [0x00400060]  sw $17, 4($29)                  ; 19: sw   $s1,4($sp)
  0xafb00000,			// [0x00400064]  sw $16, 0($29)                  ; 20: sw   $s0,0($sp)
  0x24100000,			// [0x00400068]  addiu $16, $0, 0                ; 21: addiu $s0,$zero,0
  0x2a080008,			// [0x0040006c]  slti $8, $16, 8                 ; 22: slti $t0,$s0,8      ; L5
  0x1100000b,			// [0x00400070]  beq $8, $0, 44 [L2-0x00400070]  ; 23: beq  $t0,$zero,L2
  0x26110001,			// [0x00400074]  addiu $17, $16, 1               ; 24: addiu $s1,$s0,1
  0x2a280008,			// [0x00400078]  slti $8, $17, 8                 ; 25: slti $t0,$s1,8      ; L4
  0x11000006,			// [0x0040007c]  beq $8, $0, 24 [L3-0x0040007c]  ; 26: beq  $t0,$zero,L3
  0x26040000,			// [0x00400080]  addiu $4, $16, 0                ; 27: addiu $a0,$s0,0
  0x26250000,			// [0x00400084]  addiu $5, $17, 0                ; 28: addiu $a1,$s1,0
  0x0c100009,			// [0x00400088]  jal 0x00400024 [compare_swap]   ; 29: jal  compare_swap
  0x26310001,			// [0x0040008c]  addiu $17, $17, 1               ; 30: addiu $s1,$s1,1
  0x0810001e,			// [0x00400090]  j 0x00400078 [L4]               ; 31: j    L4
  0x26100001,			// [0x00400094]  addiu $16, $16, 1               ; 32: addiu $s0,$s0,1     ; L3
  0x0810001b,			// [0x00400098]  j 0x0040006c [L5]               ; 33: j    L5
  0x8fbf0008,			// [0x0040009c]  lw $31, 8($29)                  ; 34: lw   $ra,8($sp)     ; L2
  0x8fb10004,			// [0x004000a0]  lw $17, 4($29)                  ; 35: lw   $s1,4($sp)
  0x8fb00000,			// [0x004000a4]  lw $16, 0($29)                  ; 36: lw   $s0,0($sp)
  0x27bd000c,			// [0x004000a8]  addiu $29, $29, 12              ; 37: addiu $sp,$sp,12
  0x03e00008,			// [0x004000ac]  jr $31                          ; 38: jr   $ra
};
long long int zext_ln276 = 0; 
long long int zext_ln304 = 0; 
long long int icmp_ln304 = 0; 
long long int Lo_load = 0; 
long long int reg_load_2 = 0; 
long long int zext_ln188_2 = 0; 
long long int sext_ln243 = 0; 
long long int icmp_ln300 = 0; 
long long int dmem_addr = 0; 
long long int sext_ln273 = 0; 
long long int reg_addr_33 = 0; 
long long int reg_load_5 = 0; 
long long int reg_addr_9 = 0; 
long long int reg_load_8 = 0; 
long long int zext_ln194_2 = 0; 
long long int reg_addr_55 = 0; 
long long int zext_ln247_2 = 0; 
long long int zext_ln191_1 = 0; 
long long int reg_addr_6 = 0; 
long long int icmp_ln285 = 0; 
long long int reg_addr_41 = 0; 
long long int reg_load_4 = 0; 
long long int rt_1 = 0; 
long long int reg_addr_57 = 0; 
long long int zext_ln260_1 = 0; 
long long int zext_ln213_2 = 0; 
long long int reg_addr_11 = 0; 
long long int add_ln161 = 0; 
long long int zext_ln168 = 0; 
long long int reg_load_24 = 0; 
long long int reg_addr_32 = 0; 
long long int ashr_ln206 = 0; 
long long int zext_ln191 = 0; 
long long int reg_addr_25 = 0; 
long long int reg_load_30 = 0; 
long long int reg_load_19 = 0; 
long long int zext_ln253_2 = 0; 
long long int sext_ln281 = 0; 
long long int Lo_2 = 0; 
long long int zext_ln206_2 = 0; 
long long int zext_ln191_2 = 0; 
long long int reg_addr_45 = 0; 
long long int zext_ln232 = 0; 
long long int shl_ln264 = 0; 
long long int pc_6_load_1 = 0; 
long long int address = 0; 
long long int reg_addr_12 = 0; 
long long int reg_addr_15 = 0; 
long long int A_load = 0; 
long long int zext_ln217 = 0; 
long long int reg_addr_8 = 0; 
long long int sub_ln164 = 0; 
long long int trunc_ln143_1 = 0; 
long long int reg_addr_34 = 0; 
long long int dmem_addr_2 = 0; 
long long int zext_ln257_1 = 0; 
long long int xor_ln253 = 0; 
long long int zext_ln130 = 0; 
long long int i_1 = 0; 
long long int reg_load = 0; 
long long int reg_load_25 = 0; 
long long int zext_ln203 = 0; 
long long int trunc_ln257_2 = 0; 
long long int n_inst_0 = 0; 
long long int reg_load_10 = 0; 
long long int ins = 0; 
long long int and_ln247 = 0; 
long long int trunc_ln257_1 = 0; 
long long int main_result_0 = 0; 
long long int reg_addr_48 = 0; 
long long int reg_addr_10 = 0; 
long long int reg_load_33 = 0; 
long long int zext_ln243_1 = 0; 
long long int reg_load_37 = 0; 
long long int zext_ln210_3 = 0; 
long long int trunc_ln260_2 = 0; 
long long int i_2 = 0; 
long long int zext_ln181 = 0; 
long long int reg_addr_46 = 0; 
long long int trunc_ln260 = 0; 
long long int reg_addr_58 = 0; 
long long int dmem_addr_3 = 0; 
long long int zext_ln173_3 = 0; 
long long int reg_addr = 0; 
long long int reg_load_36 = 0; 
long long int add_ln257 = 0; 
long long int zext_ln257 = 0; 
long long int zext_ln197_1 = 0; 
long long int reg_addr_7 = 0; 
long long int reg_addr_52 = 0; 
long long int shl_ln197 = 0; 
long long int trunc_ln260_1 = 0; 
long long int sext_ln168 = 0; 
long long int Hi_2_load = 0; 
long long int zext_ln210_2 = 0; 
long long int reg_addr_3 = 0; 
long long int pc_1 = 0; 
long long int zext_ln136 = 0; 
long long int reg_addr_40 = 0; 
long long int reg_addr_49 = 0; 
long long int reg_addr_62 = 0; 
long long int reg_addr_38 = 0; 
long long int reg_load_35 = 0; 
long long int Lo_1 = 0; 
long long int zext_ln247_1 = 0; 
long long int reg_addr_18 = 0; 
long long int sext_ln277 = 0; 
long long int A_addr = 0; 
long long int zext_ln206_1 = 0; 
long long int reg_addr_37 = 0; 
long long int zext_ln300 = 0; 
long long int zext_ln164 = 0; 
long long int reg_addr_14 = 0; 
long long int reg_load_6 = 0; 
long long int zext_ln281_2 = 0; 
long long int zext_ln299 = 0; 
long long int reg_load_7 = 0; 
long long int zext_ln173_2 = 0; 
long long int zext_ln197 = 0; 
long long int rs = 0; 
long long int reg_addr_43 = 0; 
long long int icmp_ln128 = 0; 
long long int zext_ln264 = 0; 
long long int zext_ln200 = 0; 
long long int sext_ln168_1 = 0; 
long long int reg_load_15 = 0; 
long long int zext_ln161_1 = 0; 
long long int reg_load_14 = 0; 
long long int reg_addr_27 = 0; 
long long int shl_ln3 = 0; 
long long int icmp_ln281 = 0; 
long long int rd = 0; 
long long int zext_ln203_1 = 0; 
long long int reg_load_31 = 0; 
long long int rt = 0; 
long long int reg_addr_50 = 0; 
long long int pc_2 = 0; 
long long int zext_ln285_3 = 0; 
long long int icmp_ln213 = 0; 
long long int main_result = 0; 
long long int sext_ln136 = 0; 
long long int zext_ln210_1 = 0; 
long long int zext_ln250 = 0; 
long long int reg_addr_21 = 0; 
long long int zext_ln227 = 0; 
long long int reg_addr_30 = 0; 
long long int reg_load_27 = 0; 
long long int icmp_ln210 = 0; 
long long int zext_ln200_1 = 0; 
long long int sext_ln269 = 0; 
long long int zext_ln260 = 0; 
long long int Hi_2 = 0; 
long long int zext_ln253_1 = 0; 
long long int icmp_ln296 = 0; 
long long int zext_ln213_1 = 0; 
long long int zext_ln272 = 0; 
long long int outData_addr = 0; 
long long int reg_addr_20 = 0; 
long long int reg_addr_60 = 0; 
long long int ashr_ln200 = 0; 
long long int imem_addr = 0; 
long long int zext_ln188 = 0; 
long long int zext_ln161_2 = 0; 
long long int shl_ln2 = 0; 
long long int zext_ln285_1 = 0; 
long long int reg_load_11 = 0; 
long long int reg_addr_22 = 0; 
long long int zext_ln161 = 0; 
long long int zext_ln213_3 = 0; 
long long int zext_ln243 = 0; 
long long int reg_addr_4 = 0; 
long long int reg_addr_5 = 0; 
long long int reg_load_16 = 0; 
long long int reg_addr_44 = 0; 
long long int or_ln191 = 0; 
long long int zext_ln173_1 = 0; 
long long int trunc_ln257 = 0; 
long long int zext_ln194 = 0; 
long long int rs_1 = 0; 
long long int zext_ln194_1 = 0; 
long long int zext_ln168_1 = 0; 
long long int zext_ln268_1 = 0; 
long long int pc_11 = 0; 
long long int zext_ln260_2 = 0; 
long long int funct = 0; 
long long int reg_load_21 = 0; 
long long int zext_ln206 = 0; 
long long int reg_load_34 = 0; 
long long int zext_ln143 = 0; 
long long int shl_ln203 = 0; 
long long int shl_ln1 = 0; 
long long int trunc_ln247 = 0; 
long long int reg_addr_35 = 0; 
long long int reg_addr_23 = 0; 
long long int reg_addr_31 = 0; 
long long int icmp_ln272 = 0; 
long long int pc = 0; 
long long int xor_ln194 = 0; 
long long int reg_addr_13 = 0; 
long long int or_ln250 = 0; 
long long int tmp = 0; 
long long int zext_ln184 = 0; 
long long int pc_8 = 0; 
long long int reg_load_1 = 0; 
long long int reg_addr_47 = 0; 
long long int zext_ln210 = 0; 
long long int zext_ln164_1 = 0; 
long long int trunc_ln232 = 0; 
long long int tmp_1 = 0; 
long long int reg_load_13 = 0; 
long long int pc_10 = 0; 
long long int reg_load_20 = 0; 
long long int zext_ln285 = 0; 
long long int hilo_1 = 0; 
long long int reg_load_17 = 0; 
long long int icmp_ln268 = 0; 
long long int zext_ln281_1 = 0; 
long long int reg_addr_26 = 0; 
long long int reg_load_26 = 0; 
long long int tmp_2 = 0; 
long long int zext_ln302 = 0; 
long long int reg_load_23 = 0; 
long long int reg_addr_17 = 0; 
long long int add_ln260 = 0; 
long long int reg_addr_1 = 0; 
long long int sext_ln302 = 0; 
long long int pc_6_load = 0; 
long long int reg_load_32 = 0; 
long long int reg_addr_29 = 0; 
long long int shamt = 0; 
long long int reg_addr_59 = 0; 
long long int zext_ln253 = 0; 
long long int reg_addr_56 = 0; 
long long int Lo = 0; 
long long int zext_ln281 = 0; 
long long int reg_load_9 = 0; 
long long int trunc_ln250 = 0; 
long long int reg_load_12 = 0; 
long long int zext_ln247 = 0; 
long long int reg_addr_39 = 0; 
long long int dmem_load = 0; 
long long int n_inst = 0; 
long long int reg_addr_19 = 0; 
long long int zext_ln268 = 0; 
long long int hilo = 0; 
long long int reg_addr_42 = 0; 
long long int icmp_ln299 = 0; 
long long int icmp_ln134 = 0; 
long long int Hi = 0; 
long long int zext_ln272_1 = 0; 
long long int Hi_1 = 0; 
long long int outData_load = 0; 
long long int reg_addr_63 = 0; 
long long int reg_addr_16 = 0; 
long long int or_ln = 0; 
long long int reg_addr_51 = 0; 
long long int zext_ln213 = 0; 
long long int zext_ln285_2 = 0; 
long long int reg_load_29 = 0; 
long long int reg_addr_53 = 0; 
long long int zext_ln188_1 = 0; 
long long int and_ln188 = 0; 
long long int dmem_load_1 = 0; 
long long int zext_ln257_2 = 0; 
long long int reg_addr_2 = 0; 
long long int i_0 = 0; 
long long int reg_addr_36 = 0; 
long long int reg_addr_28 = 0; 
long long int reg_load_28 = 0; 
long long int trunc_ln227 = 0; 
long long int zext_ln203_2 = 0; 
long long int zext_ln250_1 = 0; 
long long int reg_load_3 = 0; 
long long int zext_ln173 = 0; 
long long int reg_load_18 = 0; 
long long int reg_addr_54 = 0; 
long long int dmem_addr_1 = 0; 
long long int reg_addr_61 = 0; 
long long int reg_addr_24 = 0; 
long long int zext_ln164_2 = 0; 
long long int pc_6 = 0; 
long long int add_ln243 = 0; 
long long int zext_ln152 = 0; 
long long int pc_9 = 0; 
long long int reg_load_22 = 0; 
long long int i = 0;
long long int j_0 = 0;
long long int j = 0;
long long int reg[32]; //%reg = alloca [32 x i32], align 16
long long int dmem[64]; //%dmem = alloca [64 x i32], align 16

//var's = i_0
state1:
//br label %1
i_0 = 0;
goto state2;


//var's = icmp_ln128, i, zext_ln130, reg_addr_1, i_0, i_1
state2:
//%i_0 = phi i6 [ 0, %0 ], [ %i, %2 ] //%i_0 = phi i6 [ 0, %0 ], [ %i, %2 ]
icmp_ln128 = i_0 == 32 ? 1 : 0; //%icmp_ln128 = icmp eq i6 %i_0, -32
//%empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) nounwind //%empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 32, i64 32, i64 32) nounwind
i = i_0 + 1; //%i = add i6 %i_0, 1
//br i1 %icmp_ln128, label %3, label %2
if(!icmp_ln128){
	zext_ln130 = i_0; //%zext_ln130 = zext i6 %i_0 to i64
	reg_addr_1 = reg[zext_ln130]; //%reg_addr_1 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln130
	reg[zext_ln130] = 0; //store i32 0, i32* %reg_addr_1, align 4
	//br label %1
	i_0 = i;
	goto state2;
}
if(icmp_ln128){
	reg_addr = reg[29]; //%reg_addr = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 29
	reg[29] = 2147479548; //store i32 2147479548, i32* %reg_addr, align 4
	//br label %4
	i_1 = 0;
	goto state3;
}


//var's = icmp_ln134, i_2, zext_ln136, A_addr, A_load, reg_addr_2, reg_addr_3, Lo, Hi_2, pc_6
state3:
//%i_1 = phi i7 [ 0, %3 ], [ %i_2, %5 ] //%i_1 = phi i7 [ 0, %3 ], [ %i_2, %5 ]
icmp_ln134 = i_1 == 64 ? 1 : 0; //%icmp_ln134 = icmp eq i7 %i_1, -64
//%empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 64, i64 64, i64 64) nounwind //%empty_9 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 64, i64 64, i64 64) nounwind
i_2 = i_1 + 1; //%i_2 = add i7 %i_1, 1
//br i1 %icmp_ln134, label %.preheader.preheader, label %5
if(!icmp_ln134){
	zext_ln136 = i_1; //%zext_ln136 = zext i7 %i_1 to i64
	A_addr = A[zext_ln136]; //%A_addr = getelementptr [8 x i7]* @A, i64 0, i64 %zext_ln136
	A_load = A_addr; //%A_load = load i7* %A_addr, align 1
	goto state4;
}
if(icmp_ln134){
	//%pc_6 = alloca i32 //%pc_6 = alloca i32
	//%Hi_2 = alloca i32 //%Hi_2 = alloca i32
	//%Lo = alloca i32 //%Lo = alloca i32
	reg_addr_2 = reg[0]; //%reg_addr_2 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 0
	reg_addr_3 = reg[31]; //%reg_addr_3 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 31
	Lo = 0; //store i32 0, i32* %Lo
	Hi_2 = 0; //store i32 0, i32* %Hi_2
	pc_6 = 4194304; //store i32 4194304, i32* %pc_6
	//br label %.preheader
	goto state5;
}


//var's = A_load, sext_ln136, dmem_addr, i_1
state4:
A_load = A_addr; //%A_load = load i7* %A_addr, align 1
sext_ln136 = A_load; //%sext_ln136 = sext i7 %A_load to i32
dmem_addr = dmem[zext_ln136]; //%dmem_addr = getelementptr inbounds [64 x i32]* %dmem, i64 0, i64 %zext_ln136
dmem[zext_ln136] = sext_ln136; //store i32 %sext_ln136, i32* %dmem_addr, align 4
//br label %4
i_1 = i_2;
goto state3;


//var's = pc_6_load, trunc_ln143_1, zext_ln143, imem_addr, ins
state5:
pc_6_load = pc_6; //%pc_6_load = load i32* %pc_6
trunc_ln143_1 = (pc_6_load >> 2) & 63; //%trunc_ln143_1 = call i6 @_ssdm_op_PartSelect.i6.i32.i32.i32(i32 %pc_6_load, i32 2, i32 7)
zext_ln143 = trunc_ln143_1; //%zext_ln143 = zext i6 %trunc_ln143_1 to i64
imem_addr = imem[zext_ln143]; //%imem_addr = getelementptr inbounds [44 x i32]* @imem, i64 0, i64 %zext_ln143
ins = imem_addr; //%ins = load i32* %imem_addr, align 4
goto state6;


//var's = ins, address, funct, pc, tmp_1, n_inst, reg_addr_3, trunc_ln232, pc_2, zext_ln232, pc_6, trunc_ln227, pc_1, zext_ln227, shamt, zext_ln152, rd, rt_1, rs_1
state6:
//%n_inst_0 = phi i32 [ 0, %.preheader.preheader ], [ %n_inst, %._crit_edge ] //%n_inst_0 = phi i32 [ 0, %.preheader.preheader ], [ %n_inst, %._crit_edge ]
ins = imem_addr; //%ins = load i32* %imem_addr, align 4
address = ins; //%address = trunc i32 %ins to i16
funct = ins; //%funct = trunc i32 %ins to i6
pc = 4 + pc_6_load; //%pc = add nsw i32 4, %pc_6_load
tmp_1 = (ins >> 26 ) & 63; //%tmp_1 = call i6 @_ssdm_op_PartSelect.i6.i32.i32.i32(i32 %ins, i32 26, i32 31)
n_inst = 1 + n_inst_0; //%n_inst = add nsw i32 1, %n_inst_0
//switch i6 %tmp_1, label %25 [i6 0, label %6 i6 2, label %23 i6 3, label %24] //switch i6 %tmp_1, label %25 [i6 0, label %6 i6 2, label %23 i6 3, label %24]
if(tmp_1 == 3){
	reg_addr_3 = pc; //store i32 %pc, i32* %reg_addr_3, align 4
	trunc_ln232 = ins; //%trunc_ln232 = trunc i32 %ins to i26
	pc_2 = trunc_ln232 << 2; //%pc_2 = call i28 @_ssdm_op_BitConcatenate.i28.i26.i2(i26 %trunc_ln232, i2 0)
	zext_ln232 = pc_2; //%zext_ln232 = zext i28 %pc_2 to i32
	pc_6 = zext_ln232; //store i32 %zext_ln232, i32* %pc_6
	//br label %._crit_edge
}
if(tmp_1 == 2){
	trunc_ln227 = ins; //%trunc_ln227 = trunc i32 %ins to i26
	pc_1 = trunc_ln227 << 2; //%pc_1 = call i28 @_ssdm_op_BitConcatenate.i28.i26.i2(i26 %trunc_ln227, i2 0)
	zext_ln227 = pc_1; //%zext_ln227 = zext i28 %pc_1 to i32
	pc_6 = zext_ln227; //store i32 %zext_ln227, i32* %pc_6
	//br label %._crit_edge
}
if(tmp_1 == 0){
	shamt = (ins >> 6) & 31; //%shamt = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 6, i32 10)
	zext_ln152 = shamt; //%zext_ln152 = zext i5 %shamt to i32
	rd = (ins >> 11) & 31; //%rd = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 11, i32 15)
	rt_1 = (ins >> 16) & 31; //%rt_1 = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 16, i32 20)
	rs_1 = (ins >> 21) & 31; //%rs_1 = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 21, i32 25)
	//switch i6 %funct, label %.._crit_edge_crit_edge [i6 -31, label %7 i6 -29, label %8 i6 24, label %9 i6 25, label %10 i6 16, label %11 i6 18, label %12 i6 -28, label %13 i6 -27, label %14 i6 -26, label %15 i6 0, label %16 i6 2, label %17 i6 4, label %18 i6 6, label %19 i6 -22, label %20 i6 -21, label %21 i6 8, label %22] //switch i6 %funct, label %.._crit_edge_crit_edge [i6 -31, label %7 i6 -29, label %8 i6 24, label %9 i6 25, label %10 i6 16, label %11 i6 18, label %12 i6 -28, label %13 i6 -27, label %14 i6 -26, label %15 i6 0, label %16 i6 2, label %17 i6 4, label %18 i6 6, label %19 i6 -22, label %20 i6 -21, label %21 i6 8, label %22]
}

//var's = zext_ln217, reg_addr_63, pc_8, zext_ln213, reg_addr_60, reg_load_36, zext_ln213_1, reg_addr_61, reg_load_37, pc_6, zext_ln210, reg_addr_57, reg_load_34, zext_ln210_1, reg_addr_58, reg_load_35,pc_6, zext_ln206, reg_addr_54, reg_load_32, zext_ln206_1, reg_addr_55, reg_load_33, pc_6, zext_ln203, reg_addr_51, reg_load_30, zext_ln203_1, reg_addr_52, reg_load_31, pc_6, zext_ln200
if(tmp_1 == 0 & funct == 8){
	zext_ln217 = rs_1; //%zext_ln217 = zext i5 %rs_1 to i64
	reg_addr_63 = reg[zext_ln217]; //%reg_addr_63 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln217
	pc_8 = reg_addr_63; //%pc_8 = load i32* %reg_addr_63, align 4
}
if(tmp_1 == 0 & funct == 43){
	zext_ln213 = rs_1; //%zext_ln213 = zext i5 %rs_1 to i64
	reg_addr_60 = reg[zext_ln213]; //%reg_addr_60 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln213
	reg_load_36 = reg_addr_60; //%reg_load_36 = load i32* %reg_addr_60, align 4
	zext_ln213_1 = rt_1; //%zext_ln213_1 = zext i5 %rt_1 to i64
	reg_addr_61 = reg[zext_ln213_1]; //%reg_addr_61 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln213_1
	reg_load_37 = reg_addr_61; //%reg_load_37 = load i32* %reg_addr_61, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
}
if(tmp_1 == 0 & funct == 42){
	zext_ln210 = rs_1; //%zext_ln210 = zext i5 %rs_1 to i64
	reg_addr_57 = reg[zext_ln210]; //%reg_addr_57 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln210
	reg_load_34 = reg_addr_57; //%reg_load_34 = load i32* %reg_addr_57, align 4
	zext_ln210_1 = rt_1; //%zext_ln210_1 = zext i5 %rt_1 to i64
	reg_addr_58 = reg[zext_ln210_1]; //%reg_addr_58 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln210_1
	reg_load_35 = reg_addr_58; //%reg_load_35 = load i32* %reg_addr_58, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
}
if(tmp_1 == 0 & funct == 42){
	zext_ln206 = rt_1; //%zext_ln206 = zext i5 %rt_1 to i64
	reg_addr_54 = reg[zext_ln206]; //%reg_addr_54 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln206
	reg_load_32 = reg_addr_54; //%reg_load_32 = load i32* %reg_addr_54, align 4
	zext_ln206_1 = rs_1; //%zext_ln206_1 = zext i5 %rs_1 to i64
	reg_addr_55 = reg[zext_ln206_1]; //%reg_addr_55 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln206_1
	reg_load_33 = reg_addr_55; //%reg_load_33 = load i32* %reg_addr_55, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
}
if(tmp_1 == 0 & funct == 4){
	zext_ln203 = rt_1; //%zext_ln203 = zext i5 %rt_1 to i64
	reg_addr_51 = reg[zext_ln203]; //%reg_addr_51 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln203
	reg_load_30 = reg_addr_51; //%reg_load_30 = load i32* %reg_addr_51, align 4
	zext_ln203_1 = rs_1; //%zext_ln203_1 = zext i5 %rs_1 to i64
	reg_addr_52 = reg[zext_ln203_1]; //%reg_addr_52 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln203_1
	reg_load_31 = reg_addr_52; //%reg_load_31 = load i32* %reg_addr_52, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
}

//var's = reg_addr_49, reg_load_29, pc_6, zext_ln197, reg_addr_47, reg_load_28, zext_ln194, reg_addr_44, reg_load_26, zext_ln194_1, reg_addr_45, reg_load_27, zext_ln191, reg_addr_41, reg_load_24, zext_ln191_1, reg_addr_42, reg_load_25, zext_ln188, reg_addr_38, reg_load24, zext_ln191_1, reg_addr_42, reg_load_25, zext_ln188, reg_addr_38, reg_load_22, zext_ln188_1, reg_addr_39, reg_load_23
if(tmp_1 == 0 & funct == 2){
	zext_ln200 = rt_1; //%zext_ln200 = zext i5 %rt_1 to i64
	reg_addr_49 = reg[zext_ln200]; //%reg_addr_49 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln200
	reg_load_29 = reg_addr_49; //%reg_load_29 = load i32* %reg_addr_49, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
}
if(tmp_1 == 0 & funct == 0){
	zext_ln197 = rt_1; //%zext_ln197 = zext i5 %rt_1 to i64
	reg_addr_47 = reg[zext_ln197]; //%reg_addr_47 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln197
	reg_load_28 = reg_addr_47; //%reg_load_28 = load i32* %reg_addr_47, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
}
if(tmp_1 == 0 & funct == 38){
	zext_ln194 = rs_1; //%zext_ln194 = zext i5 %rs_1 to i64
	reg_addr_44 = reg[zext_ln194]; //%reg_addr_44 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln194
	reg_load_26 = reg_addr_44; //%reg_load_26 = load i32* %reg_addr_44, align 4
	zext_ln194_1 = rt_1; //%zext_ln194_1 = zext i5 %rt_1 to i64
	reg_addr_45 = reg[zext_ln194_1]; //%reg_addr_45 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln194_1
	reg_load_27 = reg_addr_45; //%reg_load_27 = load i32* %reg_addr_45, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
}
if(tmp_1 == 0 & funct == 37){
	zext_ln191 = rs_1; //%zext_ln191 = zext i5 %rs_1 to i64
	reg_addr_41 = reg[zext_ln191]; //%reg_addr_41 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln191
	reg_load_24 = reg_addr_41; //%reg_load_24 = load i32* %reg_addr_41, align 4
	zext_ln191_1 = rt_1; //%zext_ln191_1 = zext i5 %rt_1 to i64
	reg_addr_42 = reg[zext_ln191_1]; //%reg_addr_42 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln191_1
	reg_load_25 = reg_addr_42; //%reg_load_25 = load i32* %reg_addr_42, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
}
if(tmp_1 == 0 & funct == 36){
	zext_ln188 = rs_1; //%zext_ln188 = zext i5 %rs_1 to i64
	reg_addr_38 = reg[zext_ln188]; //%reg_addr_38 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln188
	reg_load_22 = reg_addr_38; //%reg_load_22 = load i32* %reg_addr_38, align 4
	zext_ln188_1 = rt_1; //%zext_ln188_1 = zext i5 %rt_1 to i64
	reg_addr_39 = reg[zext_ln188_1]; //%reg_addr_39 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln188_1
	reg_load_23 = reg_addr_39; //%reg_load_23 = load i32* %reg_addr_39, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
}

//var's = Lo_load, zext_ln184, reg_addr_37, Hi_2_load, zext_ln181, reg_addr_36, zext_ln173, reg_addr_34, reg_load_20, zext_ln173_2, reg_addr_35, reg_load_21, zext_ln168, reg_addr_32, reg_load_18, zext_ln168_1, reg_addr_33, reg_load_19, zext_ln164, reg_addr_29, reg_load_16, zext_ln164_1, reg_addr_30, reg_load_17
if(tmp_1 == 0 & funct == 18){
	Lo_load = Lo; //%Lo_load = load i32* %Lo
	zext_ln184 = rd; //%zext_ln184 = zext i5 %rd to i64
	reg_addr_37 = reg[zext_ln184]; //%reg_addr_37 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln184
	reg[zext_ln184] = Lo_load; //store i32 %Lo_load, i32* %reg_addr_37, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
	//br label %._crit_edge
}
if(tmp_1 == 0 & funct == 16){
	Hi_2_load = Hi_2; //%Hi_2_load = load i32* %Hi_2
	zext_ln181 = rd; //%zext_ln181 = zext i5 %rd to i64
	reg_addr_36 = reg[zext_ln181]; //%reg_addr_36 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln181
	reg[zext_ln181] = Hi_2_load; //store i32 %Hi_2_load, i32* %reg_addr_36, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
	//br label %._crit_edge
}
if(tmp_1 == 0 & funct == 25){
	zext_ln173 = rs_1; //%zext_ln173 = zext i5 %rs_1 to i64
	reg_addr_34 = reg[zext_ln173]; //%reg_addr_34 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln173
	reg_load_20 = reg_addr_34; //%reg_load_20 = load i32* %reg_addr_34, align 4
	zext_ln173_2 = rt_1; //%zext_ln173_2 = zext i5 %rt_1 to i64
	reg_addr_35 = reg[zext_ln173_2]; //%reg_addr_35 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln173_2
	reg_load_21 = reg_addr_35; //%reg_load_21 = load i32* %reg_addr_35, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
}
if(tmp_1 == 0 & funct == 24){
	zext_ln168 = rs_1; //%zext_ln168 = zext i5 %rs_1 to i64
	reg_addr_32 = reg[zext_ln168]; //%reg_addr_32 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln168
	reg_load_18 = reg_addr_32; //%reg_load_18 = load i32* %reg_addr_32, align 4
	zext_ln168_1 = rt_1; //%zext_ln168_1 = zext i5 %rt_1 to i64
	reg_addr_33 = reg[zext_ln168_1]; //%reg_addr_33 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln168_1
	reg_load_19 = reg_addr_33; //%reg_load_19 = load i32* %reg_addr_33, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
}

//var's = zext_ln164, reg_addr_29, reg_load_16, zext_ln164_1, reg_addr_30, reg_load_17, zext_ln161, reg_addr_26, reg_load_14, zext_ln161_1, reg_addr_27, reg_load_15, rt, rs, zext_ln285, reg_addr_24, reg_load_13, zext_ln281, reg_addr_22, reg_load_12
if(tmp_1 == 0 & funct == 35){
	zext_ln164 = rs_1; //%zext_ln164 = zext i5 %rs_1 to i64
	reg_addr_29 = reg[zext_ln164]; //%reg_addr_29 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln164
	reg_load_16 = reg_addr_29; //%reg_load_16 = load i32* %reg_addr_29, align 4
	zext_ln164_1 = rt_1; //%zext_ln164_1 = zext i5 %rt_1 to i64
	reg_addr_30 = reg[zext_ln164_1]; //%reg_addr_30 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln164_1
	reg_load_17 = reg_addr_30; //%reg_load_17 = load i32* %reg_addr_30, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
}
if(tmp_1 == 0 & funct == 33){
	zext_ln161 = rs_1; //%zext_ln161 = zext i5 %rs_1 to i64
	reg_addr_26 = reg[zext_ln161]; //%reg_addr_26 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln161
	reg_load_14 = reg_addr_26; //%reg_load_14 = load i32* %reg_addr_26, align 4
	zext_ln161_1 = rt_1; //%zext_ln161_1 = zext i5 %rt_1 to i64
	reg_addr_27 = reg[zext_ln161_1]; //%reg_addr_27 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln161_1
	reg_load_15 = reg_addr_27; //%reg_load_15 = load i32* %reg_addr_27, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
}
if(tmp_1 == 0 & funct != 33 & funct != 35 & funct != 24 & funct != 25 & funct != 16 & funct != 18 & funct != 36 & funct != 37 & funct != 38 & funct != 0 & funct != 2 & funct != 4 & funct != 6 & funct != 42 & funct != 43 & funct != 8){
	pc_6 = 0; //store i32 0, i32* %pc_6
	//br label %._crit_edge
}
if(tmp_1 != 0 & tmp_1 != 2 & tmp_1 != 3){
	rt = (ins >> 16) & 31; //%rt = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 16, i32 20)
	rs = (ins >> 21) & 31; //%rs = call i5 @_ssdm_op_PartSelect.i5.i32.i32.i32(i32 %ins, i32 21, i32 25)
	//switch i6 %tmp_1, label %.._crit_edge_crit_edge2 [i6 9, label %26 i6 12, label %27 i6 13, label %28 i6 14, label %29 i6 -29, label %30 i6 -21, label %31 i6 15, label %32 i6 4, label %33 i6 5, label %35 i6 1, label %37 i6 10, label %39 i6 11, label %40] //switch i6 %tmp_1, label %.._crit_edge_crit_edge2 [i6 9, label %26 i6 12, label %27 i6 13, label %28 i6 14, label %29 i6 -29, label %30 i6 -21, label %31 i6 15, label %32 i6 4, label %33 i6 5, label %35 i6 1, label %37 i6 10, label %39 i6 11, label %40]
}
if(tmp_1 == 11){
	zext_ln285 = rs; //%zext_ln285 = zext i5 %rs to i64
	reg_addr_24 = reg[zext_ln285]; //%reg_addr_24 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln285
	reg_load_13 = reg_addr_24; //%reg_load_13 = load i32* %reg_addr_24, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
}
if(tmp_1 == 10){
	zext_ln281 = rs; //%zext_ln281 = zext i5 %rs to i64
	reg_addr_22 = reg[zext_ln281]; //%reg_addr_22 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln281
	reg_load_12 = reg_addr_22; //%reg_load_12 = load i32* %reg_addr_22, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
}

//var's = zext_ln276, reg_addr_21, reg_load_11, zext_ln272, reg_addr_19, reg_load_9, zext_ln272_1, reg_addr_20, reg_load_10, zext_ln268, reg_addr_17, reg_load_7, zext_ln268_1, reg_addr_16, zext_ln260, reg_addr_14, reg_load_5, zext_ln260_1, reg_addr_15, reg_load_6, trunc_ln260_1
if(tmp_1 == 1){
	zext_ln276 = rs; //%zext_ln276 = zext i5 %rs to i64
	reg_addr_21 = reg[zext_ln276]; //%reg_addr_21 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln276
	reg_load_11 = reg_addr_21; //%reg_load_11 = load i32* %reg_addr_21, align 4
}
if(tmp_1 == 5){
	zext_ln272 = rs; //%zext_ln272 = zext i5 %rs to i64
	reg_addr_19 = reg[zext_ln272]; //%reg_addr_19 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln272
	reg_load_9 = reg_addr_19; //%reg_load_9 = load i32* %reg_addr_19, align 4
	zext_ln272_1 = rt; //%zext_ln272_1 = zext i5 %rt to i64
	reg_addr_20 = reg[zext_ln272_1]; //%reg_addr_20 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln272_1
	reg_load_10 = reg_addr_20; //%reg_load_10 = load i32* %reg_addr_20, align 4
}
if(tmp_1 == 4){
	zext_ln268 = rs; //%zext_ln268 = zext i5 %rs to i64
	reg_addr_17 = reg[zext_ln268]; //%reg_addr_17 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln268
	reg_load_7 = reg_addr_17; //%reg_load_7 = load i32* %reg_addr_17, align 4
	zext_ln268_1 = rt; //%zext_ln268_1 = zext i5 %rt to i64
	reg_addr_18 = reg[zext_ln268_1]; //%reg_addr_18 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln268_1
	reg_load_8 = reg_addr_18; //%reg_load_8 = load i32* %reg_addr_18, align 4
}
if(tmp_1 == 15){
	shl_ln264 = ins << 16; //%shl_ln264 = shl i32 %ins, 16
	zext_ln264 = rt; //%zext_ln264 = zext i5 %rt to i64
	reg_addr_16 = reg[zext_ln264]; //%reg_addr_16 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln264
	reg[zext_ln264] = shl_ln264; //store i32 %shl_ln264, i32* %reg_addr_16, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
	//br label %._crit_edge
}
if(tmp_1 == 43){
	zext_ln260 = rt; //%zext_ln260 = zext i5 %rt to i64
	reg_addr_14 = reg[zext_ln260]; //%reg_addr_14 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln260
	reg_load_5 = reg_addr_14; //%reg_load_5 = load i32* %reg_addr_14, align 4
	zext_ln260_1 = rs; //%zext_ln260_1 = zext i5 %rs to i64
	reg_addr_15 = reg[zext_ln260_1]; //%reg_addr_15 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln260_1
	reg_load_6 = reg_addr_15; //%reg_load_6 = load i32* %reg_addr_15, align 4
	trunc_ln260_1 = ins; //%trunc_ln260_1 = trunc i32 %ins to i8
	pc_6 = pc; //store i32 %pc, i32* %pc_6
	goto state19;
}

//var's = zext_ln257, reg_addr_12, reg_load_4, trunc_ln257_1, zext_ln253, reg_addr_10, reg_load_3, zext_ln250, reg_addr_8, reg_load_2, zext_ln247, reg_addr_6, reg_load_2, zext_ln247, reg_addr_6, reg_load_1, zext_ln247, reg_addr_6, reg_load_1, zext_ln243, reg_addr_4, reg_load
if(tmp_1 == 35){
	zext_ln257 = rs; //%zext_ln257 = zext i5 %rs to i64
	reg_addr_12 = reg[zext_ln257]; //%reg_addr_12 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln257
	reg_load_4 = reg_addr_12; //%reg_load_4 = load i32* %reg_addr_12, align 4
	trunc_ln257_1 = ins; //%trunc_ln257_1 = trunc i32 %ins to i8
	pc_6 = pc; //store i32 %pc, i32* %pc_6
	goto state20;
}
if(tmp_1 == 14){
	zext_ln253 = rs; //%zext_ln253 = zext i5 %rs to i64
	reg_addr_10 = reg[zext_ln253]; //%reg_addr_10 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln253
	reg_load_3 = reg_addr_10; //%reg_load_3 = load i32* %reg_addr_10, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
}
if(tmp_1 == 13){
	zext_ln250 = rs; //%zext_ln250 = zext i5 %rs to i64
	reg_addr_8 = reg[zext_ln250]; //%reg_addr_8 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln250
	reg_load_2 = reg_addr_8; //%reg_load_2 = load i32* %reg_addr_8, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
}
if(tmp_1 == 12){
	zext_ln247 = rs; //%zext_ln247 = zext i5 %rs to i64
	reg_addr_6 = reg[zext_ln247]; //%reg_addr_6 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln247
	reg_load_1 = reg_addr_6; //%reg_load_1 = load i32* %reg_addr_6, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
}
if(tmp_1 == 12 || tmp_1 == 13 || tmp_1 == 14){
	goto state22;
}
if(tmp_1 == 9){
	zext_ln243 = rs; //%zext_ln243 = zext i5 %rs to i64
	reg_addr_4 = reg[zext_ln243]; //%reg_addr_4 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln243
	reg_load = reg_addr_4; //%reg_load = load i32* %reg_addr_4, align 4
	pc_6 = pc; //store i32 %pc, i32* %pc_6
	goto state23;
}
if(tmp_1 != 0 & tmp_1 != 2 & tmp_1 != 3 & tmp_1 != 1 & tmp_1 != 4 & tmp_1 != 5 & tmp_1 != 9 & tmp_1 != 10 & tmp_1 != 11 & tmp_1 != 12 & tmp_1 != 13 & tmp_1 != 14 & tmp_1 != 15 & tmp_1 != 35 & tmp_1 != 43){
	pc_6 = 0; //store i32 0, i32* %pc_6
	//br label %._crit_edge
}
if(tmp_1 == 1 | tmp_1 == 5 | tmp_1 == 4){
	goto state18;
}
if(tmp_1 == 10 | tmp_1 == 11){
	goto state16;
}
if((tmp_1 == 0 & funct == 33) | (tmp_1 == 0 & funct == 35)){
	goto state14;
}
if((funct == 24 & tmp_1 == 0) | (funct == 25 & tmp_1 == 0)){
	goto state11;
}
if(((tmp_1 == 0) & (funct == 37)) | ((tmp_1 == 0) & (funct == 38)) | ((tmp_1 == 0) & (funct == 36))){
	goto state10;
}
if(((tmp_1 == 0) & (funct == 42)) | ((tmp_1 == 0) & (funct == 43)) | ((tmp_1 == 0) & (funct == 6)) | ((tmp_1 == 0) & (funct == 4)) | ((tmp_1 == 0) & (funct == 2)) | ((tmp_1 == 0) & (funct == 0))){
	goto state8;
}
if(tmp_1 == 0 & funct == 8){
	goto state7;
}
goto state13;

//var's = pc_8, pc_6, reg_load_36, reg_load_37, icmp_ln213, reg_load_34, reg_load_35, icmp_ln210, reg_load_32, reg_load_33, ashr_ln206, reg_load_30, reg_load_31, shl_ln203, reg_load_29, ashr_ln200, reg_load_28, shl_ln197, zext_ln213_2, zext_ln213_3, reg_addr_62
state7:
pc_8 = reg_addr_63; //%pc_8 = load i32* %reg_addr_63, align 4
pc_6 = pc_8; //store i32 %pc_8, i32* %pc_6
//br label %._crit_edge
goto state13;

state8:
if(funct == 43){
	reg_load_36 = reg_addr_60; //%reg_load_36 = load i32* %reg_addr_60, align 4
	reg_load_37 = reg_addr_61; //%reg_load_37 = load i32* %reg_addr_61, align 4
	icmp_ln213 = reg_load_36 < reg_load_37 ? 1 : 0; //%icmp_ln213 = icmp ult i32 %reg_load_36, %reg_load_37
}
if(funct == 42){
	reg_load_34 = reg_addr_57; //%reg_load_34 = load i32* %reg_addr_57, align 4
	reg_load_35 = reg_addr_58; //%reg_load_35 = load i32* %reg_addr_58, align 4
	icmp_ln210 = reg_load_34 < reg_load_35 ? 1 : 0; //%icmp_ln210 = icmp slt i32 %reg_load_34, %reg_load_35
}
if(funct == 6){
	reg_load_32 = reg_addr_54; //%reg_load_32 = load i32* %reg_addr_54, align 4
	reg_load_33 = reg_addr_55; //%reg_load_33 = load i32* %reg_addr_55, align 4
	ashr_ln206 = reg_load_32 >> reg_load_33; //%ashr_ln206 = ashr i32 %reg_load_32, %reg_load_33
}
if(funct == 4){
	reg_load_30 = reg_addr_51; //%reg_load_30 = load i32* %reg_addr_51, align 4
	reg_load_31 = reg_addr_52; //%reg_load_31 = load i32* %reg_addr_52, align 4
	shl_ln203 = reg_load_30 << reg_load_31; //%shl_ln203 = shl i32 %reg_load_30, %reg_load_31
}
if(funct == 2){
	reg_load_29 = reg_addr_49; //%reg_load_29 = load i32* %reg_addr_49, align 4
	ashr_ln200 = reg_load_29 >> zext_ln152; //%ashr_ln200 = ashr i32 %reg_load_29, %zext_ln152
}
if(funct == 0){
	reg_load_28 = reg_addr_47; //%reg_load_28 = load i32* %reg_addr_47, align 4
	shl_ln197 = reg_load_28 << zext_ln152; //%shl_ln197 = shl i32 %reg_load_28, %zext_ln152
}
goto state9;

state9:
if(funct == 43){
	zext_ln213_2 = icmp_ln213; //%zext_ln213_2 = zext i1 %icmp_ln213 to i32
	zext_ln213_3 = rd; //%zext_ln213_3 = zext i5 %rd to i64
	reg_addr_62 = reg[zext_ln213_3]; //%reg_addr_62 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln213_3
	reg[zext_ln213_3] = zext_ln213_2; //store i32 %zext_ln213_2, i32* %reg_addr_62, align 4
	//br label %._crit_edge
}

//var's = zext_ln210_2, zext_ln210_3, reg_addr_59, zext_ln206_2, reg_addr_53, zext_ln200_1, reg_addr_50, zext_ln197_1, reg_addr_48, reg_load_26, reg_load_27, xor_ln194, zext_ln194_2, reg_addr_46, 
if(funct == 42){
	zext_ln210_2 = icmp_ln210; //%zext_ln210_2 = zext i1 %icmp_ln210 to i32
	zext_ln210_3 = rd; //%zext_ln210_3 = zext i5 %rd to i64
	reg_addr_59 = reg[zext_ln210_3]; //%reg_addr_59 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln210_3
	reg[zext_ln210_3] = zext_ln210_2; //store i32 %zext_ln210_2, i32* %reg_addr_59, align 4
	//br label %._crit_edge
}
if(funct == 6){
	zext_ln206_2 = rd; //%zext_ln206_2 = zext i5 %rd to i64
	reg_addr_56 = reg[zext_ln206_2]; //%reg_addr_56 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln206_2
	reg[zext_ln206_2] = ashr_ln206; //store i32 %ashr_ln206, i32* %reg_addr_56, align 4
	//br label %._crit_edge
}
if(funct == 4){
	zext_ln203_2 = rd; //%zext_ln203_2 = zext i5 %rd to i64
	reg_addr_53 = reg[zext_ln203_2]; //%reg_addr_53 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln203_2
	reg[zext_ln203_2] = shl_ln203; //store i32 %shl_ln203, i32* %reg_addr_53, align 4
	//br label %._crit_edge
}
if(funct == 2){
	zext_ln200_1 = rd; //%zext_ln200_1 = zext i5 %rd to i64
	reg_addr_50 = reg[zext_ln200_1]; //%reg_addr_50 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln200_1
	reg[zext_ln200_1] = ashr_ln200; //store i32 %ashr_ln200, i32* %reg_addr_50, align 4
	//br label %._crit_edge
}
if(funct == 0){
	zext_ln197_1 = rd; //%zext_ln197_1 = zext i5 %rd to i64
	reg_addr_48 = reg[zext_ln197_1]; //%reg_addr_48 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln197_1
	reg[zext_ln197_1] = shl_ln197; //store i32 %shl_ln197, i32* %reg_addr_48, align 4
	//br label %._crit_edge
}
goto state13;

state10:
if(funct == 38){
	reg_load_26 = reg_addr_44; //%reg_load_26 = load i32* %reg_addr_44, align 4
	reg_load_27 = reg_addr_45; //%reg_load_27 = load i32* %reg_addr_45, align 4
	xor_ln194 = reg_load_27 ^ reg_load_26; //%xor_ln194 = xor i32 %reg_load_27, %reg_load_26
	zext_ln194_2 = rd; //%zext_ln194_2 = zext i5 %rd to i64
	reg_addr_46 = reg[zext_ln194_2]; //%reg_addr_46 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln194_2
	reg[zext_ln194_2] = xor_ln194; //store i32 %xor_ln194, i32* %reg_addr_46, align 4
	//br label %._crit_edge
}

//var's = reg_load_24, reg_load_25, or_ln191, zext_ln191_2, reg_addr_43, reg_load_22, reg_load_23, and_ln188, zext_ln188_2, reg_addr_40, reg_load_20, reg_load_21, 
if(funct == 37){
	reg_load_24 = reg_addr_41; //%reg_load_24 = load i32* %reg_addr_41, align 4
	reg_load_25 = reg_addr_42; //%reg_load_25 = load i32* %reg_addr_42, align 4
	or_ln191 = reg_load_25 | reg_load_24; //%or_ln191 = or i32 %reg_load_25, %reg_load_24
	zext_ln191_2 = rd; //%zext_ln191_2 = zext i5 %rd to i64
	reg_addr_43 = reg[zext_ln191_2]; //%reg_addr_43 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln191_2
	reg[zext_ln191_2] = or_ln191; //store i32 %or_ln191, i32* %reg_addr_43, align 4
	//br label %._crit_edge
}
if(funct == 36){
	reg_load_22 = reg_addr_38; //%reg_load_22 = load i32* %reg_addr_38, align 4
	reg_load_23 = reg_addr_39; //%reg_load_23 = load i32* %reg_addr_39, align 4
	and_ln188 = reg_load_23 & reg_load_22; //%and_ln188 = and i32 %reg_load_23, %reg_load_22
	zext_ln188_2 = rd; //%zext_ln188_2 = zext i5 %rd to i64
	reg_addr_40 = reg[zext_ln188_2]; //%reg_addr_40 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln188_2
	reg[zext_ln188_2] = and_ln188; //store i32 %and_ln188, i32* %reg_addr_40, align 4
	//br label %._crit_edge
}
goto state13;

state11:
if(funct == 25){
	reg_load_20 = reg_addr_34; //%reg_load_20 = load i32* %reg_addr_34, align 4
	reg_load_21 = reg_addr_35; //%reg_load_21 = load i32* %reg_addr_35, align 4
}
if(funct == 24){
	reg_load_18 = reg_addr_32; //%reg_load_18 = load i32* %reg_addr_32, align 4
	reg_load_19 = reg_addr_33; //%reg_load_19 = load i32* %reg_addr_33, align 4
}
goto state12;


state12:
if(funct == 25){
	zext_ln173_1 = reg_load_20; //%zext_ln173_1 = zext i32 %reg_load_20 to i64
	zext_ln173_3 = reg_load_21; //%zext_ln173_3 = zext i32 %reg_load_21 to i64
	hilo_1 = zext_ln173_1 * zext_ln173_3; //%hilo_1 = mul i64 %zext_ln173_1, %zext_ln173_3
	Lo_2 = hilo_1; //%Lo_2 = trunc i64 %hilo_1 to i32
	Hi_1 = (hilo_1 >> 32) & 4294967295; //%Hi_1 = call i32 @_ssdm_op_PartSelect.i32.i64.i32.i32(i64 %hilo_1, i32 32, i32 63)
}
if(funct == 24){
	sext_ln168 = reg_load_18; //%sext_ln168 = sext i32 %reg_load_18 to i64
	sext_ln168_1 = reg_load_19; //%sext_ln168_1 = sext i32 %reg_load_19 to i64
	hilo = sext_ln168 * sext_ln168_1; //%hilo = mul nsw i64 %sext_ln168, %sext_ln168_1
	Lo_1 = hilo; //%Lo_1 = trunc i64 %hilo to i32
	Hi = (hilo >> 32) & 4294967295; //%Hi = call i32 @_ssdm_op_PartSelect.i32.i64.i32.i32(i64 %hilo, i32 32, i32 63)
}
goto state13;

state13:
if(tmp_1 == 0 & funct == 25){
	Lo = Lo_2; //store i32 %Lo_2, i32* %Lo
	Hi_2 = Hi_1; //store i32 %Hi_1, i32* %Hi_2
	//br label %._crit_edge
}
if(tmp_1 == 0 & funct == 24){
	Lo = Lo_1; //store i32 %Lo_1, i32* %Lo
	Hi_2 = Hi; //store i32 %Hi, i32* %Hi_2
	//br label %._crit_edge
}
goto state25;

state14:
if(funct == 35){
	reg_load_16 = reg_addr_29; //%reg_load_16 = load i32* %reg_addr_29, align 4
	reg_load_17 = reg_addr_30; //%reg_load_17 = load i32* %reg_addr_30, align 4
	sub_ln164 = reg_load_16 - reg_load_17; //%sub_ln164 = sub nsw i32 %reg_load_16, %reg_load_17
}
if(funct == 33){
	reg_load_14 = reg_addr_26; //%reg_load_14 = load i32* %reg_addr_26, align 4
	reg_load_15 = reg_addr_27; //%reg_load_15 = load i32* %reg_addr_27, align 4
	add_ln161 = reg_load_15 + reg_load_14; //%add_ln161 = add nsw i32 %reg_load_15, %reg_load_14
}
goto state15;

state15:
if(funct == 35){
	zext_ln164_2 = rd; //%zext_ln164_2 = zext i5 %rd to i64
	reg_addr_31 = reg[zext_ln164_2]; //%reg_addr_31 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln164_2
	reg[zext_ln164_2] = sub_ln164; //store i32 %sub_ln164, i32* %reg_addr_31, align 4
	//br label %._crit_edge
}
if(funct == 33){
	zext_ln161_2 = rd; //%zext_ln161_2 = zext i5 %rd to i64
	reg_addr_28 = reg[zext_ln161_2]; //%reg_addr_28 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln161_2
	reg[zext_ln161_2] = add_ln161; //store i32 %add_ln161, i32* %reg_addr_28, align 4
	//br label %._crit_edge
}
goto state13;

state16:
if(tmp_1 == 11){
	reg_load_13 = reg_addr_24; //%reg_load_13 = load i32* %reg_addr_24, align 4
	zext_ln285_1 = address; //%zext_ln285_1 = zext i16 %address to i32
	icmp_ln285 = reg_load_13 < zext_ln285_1 ? 1 : 0; //%icmp_ln285 = icmp ult i32 %reg_load_13, %zext_ln285_1
}
if(tmp_1 == 10){
	reg_load_12 = reg_addr_22; //%reg_load_12 = load i32* %reg_addr_22, align 4
	sext_ln281 = address; //%sext_ln281 = sext i16 %address to i32
	icmp_ln281 = reg_load_12 < sext_ln281; //%icmp_ln281 = icmp slt i32 %reg_load_12, %sext_ln281
}
goto state17;

state17:
if(tmp_1 == 11){
	zext_ln285_2 = icmp_ln285; //%zext_ln285_2 = zext i1 %icmp_ln285 to i32
	zext_ln285_3 = rt; //%zext_ln285_3 = zext i5 %rt to i64
	reg_addr_25 = reg[zext_ln285_3]; //%reg_addr_25 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln285_3
	reg[zext_ln285_3] = zext_ln285_2; //store i32 %zext_ln285_2, i32* %reg_addr_25, align 4
	//br label %._crit_edge
}
if(tmp_1 == 10){
	zext_ln281_1 = icmp_ln281; //%zext_ln281_1 = zext i1 %icmp_ln281 to i32
	zext_ln281_2 = rt; //%zext_ln281_2 = zext i5 %rt to i64
	reg_addr_23 = reg[zext_ln281_2]; //%reg_addr_23 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln281_2
	reg[zext_ln281_2] = zext_ln281_1; //store i32 %zext_ln281_1, i32* %reg_addr_23, align 4
	//br label %._crit_edge
}
goto state13;

state18:
if(tmp_1 == 1){
	reg_load_11 = reg_addr_21; //%reg_load_11 = load i32* %reg_addr_21, align 4
	tmp_2 = (reg_load_11 >> 31) & 1; //%tmp_2 = call i1 @_ssdm_op_BitSelect.i1.i32.i32(i32 %reg_load_11, i32 31)
	//br i1 %tmp_2, label %.._crit_edge_crit_edge5, label %38
}
if(tmp_1 == 1 & !tmp_2){
	shl_ln3 = address >> 2; //%shl_ln3 = call i18 @_ssdm_op_BitConcatenate.i18.i16.i2(i16 %address, i2 0)
	sext_ln277 = shl_ln3; //%sext_ln277 = sext i18 %shl_ln3 to i32
	pc_11 = pc_6_load + sext_ln277; //%pc_11 = add nsw i32 %pc_6_load, %sext_ln277
	pc_6 = pc_11; //store i32 %pc_11, i32* %pc_6
	//br label %._crit_edge
}
if(tmp_1 == 1 & tmp_2){
	pc_6 = pc; //store i32 %pc, i32* %pc_6
	//br label %._crit_edge
}
if(tmp_1 == 5){
	reg_load_9 = reg_addr_19; //%reg_load_9 = load i32* %reg_addr_19, align 4
	reg_load_10 = reg_addr_20; //%reg_load_10 = load i32* %reg_addr_20, align 4
	icmp_ln272 = reg_load_9 == reg_load_10 ? 1 : 0; //%icmp_ln272 = icmp eq i32 %reg_load_9, %reg_load_10
	//br i1 %icmp_ln272, label %.._crit_edge_crit_edge4, label %36
}
if(tmp_1 == 5 & !icmp_ln272){
	shl_ln2 = address >> 2; //%shl_ln2 = call i18 @_ssdm_op_BitConcatenate.i18.i16.i2(i16 %address, i2 0)
	sext_ln273 = shl_ln2; //%sext_ln273 = sext i18 %shl_ln2 to i32
	pc_10 = pc_6_load + sext_ln273; //%pc_10 = add nsw i32 %pc_6_load, %sext_ln273
	pc_6 = pc_10; //store i32 %pc_10, i32* %pc_6
	//br label %._crit_edge
}
if(tmp_1 == 5 & icmp_ln272){
	pc_6 = pc; //store i32 %pc, i32* %pc_6
	//br label %._crit_edge
}
if(tmp_1 == 4){
	reg_load_7 = reg_addr_17; //%reg_load_7 = load i32* %reg_addr_17, align 4
	reg_load_8 = reg_addr_18; //%reg_load_8 = load i32* %reg_addr_18, align 4
	icmp_ln268 = reg_load_7 == reg_load_8 ? 1 : 0; //%icmp_ln268 = icmp eq i32 %reg_load_7, %reg_load_8
	//br i1 %icmp_ln268, label %34, label %.._crit_edge_crit_edge3
}
if(tmp_1 == 4 & !icmp_ln268){
	pc_6 = pc; //store i32 %pc, i32* %pc_6
	//br label %._crit_edge
}
if(tmp_1 == 4 & icmp_ln268){
	shl_ln1 = address >> 2; //%shl_ln1 = call i18 @_ssdm_op_BitConcatenate.i18.i16.i2(i16 %address, i2 0)
	sext_ln269 = shl_ln1; //%sext_ln269 = sext i18 %shl_ln1 to i32
	pc_9 = pc_6_load + sext_ln269; //%pc_9 = add nsw i32 %pc_6_load, %sext_ln269
	pc_6 = pc_9; //store i32 %pc_9, i32* %pc_6
	//br label %._crit_edge
}
goto state13;

state19:
reg_load_5 = reg_addr_14; //%reg_load_5 = load i32* %reg_addr_14, align 4
reg_load_6 = reg_addr_15; //%reg_load_6 = load i32* %reg_addr_15, align 4
trunc_ln260 = reg_load_6; //%trunc_ln260 = trunc i32 %reg_load_6 to i8
add_ln260 = trunc_ln260_1 + trunc_ln260; //%add_ln260 = add i8 %trunc_ln260_1, %trunc_ln260
trunc_ln260_2 = (add_ln260 >> 2) & 63; //%trunc_ln260_2 = call i6 @_ssdm_op_PartSelect.i6.i8.i32.i32(i8 %add_ln260, i32 2, i32 7)
zext_ln260_2 = trunc_ln260_2; //%zext_ln260_2 = zext i6 %trunc_ln260_2 to i64
dmem_addr_2 = dmem[zext_ln260_2]; //%dmem_addr_2 = getelementptr inbounds [64 x i32]* %dmem, i64 0, i64 %zext_ln260_2
dmem[zext_ln260_2] = reg_load_5; //store i32 %reg_load_5, i32* %dmem_addr_2, align 4
//br label %._crit_edge
goto state13;

state20:
reg_load_4 = reg_addr_12; //%reg_load_4 = load i32* %reg_addr_12, align 4
trunc_ln257 = reg_load_4; //%trunc_ln257 = trunc i32 %reg_load_4 to i8
add_ln257 = trunc_ln257_1 + trunc_ln257; //%add_ln257 = add i8 %trunc_ln257_1, %trunc_ln257
trunc_ln257_2 = (add_ln257 >> 2) & 63; //%trunc_ln257_2 = call i6 @_ssdm_op_PartSelect.i6.i8.i32.i32(i8 %add_ln257, i32 2, i32 7)
zext_ln257_1 = trunc_ln257_2; //%zext_ln257_1 = zext i6 %trunc_ln257_2 to i64
dmem_addr_1 = dmem[zext_ln257_1]; //%dmem_addr_1 = getelementptr inbounds [64 x i32]* %dmem, i64 0, i64 %zext_ln257_1
dmem_load = dmem_addr_1; //%dmem_load = load i32* %dmem_addr_1, align 4
goto state21;

state21:
dmem_load = dmem_addr_1; //%dmem_load = load i32* %dmem_addr_1, align 4
zext_ln257_2 = rt; //%zext_ln257_2 = zext i5 %rt to i64
reg_addr_13 = reg[zext_ln257_2]; //%reg_addr_13 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln257_2
reg[zext_ln257_2] = dmem_load; //store i32 %dmem_load, i32* %reg_addr_13, align 4
//br label %._crit_edge
goto state13;

state22:
if(tmp_1 == 14){
	reg_load_3 = reg_addr_10; //%reg_load_3 = load i32* %reg_addr_10, align 4
	zext_ln253_1 = address; //%zext_ln253_1 = zext i16 %address to i32
	xor_ln253 = reg_load_3 ^ zext_ln253_1; //%xor_ln253 = xor i32 %reg_load_3, %zext_ln253_1
	zext_ln253_2 = rt; //%zext_ln253_2 = zext i5 %rt to i64
	reg_addr_11 = reg[zext_ln253_2]; //%reg_addr_11 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln253_2
	reg[zext_ln253_2] = xor_ln253; //store i32 %xor_ln253, i32* %reg_addr_11, align 4
	//br label %._crit_edge
}
if(tmp_1 == 13){
	reg_load_2 = reg_addr_8; //%reg_load_2 = load i32* %reg_addr_8, align 4
	trunc_ln250 = reg_load_2; //%trunc_ln250 = trunc i32 %reg_load_2 to i16
	or_ln250 = trunc_ln250 | address; //%or_ln250 = or i16 %trunc_ln250, %address
	tmp = (reg_load_2 >> 16) & 4294967295; //%tmp = call i16 @_ssdm_op_PartSelect.i16.i32.i32.i32(i32 %reg_load_2, i32 16, i32 31)
	or_ln = (tmp << 16) | or_ln250; //%or_ln = call i32 @_ssdm_op_BitConcatenate.i32.i16.i16(i16 %tmp, i16 %or_ln250)
	zext_ln250_1 = rt; //%zext_ln250_1 = zext i5 %rt to i64
	reg_addr_9 = reg[zext_ln250_1]; //%reg_addr_9 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln250_1
	reg[zext_ln250_1] = or_ln; //store i32 %or_ln, i32* %reg_addr_9, align 4
	//br label %._crit_edge
}
if(tmp_1 == 12){
	reg_load_1 = reg_addr_6; //%reg_load_1 = load i32* %reg_addr_6, align 4
	trunc_ln247 = reg_load_1; //%trunc_ln247 = trunc i32 %reg_load_1 to i16
	and_ln247 = trunc_ln247 ^ address; //%and_ln247 = and i16 %trunc_ln247, %address
	zext_ln247_1 = and_ln247; //%zext_ln247_1 = zext i16 %and_ln247 to i32
	zext_ln247_2 = rt; //%zext_ln247_2 = zext i5 %rt to i64
	reg_addr_7 = reg[zext_ln247_2]; //%reg_addr_7 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln247_2
	reg[zext_ln247_2] = zext_ln247_1; //store i32 %zext_ln247_1, i32* %reg_addr_7, align 4
	//br label %._crit_edge
}
goto state13;

state23:
reg_load = reg_addr_4; //%reg_load = load i32* %reg_addr_4, align 4
sext_ln243 = address; //%sext_ln243 = sext i16 %address to i32
add_ln243 = reg_load + sext_ln243; //%add_ln243 = add nsw i32 %reg_load, %sext_ln243
goto state24;

state24:
zext_ln243_1 = rt; //%zext_ln243_1 = zext i5 %rt to i64
reg_addr_5 = reg[zext_ln243_1]; //%reg_addr_5 = getelementptr inbounds [32 x i32]* %reg, i64 0, i64 %zext_ln243_1
reg[zext_ln243_1] = add_ln243; //store i32 %add_ln243, i32* %reg_addr_5, align 4
//br label %._crit_edge
goto state13;

state25:
pc_6_load_1 = pc_6; //%pc_6_load_1 = load i32* %pc_6
reg_addr_2 = 0; //store i32 0, i32* %reg_addr_2, align 16
icmp_ln296 = pc_6_load_1 == 0 ? 1 : 0; //%icmp_ln296 = icmp eq i32 %pc_6_load_1, 0
//br i1 %icmp_ln296, label %41, label %.preheader
if(icmp_ln296){
	icmp_ln299 = n_inst != 611 ? 1 : 0; //%icmp_ln299 = icmp ne i32 %n_inst, 611
	zext_ln299 = icmp_ln299; //%zext_ln299 = zext i1 %icmp_ln299 to i4
	//br label %42
	main_result_0 = zext_ln299;
	goto state26;
}
if(!icmp_ln296){
	n_inst_0 = n_inst;
}
goto state5;

state26:
//%main_result_0 = phi i4 [ %zext_ln299, %41 ], [ %main_result, %43 ] //%main_result_0 = phi i4 [ %zext_ln299, %41 ], [ %main_result, %43 ]
//%j_0 = phi i4 [ 0, %41 ], [ %j, %43 ] //%j_0 = phi i4 [ 0, %41 ], [ %j, %43 ]
icmp_ln300 = j_0 == 8 ? 1 : 0; //%icmp_ln300 = icmp eq i4 %j_0, -8
//%empty_10 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind //%empty_10 = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 8, i64 8, i64 8) nounwind
j = j_0 + 1; //%j = add i4 %j_0, 1
//br i1 %icmp_ln300, label %44, label %43
if(!icmp_ln300){
	zext_ln302 = j_0; //%zext_ln302 = zext i4 %j_0 to i64
	dmem_addr_3 = dmem[zext_ln302]; //%dmem_addr_3 = getelementptr inbounds [64 x i32]* %dmem, i64 0, i64 %zext_ln302
	dmem_load_1 = dmem_addr_3; //%dmem_load_1 = load i32* %dmem_addr_3, align 4
	outData_addr = outData[zext_ln302]; //%outData_addr = getelementptr [8 x i7]* @outData, i64 0, i64 %zext_ln302
	outData_load = outData_addr; //%outData_load = load i7* %outData_addr, align 1
	goto state27;
}
if(icmp_ln300){
	zext_ln300 = main_result_0; //%zext_ln300 = zext i4 %main_result_0 to i32
	return zext_ln300; //ret i32 %zext_ln300
}
goto state1;

state27:
dmem_load_1 = dmem_addr_3; //%dmem_load_1 = load i32* %dmem_addr_3, align 4
outData_load = outData_addr; //%outData_load = load i7* %outData_addr, align 1
sext_ln302 = outData_load; //%sext_ln302 = sext i7 %outData_load to i32
icmp_ln304 = dmem_load_1 != sext_ln302 ? 1 : 0; //%icmp_ln304 = icmp ne i32 %dmem_load_1, %sext_ln302
zext_ln304 = icmp_ln304; //%zext_ln304 = zext i1 %icmp_ln304 to i4
main_result = zext_ln304 + main_result_0; //%main_result = add i4 %zext_ln304, %main_result_0
n_inst_0 = 0;
main_result_0 = main_result;
//br label %42
goto state26;
}

int main(){
	printf("%lld",check());
	return 0;
}
