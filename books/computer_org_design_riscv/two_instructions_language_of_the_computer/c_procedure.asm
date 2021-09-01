
// The C procedure
//  long long int leaf_example (long long int g, long long
//       int h, long long int i, long long int j)
//  {
//       long long int f;
//       f = (g + h) − (i + j);
//       return f; 
//  }

// g, h, i, j, f  == x10, x11, x12, x13, x20
// label == leaf_example

//creating the stack for the procedure
addi sp, sp, -24 // make stack pointer fit 3 values
sd x5, 16(sp)
sd x6, 8(sp)
sd x20, 0(sp)

// the procedure
add x5, x10, x11
add x6, x12 x13
sub x20, x5, x6

//  to return it copy into param register
addi x10, x20, 0

// before returning, restore stack
ld x20, 0(sp)
ld x6, 8(sp)
ld x5, 16(sp)
addi sp, sp, 24

// branch back to caller
jalr x0, 0(x1)


x5−x7 and x28−x31: 
temporary registers that are not preserved by the callee (called procedure) on a procedure call
x8−x9 and x18−x27: 
saved registers that must be preserved on a procedure call (if used, the callee saves and restores them)
