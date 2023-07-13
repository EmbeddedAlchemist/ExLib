#pragma once

#include "ExLib_GPIO.hpp"

namespace ExLib
{
std::uint16_t getGPIOPinByName(GPIO_Pin pinName);
std::uintptr_t getGPIOPortByName(GPIO_Pin pinName);
GPIO_Pin getGPIONameByPortAndPin(std::uintptr_t port, std::uint16_t pin);
void enableGPIOClock(std::uintptr_t port);
void configGPIOMode(std::uintptr_t port, std::uint8_t pin, GPIO_Mode modeName);
}