global main			; Declare main as the entry point of the program
extern printf			; printf function is in C library

section .data
	msg db "Hello, Holberton", 10, 0 ; string to print with CR, LF

section .text
main:
	push rbp
	mov rdi, msg
	call printf
	pop rbp

	xor eax, eax   ; Set return value to 0
	ret
