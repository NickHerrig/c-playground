# assume i, k == x22, x24
# base array save is x25

# C while loop
while (save[i] == k)
    i += 1;

# asm while loop
Loop: 
slli x10, x22, 3 # temp x10 = i * 8 
add x10, x10, x25
ld x9, 0(x10)

bne x9, x24, Exit
addi x22, x22, 1
beq x0, x0, Loop
Exit:

