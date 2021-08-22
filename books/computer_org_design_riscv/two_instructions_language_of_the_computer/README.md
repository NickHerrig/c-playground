# Chapter 2 Notes

*Instruction Set*: The vocabulary of commands understood by a given architecture.

*Stored-program Concept*: The idea that instructions and data of many types can be stored in memory as 
numbers and this be easy to to change, leading to the stored-program computer.

*doubleword*: Another natural unit of access in a computer, usually a group of 64 bits; corresponds
to the size of a register in the RISC-V architecture.

*word*: A natural unit of access in a computer, usually a group of 32 bits. 

*Data Transfer Instructions*: A command that moves data between memory and registers.

*address*: A value used to delineate the location of a specific data element with a memory array.

*Alignment Restrictoin*: A requirement that data be aligned in memory on natural boundaries.

*Instruction Format*: A form of representation of an instruction composed of 
fields of binary numbers.

*Machine Language*: Binary represenation used for communication within a 
computer system.

# RISC-V Fields
- opcode(7 bits): Basic op of the instruction.
- rd(5 bits): the destination register. 
- funct3(3 bits): an additional opt code field.
- rs1(5 bits): The first register source operand.
- rs2(5 bits): the second register source operand. 
- fucnt7(7 bits): an additional opcode field.

*AND*: calculates 1 if there is a one in both operands
*OR*: calculates 1 if there is a one in either operands
*NOT*: calculates the inverse of the bits
*XOR*: calculates 1 if values are same, 0 if different

*conditional branch*: instruction that tests a value, transfer control to new addr.

