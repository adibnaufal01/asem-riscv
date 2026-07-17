#define PRV_S 1
#define PRV_U 0
#define MSTATUS_MPP 0x00001800
#if __riscv_xlen == 64
  #define LREG ld
  #define SREG sd
  #define LREGU lwu
  #define REGBYTES 8
  #define FMV fmv.d.x
#else
  #define LREG lw
  #define LREGU lw
  #define SREG sw
  #define REGBYTES 4
  #define FMV fmv.w.x
#endif


# From here 
.align 2
.globl custom_trap_handler_s
custom_trap_handler_s:
  addi sp, sp, -40*REGBYTES

  SREG x1, 1*REGBYTES(sp)
  SREG x3, 3*REGBYTES(sp)
  SREG x4, 4*REGBYTES(sp)
  SREG x5, 5*REGBYTES(sp)
  SREG x6, 6*REGBYTES(sp)
  SREG x7, 7*REGBYTES(sp)
  SREG x8, 8*REGBYTES(sp)
  SREG x9, 9*REGBYTES(sp)
  SREG x10, 10*REGBYTES(sp)
  SREG x11, 11*REGBYTES(sp)
  SREG x12, 12*REGBYTES(sp)
  SREG x13, 13*REGBYTES(sp)
  SREG x14, 14*REGBYTES(sp)
  SREG x15, 15*REGBYTES(sp)
  SREG x16, 16*REGBYTES(sp)
  SREG x17, 17*REGBYTES(sp)
  SREG x18, 18*REGBYTES(sp)
  SREG x19, 19*REGBYTES(sp)
  SREG x20, 20*REGBYTES(sp)
  SREG x21, 21*REGBYTES(sp)
  SREG x22, 22*REGBYTES(sp)
  SREG x23, 23*REGBYTES(sp)
  SREG x24, 24*REGBYTES(sp)
  SREG x25, 25*REGBYTES(sp)
  SREG x26, 26*REGBYTES(sp)
  SREG x27, 27*REGBYTES(sp)
  SREG x28, 28*REGBYTES(sp)
  SREG x29, 29*REGBYTES(sp)
  SREG x30, 30*REGBYTES(sp)
  SREG x31, 31*REGBYTES(sp)
  csrr a0, sstatus
  csrr a0, sepc
  csrr a0, stvec
  csrr a0, scause 
  li a2, 0
  beq a0, a2, 1f
  li a2, 1
  beq a0, a2, 1f
  csrr a1, sepc   
  # li a2, 2
  # beq a0, a2, inst32_s
1:
  lh a2, (a1)
  # check the lower 2 bits to see if the instruction is 32-bit or 16-bit.
  andi a2, a2, 0x3;
  li t0, 0x3
  bne a2,t0,inst16_s
inst32_s:                           # is 32-bit instruction then increment by 4
  addi a1,a1,0x4
  beqz x0,1f
inst16_s:
  addi a1,a1,0x2                  # is 16-bit instruction then increment by 2
1: 
  csrw sepc, a1                   # point mepc to the next instruction.


  LREG x1, 1*REGBYTES(sp)
  LREG x3, 3*REGBYTES(sp)
  LREG x4, 4*REGBYTES(sp)
  LREG x5, 5*REGBYTES(sp)
  LREG x6, 6*REGBYTES(sp)
  LREG x7, 7*REGBYTES(sp)
  LREG x8, 8*REGBYTES(sp)
  LREG x9, 9*REGBYTES(sp)
  LREG x10, 10*REGBYTES(sp)
  LREG x11, 11*REGBYTES(sp)
  LREG x12, 12*REGBYTES(sp)
  LREG x13, 13*REGBYTES(sp)
  LREG x14, 14*REGBYTES(sp)
  LREG x15, 15*REGBYTES(sp)
  LREG x16, 16*REGBYTES(sp)
  LREG x17, 17*REGBYTES(sp)
  LREG x18, 18*REGBYTES(sp)
  LREG x19, 19*REGBYTES(sp)
  LREG x20, 20*REGBYTES(sp)
  LREG x21, 21*REGBYTES(sp)
  LREG x22, 22*REGBYTES(sp)
  LREG x23, 23*REGBYTES(sp)
  LREG x24, 24*REGBYTES(sp)
  LREG x25, 25*REGBYTES(sp)
  LREG x26, 26*REGBYTES(sp)
  LREG x27, 27*REGBYTES(sp)
  LREG x28, 28*REGBYTES(sp)
  LREG x29, 29*REGBYTES(sp)
  LREG x30, 30*REGBYTES(sp)
  LREG x31, 31*REGBYTES(sp)
  addi sp, sp, 40*REGBYTES
  sret

