section .data
    hello db "Hello, Holberton",0
    format db "%s", 10, 0   ; %s for string, 10 for newline, 0 for null terminator

section .text
    global main

extern printf

main:
    push rbp
    mov rdi, format
    mov rsi, hello
    call printf
    pop rbp
    ret
