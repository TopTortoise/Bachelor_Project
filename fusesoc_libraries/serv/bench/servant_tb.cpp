#include <stdint.h>
#include <signal.h>
#include <stdio.h>

#include "verilated_vcd_c.h"
#include "Vservant_sim.h"

using namespace std;

static bool done;
// NAME,RSSI\n

vluint64_t main_time = 0; // Current simulation time
// This is a 64-bit integer to reduce wrap over issues and
// allow modulus.  You can also use a double, if you wish.
static int baud_t = 208;

double sc_time_stamp()
{                   // Called by $time in Verilog
  return main_time; // converts to double, to match
  // what SystemC does
}

void INThandler(int signal)
{
  printf("\nCaught ctrl-c\n");
  done = true;
}

typedef struct
{
  bool last_value;
} gpio_context_t;

void do_gpio(gpio_context_t *context, bool gpio)
{
  if (context->last_value != gpio)
  {
    context->last_value = gpio;
    printf("%lu output q is %s\n", main_time, gpio ? "ON" : "OFF");
  }
}

typedef struct
{
  uint8_t state;
  int ch;
  uint32_t baud_t;
  vluint64_t last_update;
} uart_context_t;

void uart_init(uart_context_t *context, uint32_t baud_rate)
{
  context->baud_t = baud_t; // 12000000/baud_rate;
  context->state = 0;
}

bool do_uart(uart_context_t *context, bool rx)
{
  if (context->state == 0) // start
  {
    if (rx)
      context->state++;
  }
  else if (context->state == 1) // wait for 0 from input IDLE
  {
    if (!rx)
    {
      context->last_update = main_time + context->baud_t / 2;
      context->state++;
    }
  }
  else if (context->state == 2) // init last_update and ch START
  {
    if (main_time > context->last_update)
    {
      context->last_update += context->baud_t;
      context->ch = 0;
      context->state++;
    }
  }
  else if (context->state < 11) // store byte
  {
    if (main_time > context->last_update)
    {
      context->last_update += context->baud_t;
      context->ch |= rx << (context->state - 3);
      context->state++;
    }
  }
  else
  {
    if (main_time > context->last_update)
    {
      context->last_update += context->baud_t;
      context->state = 1;
      // printf("%x ",context->ch);
      return true;
    }
  }
  return false;
}
int state = 0;
int last_update = 0;

bool send_uart(Vservant_sim *top, char ch)
{
  if (state == 0) // IDLE
  {
    top->i_data = 1;
    last_update = main_time + baud_t;
    state++;
  }
  else if (state == 1)
  {
    top->i_data = 0;
    if (main_time > last_update)
    {
      last_update += baud_t;
      state++;
    }
  }
  else if (state < 10)
  {
    top->i_data = (ch >> state - 2) & 0x01;
    if (main_time > last_update)
    {
      //printf("\n%d", top->i_data);
      last_update += baud_t;
      state++;
    }
  }
  else
  {
      top->i_data = 1;
    if (main_time > last_update)
    {
      state = 0;
      return true;
    }
  }

  return false;
}

int main(int argc, char **argv, char **env)
{
  int baud_rate = 0;
  char *BLE_data = "CMD>\nScanning BLE1,1\nBLE2,2";//\nBLE4,4\nBLE8,9\nBLE1,8\nBLE,0\0";

  gpio_context_t gpio_context;
  uart_context_t uart_context;
  uart_context_t uart_tx;
  Verilated::commandArgs(argc, argv);

  Vservant_sim *top = new Vservant_sim;

  const char *arg = Verilated::commandArgsPlusMatch("uart_baudrate=");
  if (arg[0])
  {
    baud_rate = atoi(arg + 15);
    if (baud_rate)
    {
      uart_init(&uart_context, baud_rate);
    }
  }

  VerilatedVcdC *tfp = 0;
  const char *vcd = Verilated::commandArgsPlusMatch("vcd=");
  if (vcd[0])
  {
    Verilated::traceEverOn(true);
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("trace.vcd");
  }

  signal(SIGINT, INThandler);

  vluint64_t timeout = 0;
  const char *arg_timeout = Verilated::commandArgsPlusMatch("timeout=");
  if (arg_timeout[0])
    timeout = atoi(arg_timeout + 9);

  vluint64_t vcd_start = 0;
  const char *arg_vcd_start = Verilated::commandArgsPlusMatch("vcd_start=");
  if (arg_vcd_start[0])
    vcd_start = atoi(arg_vcd_start + 11);

  bool dump = false;
  top->wb_clk = 1;
  top->i_data = 1;
  bool q = top->q;

  int counter = 0;
  bool rx_done;
  while (!(done || Verilated::gotFinish()))
  {

    if (tfp && !dump && (main_time > vcd_start))
    {
      dump = true;
    }
    top->wb_rst = main_time < 150000;
    top->eval();

    if (dump)
      tfp->dump(main_time);

    if (do_uart(&uart_context, top->o_data))
    {
      rx_done = true;
      putchar(uart_context.ch);
      fflush(stdout);
      //  if (uart_context.ch != 0) printf("%c \n", uart_context.ch);
    }
    if (uart_context.ch == 'F' && *BLE_data != '\0'  && rx_done)
    {

      if (send_uart(top, *BLE_data))
        BLE_data++;
      // printf("%c",*BLE_data);
    } // printf("hello\n");

    // counter++;
    if (timeout && (main_time >= timeout))
    {
      printf("Timeout: Exiting at time %lu\n", main_time);
      done = true;
    }
    // if (counter == 40000)
    //   break;
    top->wb_clk = !top->wb_clk;

    main_time += 1; // 83333/2;
  }
  if (tfp)
    tfp->close();
  exit(0);
}
