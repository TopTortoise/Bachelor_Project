.globl _start
.globl main

_start:
	//li sp, 2000
	jal main
exit:
	j exit
