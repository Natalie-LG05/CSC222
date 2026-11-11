; conditionals.asm
; reminder to run:
;   nasm -f elf64 conditionals.asm -o conditionals.o
;   ld conditionals.o -o conditionals
;   ./conditionals

section .data
    msg_equal   db "Values are equal", 10
    len_equal   equ $ - msg_equal

    msg_noteq   db "Values are NOT equal", 10
    len_noteq   equ $ - msg_noteq

section .text
    global _start

_start:
    ; moving some values to make a comparison
    mov rax, 10
    ; mov rax, 1204647
    mov rbx, 10

    cmp rax, rbx  ; rax - rbx (if values are equal, then zero flag will be 1)
    je equal_case  ; jump if zero flag is 1
    ; if zero flag is not 1, continues on to next line

not_equal_case:
    ; write(1, stdout, msg_noteq, len_noteq)
    mov rax, 1
    mov rdi, 1
    mov rsi, msg_noteq
    mov rdx, len_noteq
    syscall
    jmp done
equal_case:
    ; write(1, stdout, msg_equal, len_equal)
    mov rax, 1
    mov rdi, 1
    mov rsi, msg_equal
    mov rdx, len_equal
    syscall

done:
    ; exit(0)
    mov rax, 60  ; syscall for exit
    xor rdi, rdi  ; usually see this instead of mov 0 into rdi
    syscall