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
#define DELAY 0x0000680 /* delay that ca. equals the duration of the UART */
#endif


#ifndef SCAN_DELAY
#define SCAN_DELAY 0x000F00 /* delay for the scanning B71B00 = to about 1 second delay */
#endif

#ifndef ADDR_OF_DATA
#define ADDR_OF_DATA 0x0000300 /* startign address of BLE data  0x00C00000000 does NOT wokr*/
#endif


#ifndef TO_PC
#define TO_PC  0x00A00000 /* address for PC_TX */
#endif


#ifndef TO_BLE
#define TO_BLE  0x00F00000 /* address for BLE_TX  */
#endif
	
	
	/*
	a0 = GPIO Base address NOT USED
	t0 = Value NOT USED

	s5 = address to sending to PC
	s4 = address of BLE data (FPGA <- BLE)
	s3 = chars to send to BLE
	s2 = ADRESS of BLE (FPGA -> BLE)
	s1 = DElAY

	a2 = amount of chars to read
	t4 = counter for delay
	t4 = counter for read

	*/
.globl _start

start:
_start:
	li s5 , TO_PC
	li s4, ADDR_OF_DATA

    addi a2,zero,50 #how many characters should be printed

	li s1, DELAY
	li s2, TO_BLE

	add t4, zero, zero
	add t5, zero, zero

	//activate CMD> mode 
	addi s3, zero, '$'
	sw s3, 0(s2)
	jal delay  # jump to delay and save pos
	sw s3, 0(s2)
	jal delay  # jump to delay and save pos
	sw s3, 0(s2)
	jal delay  # jump to delay and save pos		

	addi s3, zero, 0x0d #enter 
	sw s3, 0(s2)
	jal delay  # jump to delay and save pos

	
	//start scanning
	addi s3, zero, 'F'
	sb s3, 0(s2)
	//sb s3, 0(s5)
	jal delay
	add s3, zero, zero

	addi s3, zero, 0x0d #enter 
	sw s3, 0(s2)
	jal delay  # jump to delay and save pos
	add s3, zero, zero

	//start scanning with increased DELAY
	li s1, SCAN_DELAY
	jal delay

	//end of scanning
	li s1, DELAY //decrease delay to normal delay

	////stop scanning
	addi s3, zero, 'X'
	sb s3, 0(s2)
	jal delay
//
	addi s3, zero, 0x0d #enter 
	sw s3, 0(s2)
	jal delay


    j read
    


j end






#Variables:
#t4 = counter
#s1 = upper limit counter(the delay variable)
#Description:
#delay for the uart
delay:
	addi t4, t4, 1
	bne s1, t4, delay
	add t4, zero, zero
	ret

#Variables:
#s4 = address of data
#a2 = amount of chars for reading
#a1 = data of s4
#s5 = address to sending to PC
#Description:
#reads the amount of chars in the ram given by a2
read:
	addi s3, zero, 'R' # s3 = zero + 'P'
	sw s3, 0(s5) #
	jal delay  # jum--imap spchex,tabhex,crhex,lfhexp to delay and save positio
	addi s3, zero, '\n' # s3 = zero + 'P'
	sw s3, 0(s5) #
reader:
	jal delay  # jump to delay and save positio
	lw a1,0(s4)
	sw a1,0(s5)
	jal delay
	addi s4, s4, 4
	addi t5, t5 ,1
	bne a1, zero, reader # if t4 < a2 then read
	add t5, zero, zero
	li s4, ADDR_OF_DATA

ending:	

	addi s3, zero, 'z' # s3 = zero + 'P'
	sw s3, 0(s5) #
	jal delay  # jump to delay and save positio


 end: 
 	add t4,zero,zero
 	j end  # jump to loop