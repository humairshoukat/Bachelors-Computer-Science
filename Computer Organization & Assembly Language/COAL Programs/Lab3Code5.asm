.model small	
.stack 100h
.data
.code					
main proc
             
    mov bl,5 	;multiplicand value moved to BL
    
    mov cx,3 	;multiplier value moved to CX to loop CX times
    mov al,0  	;initialize AL register to zero to perform addition
    
    label1:
    add al,bl  ;BL will add to AL, CX times to produce multiplier result
    LOOP label1
    
   	;Now we divie AL by 10 to display two digit No's separately
    mov bh,10
    div bh
    mov bl,ah ;remainder moved to BL
    
    mov ah,2
    mov dl,al 	;display quotient
    add dl,30h
    int 21h

    mov ah,2
   	mov dl,bl 	;display remainder
    add dl,30h
    int 21h          
              
main endp
end main
