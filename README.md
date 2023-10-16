# Bachelor_Project

## Setup testing environment

run these commands to setup Docker image and run Docker container:

```bash 
./build_docker_image.sh

./run_docker_image.sh
```

### To compile for Testing

```bash 
fusesoc run --target=verilator_tb servant --uart_baudrate=115200 --firmware=${SERV}/sw/simple_BLE.hex
```

### To compile the project run on ICESTICK:
```bash
fusesoc run --target=icestick servant --memfile=/fusesoc_libraries/serv/sw/simple_BLE.hex
```

### to load the code onto the Icestick run:
```bash
iceprog build/servant_1.2.1/icestick-icestorm/servant_1.2.1.bin
```

all relevant files for the project are in the 
[service directory](https://github.com/TopTortoise/Bachelor_Project/tree/main/fusesoc_libraries/serv/service).


# TODO

make saving data from the BLE more memory efficient


