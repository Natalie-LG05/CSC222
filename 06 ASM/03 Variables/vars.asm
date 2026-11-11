extern print_rax
section .data
    myVar dd 10  ; 32 bit value for int 10

section .bss
    temp resd 1  ; reserve space for a 1 32 bit value (just an example of .bss section)

section .text
    global _start

_start:
    ; print rax value
    mov rax, [myVar]
    call print_rax

    ; modifying a variable (typical flow)
    mov rax, [myVar]  ; take the value from memory
    add rax, 5  ; add 5 to it
    mov [myVar], rax  ; put it back

    ; print rax value
    mov rax, [myVar]
    call print_rax

    ; exit(0)
    mov rax, 60
    xor rdi, rdi
    syscall