.align 2
.globl custom_trap_handler
custom_trap_handler:
  addi sp, sp, -40*REGBYTES

  SREG x1, 1*REGBYTES(sp)
  SREG x3, 3*REGBYTES(sp)
  SREG x4, 4*REGBYTES(sp)
  SREG x5, 5*REGBYTES(sp)
  SREG x6, 6*REGBYTES(sp)
  SREG x7, 7*REGBYTES(sp)
  SREG x8, 8*REGBYTES(sp)
  SREG x9, 9*REGBYTES(sp)
  SREG x10, 10*REGBYTES(sp)
  SREG x11, 11*REGBYTES(sp)
  SREG x12, 12*REGBYTES(sp)
  SREG x13, 13*REGBYTES(sp)
  SREG x14, 14*REGBYTES(sp)
  SREG x15, 15*REGBYTES(sp)
  SREG x16, 16*REGBYTES(sp)
  SREG x17, 17*REGBYTES(sp)
  SREG x18, 18*REGBYTES(sp)
  SREG x19, 19*REGBYTES(sp)
  SREG x20, 20*REGBYTES(sp)
  SREG x21, 21*REGBYTES(sp)
  SREG x22, 22*REGBYTES(sp)
  SREG x23, 23*REGBYTES(sp)
  SREG x24, 24*REGBYTES(sp)
  SREG x25, 25*REGBYTES(sp)
  SREG x26, 26*REGBYTES(sp)
  SREG x27, 27*REGBYTES(sp)
  SREG x28, 28*REGBYTES(sp)
  SREG x29, 29*REGBYTES(sp)
  SREG x30, 30*REGBYTES(sp)
  SREG x31, 31*REGBYTES(sp)
  csrr a0, mstatus
  csrr a0, mepc
  csrr a0, mtvec
  csrr a0, mcause 
  li a2, 0
  beq a0, a2, 1f
  li a2, 1
  beq a0, a2, 1f
  csrr a1, mepc   
  # li a2, 2
  # beq a0, a2, inst32
1:
  lh a2, (a1)
  # check the lower 2 bits to see if the instruction is 32-bit or 16-bit.
  andi a2, a2, 0x3;
  li t0, 0x3
  bne a2,t0,inst16
inst32:                           # is 32-bit instruction then increment by 4
  addi a1,a1,0x4
  beqz x0,1f
inst16:
  addi a1,a1,0x2                  # is 16-bit instruction then increment by 2
