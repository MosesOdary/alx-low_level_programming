global main

; Define printf as an external symbol for the linker
extern printf

section .text
main:
	; Print string by setting up the arguments for printf
	;  the calling printf
	mov rdi, string
	xor eax, eax
	call printf
	; move 0 eax as the return value then return control to caller
	mov eax, 0
	ret

section .data:
	string: db "Hello, Holberton",0xa
