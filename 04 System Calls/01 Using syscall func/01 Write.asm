; some sample asm for writing hello
; x86-64 NASM (intel syntax)

; read-only data section 
; for strings and constants
section .rodata
greeting:           ; this is the label for the var
    db "hello", 10  ; db for define byte
                    ; 10 for \n
                
; section for executable machine code
section .text
global _start       ; export _start for the linker to know where the entry point is

_start:
    ; for the write syscall
    mov     rax, 1  ; 1 means write syscall
    mov     rdi, 1  ; 1 here means standard output
                    ; 1 is the file descriptor for stdout
    mov     rsi, greeting  ; in C this is buf = &greeting
    mov     rdx, 6  ; size of 6
    syscall

    ; the exit syscall
    mov     rax, 60  ; 60 means exit syscall
    mov     rdi, 0   ; error code of 0 for success
    syscall

; How do we build and run?
; 1. Install nasm
;       - run `sudo apt update`
;       - run `sudo apt install nasm`
; 2. Build With
;       nasm -f elf64 "01 Write.asm" -o hello.o
;       ld hello.o -o hello
; 3. Run with ./hello