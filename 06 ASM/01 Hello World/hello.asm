section .rodata  ; read only data section\
greeting:  ; label for "hello" (like a variable)
    db "hello", 10

section .text  ; executable machine code
global _start  ; export _start for the linker to use as the entry point
_start:
    ; write(stdout, "hello\n", sizeof("hello\n")
    ; write(1, greeting, 6)
    mov rax, 1  ; syscall for write is 1, move into rax
    mov rdi, 1  ; file descriptor for stdout
    ;mov rsi, greeting  ; memaddr for "hello\n"
    lea rsi, [rel greeting]
    mov rdx, 6  ; length of "hello\n"
    syscall

    ; exit(0)
    mov rax, 60  ; syscall for exit
    mov rdi, 0  ; exit code 0
    syscall

; to run:
; nasm -f elf64 hello.asm -o hello.o
; ld hello.o -o hello