	.file	"vol3.c"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"Initial value of local : %d \n"
.LC1:
	.string	"Modified value of local: %d \n"
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB24:
	.cfi_startproc
	subq	$24, %rsp
	.cfi_def_cfa_offset 32
	movl	$.LC0, %esi
	movl	$1, %edi
	movl	$10, 12(%rsp)
	movl	12(%rsp), %edx
	xorl	%eax, %eax
	call	__printf_chk
	movl	$100, 12(%rsp)
	movl	12(%rsp), %edx
	movl	$.LC1, %esi
	movl	$1, %edi
	xorl	%eax, %eax
	call	__printf_chk
	xorl	%eax, %eax
	addq	$24, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE24:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
