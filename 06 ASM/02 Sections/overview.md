## Sections of an ASM File  

### .data  
- a read/write section
- use it to initialize variables
- can put strings here too

```asm
section .data
    msg db "hello, world!", 0xA  ; string with a new line (0xA or 10 for newline)
    msgLen equ $ - msg
    
    ; equ is a symbolic constant (no memory allocated for it, like a getter kinda)
    ; $ is the current line's memory address
    ; msg is the memory location of "hello, world!\n"
    ; so $ - msg is the length of the msg
```

### .bss  
- uninitialized variables
- declare variables and reserve space but don't assign

```asm
section .bss
    userInput resb 20  ; reserve bytes (20 bytes) for the `userInput` variable
```

### .rodata  
- used for constants (values that aren't modified)
- can be used for strings

```asm
section .rodata
    pi dq 3.14  ; dq = define quadword (64-bit value)
```

### .text  
- executable machine code