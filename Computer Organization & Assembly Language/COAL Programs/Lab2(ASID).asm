.model small
.stack 100h
.data
.code
main proc
mov al,5
add al,2  
;inc al  
;sub al,1
;dec al

mov ah,2
mov dl,al
add dl,30h
int 21h
main endp
end main

