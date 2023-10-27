.globl _start
.globl main

_start:
	li sp, 4000
	jal main
exit:
	j exit
