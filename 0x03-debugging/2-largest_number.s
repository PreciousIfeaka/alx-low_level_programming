	.file	"2-largest_number.c"
	.text
	.globl	largest_number
	.type	largest_number, @function
largest_number:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	%edx, -28(%rbp)
	movl	-20(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jl	.L2
	movl	-20(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L2
	movl	-20(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	.L3
.L2:
	movl	-24(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L4
	movl	-24(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L4
	movl	-24(%rbp), %eax
	movl	%eax, -4(%rbp)
	jmp	.L3
.L4:
	movl	-28(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jl	.L3
	movl	-28(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jl	.L3
	movl	-28(%rbp), %eax
	movl	%eax, -4(%rbp)
.L3:
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	largest_number, .-largest_number
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
