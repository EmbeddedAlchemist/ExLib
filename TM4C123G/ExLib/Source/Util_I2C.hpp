#pragma once
#include "ExLib_I2C.hpp"

namespace ExLib{

std::uintptr_t getI2CPeriphByName(I2C_Periph i2cName);
GPIO_Pin getI2CDefaultSCLPin(I2C_Periph i2cName);
GPIO_Pin getI2CDefaultSDAPin(I2C_Periph i2cName);
bool isLegalI2CPin(std::uintptr_t periph, GPIO_Pin pinSCL, GPIO_Pin pinSDA);
}