.model small
.stack 100h
.data
.code
main proc
    mov cl,0	; set counter to zero
    label1:
    mov ah,1
    int 21h
    cmp al,' '	; this is single space showing ASCII code for space bar
    			
    JE label2	; if spacebar is found jump to label2
    inc cl		; otherwise increment counter
    jmp label1	; again another input is taken

    label2:
    mov ah,2    ;display the count
    mov dl,cl
    add dl,30h ; ASCII correction
    int 21h					

main endp
end main
