section .data
	str: db `Hello, Holberton`, 10, 0

section .text
  global main
  extern printf

main:
	;initiate stack
	push rbp
	mov rbp, rsp

	;prepare args for printf
	lea rdi, [str] ;move str in the rdi register
	xor eax,eax ;clean EAX

	call printf

	; clean up data

	mov rsp, rbp
	pop rbp ; clear stack register
	xor eax,eax
	ret
