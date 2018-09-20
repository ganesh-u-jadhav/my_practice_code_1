	.file	"sample.c"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"aaaa"
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB24:
	.cfi_startproc
	movl	x(%rip), %edx
	testl	%edx, %edx
	je	.L8
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	.p2align 4,,10
	.p2align 3
.L5:
	movl	$.LC0, %edi
	call	puts
	movq	ptr(%rip), %rax
	subl	$1, (%rax)
	movl	x(%rip), %eax
	testl	%eax, %eax
	jne	.L5
	xorl	%eax, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
.L8:
	xorl	%eax, %eax
	ret
	.cfi_endproc
.LFE24:
	.size	main, .-main
	.globl	ptr
	.data
	.align 8
	.type	ptr, @object
	.size	ptr, 8
ptr:
	.quad	x
	.globl	x
	.align 16
	.type	x, @object
	.size	x, 4
x:
	.long	1
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
