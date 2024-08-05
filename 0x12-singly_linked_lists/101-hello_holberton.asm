
          global    start

          section   .text
main:

start:    mov       rax, 0x01               ; system call for write
          mov       rdi, 0x01                  ; file handle 1 is stdout
          mov       rsi, message            ; address of string to output
          mov       rdx, msglength          ; number of bytes
          syscall                           ; invoke operating system to do the write
          mov       rax, 0x3C               ; system call for exit
          mov       rdi, 0x0                ; exit code 0
          syscall                           ; invoke operating system to exit

          section   .data
message:  db        "Hello, Holberton", 0xA ; note the newline at the end
msglength: equ $ - message                  ; length of message