1: 
  csrw mepc, a1                   # point mepc to the next instruction.


  LREG x1, 1*REGBYTES(sp)
  LREG x3, 3*REGBYTES(sp)
  LREG x4, 4*REGBYTES(sp)
  LREG x5, 5*REGBYTES(sp)
  LREG x6, 6*REGBYTES(sp)
  LREG x7, 7*REGBYTES(sp)
  LREG x8, 8*REGBYTES(sp)
  LREG x9, 9*REGBYTES(sp)
  LREG x10, 10*REGBYTES(sp)
  LREG x11, 11*REGBYTES(sp)
  LREG x12, 12*REGBYTES(sp)
  LREG x13, 13*REGBYTES(sp)
  LREG x14, 14*REGBYTES(sp)
  LREG x15, 15*REGBYTES(sp)
  LREG x16, 16*REGBYTES(sp)
  LREG x17, 17*REGBYTES(sp)
  LREG x18, 18*REGBYTES(sp)
  LREG x19, 19*REGBYTES(sp)
  LREG x20, 20*REGBYTES(sp)
  LREG x21, 21*REGBYTES(sp)
  LREG x22, 22*REGBYTES(sp)
  LREG x23, 23*REGBYTES(sp)
  LREG x24, 24*REGBYTES(sp)
  LREG x25, 25*REGBYTES(sp)
  LREG x26, 26*REGBYTES(sp)
  LREG x27, 27*REGBYTES(sp)
  LREG x28, 28*REGBYTES(sp)
  LREG x29, 29*REGBYTES(sp)
  LREG x30, 30*REGBYTES(sp)
  LREG x31, 31*REGBYTES(sp)
  addi sp, sp, 40*REGBYTES
  mret


# To here
# Instructions to be inserted before and after the program
# Possible setups inside this macro can be
#   1. Privilege mode change
#   2. PMP Configuration - csrw pmpcfg0 xxx, csrw pmpcfg1 xxx

############################
### Exception generation ###
############################

# Instruction address misaligned
.macro ecause00
.endm

# Instruction access fault
.macro ecause01
li x15, -10
jr x15
.endm

# Illegal Instruction
.macro ecause02
.word 0x01239239812981
.endm

# Breakpoint
.macro ecause03
ebreak
.endm

# Load address misaligned
.macro ecause04
LREG x0, (REGBYTES-2)(sp)
.endm

# Load access fault
.macro ecause05
.endm

# Store/AMO address misaligned
.macro ecause06
SREG x0, (REGBYTES-2)(sp)
.endm

# Store/AMO access fault
.macro ecause07
.endm

# Env call from U-mode
.macro ecause08
.endm

# Env call from S-mode
.macro ecause09
.endm

# Reserved
.macro ecause10
.endm

# Env call from M-mode
.macro ecause11
ecall
.endm

# Instruction page fault
.macro ecause12
.endm

# Load page fault
.macro ecause13
.endm

# Reserved
.macro ecause14
.endm

# Store/AMO page fault
.macro ecause15
.endm

# Env call 
.macro switchmodes
ecall
.endm

.macro test_entry_macro
.endm
.macro pre_program_macro
add x0,x0,x0
 .endm
.macro post_program_macro
li gp,1; 
 sw gp, tohost, t5;
 fence.i;
 li t6,  0x20000; 
 la t5, begin_signature; 
 sw t5, 0(t6); 
 la t5, end_signature 
 sw t5, 8(t6); 
 sw t5,  12(t6);
 .endm
.macro pre_branch_macro
add x0,x0,x0
 .endm
.macro post_branch_macro
add x0,x0,x0
 .endm

.macro test_pass_macro
la      sp, begin_signature
addi    sp, sp, 2*REGBYTES
li      t1, 0xfffff
SREG    t1, 0*REGBYTES(sp)
.endm

.macro test_fail_macro
.endm

# User defined functions to be called
    
