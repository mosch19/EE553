	.file	"hw3b.cpp"
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.section	.text._ZStorSt13_Ios_OpenmodeS_,"axG",@progbits,_ZStorSt13_Ios_OpenmodeS_,comdat
	.weak	_ZStorSt13_Ios_OpenmodeS_
	.type	_ZStorSt13_Ios_OpenmodeS_, @function
_ZStorSt13_Ios_OpenmodeS_:
.LFB985:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %eax
	orl	-8(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE985:
	.size	_ZStorSt13_Ios_OpenmodeS_, .-_ZStorSt13_Ios_OpenmodeS_
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"hw3b.dat"
	.section	.text._ZN4LifeC2Ev,"axG",@progbits,_ZN4LifeC5Ev,comdat
	.align 2
	.weak	_ZN4LifeC2Ev
	.type	_ZN4LifeC2Ev, @function
_ZN4LifeC2Ev:
.LFB1554:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1554
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -40(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	movq	-40(%rbp), %rax
	movq	%rax, %rsi
	movl	$0, %eax
	movl	$72, %edx
	movq	%rsi, %rdi
	movq	%rdx, %rcx
	rep stosq
	leaq	-25(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcEC1Ev
	movq	-40(%rbp), %rax
	leaq	584(%rax), %rcx
	leaq	-25(%rbp), %rax
	movq	%rax, %rdx
	movl	$.LC0, %esi
	movq	%rcx, %rdi
.LEHB0:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.LEHE0:
	leaq	-25(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	movq	-40(%rbp), %rax
	movl	$10, 576(%rax)
	movq	-40(%rbp), %rax
	movl	$1, 580(%rax)
	nop
	movq	-24(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L5
	jmp	.L7
.L6:
	movq	%rax, %rbx
	leaq	-25(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB1:
	call	_Unwind_Resume
.LEHE1:
.L7:
	call	__stack_chk_fail
.L5:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1554:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table._ZN4LifeC2Ev,"aG",@progbits,_ZN4LifeC5Ev,comdat
.LLSDA1554:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1554-.LLSDACSB1554
.LLSDACSB1554:
	.uleb128 .LEHB0-.LFB1554
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L6-.LFB1554
	.uleb128 0
	.uleb128 .LEHB1-.LFB1554
	.uleb128 .LEHE1-.LEHB1
	.uleb128 0
	.uleb128 0
.LLSDACSE1554:
	.section	.text._ZN4LifeC2Ev,"axG",@progbits,_ZN4LifeC5Ev,comdat
	.size	_ZN4LifeC2Ev, .-_ZN4LifeC2Ev
	.weak	_ZN4LifeC1Ev
	.set	_ZN4LifeC1Ev,_ZN4LifeC2Ev
	.section	.text._ZN4Life6getGenEv,"axG",@progbits,_ZN4Life6getGenEv,comdat
	.align 2
	.weak	_ZN4Life6getGenEv
	.type	_ZN4Life6getGenEv, @function
_ZN4Life6getGenEv:
.LFB1556:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	576(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1556:
	.size	_ZN4Life6getGenEv, .-_ZN4Life6getGenEv
	.section	.text._ZN4Life7getFreqEv,"axG",@progbits,_ZN4Life7getFreqEv,comdat
	.align 2
	.weak	_ZN4Life7getFreqEv
	.type	_ZN4Life7getFreqEv, @function
_ZN4Life7getFreqEv:
.LFB1557:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	580(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1557:
	.size	_ZN4Life7getFreqEv, .-_ZN4Life7getFreqEv
	.section	.text._ZNK4Life5printEv,"axG",@progbits,_ZNK4Life5printEv,comdat
	.align 2
	.weak	_ZNK4Life5printEv
	.type	_ZNK4Life5printEv, @function
_ZNK4Life5printEv:
.LFB1558:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$1, -8(%rbp)
.L18:
	cmpl	$10, -8(%rbp)
	jg	.L19
	movl	$1, -4(%rbp)
.L17:
	cmpl	$10, -4(%rbp)
	jg	.L14
	movq	-24(%rbp), %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rsi
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rsi, %rax
	movl	(%rcx,%rax,4), %eax
	testl	%eax, %eax
	jne	.L15
	movl	$45, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	movl	$32, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	jmp	.L16
.L15:
	movl	$42, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	movl	$32, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
.L16:
	addl	$1, -4(%rbp)
	jmp	.L17
.L14:
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEPFRSoS_E
	addl	$1, -8(%rbp)
	jmp	.L18
.L19:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1558:
	.size	_ZNK4Life5printEv, .-_ZNK4Life5printEv
	.section	.text._ZN4Life9loadStateEv,"axG",@progbits,_ZN4Life9loadStateEv,comdat
	.align 2
	.weak	_ZN4Life9loadStateEv
	.type	_ZN4Life9loadStateEv, @function
_ZN4Life9loadStateEv:
.LFB1559:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1559
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$1000, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -1000(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	-544(%rbp), %rax
	movq	%rax, %rdi
.LEHB2:
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1Ev
.LEHE2:
	movq	-1000(%rbp), %rax
	leaq	584(%rax), %rcx
	leaq	-544(%rbp), %rax
	movl	$8, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
.LEHB3:
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEE4openERKNSt7__cxx1112basic_stringIcS1_SaIcEEESt13_Ios_Openmode
.LEHE3:
	leaq	-976(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev
	movl	$1, -984(%rbp)
.L26:
	leaq	-544(%rbp), %rax
	addq	$256, %rax
	movq	%rax, %rdi
.LEHB4:
	call	_ZNKSt9basic_iosIcSt11char_traitsIcEE3eofEv
	xorl	$1, %eax
	testb	%al, %al
	je	.L21
	leaq	-976(%rbp), %rdx
	leaq	-544(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZSt7getlineIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EE
	cmpl	$1, -984(%rbp)
	jne	.L22
	movl	$8, %esi
	movl	$16, %edi
	call	_ZStorSt13_Ios_OpenmodeS_
	movl	%eax, %edx
	leaq	-944(%rbp), %rax
	movl	%edx, %esi
	movq	%rax, %rdi
	call	_ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEEC1ESt13_Ios_Openmode
.LEHE4:
	leaq	-976(%rbp), %rax
	leaq	-944(%rbp), %rdx
	addq	$16, %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
.LEHB5:
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
	movq	-1000(%rbp), %rax
	leaq	580(%rax), %rbx
	movq	-1000(%rbp), %rax
	leaq	576(%rax), %rdx
	leaq	-944(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSirsERi
	movq	%rbx, %rsi
	movq	%rax, %rdi
	call	_ZNSirsERi
.LEHE5:
	leaq	-944(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev
.L22:
	movl	$0, -980(%rbp)
.L25:
	movl	-980(%rbp), %eax
	movslq	%eax, %rbx
	leaq	-976(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE4sizeEv
	cmpq	%rax, %rbx
	setb	%al
	testb	%al, %al
	je	.L23
	movl	-980(%rbp), %eax
	movslq	%eax, %rdx
	leaq	-976(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
.LEHB6:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEixEm
	movzbl	(%rax), %eax
	cmpb	$42, %al
	sete	%al
	testb	%al, %al
	je	.L24
	movl	-984(%rbp), %eax
	leal	-1(%rax), %edx
	movl	-980(%rbp), %eax
	addl	$1, %eax
	movq	-1000(%rbp), %rcx
	movslq	%eax, %rsi
	movslq	%edx, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rsi, %rax
	movl	$1, (%rcx,%rax,4)
.L24:
	addl	$1, -980(%rbp)
	jmp	.L25
.L23:
	addl	$1, -984(%rbp)
	leaq	-976(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5clearEv
	jmp	.L26
.L21:
	leaq	-544(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEE5closeEv
.LEHE6:
	leaq	-976(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	-544(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
	nop
	movq	-24(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L30
	jmp	.L34
.L33:
	movq	%rax, %rbx
	leaq	-944(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1118basic_stringstreamIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L28
.L32:
	movq	%rax, %rbx
.L28:
	leaq	-976(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L29
.L31:
	movq	%rax, %rbx
.L29:
	leaq	-544(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB7:
	call	_Unwind_Resume
.LEHE7:
.L34:
	call	__stack_chk_fail
.L30:
	addq	$1000, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1559:
	.section	.gcc_except_table._ZN4Life9loadStateEv,"aG",@progbits,_ZN4Life9loadStateEv,comdat
.LLSDA1559:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1559-.LLSDACSB1559
.LLSDACSB1559:
	.uleb128 .LEHB2-.LFB1559
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB3-.LFB1559
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L31-.LFB1559
	.uleb128 0
	.uleb128 .LEHB4-.LFB1559
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L32-.LFB1559
	.uleb128 0
	.uleb128 .LEHB5-.LFB1559
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L33-.LFB1559
	.uleb128 0
	.uleb128 .LEHB6-.LFB1559
	.uleb128 .LEHE6-.LEHB6
	.uleb128 .L32-.LFB1559
	.uleb128 0
	.uleb128 .LEHB7-.LFB1559
	.uleb128 .LEHE7-.LEHB7
	.uleb128 0
	.uleb128 0
.LLSDACSE1559:
	.section	.text._ZN4Life9loadStateEv,"axG",@progbits,_ZN4Life9loadStateEv,comdat
	.size	_ZN4Life9loadStateEv, .-_ZN4Life9loadStateEv
	.section	.text._ZN4Life9checkCellEv,"axG",@progbits,_ZN4Life9checkCellEv,comdat
	.align 2
	.weak	_ZN4Life9checkCellEv
	.type	_ZN4Life9checkCellEv, @function
_ZN4Life9checkCellEv:
.LFB1560:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$656, %rsp
	movq	%rdi, -648(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, -628(%rbp)
	leaq	-592(%rbp), %rdx
	movl	$0, %eax
	movl	$72, %ecx
	movq	%rdx, %rdi
	rep stosq
	movl	$0, -624(%rbp)
.L39:
	cmpl	$11, -624(%rbp)
	jg	.L36
	movl	$0, -620(%rbp)
.L38:
	cmpl	$11, -620(%rbp)
	jg	.L37
	movq	-648(%rbp), %rcx
	movl	-620(%rbp), %eax
	movslq	%eax, %rsi
	movl	-624(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rsi, %rax
	movl	(%rcx,%rax,4), %ecx
	movl	-620(%rbp), %eax
	movslq	%eax, %rsi
	movl	-624(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rsi, %rax
	movl	%ecx, -592(%rbp,%rax,4)
	addl	$1, -620(%rbp)
	jmp	.L38
.L37:
	addl	$1, -624(%rbp)
	jmp	.L39
.L36:
	movl	$1, -616(%rbp)
.L51:
	cmpl	$10, -616(%rbp)
	jg	.L40
	movl	$1, -612(%rbp)
.L50:
	cmpl	$10, -612(%rbp)
	jg	.L41
	movl	$-1, -608(%rbp)
.L46:
	cmpl	$1, -608(%rbp)
	jg	.L42
	movl	$-1, -604(%rbp)
.L45:
	cmpl	$1, -604(%rbp)
	jg	.L43
	movl	-616(%rbp), %edx
	movl	-608(%rbp), %eax
	leal	(%rdx,%rax), %edi
	movl	-612(%rbp), %edx
	movl	-604(%rbp), %eax
	addl	%edx, %eax
	movq	-648(%rbp), %rcx
	movslq	%eax, %rsi
	movslq	%edi, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rsi, %rax
	movl	(%rcx,%rax,4), %eax
	cmpl	$1, %eax
	jne	.L44
	movl	-608(%rbp), %eax
	imull	-608(%rbp), %eax
	movl	%eax, %edx
	movl	-604(%rbp), %eax
	imull	-604(%rbp), %eax
	addl	%edx, %eax
	testl	%eax, %eax
	je	.L44
	addl	$1, -628(%rbp)
.L44:
	addl	$1, -604(%rbp)
	jmp	.L45
.L43:
	addl	$1, -608(%rbp)
	jmp	.L46
.L42:
	cmpl	$1, -628(%rbp)
	jg	.L47
	movl	-612(%rbp), %eax
	movslq	%eax, %rcx
	movl	-616(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movl	$0, -592(%rbp,%rax,4)
	jmp	.L48
.L47:
	cmpl	$3, -628(%rbp)
	jle	.L49
	movl	-612(%rbp), %eax
	movslq	%eax, %rcx
	movl	-616(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movl	$0, -592(%rbp,%rax,4)
	jmp	.L48
.L49:
	cmpl	$3, -628(%rbp)
	jne	.L48
	movl	-612(%rbp), %eax
	movslq	%eax, %rcx
	movl	-616(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movl	$1, -592(%rbp,%rax,4)
.L48:
	movl	$0, -628(%rbp)
	addl	$1, -612(%rbp)
	jmp	.L50
.L41:
	addl	$1, -616(%rbp)
	jmp	.L51
.L40:
	movl	$0, -600(%rbp)
.L55:
	cmpl	$11, -600(%rbp)
	jg	.L57
	movl	$0, -596(%rbp)
.L54:
	cmpl	$11, -596(%rbp)
	jg	.L53
	movl	-596(%rbp), %eax
	movslq	%eax, %rcx
	movl	-600(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rcx, %rax
	movl	-592(%rbp,%rax,4), %esi
	movq	-648(%rbp), %rcx
	movl	-596(%rbp), %eax
	movslq	%eax, %rdi
	movl	-600(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	addq	%rax, %rax
	addq	%rdx, %rax
	salq	$2, %rax
	addq	%rdi, %rax
	movl	%esi, (%rcx,%rax,4)
	addl	$1, -596(%rbp)
	jmp	.L54
.L53:
	addl	$1, -600(%rbp)
	jmp	.L55
.L57:
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L56
	call	__stack_chk_fail
.L56:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1560:
	.size	_ZN4Life9checkCellEv, .-_ZN4Life9checkCellEv
	.section	.rodata
.LC1:
	.string	"*******************"
.LC2:
	.string	"** GENERATION "
.LC3:
	.string	" **"
.LC4:
	.string	"* GENERATION "
.LC5:
	.string	" *"
	.text
	.globl	_Z10displayGeni
	.type	_Z10displayGeni, @function
_Z10displayGeni:
.LFB1561:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	$.LC1, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	cmpl	$9, -4(%rbp)
	jg	.L59
	movl	$.LC2, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$48, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_c
	movq	%rax, %rdx
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	jmp	.L60
.L59:
	cmpl	$99, -4(%rbp)
	jg	.L61
	movl	$.LC2, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$.LC3, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	jmp	.L60
.L61:
	movl	$.LC4, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$.LC5, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
.L60:
	movl	$.LC1, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1561:
	.size	_Z10displayGeni, .-_Z10displayGeni
	.section	.text._ZN4LifeD2Ev,"axG",@progbits,_ZN4LifeD5Ev,comdat
	.align 2
	.weak	_ZN4LifeD2Ev
	.type	_ZN4LifeD2Ev, @function
_ZN4LifeD2Ev:
.LFB1564:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	addq	$584, %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1564:
	.size	_ZN4LifeD2Ev, .-_ZN4LifeD2Ev
	.weak	_ZN4LifeD1Ev
	.set	_ZN4LifeD1Ev,_ZN4LifeD2Ev
	.text
	.globl	main
	.type	main, @function
main:
.LFB1562:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1562
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$648, %rsp
	.cfi_offset 3, -24
	movq	%fs:40, %rax
	movq	%rax, -24(%rbp)
	xorl	%eax, %eax
	leaq	-640(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4LifeC1Ev
	leaq	-640(%rbp), %rax
	movq	%rax, %rdi
.LEHB8:
	call	_ZN4Life9loadStateEv
	leaq	-640(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4Life6getGenEv
	movl	%eax, -648(%rbp)
	leaq	-640(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4Life7getFreqEv
	movl	%eax, -644(%rbp)
	movl	-644(%rbp), %eax
	movl	%eax, -656(%rbp)
	movl	$0, -652(%rbp)
.L66:
	movl	-652(%rbp), %eax
	cmpl	-648(%rbp), %eax
	jg	.L64
	movl	-656(%rbp), %eax
	cmpl	-644(%rbp), %eax
	jne	.L65
	movl	$0, -656(%rbp)
	movl	-652(%rbp), %eax
	movl	%eax, %edi
	call	_Z10displayGeni
	leaq	-640(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK4Life5printEv
.LEHE8:
.L65:
	leaq	-640(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4Life9checkCellEv
	addl	$1, -656(%rbp)
	addl	$1, -652(%rbp)
	jmp	.L66
.L64:
	movl	$0, %ebx
	leaq	-640(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4LifeD1Ev
	movl	%ebx, %eax
	movq	-24(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L69
	jmp	.L71
.L70:
	movq	%rax, %rbx
	leaq	-640(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN4LifeD1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB9:
	call	_Unwind_Resume
.LEHE9:
.L71:
	call	__stack_chk_fail
.L69:
	addq	$648, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1562:
	.section	.gcc_except_table,"a",@progbits
.LLSDA1562:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1562-.LLSDACSB1562
.LLSDACSB1562:
	.uleb128 .LEHB8-.LFB1562
	.uleb128 .LEHE8-.LEHB8
	.uleb128 .L70-.LFB1562
	.uleb128 0
	.uleb128 .LEHB9-.LFB1562
	.uleb128 .LEHE9-.LEHB9
	.uleb128 0
	.uleb128 0
.LLSDACSE1562:
	.text
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1858:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L74
	cmpl	$65535, -8(%rbp)
	jne	.L74
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L74:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1858:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__Z10displayGeni, @function
_GLOBAL__sub_I__Z10displayGeni:
.LFB1859:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1859:
	.size	_GLOBAL__sub_I__Z10displayGeni, .-_GLOBAL__sub_I__Z10displayGeni
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z10displayGeni
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
