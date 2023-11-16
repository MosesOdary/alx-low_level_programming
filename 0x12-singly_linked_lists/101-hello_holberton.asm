global main

section .text
main:
	; Print string
	mov rax, 1
	mov rdi, 1
	mov rsi, string
	mov rdx, length
	syscall

	; Exit
	mov rax, 60
	mov rdi, 11
	syscall

section .data:
	string: db "Hello, Holberton",0xa
	length: equ $-string