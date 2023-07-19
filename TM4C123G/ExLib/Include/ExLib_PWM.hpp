#pragma once

#include <stdint.h>
#include "ExLib_GPIO.hpp"
#include "ExLib_Units.hpp"

namespace ExLib {
class PWM_Generator;
class PWM_Channel;

/**
 * @brief PWM生成器的抽象类
 * 
 */
class PWM_Generator {
    protected:
      friend class PWM_Channel;
      virtual void registerPWMChannel(std::uint32_t channel, GPIO_Pin pinName) = 0;
      virtual void setDuty(std::uint32_t channel, Precent duty) = 0;

    public:
      virtual void setCycle(TimeInterval cycle) = 0;
};


/**
 * @brief PWM通道类
 * 
 */
class PWM_Channel {
      PWM_Generator &generator;
      std::uint32_t channel;

    public:
      PWM_Channel(void) = delete;
      PWM_Channel(PWM_Generator &generator, std::uint32_t channel, GPIO_Pin pinName);
      void setDuty(Precent duty);
      void _setCycle(TimeInterval cycle);
};
} // namespace ExLib