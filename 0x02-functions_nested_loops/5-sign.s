	.file	"5-sign.c"
	.text
	.globl	print_sign
	.type	print_sign, @function
print_sign:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, -4(%rbp)
	cmpl	$0, -4(%rbp)
	jle	.L2
	movl	$1, -8(%rbp)
	movl	$43, %edi
	call	_putchar@PLT
.L2:
	cmpl	$0, -4(%rbp)
	jne	.L3
	movl	$0, -8(%rbp)
	movl	$48, %edi
	call	_putchar@PLT
	jmp	.L4
.L3:
	movl	$-1, -8(%rbp)
	movl	$45, %edi
	call	_putchar@PLT
.L4:
	movl	-8(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	print_sign, .-print_sign
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
