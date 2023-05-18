	.file	"main.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
	.align 8
.LC1:
	.ascii "the area of the circle is %.3f\12\0"
	.align 8
.LC3:
	.ascii "the area of the square is %.3f\12\0"
	.align 8
.LC6:
	.ascii "the area of the rectange is %.3f\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	call	__main
	movss	.LC0(%rip), %xmm0
	call	Circle
	cvtss2sd	%xmm0, %xmm0
	movq	%xmm0, %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm1
	movq	%rax, %rdx
	leaq	.LC1(%rip), %rcx
	call	printf
	movss	.LC2(%rip), %xmm0
	call	Square
	cvtss2sd	%xmm0, %xmm0
	movq	%xmm0, %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm1
	movq	%rax, %rdx
	leaq	.LC3(%rip), %rcx
	call	printf
	movss	.LC4(%rip), %xmm1
	movss	.LC5(%rip), %xmm0
	call	Rectangle
	cvtss2sd	%xmm0, %xmm0
	movq	%xmm0, %rax
	movq	%rax, %rdx
	movq	%rdx, %xmm1
	movq	%rax, %rdx
	leaq	.LC6(%rip), %rcx
	call	printf
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 4
.LC0:
	.long	1088904233
	.align 4
.LC2:
	.long	1092731535
	.align 4
.LC4:
	.long	1079781622
	.align 4
.LC5:
	.long	1088652575
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	Circle;	.scl	2;	.type	32;	.endef
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	Square;	.scl	2;	.type	32;	.endef
	.def	Rectangle;	.scl	2;	.type	32;	.endef
