/*
* LED Blinker
* Assuming that GPIO_BASE is mapped to a GPIO core, which in turn is
* connected to LEDs, this will light the LEDs one at a time.
* Useful as smoke test to see that serv is running correctly
*/
//#ifndef GPIO_BASE
//#define GPIO_BASE 0x40000000
//#endif

#ifndef DELAY
#define DELAY 0x000680 /* delay that equals the duration of the UART */
#endif

#ifndef ADDR
#define ADDR 0x00C00000 /* startign address of BLE data */
#endif


#ifndef BLE
#define BLE  0x00A00000 /* address for BLE data */
#endif		 
	
	
	/*
	a0 = GPIO Base address NOT USED
	t0 = Value NOT USED

	a1 = address of BLE data (FPGA <- BLE)
	a2 = counter
	t1 = DElAY value
	t2 = ADRESS of BLE (FPGA -> BLE)
	t3 = chars to send to BLE
	t4 = counter var
	t5 = BLE adress

	*/
.globl _start

start:
_start:

	li t5 , BLE
	li a1, ADDR
    addi a2,zero,1 #how many characters should be printed




	add t4, zero, zero
	li t1, DELAY
	li t2, 0x00F00000

	addi t3, zero, '$'
	sw t3, 0(t2)
	jal delay  # jump to delay and save pos
	addi t3, zero, '$'
	sw t3, 0(t2)
	jal delay  # jump to delay and save pos
	
	addi t3, zero, '$'
	sw t3, 0(t2)
	jal delay  # jump to delay and save pos		

	addi t3, zero, 0x0d #enter 
	sw t3, 0(t2)
	jal delay  # jump to delay and save pos

	
	
	//addi t3, zero, 'F'
	//sb t3, 0(t2)
	//jal delay  # jump to delay and save position to ra
	////
	////
	//addi t3, zero, 0x0d #enter 
	//sw t3, 0(t2)
	//nop
	//li t1, 0x00FFB8D8 
	//nop
	//jal delay  # jump to delay and save pos
	//
	//nop
	////li t1, 0x000680 
	//nop
//
	//addi t3, zero, 'X'
	//sb t3, 0(t2)
	//jal delay  # jump to delay and save position to ra
	//
	//addi t3, zero, 0x0d #enter 
	//sw t3, 0(t2)
	//jal delay  # jump to delay and save pos
//
//j end
	#lw s3, 0(a1)
	#send recieved data back to BLE
    j loop_read
    
ending:	

	addi t3, zero, 'z' # t3 = zero + 'P'
	sw t3, 0(t2) #
	jal delay  # jump to delay and save positio

j end

#reads the amount of chars in the ram given by a2
#
loop_read: 
	addi sp, sp, -4
    sw ra, 0(sp)
    #storing ra
go_read:

	lw t3, 0(a1)
	sw t3,0(t5)
	addi a1, a1, 4 # a1 = a1 + 4
	jal delay  # jump to delay and save pos

	addi a2, a2, -1 # a2 = a2 +-1m
	bge a2, zero, go_read
    lw ra, 0(sp)
    addi sp, sp, 4
 	j ending

delay:
	addi t4, t4, 1
	bne t1, t4, delay
	add t4, zero, zero
	jr ra   # jump to ra

 end: 
 	add t4,zero,zero
 	j end  # jump to loop