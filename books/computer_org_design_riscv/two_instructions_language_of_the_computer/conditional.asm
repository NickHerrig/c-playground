#f, g, h, i, j == x19 - x23


# C Program

if (i == j) f = g + h;
else f = g - h;

# Assembly
bne x22, x23, Else 
add x19, x20, x21
beq x0, x0, Exit #Unconditional branch, always equal 
Else:sub x19, x20, x21
Exit:
