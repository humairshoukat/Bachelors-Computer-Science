.model small
.stack 100h
.data
.code
main proc
    mov dh,0h
    mov dl,0h
    mov al,0
    mov ah,1 ;keyboard input
    int 21h ;intrreput to read
    mov dl,al ; copy character to dl
    ;mov dh,'A'
    mov ah,2h    ;display function
    int 21h ;intrreput
    mov ah,4ch ;exoit to DOS
    mov al,0
    int 21h    
main endp
end main