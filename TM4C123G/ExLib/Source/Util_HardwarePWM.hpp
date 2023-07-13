#pragma once

#include "ExLib_HardwarePWM.hpp"

namespace ExLib {
std::uintptr_t getHWPWMModuleByName(HardwarePWM_Periph hwPWMName);
std::uintptr_t getHWPWMGeneratorByName(HardwarePWM_Periph hwPWMName);

void enableHWPWMClock(HardwarePWM_Periph hwPWMName);
bool isLegalHWPWMPin(std::uintptr_t module, std::uint32_t generator, std::uint32_t channel, GPIO_Pin pinName);
std::uint32_t getHWPWMOutputBitByNameAndChannel(HardwarePWM_Periph hwPWMName, std::uint32_t channel);
std::uint32_t getHWPWMOutputByNameAndChannel(HardwarePWM_Periph hwPWMName, std::uint32_t channel);
void configHWPWMPin(HardwarePWM_Periph hwPWMName, GPIO_Pin pinName);

HardwarePWM_Periph getHWPWMNameByModuleAndGenerator(std::uintptr_t module, std::uint32_t generator);
} // namespace ExLib