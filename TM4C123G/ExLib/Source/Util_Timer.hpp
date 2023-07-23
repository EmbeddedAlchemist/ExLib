#pragma once

#include "ExLib_Timer.hpp"

namespace ExLib {
std::uintptr_t getTimerPeriphByName(GeneralTimer_Periph timerName);
std::uint32_t getTimerPartByName(GeneralTimer_Periph timerName);
GeneralTimer_Periph getTimerNameByPeriphAndType(std::uintptr_t periph, GeneralTimer_Type type);
bool is1632BitTimer(GeneralTimer_Periph timerName);
bool is64BitTimer(GeneralTimer_Periph timerName);
GeneralTimer_Type getTimerTypeByName(GeneralTimer_Periph timerName);

void configTimerClock(GeneralTimer_Periph timerName, bool isEnable);

bool isLegalTimerPin(std::uintptr_t periph, GeneralTimer_Type type, GPIO_Pin pin);
void configTimerPin(std::uintptr_t periph, GPIO_Pin pin);

std::size_t getTimerObjectsIndexByName(GeneralTimer_Periph timerName);
std::uint32_t getTimerInterruptNumberByName(GeneralTimer_Periph timerName);

} // namespace ExLib