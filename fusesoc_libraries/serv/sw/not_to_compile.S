02400E13 	addi t3, zero, '$'
00A00F37 	li t5 , BLE
00C005B7 	li a1, ADDR
00200613    addi a2,zero,2 #how many characters should be printed
00000EB3 	add t4, zero, zero
68000313 	li t1, DELAY
00F003B7 	li t2, 0x00F00000
02400E13 	addi t3, zero, '$'
01C3A023 	sw t3, 0(t2)
0A0000EF 	jal delay  # jump to delay and save pos
02400E13 	addi t3, zero, '$'
01C3A023 	sw t3, 0(t2)
094000EF 	jal delay  # jump to delay and save pos
02400E13 	addi t3, zero, '$'
01C3A023 	sw t3, 0(t2)
088000EF 	jal delay  # jump to delay and save pos		
00D00E13 	addi t3, zero, 0x0d #enter 
01C3A023 	sw t3, 0(t2)
07C000EF 	jal delay  # jump to delay and save pos
04600E13 	addi t3, zero, 'F'
01C38023 	sb t3, 0(t2)
070000EF 	jal delay  # jump to delay and save position to ra
0000F337 	li t1, 0x0000F000
00D00E13 	addi t3, zero, 0x0d #enter 
01C3A023 	sw t3, 0(t2)
060000EF 	jal delay  # jump to delay and save pos
68000313 	li t1, 0x0000680
05800E13 	addi t3, zero, 'X'
01C38023 	sb t3, 0(t2)
050000EF 	jal delay  # jump to delay and save position to ra
00D00E13 	addi t3, zero, 0x0d #enter 
01C3A023 	sw t3, 0(t2)
044000EF 	jal delay  # jump to delay and save pos
0140006F    j loop_read
07A00E13    ending:	addi t3, zero, 'z' # t3 = zero + 'P'
01C3A023 	sw t3, 0(t2) #
034000EF 	jal delay  # jump to delay and save positio
0400006F    j end
FFC10113    loop_read: addi sp, sp, -4 #reads the amount of chars in the ram given by a2
00112023    sw ra, 0(sp) #storing ra
0005AE03    go_read: lw t3, 0(a1)
01CF2023 	sw t3,0(t5)
00458593 	addi a1, a1, 4 # a1 = a1 + 4
018000EF 	jal delay  # jump to delay and save pos
FFF60613 	addi a2, a2, -1 # a2 = a2 +-1m
FE0656E3 	bge a2, zero, go_read
00012083    lw ra, 0(sp)
00410113    addi sp, sp, 4
FC9FF06F  	j ending
001E8E93    delay: addi t4, t4, 1
FFD31EE3 	bne t1, t4, delay
00000EB3 	add t4, zero, zero
00008067 	jr ra   # jump to ra
00000EB3    end: add t4,zero,zero
FFDFF06F  	j end  # jump to loop 