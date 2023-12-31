#include "led.h"


int main (void)
{

  led_init();

  while (1)
  {
	  led_on();
	  for (int i=0; i<100000;i++)//pseudo delay
	  {}
	  led_off();
	  for (int i=0; i<100000;i++)
	  {}
  }



}
