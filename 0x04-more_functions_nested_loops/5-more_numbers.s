	.file	"5-more_numbers.c"
	.text
	.globl	more_numbers
	.type	more_numbers, @function
more_numbers:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$1, -4(%rbp)
	jmp	.L2
.L5:
	movl	$0, -8(%rbp)
	jmp	.L3
.L4:
	movl	-8(%rbp), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	_putchar@PLT
	addl	$1, -8(%rbp)
.L3:
	cmpl	$14, -8(%rbp)
	jle	.L4
	movl	$10, %edi
	call	_putchar@PLT
	addl	$1, -4(%rbp)
.L2:
	cmpl	$10, -4(%rbp)
	jle	.L5
	movl	$10, %edi
	call	_putchar@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	more_numbers, .-more_numbers
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
