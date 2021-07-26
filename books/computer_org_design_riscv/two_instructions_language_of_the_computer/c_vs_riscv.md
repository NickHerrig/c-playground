// C Program
a = b + c;
d = a - e;

// RISC-V Assembly Program 
add a, b, c
sub d, a, e 

---------------------------

// C Program
f = (g + h) - (i + j);

// RISC-V Assembly Program 

add t0, g, h
add t1, i, j
sub f, t0, t1
