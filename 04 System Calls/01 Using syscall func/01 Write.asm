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
    ;tbd