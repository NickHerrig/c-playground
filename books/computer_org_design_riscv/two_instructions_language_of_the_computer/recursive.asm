
// The C procedure
// long long int fact (long long int n)
// {
//     if (n < 1) return (1);
//         else return (n * fact(n − 1));
// }

// n  == x10
// label == fact 

//creating the stack for the procedure

fact:
    addi sp, sp, -16 // make stack pointer fit 2 8 bit values 
    sd x1, 8(sp)
    sd x10, 0(sp)

    addi x5, x10, -1
    bge x5, x0, L1

    addi x10, 0, 1 // return 1
    addi sp, sp, 16 // pop the stack (2 values)
    jalr x0, 0(x1) // return to caller

L1:
    addi x10, x10, -1
    jal x1, fact

    addi x6, x10, 0
    ld x10, 0(sp)
    ld x1, 8(sp)
    addi sp, sp, 16
    
    mul x10, x10, x6
    jalr x0, 0(x1)
