section .text
    extern ___error
    global _ft_read

_ft_read:
        mov rax, 0x2000003
        syscall
        jc error
        ret

error:
        push rax
        call ___error
        pop rbx
        mov [rax], rbx
        mov rax, -1
        ret