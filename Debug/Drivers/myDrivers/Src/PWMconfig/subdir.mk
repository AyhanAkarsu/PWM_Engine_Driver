################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/myDrivers/Src/PWMconfig/PWM_Init.c 

OBJS += \
./Drivers/myDrivers/Src/PWMconfig/PWM_Init.o 

C_DEPS += \
./Drivers/myDrivers/Src/PWMconfig/PWM_Init.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/myDrivers/Src/PWMconfig/%.o Drivers/myDrivers/Src/PWMconfig/%.su: ../Drivers/myDrivers/Src/PWMconfig/%.c Drivers/myDrivers/Src/PWMconfig/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xC -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I../Drivers/myDrivers/Inc/PWMconfig -I../Drivers/myDrivers/Inc/USARTconfig -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-myDrivers-2f-Src-2f-PWMconfig

clean-Drivers-2f-myDrivers-2f-Src-2f-PWMconfig:
	-$(RM) ./Drivers/myDrivers/Src/PWMconfig/PWM_Init.d ./Drivers/myDrivers/Src/PWMconfig/PWM_Init.o ./Drivers/myDrivers/Src/PWMconfig/PWM_Init.su

.PHONY: clean-Drivers-2f-myDrivers-2f-Src-2f-PWMconfig

