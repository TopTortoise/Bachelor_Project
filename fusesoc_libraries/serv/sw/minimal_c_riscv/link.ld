OUTPUT_FORMAT("elf32-littleriscv", "elf32-littleriscv", "elf32-littleriscv")
OUTPUT_ARCH(riscv)

MEMORY {
	mem : ORIGIN = 0x00000000, LENGTH = 0x00040000 /* VexRiscv */
}
