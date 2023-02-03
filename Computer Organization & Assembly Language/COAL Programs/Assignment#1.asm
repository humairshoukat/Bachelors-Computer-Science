include 'emu8086.inc'
.model small	
.code
main proc
    mov cl,0
    
    label1:         
    mov ah,1    ;input the number to be checked
    int 21h
	cmp cl,0
	JE label2
    mov bl,2
    div bl
    cmp ah,0	; remainder goes to AH, check it
    JE even	    ; remainder zero is even
    JNE odd	    ; remainder zero is odd

    even:
    print ' Even No'
    jmp exit


    odd:
    print ' Odd No'
    
    
    label2:
    mov cl,al	; divisor/source moved to bl
    jmp label1
    
    exit:
    
main endp
end main