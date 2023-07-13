#pragma once

#include "ExLib_PWM.hpp"

namespace ExLib {

enum class HardwarePWM_Periph : std::uint8_t {
    Module0Generator0 = 0,
    Module0Generator1 = 1,
    Module0Generator2 = 2,
    Module0Generator3 = 3,
    Module1Generator0 = 4,
    Module1Generator1 = 5,
    Module1Generator2 = 6,
    Module1Generator3 = 7,
};

/**
 * @brief 硬件PWM生成器类
 *
 */
class HardwarePWM : public PWM_Generator {
  private:
    std::uintptr_t module;
    std::uintptr_t generator;

  protected:
    virtual void registerChannel(std::uint32_t channel, GPIO_Pin pinName);
    virtual void setDuty(std::uint32_t channel, Precent duty);

  public:
    virtual void setCycle(TimeInterval cycle);
    HardwarePWM(void) = delete;
    HardwarePWM(HardwarePWM_Periph periphName, TimeInterval cycle = 1_ms);

    operator HardwarePWM_Periph(void);
};

} // namespace ExLib