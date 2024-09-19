section .data
    msg db "Hello, Holberton", 0     ; Define the message and null-terminate it

section .text
    global _start

extern printf

_start:
    ; Prepare arguments for printf
    mov rdi, msg          ; First argument: pointer to the message
    xor rax, rax          ; Clear rax (for correct number of floating-point arguments)
    
    ; Call printf
    call printf

    ; Exit the program
    mov rax, 60           ; syscall: exit
    xor rdi, rdi          ; exit code 0
    syscall

