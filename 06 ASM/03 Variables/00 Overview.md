## Variables  

### Initializing  
You specify an identifier, size, and value

```s
count db 0x11  ; define byte (8 bits)
min dw 0x1122  ; define word (16 bits)
max dd 0x11223344  ; define double (32 bits)
amount dq 0x1122334455667788  ; define quadword (64 bits)
```

Typical flow of modifying a variable is:
1. Move it
2. Modify it
3. Store it

### Square Bracket Notation  
If you see square brackets, then this is a memory access (or lookup) or just some sort of computation  
A computed address is known as an **effective address**  
Some formats you'll see for computed addresses:

```txt
[register]  ; indirect access to a register
[variable]  ; access the value held by a variable
[register + offset]  ; adds offset to the value held by a register
[base + index*scale + offset]  ; general format for linear operations on a base value
```

```asm
; example of accessing a variable
; assume we have a variable named var

mov rax, var  ; load the memaddr associated with var into rax
mov rax, [var]  ; load the value stored at the memaddr of var into rax (so the value of var)
mov [var], rax  ; store the value of rax into memory at the address associated with var
```

```asm
; assume we have a var called myArray (represents an array)
; assume it holds int data
; assume rdi holds the index for the array of ints

mov rsi, myArray  ; point to beginning of array
mov rax, [rsi + 4]  ; store the "second" value of the array in rax, 4 bc. int
mov rax, [rsi + rdi*4]  ; gets the value at the current index in the array
```