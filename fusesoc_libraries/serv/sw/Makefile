RISC=riscv32-unknown-elf
P=python3
FILE=simple_BLE

all: run run_next build

run:; $(RISC)-gcc $(FILE).S -nostartfiles -nostdlib -march=rv32i -mabi=ilp32 -Tlink.ld -o $(FILE)

run_next:; $(RISC)-objcopy $(FILE) -O binary

build:; $P makehex.py $(FILE) > $(FILE).hex

clean:; rm $(FILE) $(FILE).hex
	