.model small
.stack 100h
.data
.code
main proc
mov ah,1
int 21h
sub al,20h	; case converted
mov ah,2
;mov dl,0dh	; new line generation
;int 21h
;mov dl,0ah
;int 21h    
mov dl,al
int 21h
mov ah,4ch	; terminate program and return to DOS
int 21h
main endp
end main
