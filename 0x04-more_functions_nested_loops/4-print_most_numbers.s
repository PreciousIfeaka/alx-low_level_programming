	.file	"4-print_most_numbers.c"
	.text
	.globl	print_most_numbers
	.type	print_most_numbers, @function
print_most_numbers:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movb	$48, -1(%rbp)
	jmp	.L2
.L6:
	cmpb	$50, -1(%rbp)
	je	.L7
	cmpb	$52, -1(%rbp)
	je	.L7
	movsbl	-1(%rbp), %eax
	movl	%eax, %edi
	call	_putchar@PLT
	jmp	.L5
.L7:
	nop
.L5:
	movzbl	-1(%rbp), %eax
	addl	$1, %eax
	movb	%al, -1(%rbp)
.L2:
	cmpb	$57, -1(%rbp)
	jle	.L6
	movl	$10, %edi
	call	_putchar@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	print_most_numbers, .-print_most_numbers
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
