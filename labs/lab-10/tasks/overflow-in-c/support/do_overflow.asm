	.file	"do_overflow.c"
	.intel_syntax noprefix
	.text
	.section	.rodata
.LC0:
	.string	"insert buffer string: "
.LC1:
	.string	"buffer is: "
.LC2:
	.string	" %02X(%c)"
.LC3:
	.string	""
.LC4:
	.string	"Full of win!"
.LC5:
	.string	"Not quite there. Try again!"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	lea	ecx, 4[esp]
	.cfi_def_cfa 1, 0
	and	esp, -16
	push	DWORD PTR -4[ecx]
	push	ebp
	mov	ebp, esp
	.cfi_escape 0x10,0x5,0x2,0x75,0
	push	ebx
	push	ecx
	.cfi_escape 0xf,0x3,0x75,0x78,0x6
	.cfi_escape 0x10,0x3,0x2,0x75,0x7c
	sub	esp, 96
	call	__x86.get_pc_thunk.bx
	add	ebx, OFFSET FLAT:_GLOBAL_OFFSET_TABLE_
	mov	DWORD PTR -16[ebp], -17958194
	sub	esp, 12
	lea	eax, .LC0@GOTOFF[ebx]
	push	eax
	call	printf@PLT
	add	esp, 16
	mov	eax, DWORD PTR stdin@GOT[ebx]
	mov	eax, DWORD PTR [eax]
	sub	esp, 4
	push	eax
	push	128
	lea	eax, -89[ebp]
	push	eax
	call	fgets@PLT
	add	esp, 16
	sub	esp, 12
	lea	eax, .LC1@GOTOFF[ebx]
	push	eax
	call	printf@PLT
	add	esp, 16
	sub	esp, 12
	lea	eax, -89[ebp]
	push	eax
	call	strlen@PLT
	add	esp, 16
	mov	DWORD PTR -20[ebp], eax
	mov	DWORD PTR -12[ebp], 0
	jmp	.L2
.L3:
	lea	edx, -89[ebp]
	mov	eax, DWORD PTR -12[ebp]
	add	eax, edx
	movzx	eax, BYTE PTR [eax]
	movsx	edx, al
	lea	ecx, -89[ebp]
	mov	eax, DWORD PTR -12[ebp]
	add	eax, ecx
	movzx	eax, BYTE PTR [eax]
	movsx	eax, al
	sub	esp, 4
	push	edx
	push	eax
	lea	eax, .LC2@GOTOFF[ebx]
	push	eax
	call	printf@PLT
	add	esp, 16
	add	DWORD PTR -12[ebp], 1
.L2:
	mov	eax, DWORD PTR -12[ebp]
	cmp	eax, DWORD PTR -20[ebp]
	jb	.L3
	sub	esp, 12
	lea	eax, .LC3@GOTOFF[ebx]
	push	eax
	call	puts@PLT
	add	esp, 16
	movzx	eax, BYTE PTR -84[ebp]
	mov	BYTE PTR -22[ebp], al
	cmp	DWORD PTR -16[ebp], 1430341965
	jne	.L4
	sub	esp, 12
	lea	eax, .LC4@GOTOFF[ebx]
	push	eax
	call	puts@PLT
	add	esp, 16
	jmp	.L5
.L4:
	sub	esp, 12
	lea	eax, .LC5@GOTOFF[ebx]
	push	eax
	call	puts@PLT
	add	esp, 16
.L5:
	mov	eax, 0
	lea	esp, -8[ebp]
	pop	ecx
	.cfi_restore 1
	.cfi_def_cfa 1, 0
	pop	ebx
	.cfi_restore 3
	pop	ebp
	.cfi_restore 5
	lea	esp, -4[ecx]
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.text.__x86.get_pc_thunk.bx,"axG",@progbits,__x86.get_pc_thunk.bx,comdat
	.globl	__x86.get_pc_thunk.bx
	.hidden	__x86.get_pc_thunk.bx
	.type	__x86.get_pc_thunk.bx, @function
__x86.get_pc_thunk.bx:
.LFB1:
	.cfi_startproc
	mov	ebx, DWORD PTR [esp]
	ret
	.cfi_endproc
.LFE1:
	.ident	"GCC: (Ubuntu 13.3.0-6ubuntu2~24.04) 13.3.0"
	.section	.note.GNU-stack,"",@progbits
