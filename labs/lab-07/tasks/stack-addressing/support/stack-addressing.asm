%include "printf32.asm"

%define NUM 5

section .text

extern printf
global main
main:
    mov ebp, esp

    ; TODO 1: replace every push by an equivalent sequence of commands (use direct addressing of memory. Hint: esp)
    mov ecx, NUM
push_nums:
    sub esp, 4
    mov [esp], ecx
    loop push_nums

    push 0
    push "corn"
    push "has "
    push "Bob "

    ; TODO 2: print the stack in "address: value" format in the range of [ESP:EBP]
    ; use PRINTF32 macro - see format above

    mov eax, esp
esp_ebp:
    PRINTF32 `0x%x: 0x%x\n\x0`, eax, [eax]
    add eax, 4
    cmp eax, ebp
    je next_1
    jmp esp_ebp
next_1:

    pop eax
    pop eax
    ; TODO 3: print the string

    lea eax, [esp]
    PRINTF32 `%s\n\x0`, eax

    ; TODO 4: print the array on the stack, element by element.

    pop eax
    pop eax
    pop eax
    pop eax
print_num:
    pop eax;
    PRINTF32 `%d \x0`, eax
    cmp eax, NUM - 1
    je end
    jmp print_num
end:
    pop eax
    PRINTF32 `%d\n\x0`, eax
    ; restore the previous value of the EBP (Base Pointer)
    mov esp, ebp

    ; exit without errors
    xor eax, eax
    ret
