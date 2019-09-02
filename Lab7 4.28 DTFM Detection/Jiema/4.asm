.mmregs
stacksize .set 256 ; 堆栈尺寸
stack .usect ".MYSTACK",stacksize ; 堆栈空间
.data
.bss NUMERA,1
.bss DENOM,1
.bss QUOT,1
.bss ARIT,1
.bss TEMSGN,1
.text
start:
stm #stack+stacksize,SP ; 初始化堆栈指针
nop
nop
next:
call DIV
b next
; 除法子程序
; 输入：NUMERA 被除数，DENOM 除数
; 输出：QUOT 商，ARIT 余数
DIV:ld #NUMERA,dp
ld @NUMERA,T ; 将被除数装入T 寄存器
mpy @DENOM,A ; 除数与被除数相乘，结果放入A 寄存器
ld @DENOM,B ; 将除数装入B 寄存器的低16 位
abs B ; 求绝对值
stl B,@DENOM ; 保存B 寄存器的低16 位
ld @NUMERA,B ; 将被除数装入B 寄存器低16 位
abs B ; 求绝对值
rpt #15 ; 重复下条subc 指令16 次
subc @DENOM,B ; 完成除法运算
bcd done,AGT ; 延时条转，先执行下面两条指令，然后判断A,
; 若A>0 则跳转到标号done,结束除法运算
stl B,@QUOT ; 保存商（B 寄存器的低16 位）
sth B,@ARIT ; 保存余数（B 寄存器的高16 位）
xor B ; 若两数相乘的结果为负，则商也应为负
; 先将B 寄存器清0
sub @QUOT,B ; 将商反号
stl B,@QUOT ; 存回反号后的商值
done:
ret
