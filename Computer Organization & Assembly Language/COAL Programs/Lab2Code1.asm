.model small
.stack 100h
.data
.code
main proc
    mov al,5
    neg al ; al = -5
    mov bl,8 
    sub bl,2 ; (8-2)=6
    add al,bl ; -5 + 6 =1
    
   
 mov ah,2  
    mov dl,al
    add dl,30h
    int 21h
    main endp
end main
