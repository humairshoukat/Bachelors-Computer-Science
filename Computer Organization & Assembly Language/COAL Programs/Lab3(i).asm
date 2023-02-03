.model small
.stack 100h
.data
.code
main proc
    mov ax,5		;set AX to 5
    mov bx,2		;set BX to 2
    jmp calc		;go to 'Calc' label
    back:
    jmp stop		;go to 'Stop'  label
    calc:           ;Label
    add ax,bx	;Add BX to AX
    jmp back		;go to 'Back' label
    stop:
main endp
end main
