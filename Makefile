all: compile

compile: 
	fusesoc run --target=icestick servant --memfile=${SERV}/sw/simple_BLE.hex

test:
	fusesoc run --target=verilator_tb servant --uart_baudrate=115200 --firmware=${SERV}/sw/simple_BLE.hex --vcd

view: 
	gtkwave -o build/servant_1.2.1/verilator_tb-verilator/trace.vcd -g -c 10