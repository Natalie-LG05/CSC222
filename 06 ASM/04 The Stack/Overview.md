## The Stack  
Def: The stack is a region of memory used for temporary storage.  
- It is a LIFO (Last in First Out) structure
- It's primarily used to manage:
  - function calls
  - local variables
  - saved registers
  - return addresses
  - and more

### Example:  
Note: The stack grows downwards. In this example, we are working with 4 byte values (ints).  

`rsp` always points at "the top of the stack" which is actually the bottom since it grows downwards.  
```
Value       Addr
10          0x10C
20          0x108
15          0x104
12          0x100
```

1. `mov rax, rsp` - Copies 0x100 into rax  
2. `mov rax, [rsp]` - Copies 12 into rax
3. `mov rax, [rsp + 4]` - Copies 15 into rax
4. `mov rax, [rsp + 8]` - Copies 20 into rax
5. `add rsp, 4` then `mov rax, [rsp]` - adds 4 to the stack pointers (pops a value), then moves 15 into rax

## Push and Pop  
- The push instruction pushes a value onto the stack
- Push subtracts the value 8 from the stack pointer (the stack typically uses 8 bytes per "spot")
- The pop instruction removes a value from the stack

## An example  
Let's assume we have rsp pointing at memory location 0x10C.   
Given the following commands, determine the value of rax and rps.  

`push 10`
`push 12`
`push 5`
`pop rax`
`pop rbx`
`push 8`

Solution:   
When we started rsp = 0x10C.   
We push 10, now rsp is 0x108.  
We push 12, rsp is now 0x104.   
We push 5, rsp is now 0x100.  
We pop into rax, so rsp is now 0x104 and rax is now 5.  
We pop into rbx, so rsp is now 0x108 and rbx is now 12.  
We push 8, rsp is now 0x104.  
=> rax holds 5, rsp holds 0x104, rbx holds 12 `<--` solution  
