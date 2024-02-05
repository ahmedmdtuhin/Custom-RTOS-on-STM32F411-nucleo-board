#include "led.h"

#define GPIOAEN (1U<<0)// 0b 0000 0000 0000 0000 0000 0000 0000 0001
#define LED_PIN (1U<<5)

void led_init(void)
{
/* Enable clock access to lead port (Port A)*/
RCC->AHB1ENR |= GPIOAEN; //Bit masking with OR


/* Set led pin as output pin*/
GPIOA-> MODER |= (1U<<10);
GPIOA-> MODER &= ~(1U<<11);// Bit masking with AND with NOT
}


void led_on(void)
{
/* Set led pin HIGH (PA5)*/
GPIOA->ODR |=LED_PIN;

}

void led_off(void){
	/*Set led pin LOW(PA5)*/
GPIOA->ODR &= ~LED_PIN;

}

