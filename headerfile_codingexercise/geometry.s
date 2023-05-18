	.file	"geometry.c"
	.text
	.comm	area, 4, 2
	.globl	Circle
	.def	Circle;	.scl	2;	.type	32;	.endef
	.seh_proc	Circle
Circle:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movss	%xmm0, 16(%rbp)
	movss	16(%rbp), %xmm0
	mulss	16(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm1
	movsd	.LC0(%rip), %xmm0
	mulsd	%xmm1, %xmm0
	cvtsd2ss	%xmm0, %xmm0
	leaq	area(%rip), %rax
	movss	%xmm0, (%rax)
	leaq	area(%rip), %rax
	movss	(%rax), %xmm0
	popq	%rbp
	ret
	.seh_endproc
	.globl	Rectangle
	.def	Rectangle;	.scl	2;	.type	32;	.endef
	.seh_proc	Rectangle
Rectangle:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movss	%xmm0, 16(%rbp)
	movss	%xmm1, 24(%rbp)
	movss	16(%rbp), %xmm0
	mulss	24(%rbp), %xmm0
	leaq	area(%rip), %rax
	movss	%xmm0, (%rax)
	leaq	area(%rip), %rax
	movss	(%rax), %xmm0
	popq	%rbp
	ret
	.seh_endproc
	.globl	Square
	.def	Square;	.scl	2;	.type	32;	.endef
	.seh_proc	Square
Square:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movss	%xmm0, 16(%rbp)
	movss	16(%rbp), %xmm0
	mulss	16(%rbp), %xmm0
	leaq	area(%rip), %rax
	movss	%xmm0, (%rax)
	leaq	area(%rip), %rax
	movss	(%rax), %xmm0
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
	.align 8
.LC0:
	.long	1374389535
	.long	1074339512
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
