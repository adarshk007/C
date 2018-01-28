	.file	"sum.c"
	.section .text
	.globl add
	.type	add, @function
add:
	movq %rdi,%rdx
	addq %rsi, %rdx 
	movq %rdx, %rax 
	ret   

