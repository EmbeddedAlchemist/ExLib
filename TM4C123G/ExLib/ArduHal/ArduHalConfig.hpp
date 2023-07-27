#pragma once

#include "ExLib_UART.hpp"
#include "ExLib_I2C.hpp"

namespace ArduHal{

void setSerial(ExLib::UART &uart);
void setWire(ExLib::I2C &i2c);

}