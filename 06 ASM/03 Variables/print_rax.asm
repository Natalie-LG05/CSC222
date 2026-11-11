; ------------------------------------------------------------
; print_rax.asm
;
; Exports a function named `print_rax`
; Caller places an *unsigned* integer in RAX and calls print_rax
; The function prints the number in decimal followed by '\n'
; This file is for support when we want to print an integer.
;
; Platform: Linux x86-64
; Assembler: NASM
; ------------------------------------------------------------

section .text
    global print_rax              ; allow other files to call this symbol

print_rax:

    ; setup
    push rbp                      ; save old base pointer (callee-saved)
    mov rbp, rsp                  ; establish a stack frame for this function

    ; Allocate a temporary buffer
    ; We will build the decimal string *backwards* in this buffer.
    ; 32 bytes is more than enough for:
    ;   - up to 20 digits (max 64-bit unsigned)
    ;   - 1 newline
    ;   - safety padding

    sub rsp, 32                   ; move stack pointer down 32 bytes

    ; Prepare pointer to end of buffer, 
    mov rsi, rsp                  ; RSI = start of buffer
    add rsi, 31                   ; RSI = last byte in buffer (offset 31)

    mov byte [rsi], 0xA           ; store '\n' (ASCII 10) at end
    sub rsi, 1                    ; move left to where digits will be stored

    ; Set RCX tp 10, and we will repeatedly divide by 10 to extract the next
    ; more significant digit.
    mov rcx, 10                   ; RCX = divisor (base 10)


    ; If RAX == 0, then we have a special case 
    ; and do not need to do the division loop.
    test rax, rax                 ; if RAX == 0, then ZF is set to 0.
    jnz .convert_loop             ; Jump to .convert_loop if RAX != 0
    mov byte [rsi], '0'           ; store ASCII '0'
    sub rsi, 1                    ; move buffer pointer left
    jmp .write_out                ; skip conversion loop



.convert_loop:

    ; ---------------------------
    ; Convert number to decimal
    ; ---------------------------
    ; Repeatedly divide RAX by 10.
    ; Each remainder (RDX) is one digit.
    ; Digits are produced least-significant first.
              
    ; DIV uses RDX and RAX as the dividend.
    ; RDX holds the remainder.
    ; RAX holds the quotient.
    ; RAX = RAX / 10
    ; RDX = RAX % 10 (remainder)
                        
    mov rdx, 0          ; Zero out RDX before calling the DIV instruction
    div rcx             ; perform the division by 10 (RCX holds 10 right now)

    add dl, '0'         ; convert remainder (0–9) to ASCII
    mov [rsi], dl       ; store remainder char in buffer
    sub rsi, 1          ; move left for next digit

    test rax, rax       ; check if quotient is zero
    jnz .convert_loop   ; if not zero, more digits remain, repeat


.write_out:

    ; Compute length = (buffer_end) - (start_pointer)
    ; buffer_end = rsp + 32
    add rsi, 1              ; adjust pointer to first valid character
    mov rdx, rsp            ; RDX = buffer base
    add rdx, 32             ; RDX = buffer end (one past last byte)
    sub rdx, rsi            ; RDX = number of bytes to write


    ; write(1, rsi, rdx)
    mov eax, 1              ; syscall number 1 = sys_write
    mov edi, 1              ; file descriptor 1 = stdout
                            ; RSI = pointer to buffer
                            ; RDX = length
    syscall                 ; perform write

    ; restore rsp and rbp before returning to caller
    mov rsp, rbp                  ; restore stack pointer
    pop rbp                       ; restore old base pointer
    ret                           ; return to caller