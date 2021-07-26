// Assume that A is an array of 100 doublewords
// h regs == x21
// Assume Base Addr of A is x22


// C Program
A[12] = h + A[8];

// RSIC-V Assembly Program
ld x9, 64(x22) // load memory addr 8 to temp reg x9 from base x22
add x9, x21, x9 // add h and A[8] store in temp
sd x9, 96(x22) // store reg x9 in memory A[12]
