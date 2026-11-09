## Address Computation Examples  
```txt
Memory                  
Address         Value   
0x100           0xFF    
0x104           0xAB    
0x108           0x13    
0x10C           0x11    
```

```txt
Registers
Register        Value
rax             0x100
rcx             0x1
rdx             0x3
```

```txt
Ex: Given the info above, determine how each of the following are evaluated.  
1. rax  
   Gets the value at rax (0x100)
2. [0x104]  
    Gets the value at memaddr 0x104 (0xAB). Brackets dereference 0x104 to get the value stored at 0x104.
3. 0x108  
    No memlookup. This is an immediate value. Evaluates to 0x108.
4. [rax + 4]  
    Evaluates to 0xAB because rax=0x100, so 0x100 + 0x004 = 0x104. Then memory lookup at 0x104 because of the brackets.
5. [rax + rdx + 9]  
    Evaluates to 0x11.
    rax = 0x100
    rdx = 0x003
    => rax + rdx = 0x103
    => rax + rdx + 9 = 0x10C
    => [rax + rdx + 9] = 0x11 (perform memlookup at 0x10C)
6. [rax + rdx * 4]  
    Evaluates to 0x11
    rax = 0x100
    rdx = 0x003
    => rdx * 4 = 0x00C
    => rax + rdx * 4 = 0x10C
    => [rax + rdx * 4] = 0x11
```