.globl func1        
func1:
addi sp, sp, -20*REGBYTES;SREG t0, 5*REGBYTES(sp);SREG t1, 6*REGBYTES(sp);SREG t2, 7*REGBYTES(sp);SREG s1, 9*REGBYTES(sp);SREG s2, 18*REGBYTES(sp);SREG s3, 19*REGBYTES(sp);SREG t6, 31*REGBYTES(sp);SREG a1, 11*REGBYTES(sp);SREG s5, 21*REGBYTES(sp); li t2, 0xabee;  addi s1, t2, 16;  addi s2, s1, 16;  addi s3, s2, 16;la t0, begin_signature;addi t1, t0, 2047;addi t1,t1,1;li t6, 0;li a1, 0x8;li s5, 2047; addi s5, s5, 1; slli s5, s5, 1;loop_page:sh t2,0(t0); sh s1,16(t0); sh s2,48(t0); sh t2,64(t0); sh s1,80(t0); sh s2,112(t0); sh t2,128(t0); sh s1,144(t0); sh s2,176(t0); sh t2,192(t0); sh s1,208(t0); sh s2,240(t0); sh t2,256(t0); sh s1,272(t0); sh s2,304(t0); sh t2,320(t0); sh s1,336(t0); sh s2,368(t0); sh t2,384(t0); sh s1,400(t0); sh s2,432(t0); sh t2,448(t0); sh s1,464(t0); sh s2,496(t0); sh t2,512(t0); sh s1,528(t0); sh s2,560(t0); sh t2,576(t0); sh s1,592(t0); sh s2,624(t0); sh t2,640(t0); sh s1,656(t0); sh s2,688(t0); sh t2,704(t0); sh s1,720(t0); sh s2,752(t0); sh t2,768(t0); sh s1,784(t0); sh s2,816(t0); sh t2,832(t0); sh s1,848(t0); sh s2,880(t0); sh t2,896(t0); sh s1,912(t0); sh s2,944(t0); sh t2,960(t0); sh s1,976(t0); sh s2,1008(t0); sh t2,1024(t0); sh s1,1040(t0); sh s2,1072(t0); sh t2,1088(t0); sh s1,1104(t0); sh s2,1136(t0); sh t2,1152(t0); sh s1,1168(t0); sh s2,1200(t0); sh t2,1216(t0); sh s1,1232(t0); sh s2,1264(t0); sh t2,1280(t0); sh s1,1296(t0); sh s2,1328(t0); sh t2,1344(t0); sh s1,1360(t0); sh s2,1392(t0); sh t2,1408(t0); sh s1,1424(t0); sh s2,1456(t0); sh t2,1472(t0); sh s1,1488(t0); sh s2,1520(t0); sh t2,1536(t0); sh s1,1552(t0); sh s2,1584(t0); sh t2,1600(t0); sh s1,1616(t0); sh s2,1648(t0); sh t2,1664(t0); sh s1,1680(t0); sh s2,1712(t0); sh t2,1728(t0); sh s1,1744(t0); sh s2,1776(t0); sh t2,1792(t0); sh s1,1808(t0); sh s2,1840(t0); sh t2,1856(t0); sh s1,1872(t0); sh s2,1904(t0); sh t2,1920(t0); sh s1,1936(t0); sh s2,1968(t0); sh t2,1984(t0); sh s1,2000(t0); sh s2,2032(t0); sh t2,0(t1); sh s1,16(t1); sh s2,48(t1); sh t2,64(t1); sh s1,80(t1); sh s2,112(t1); sh t2,128(t1); sh s1,144(t1); sh s2,176(t1); sh t2,192(t1); sh s1,208(t1); sh s2,240(t1); sh t2,256(t1); sh s1,272(t1); sh s2,304(t1); sh t2,320(t1); sh s1,336(t1); sh s2,368(t1); sh t2,384(t1); sh s1,400(t1); sh s2,432(t1); sh t2,448(t1); sh s1,464(t1); sh s2,496(t1); sh t2,512(t1); sh s1,528(t1); sh s2,560(t1); sh t2,576(t1); sh s1,592(t1); sh s2,624(t1); sh t2,640(t1); sh s1,656(t1); sh s2,688(t1); sh t2,704(t1); sh s1,720(t1); sh s2,752(t1); sh t2,768(t1); sh s1,784(t1); sh s2,816(t1); sh t2,832(t1); sh s1,848(t1); sh s2,880(t1); sh t2,896(t1); sh s1,912(t1); sh s2,944(t1); sh t2,960(t1); sh s1,976(t1); sh s2,1008(t1); sh t2,1024(t1); sh s1,1040(t1); sh s2,1072(t1); sh t2,1088(t1); sh s1,1104(t1); sh s2,1136(t1); sh t2,1152(t1); sh s1,1168(t1); sh s2,1200(t1); sh t2,1216(t1); sh s1,1232(t1); sh s2,1264(t1); sh t2,1280(t1); sh s1,1296(t1); sh s2,1328(t1); sh t2,1344(t1); sh s1,1360(t1); sh s2,1392(t1); sh t2,1408(t1); sh s1,1424(t1); sh s2,1456(t1); sh t2,1472(t1); sh s1,1488(t1); sh s2,1520(t1); sh t2,1536(t1); sh s1,1552(t1); sh s2,1584(t1); sh t2,1600(t1); sh s1,1616(t1); sh s2,1648(t1); sh t2,1664(t1); sh s1,1680(t1); sh s2,1712(t1); sh t2,1728(t1); sh s1,1744(t1); sh s2,1776(t1); sh t2,1792(t1); sh s1,1808(t1); sh s2,1840(t1); sh t2,1856(t1); sh s1,1872(t1); sh s2,1904(t1); sh t2,1920(t1); sh s1,1936(t1); sh s2,1968(t1); sh t2,1984(t1); sh s1,2000(t1); sh s2,2032(t1);  add t0,t0,s5;  add t1,t1,s5;  addi t6, t6, 1;  bne t6, a1, loop_page; li t6,0; li a1, 0x10; loop_page2:ld t2,0(t0); ld t2,64(t0); ld t2,128(t0); ld t2,192(t0); ld t2,256(t0); ld t2,320(t0); ld t2,384(t0); ld t2,448(t0); ld t2,512(t0); ld t2,576(t0); ld t2,640(t0); ld t2,704(t0); ld t2,768(t0); ld t2,832(t0); ld t2,896(t0); ld t2,960(t0); ld t2,1024(t0); ld t2,1088(t0); ld t2,1152(t0); ld t2,1216(t0); ld t2,1280(t0); ld t2,1344(t0); ld t2,1408(t0); ld t2,1472(t0); ld t2,1536(t0); ld t2,1600(t0); ld t2,1664(t0); ld t2,1728(t0); ld t2,1792(t0); ld t2,1856(t0); ld t2,1920(t0); ld t2,1984(t0);ld t2,0(t1); ld t2,64(t1); ld t2,128(t1); ld t2,192(t1); ld t2,256(t1); ld t2,320(t1); ld t2,384(t1); ld t2,448(t1); ld t2,512(t1); ld t2,576(t1); ld t2,640(t1); ld t2,704(t1); ld t2,768(t1); ld t2,832(t1); ld t2,896(t1); ld t2,960(t1); ld t2,1024(t1); ld t2,1088(t1); ld t2,1152(t1); ld t2,1216(t1); ld t2,1280(t1); ld t2,1344(t1); ld t2,1408(t1); ld t2,1472(t1); ld t2,1536(t1); ld t2,1600(t1); ld t2,1664(t1); ld t2,1728(t1); ld t2,1792(t1); ld t2,1856(t1); ld t2,1920(t1); ld t2,1984(t1);  add t0,t0,s5;  add t1,t1,s5;  addi t6, t6, 1;  bne t6, a1, loop_page2; LREG t0, 5*REGBYTES(sp);LREG t1, 6*REGBYTES(sp);LREG t2, 7*REGBYTES(sp);LREG s1, 9*REGBYTES(sp);LREG s2, 18*REGBYTES(sp);LREG s3, 19*REGBYTES(sp);LREG t6, 31*REGBYTES(sp);LREG a1, 11*REGBYTES(sp);LREG s5, 21*REGBYTES(sp);addi sp, sp, 20*REGBYTES;
  ret