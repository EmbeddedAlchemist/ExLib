#pragma once

#include "ExLib_GPIO.hpp"

namespace ExLib {

enum class QuadraticEncoder_Periph {
    QuadraticEncoder0 = 0,
    QuadraticEncoder1 = 1
};

class QuadraticEncoder {
  private:
    GPIO_Pin pinA, pinB;
    std::uintptr_t periph;

  public:
    QuadraticEncoder(void) = delete;
    QuadraticEncoder(QuadraticEncoder_Periph encoderName);
    QuadraticEncoder(QuadraticEncoder_Periph encoderName, GPIO_Pin pinA, GPIO_Pin pinB);
    void setPins(GPIO_Pin pinA, GPIO_Pin pinB);

    void begin();
    void end();

    std::int32_t getCounter(void);
    void setCounter(std::int32_t counter);
    void resetCounter();

    operator QuadraticEncoder_Periph();
};
} // namespace ExLib