//#pragma gcc push_options
//#pragma gcc GCC optimize ("Os")

static volatile char * const UART_PC = (char * const)0x00A00000; //pc_uart 
static volatile char * const UART_TX = (char * const)0x00F00000; // tx_uart
static volatile char * const ADR_LL = (char * const)0x300; // lowest address for ble data
static volatile char * const ADR_UL = (char * const)0x1FFC; // highest address for ble data

////uart delay
//const int DELAY_T = 0x0680;
//
////command ending
//const int CR = 0x0d;
////commands
//const char CMD = '$';
//const char END = '-';
//const char SCAN = 'F';
//const char END_SCAN = 'X';
//
////scanning parameters
//const int  SCAN_INTERVAL = 0x001;
//const int  SCAN_WINDOW = 0x001;
//const int SCAN_DELAY = 120000;//12 million == ca. 1 second delay



void delay();
void read();

int main() {

    *UART_PC = '$'; // send $
    delay();
    *UART_PC = '$'; // send $
    delay();
    *UART_PC = '$'; // send $
    delay();

    read();
    //*UART_TX = CR; // send "enter"
    //delay(DELAY_T);
    //*UART_TX = SCAN; // send F
    //delay(DELAY_T);
    //*UART_TX = CR; // send F
    //delay(DELAY_T);//scan delay
    //*UART_TX = END_SCAN; // send X
    //delay(DELAY_T);//scan delay
    //*UART_TX = CR; // send "enter"
    //delay(DELAY_T);//scan delay
//    read();
//    *UART_TX = 'z'; // send "enter"
//    delay(DELAY_T);//scan delay



    return 0;

}

void read(){
  volatile char * data = ADR_LL;
  
  while(*data != 0){

      *UART_PC = *data;
      data+=4;
  }
}
//#pragma gcc pop_options

void delay(){
  for (int i = 0; i < 0x680; i++);

  }