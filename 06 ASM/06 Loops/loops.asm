section .data
    msg     db "Hello, world!", 10
    msg_len equ $ - msg

section .text
    global _start

_start:
    mov r12, 5  ; r12 will be our loop counter

print_loop:
    ; write(1, stdout, msg, msg_len)
    mov rax, 1
    mov rdi, 1
    mov rsi, msg
    mov rdx, msg_len
    syscall

    ; decrement our counter then jump
    dec r12  ; decrease r12 by 1
    cmp r12, 0  ; compare r12 to 0, not necesary as dec will mark the zero flag once r12 reaches 0
    jne print_loop  ; jump to print_loop if r12 != 0

    ; exit(0)
    mov rax, 60
    xor rdi, rdi
    syscall