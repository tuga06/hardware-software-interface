%include "printf32.asm"

%define ARRAY_LEN 7

section .data

input dd 122, 184, 199, 242, 263, 845, 911
output times ARRAY_LEN dd 0

section .text

extern printf
global main
main:

    ;TODO push the elements of the array on the stack
    push dword [input]
    push dword [input + 4]
    push dword [input + 8]
    push dword [input + 12]
    push dword [input + 16]
    push dword [input + 20]
    push dword [input + 24]
    ; TODO retrieve the elements (pop) from the stack into the output array
    pop dword [output]
    pop dword [output + 4]
    pop dword [output + 8]
    pop dword [output + 12]
    pop dword [output + 16]
    pop dword [output + 20]
    pop dword [output + 24]

    PRINTF32 `Reversed array: \n\x0`
    xor ecx, ecx
print_array:
    mov edx, [output + 4 * ecx]
    PRINTF32 `%d\n\x0`, edx
    inc ecx
    cmp ecx, ARRAY_LEN
    jb print_array

    xor eax, eax
    ret
