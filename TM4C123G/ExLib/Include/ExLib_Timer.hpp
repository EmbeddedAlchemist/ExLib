#pragma once

#include "ExLib_Capture.hpp"
#include "ExLib_PWM.hpp"
#include "ExLib_Units.hpp"
#include "ExLib_CallbackFunction.hpp"

namespace ExLib {

/**
 * @brief 枚举了所有定时器
 *
 */
enum class GeneralTimer_Periph {
    Timer0 = 0,
    Timer0A = 1,
    Timer0B = 2,
    Timer1 = 3,
    Timer1A = 4,
    Timer1B = 5,
    Timer2 = 6,
    Timer2A = 7,
    Timer2B = 8,
    Timer3 = 9,
    Timer3A = 10,
    Timer3B = 11,
    Timer4 = 12,
    Timer4A = 13,
    Timer4B = 14,
    Timer5 = 15,
    Timer5A = 16,
    Timer5B = 17,
    WideTimer0 = 18,
    WideTimer0A = 19,
    WideTimer0B = 20,
    WideTimer1 = 21,
    WideTimer1A = 22,
    WideTimer1B = 23,
    WideTimer2 = 24,
    WideTimer2A = 25,
    WideTimer2B = 26,
    WideTimer3 = 27,
    WideTimer3A = 28,
    WideTimer3B = 29,
    WideTimer4 = 30,
    WideTimer4A = 31,
    WideTimer4B = 32,
    WideTimer5 = 33,
    WideTimer5A = 34,
    WideTimer5B = 35,
};

class GeneralTimer : public Capturer, PWM_Generator {
  private:
    CallbackFunction *onOverflowCallback;
    

  protected:
    virtual void registerChannel(std::uint32_t channel, GPIO_Pin pinName);
    virtual void setDuty(std::uint32_t channel, Precent duty);

  public:
    virtual void setCycle(TimeInterval cycle);

    void onOverflow(CallbackFunction &callback);

    GeneralTimer(void) = delete;
    GeneralTimer(GeneralTimer_Periph timerName);

    void begin(void);
    void end(void);
};

} // namespace ExLib