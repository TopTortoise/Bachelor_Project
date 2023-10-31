.globl _start
.globl main

_start:
	li sp, 4000//0x7A0
	jal main
exit:
	j exit