all: compile

compile: 
	fusesoc run --target=icestick --flag=mdu servant  --memfile=${SERV}/sw/minimal_c_riscv/main.hex

test:
	fusesoc run --target=verilator_tb servant --uart_baudrate=115200 --firmware=${SERV}/sw/minimal_c_riscv/main.hex
vcd:
	fusesoc run --target=verilator_tb servant --uart_baudrate=115200 --firmware=${SERV}/sw/minimal_c_riscv/main.hex --vcd

view: 
	gtkwave -o build/servant_1.2.1/verilator_tb-verilator/trace.vcd -g -c 10

