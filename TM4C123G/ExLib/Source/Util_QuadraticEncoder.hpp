#pragma once

#include "ExLib_QuadraticEncoder.hpp"

namespace ExLib{

GPIO_Pin getQuadraticEncoderDefaultAPin(QuadraticEncoder_Periph periphName);
GPIO_Pin getQuadraticEncoderDefaultBPin(QuadraticEncoder_Periph periphName);
std::uintptr_t getQuadraticEncoderPeriphByName(QuadraticEncoder_Periph periphName);
bool isLegalQuadraticEncoderPin(std::uintptr_t periph, GPIO_Pin pinNameA, GPIO_Pin pinNameB);
QuadraticEncoder_Periph getQuadraticEncoderNameByPeriph(std::uintptr_t periph);
void configQuadraticEncoderClock(QuadraticEncoder_Periph periphName, bool isEnable);
void configQuadraticEncoderPin(std::uintptr_t periph, GPIO_Pin pinA, GPIO_Pin pinB);
}