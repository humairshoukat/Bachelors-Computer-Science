.model small
.stack 100h
.data
.code
main proc
    mov ax,64h
    mov bl,8h
    div bl
    ;we want to display QUOTIENT digits, so divide quotient by 10
      
    mov bh,10h  ; to display values in separate digit we divide by 10
    div bh      ; e.g. 20/10 now al=2 
    
    mov bh,ah   ;remainder moved to bh to avoid loss of contents
    mov ah,2
    mov dl,al   ; display quotient 20/10 = 2 will display   
    add dl,30h  ; ascii conversion
    int 21h 
    
    mov ah,2
    mov dl,bh   ; now display the remainder contained in bh=0   
    add dl,30h  ; ascii conversion
    int 21h    
    
main endp
end main
