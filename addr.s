	.file	"sum.c"
	.section .text
	.globl addr
	.type	addr, @function
addr:
	movq (%rdi),%rbx
	movq (%rsi),%rax
	addq %rbx,%rax
	ret


