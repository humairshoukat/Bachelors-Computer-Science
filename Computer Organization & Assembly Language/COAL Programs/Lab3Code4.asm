Include 'emu8086.inc'
.model small
.data
v1 db ?
v2 db ?
v3 db ?

.code
main proc
    mov ah,1	; input first number v1
	int 21h
	mov v1,al

	mov ah,1	; input second number v2
	int 21h
	mov v2,al

	mov ah,1	; input third number v3
	int 21h
	mov v3,al

; finding the smallest number
	Mov al,v1
	Cmp al,v2	; compare v1 with v2
	JL label1	; goto label1 if v1 < v2
	Mov al,v2	; else move v2 to AL

	CMP al,v3	; compare v2 with v3
	JL label2	; goto label2 if v2 < v3
	Mov al,v3	; else move v3 to AL (v3 = smallest)
	JMP end

	Label1:
	CMP al,v3	; compare v1 with v3
	JL end	; goto end if v1 < v3 (v1 = smallest)
	Mov al,v3	; else (v3 = smallest)
	Jmp end

	Label2:
	Mov al,v2	; (v2 = smallest)

	; display the smallest number
End:
    Print ' Smallest no is: '
	Mov ah,2
	Mov dl,al
	Int 21h

Main endp
End main
