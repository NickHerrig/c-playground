# Eight Great Ideads
- Design for Moore's Law
- Use Abstractions to Simplify Design
- Make the Common Case Fast
- Performance via Parallelism
- Performance via Pipelining
- Performance via Prediction
- Hierarchy of Memories
- Dependability via Redundancy

# Below Your Program
- compilers: high-level languages to assembly language.
- binary digit or bit
- instruction == assembly languages
- binary == machine languages
- assemblers: translates assembly instructions to binary 

# Under the Covers 
*BIG PICTURE*:
- input
- output
- memory
- datapath
- control 

## The Box
- datapath: component of processor that performs arithmetic ops
- control: component of processor that commands datapath, memory and I/O
- memory: storage area in which programs are kept when running 
- DRAM: dynamic random access memory, Memory built as an itegrated circuit.
  it provides random access to any location at same speed.
- SRAM: static random access memory, faster and less dense than DRAM. 
- Cache Memory: a small, fast memory that acts as a buffer for a slow, larger memory
- ISA: instruction set architecture, abstract interface between hardware and 
  lowest-level software. instructions, registers, memory access, I/O, etc. 
- ABI: Application Binary Interface, the user portion of the instruction set plus 
  the operating system interfaces used by programmers

*BIG PICTURE*: 
Both hardware and software consist of hierarchical layers using abstraction, each layer 
hides details from the layer above ISA is the interface between the hardware and 
the low level software. this enables many differing implementations.  

## A safe place for data 
Semiconductor DRAM memory, flash memory, and disk storage differ significantly. 
For each technology, list its volatility, approximate relative access time, 
and approximate relative cost compared to DRAM.
DRAM: volatile, very fast 50 nanoseconds, $5-10 per GB
FLASH: non-volatile, 5-50 microseconds, $.75-1 per GB
DISK: non-volatile, 5-20 milliseconds, $0.05-0.10 per GB

# Technologies for Building Processors and Memory 
- transitor: Simple an on/off switch controlled by electricity

# CPU Performance
Time = Seconds/Program = Instructions/Program  * Clock cycles/Instruction * Seconds/Clock cycle

##Performance Components
 | Component | Unit |
 | --------  | ----- |
 | CPU execution time for a program | Seconds for the program |
 | Instruction Count | Instructions executed for a program |
 | Clock cycles per instruction (CPI) | average clock cycles per instruction |
 | Clock cycle time | Seconds per clock cycle | 



