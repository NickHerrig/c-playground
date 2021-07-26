// Assume that A is an array of 100 doublewords
// g, h regs == x20, x21
// Assume Base Addr is x22


// C Program
g = h + A[8];

// RSIC-V Assembly Program
ld x9, 8(x22) // load memory addr 8 to reg x9 from base x22
add x20, x21, x9

