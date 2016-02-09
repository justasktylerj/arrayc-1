################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ArrayController/ArrayController.cpp \
../src/ArrayController/ArrayRunner.cpp 

OBJS += \
./src/ArrayController/ArrayController.o \
./src/ArrayController/ArrayRunner.o 

CPP_DEPS += \
./src/ArrayController/ArrayController.d \
./src/ArrayController/ArrayRunner.d 


# Each subdirectory must supply rules for building sources it contributes
src/ArrayController/%.o: ../src/ArrayController/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


