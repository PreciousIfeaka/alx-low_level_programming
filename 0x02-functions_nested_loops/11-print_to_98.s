	.file	"11-print_to_98.c"
	.text
	.section	.rodata
.LC0:
	.string	"%d"
.LC1:
	.string	", "
	.text
	.globl	print_to_98
	.type	print_to_98, @function
print_to_98:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	cmpl	$98, -4(%rbp)
	jg	.L8
	jmp	.L3
.L6:
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	cmpl	$98, -4(%rbp)
	je	.L12
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L5
.L12:
	nop
.L5:
	addl	$1, -4(%rbp)
.L3:
	cmpl	$98, -4(%rbp)
	jle	.L6
	movl	$10, %edi
	call	putchar@PLT
	jmp	.L14
.L11:
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	cmpl	$98, -4(%rbp)
	je	.L13
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L10
.L13:
	nop
.L10:
	subl	$1, -4(%rbp)
.L8:
	cmpl	$97, -4(%rbp)
	jg	.L11
	movl	$10, %edi
	call	putchar@PLT
.L14:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	print_to_98, .-print_to_98
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
