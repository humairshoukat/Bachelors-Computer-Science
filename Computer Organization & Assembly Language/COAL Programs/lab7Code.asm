;month
mov dx,0010011001101010b
mov ax,dx		; make a copy of DX = 0010_0110_0110_1010b
Shr ax,5		; shift right 5 bits
And al,00001111b ; clear bits 4 to 7
mov ah,2
mov dl,al	; save in month. Note: same to hours:min:sec. [2Ch]
add dl,30h
int 21h
;day
mov dx,0010011001101010b
mov al,dl		; make a copy of DX = 0010_0110_0110_1010b
And al,00011111b ; clear bits 4 to 7
mov ah,2
mov dl,al
add dl,42	; save in month. Note: same to hours:min:sec. [2Ch]
int 21h
;year
           
mov dx,0010011001101010b
mov ax,dx
shr ax,9		; make a copy of DX = 0010_0110_0110_1010b
And al,01111111b ; clear bits 4 to 7
add ax,0F830h 
mov dx,ax
mov ah,2
         	; save in month. Note: same to hours:min:sec. [2Ch]
int 21h
