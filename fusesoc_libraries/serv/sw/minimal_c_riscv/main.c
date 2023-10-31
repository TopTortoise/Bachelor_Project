#include "stdint.h"
#include "fixed_point.h"
#define data_adr (0x730)
static volatile int * const UART_BLE = (int * const)0x00F00000; // hier die adresse von deinem uart
static volatile int * const UART_PC  = (int * const)0x00A00000; // hier die adresse von deinem uart
static volatile int * DATA  = (int *)0x730; // hier die adresse von deinem uart


const int8_t MEASURED_POWER = -57;//calculated with 50 differen obsverations of my phone
const int N = 2;//environmental constant


//COMANDS BLE
const char CMD = '$';
const char SCAN = 'F';
const char STOP = 'X';
const char END = '-';
const char SEND = 0x0d;

//DELAYS
const int DELAY_T = 0x08A8;//0x01A8
const unsigned int SCAN_DELAY_T = 0xB71B00;


void delay(int delay_t);
unsigned char Hex_to_int(char byte);
void analyze();
void read();
#pragma GCC push_options
#pragma GCC optimize ("Os")
int main() {

 // while (1) {
    //$$$
    *UART_BLE = CMD; 
    delay(DELAY_T);
    *UART_BLE = CMD; 
    delay(DELAY_T);
    *UART_BLE = CMD; 
    delay(DELAY_T);
    *UART_BLE = SEND;
    delay(DELAY_T);
    //F
    *UART_BLE = SCAN; 
    delay(DELAY_T);
    *UART_BLE = SEND;
    delay(SCAN_DELAY_T);
    
    //X
    *UART_BLE = STOP; 
    delay(DELAY_T);
    *UART_BLE = SEND;
    delay(DELAY_T);


    //---
    *UART_BLE = END; 
    delay(DELAY_T);
    *UART_BLE = END; 
    delay(DELAY_T);
    *UART_BLE = END; 
    delay(DELAY_T);
    *UART_BLE = SEND;
    delay(DELAY_T);

    *UART_PC = '\n';
    delay(DELAY_T);


    *UART_PC = 'R';
    delay(DELAY_T); 
    read();
    *UART_PC = '\n';
    delay(DELAY_T); 
    *UART_PC = 'A';
    delay(DELAY_T); 
    analyze();
    *UART_PC = '\n';
    delay(DELAY_T); 
    *UART_PC = 'R';
    delay(DELAY_T); 
    read();

    *UART_PC = '\n';
    delay(DELAY_T);
    *UART_PC = 'D';
    delay(DELAY_T);

    while(1);
  
  //}
    
  return 0;
}

/**
 * reads all the data of RAM from address 0x7E8 until a 0 byte is found
*/
void /* __attribute__((optimize("Os"))) */ read(){
  char c;
  while ((c = *DATA), c!='\0')
  {
    *UART_PC = c;
    delay(DELAY_T);
    DATA++;
  }
  DATA = (int *)data_adr;
}
/**
 * analyze:
 * calculates the distance from BLE module and rewrites the data in an easier processable format:calculate_distance
 * %<ADDRESS,RSSI,DISTANCE>%
 * 
 * input: %ADDRESS,TYPE,,,RSSI% or %ADDRESS,TYPE,RSSI,,BRCST:MSG%
*/
void analyze(){
  int16_t distance = 0;
  int16_t rssi = 0;

  volatile int * free = DATA;
  volatile int * la = DATA;

  char c;
  while (*DATA != '%')
  {
    DATA++;
  }
    *UART_PC = 'S';
    delay(DELAY_T); 
  while (*DATA != 0)
  {
    
    while(*DATA != '%'){
        if(*DATA == 0){
          DATA = (int *)data_adr;
          return;
        }
        //*free = c;
        //free++;
        DATA++;
    }//read until %
       
    *free = '%';//write %
    free++;
    
    DATA++;//read %

    while ((c= *DATA), c!= ',')//read address
    {
      *free = c;
      free++;
      DATA++;
    }

    *free = ',';//write ,
    free++;
    DATA++;//read ,

    //free = free == (int *)la? DATA : free;//set free to Data to overwrite addresstype
    //free++;
    DATA++;//read TYPE (*useless line can be deleted later*)

    //go to end of the message
    la = DATA+2;
    while (*la!='%')
    {
      DATA++;
      la++;
    }
    //la == % and DATA == first value of RSSI
    //%ADDRESS,TYPE,,,C4      %
    //         ^free  ^DATA   ^la

    *free = *DATA;//write first value of RSSI
    rssi = (Hex_to_int(*DATA)*16);
    DATA++;
    free++;
    *free = *DATA;//write second value of RSSI
    rssi += Hex_to_int(*DATA);

    rssi = rssi<MEASURED_POWER?0:rssi;

    
    free++;
    *free = ',';
    free++;
    //distance = (20th root of 10)^((MEASURED_POWER-rssi))
    distance = pow_point(BASE,(int8_t)(MEASURED_POWER-rssi));
    *free = (int8_t)(distance>>8);
    free++;
    *free = (int8_t)(distance);
    free++;
    *free = '%';
    free++;

    /* *UART_PC = 'P';
    delay(DELAY_T);

    *UART_PC = power>>8;
    delay(DELAY_T);
    *UART_PC = power;
    delay(DELAY_T); */

    DATA = la;//set data to %

    DATA++;//read last %
    rssi = 0;
    
  }
    *free = '\0';
    *la = '\0';
    *DATA = '\0';
  
    DATA = (int *)data_adr;
}
#pragma GCC pop_options

unsigned char __attribute__((optimize("Os"))) Hex_to_int(char byte){
  unsigned char value = 0;
  if (byte >= '0' && byte <= '9') value = byte - '0';
  else if (byte >= 'a' && byte <='f') value = byte - 'a' + 10;
  else if (byte >= 'A' && byte <='F') value = byte - 'A' + 10;  
  return value;

}

/**
* creates an delay so that the UART can send the data
*/
void delay(int delay_t){
  for (unsigned int i = 0; i < delay_t; i++) ;
}