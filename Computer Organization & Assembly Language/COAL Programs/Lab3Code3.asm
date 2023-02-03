include 'emu8086.inc'
.model small
.code
main proc
    mov ah,1	; input first number
	int 21h
	mov bl,al	; this number is saved to 'bl'

	mov ah,1	; input second number
	int 21h	

	CMP bl,al	; compare the first number with second
	JG label1	; if bl > al, goto label1

	Print 'Second no is bigger'
	JMP exit

	Label1:
	Print 'First no is bigger'
	Exit:
Main endp
End main
