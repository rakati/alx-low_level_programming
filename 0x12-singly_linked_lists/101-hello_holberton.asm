
section .text
    default rel
    extern printf
    global main
main:
    push rbp

    mov	rdi, fmt
    mov	rax, 0

    ; Call printf
    call printf wrt ..plt

    pop	rbp		; Pop stack

    mov	rax,0	; Exit code 0
    ret
section .data
		fmt: db `Hello, Holberton\n`
