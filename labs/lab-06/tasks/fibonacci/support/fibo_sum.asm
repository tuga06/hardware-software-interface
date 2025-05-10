; SPDX-License-Identifier: BSD-3-Clause

%include "printf32.asm"

section .data
    N dd 9 ; DO NOT MOFIDY THIS LINE EXCEPT FOR THE VALUE OF N!
           ; compute the sum of the first N fibonacci numbers
    sum_print_format db "Sum first %d fibonacci numbers is %d", 10, 0

section .text
extern printf
global main
main:
    push ebp
    mov ebp, esp

    ; TODO: calculate the sum of first N fibonacci numbers
    ;       (f(0) = 0, f(1) = 1)
    xor eax, eax     ;store the sum in eax

    ; Use the loop instruction

    mov ecx, dword[N]
    xor eax, eax
    jz fibo_zero
loop:
    mov eax, eax
    jz fibo_one
    cmp edx, ebx
    jb pm
    add eax, edx
    add ebx, edx
    check_loop
pm:
    add eax, ebx
    add edx, ebx
    check_loop
fibo_zero:
    mov eax, 0
    jmp check_loop
fibo_one:
    mov ebx, 0
    mov edx, 1
    mov eax, 1
    jmp check_loop
check_loop:
    mov ecx, ecx
    jz end
    dec ecx
    jmp loop

end:
    push eax
    push dword [N]
    push sum_print_format
    call printf
    add esp, 12

    xor eax, eax
    leave
    ret
