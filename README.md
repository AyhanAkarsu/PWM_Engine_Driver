# PWM Engine Driver

STM32F401-based embedded project that controls motor speed through PWM and receives a duty-cycle value over USART.

## Hardware and tools

- STM32F401CB
- STM32CubeIDE / GCC ARM toolchain
- PWM output connected to the motor driver
- USART terminal for entering a duty cycle from 0 to 100

Open `PWM_Engine_Driver.ioc` in STM32CubeIDE to review the pin mapping, then build and flash the board. The `Debug/` directory contains generated artifacts.
