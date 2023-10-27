all: compile into-binary turn-into-hex

compile: main.c
	riscv32-unknown-elf-gcc -o main bootstrap.S main.c -march=rv32i -mabi=ilp32 -nostartfiles -T link.ld

into-binary:
	riscv32-unknown-elf-objcopy main -O binary

turn-into-hex:
	python3 makehex.py main > main.hex

dump-code: all
	riscv32-unknown-elf-objdump -dj .text -M no-aliases main

clean:
	rm -f main main main.hex