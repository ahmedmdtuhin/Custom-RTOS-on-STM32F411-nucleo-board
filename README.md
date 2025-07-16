# Custom RTOS on STM32F411 Nucleo Board

This project implements a custom Real-Time Operating System (RTOS) from scratch on the STM32F411 Nucleo board. It includes bare-metal LED and UART drivers and a simple three-thread round-robin scheduler.

## 🚀 Project Overview

- Developed using STM32 HAL and CMSIS headers.
- Bare-metal implementation without relying on FreeRTOS or any external RTOS libraries.
- Custom RTOS features task switching using SysTick timer interrupts.
- UART and GPIO (LED) peripheral drivers created from scratch in bare metal for testing.
- Round Robin schedule implementation.

## 🛠️ Features

- 🧵 **Three-thread round-robin scheduler**
- 💡 **LED blinking task**
- 🔄 **UART serial communication (TX/RX)**
- ⏱️ **Preemptive task switching using SysTick**
- 🛠️ **Fully written in C using STM32 HAL and low-level registers**

### Requirements
- STM32F411 Nucleo Board
- STM32CubeIDE or compatible toolchain (e.g., GCC ARM + Makefile)
- USB-to-serial monitor (e.g., PuTTY, Tera Term)

### Build and Flash
1. Clone the repository
2. Open the project in STM32CubeIDE or use make to build if you're using a Makefile setup.
3. Flash the firmware to the Nucleo board.
4. Open a serial terminal at 9600 baud to see UART output.


## 📚 Learning Source

This project was developed as part of a hands-on embedded systems learning journey.  
🎓 **Course Reference:** [RTOS - Building from Ground Up on ARM Processors (Udemy)](https://www.udemy.com/course/rtos-building-from-ground-up-on-arm-processors/?couponCode=MT150725G2)

