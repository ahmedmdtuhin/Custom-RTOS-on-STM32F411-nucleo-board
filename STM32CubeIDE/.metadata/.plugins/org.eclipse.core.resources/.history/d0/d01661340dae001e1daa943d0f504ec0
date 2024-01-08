#include "led.h"
#include "uart.h"
#include "timebase.h"

void motor_run(void);
void motor_stop(void);
void valve_open(void);
void valve_close(void);


int main (void)
{

  led_init();
  uart_tx_init();
  timebase_init();

  while (1)
  {
	  motor_run();
	  delay(1);
	  motor_stop();
	  delay(1);

  }

}

void motor_run(void)
{
	printf("Motor is starting \n\r");
}

void motor_stop(void)
{
	printf("Motor is stopping \n\r");
}

void valve_open(void)
{
	printf("Valve is opening \n\r");
}

void valve_close(void)
{
	printf("Valve is closing \n\r");
}
