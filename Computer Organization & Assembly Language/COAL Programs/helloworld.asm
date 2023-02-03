.model small
.stack 100h
.data
.code
main proc   
                      
    mov dx,offset msg
    mov ah,9h
    int 21h 
    
main endp  

msg db "Hello World! $"

end main       
