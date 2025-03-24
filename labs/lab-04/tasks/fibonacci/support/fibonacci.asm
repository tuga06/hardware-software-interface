; SPDX-License-Identifier: BSD-3-Clause

%include "printf32.asm"

section .data
    N: dd 7          ; N-th fibonacci number to calculate

section .text
    global main
    extern printf

main:
    mov ecx, DWORD [N]       ; we want to find the N-th fibonacci number; N = ECX = 7
    ; TODO: calculate the N-th fibonacci number (f(0) = 0, f(1) = 1)
    PRINTF32 `%d\n\x0`, ecx  ; DO NOT REMOVE/MODIFY THIS LINE

    mov edx, 1
    mov ebx, 0
    mov eax, 0

    cmp ecx, 0
    jz end
    dec ecx
    mov eax, 1

fibo:
    cmp ecx, 0
    jz end
    dec ecx

    mov eax, 0
    add eax, ebx
    add eax, edx

    mov ebx, edx
    mov edx, eax

    jmp fibo

end:
    PRINTF32 `%d\n\x0`, eax
    ret
