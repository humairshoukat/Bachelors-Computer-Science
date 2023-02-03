.model small
.stack 100h
.data
.code
main proc
    
  mov cl,0	; set counter to zero

  label1:
  mov ah,1
  int 21h
  cmp al,' '	; this is single space showing ASCII code for space bar			
  JE label3	; if spacebar is found jump to label3
  cmp cl,9
  JE label2
  inc cl	; otherwise increment counter
  jmp label1	; again another input is taken
  
  label2:
  add bl,1
  mov cl,0
  jmp label1
  
  label3:
  mov dl,bl
  add dl,30h  ; ASCII correction
  mov ah,2    ; display the count
  int 21h
  mov dl,cl
  add dl,30h ; ASCII correction
  mov ah,2h
  int 21h					

main endp
end main
