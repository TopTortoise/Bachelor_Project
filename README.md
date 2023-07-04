# Bachelor_Project

### To compile the project run:
```fusesoc run --target=icestick servant --memfile=/fusesoc_libraries/serv/sw/blinky.hex```

still have to test if it works when only changing the hex file.
until I only tried it without the memfile arg and had to change something in the verilog code to run the new software

### to load the code onto the Icestick run:
```iceprog build/servant_1.2.1/icestick-icestorm/servant_1.2.1.bin```
