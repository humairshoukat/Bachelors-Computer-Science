.model small
.stack 100h
.data
.code
main proc                     
    jmp label1  ;go to 'label1'
    label2:
      mov ah,2
      mov dl,'k'
      int 21h
    label1:
      mov ah,2
      mov dl,'p'
      int 21h
      jmp label2
main endp
end main
