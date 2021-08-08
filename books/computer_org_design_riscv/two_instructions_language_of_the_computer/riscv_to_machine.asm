
# C Program
A[30] = h + A[30] + 1;

# Assembly Program
ld, x9, 240(x10)
add x9, x21, x9
addi x9, x9, 1
sd x9, 240(x10)

immediate rs1 funct3 rd opcode
240       10  3      9  3 
funct7 rs2 rs1 funct3 rd opcode 
0      9   21  0      9  51 
immediate rs1 funct3 rd opcode
1         9   0      9  19
immediate rs2 rs1 funct3 immediate opcode
7         0   10  3      16        35
