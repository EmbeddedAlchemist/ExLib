#include "ArduHalConfig.hpp"
#include "HardwareSerial.h"
#include "Wire.h"

arduino::HardwareSerial Serial;
TwoWire Wire;

void ArduHal::setSerial(ExLib::UART &uart) {
    Serial._setUARTObj(uart);
}

void ArduHal::setWire(ExLib::I2C &i2c) {
    Wire._setI2CObj(i2c);
}
