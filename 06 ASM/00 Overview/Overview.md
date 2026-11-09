## Assembly Overview  
### Common Instruction Sets  

- Intel x86-64
  - most windows machines
  - we will be doing x86-64 (AMD 64) with NASM which uses **System V AMD64** calling conventions
- ARM
  - most newer macs use this
  - some windows machines
  - smartphones and tablets use this
- RISC-V
  - Reduced Instruction Set Computers - Five

### Registers

There are 16 general purpose registers.  
Each holds 64 bits.  
The table below shows the number of bits being referenced within each register.  
```
------------------------------------------------------------------------
Base    All       Lower   Lower    Upper 8     Lower 8     Description   
Label   64 bits   32      16       of Low16    of Low16
------------------------------------------------------------------------
A       RAX       EAX     AX       AH          AL          Accumulator
B       RBX       EBX     BX       BH          BL          Base
C       RCX       ECX     CX       CH          CL          Counter
D       RDX       EDX     DX       DH          DL          Data

SI      RSI       ESI     SI                   SIL         Source Index
DI      RDI       EDI     DI                   DIL         Destination Index
BP      RBP       EBP     BP                   BPL         Base Pointer
SP      RSP       ESP     SP                   SPL         Stack Pointer

8       R8        R8D     R8W                  R8B         General Use
.
.
.
15      R15       R15D    R15W                 R15B
```

### Caller-Saved vs. Callee Saved

These describe who is responsible for preserving a register's value across a function call  

- **Caller-Saved**: the function that is being called is free to overwrite these
- **Callee-Saved**: the function that is being called has to leave those values intact

The function doing the calling of another function can rely on 
callee-saved registers to survive that function call, but can assume 
caller-saved registers are destroyed

### Register Convention  

```
Register    Convention

RAX         Accumulator (return value)
RBX         Callee-saved register
RCX         4th arg
RDX         3rd arg

RSI         2nd arg
RDI         1st arg
RSP         stack pointer
RBP         base pointer

R8          5th arg
R9          6th arg
R10-R11     temp caller caved values
R12-R15     general use/callee-saved
```