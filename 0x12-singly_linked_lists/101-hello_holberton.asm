section .data
	hello db "Hello, Holberton", 0
	format db "%s", 0
	newline db 10, 0

section .text
	global main
	extern printf

main:
	push rdi ; Preserve the value of rdi register
	lea rdi, [hello]
	lea rsi, [format]
	call printf

	lea edi, [newline]
	call printf

	pop rdi ; Restore the value of rdi register
	ret
