section .data
format db `Greetings from Holberton!\n`, 0

section .text
global _start
extern printf

_start:
mov edi, format
xor eax, eax
call printf
mov eax, 1
int 0x80

