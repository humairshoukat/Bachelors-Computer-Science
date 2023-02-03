include 'emu8086.inc'
.model small	
.code
main proc
             
    mov ah,1 ;input the number to be checked
	int 21h
	
    mov bl,2	; divisor/source moved to bl
    div bl

    cmp ah,0	; remainder goes to AH, check it
    JE even	; remainder zero is even
    JNE odd	; remainder zero is odd

    even:
    print 'Even No'
    jmp exit


    odd:
    print 'Odd No'
    exit:

main endp
end main
