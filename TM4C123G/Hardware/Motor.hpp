#pragma once

#include "ExLib_PWM.hpp"

class Motor {
  private:
    ExLib::PWM_Channel &channelA, &channelB;

  public:
    Motor(ExLib::PWM_Channel &channelA, ExLib::PWM_Channel &channelB);
    void brake(void);
    void run(float power);
};