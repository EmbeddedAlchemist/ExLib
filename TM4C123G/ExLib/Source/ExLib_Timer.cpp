#include "ExLib_Timer.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"
#include "Util_Timer.hpp"

namespace ExLib {
static GeneralTimer GeneralTimer::*generalTimerObjects[24] = {nullptr};

void GeneralTimer::begin() {
    INT_TIMER0A;
}

GeneralTimer::operator GeneralTimer_Periph() {
    return getTimerNameByPeriph(periph);
}

GeneralTimer::GeneralTimer(GeneralTimer_Periph timerName, TimeInterval cycle)
    : periph(getTimerPeriphByName(timerName)),
      part(getTimerPartByName(timerName)) {
    std::size_t objIndex = getTimerObjectsIndexByName(timerName);
    if (isFullTimer(timerName)) {
        if (generalTimerObjects[objIndex] != nullptr) {
            if (isFullTimer(*generalTimerObjects[objIndex]))
                Exception::raiseException("Do not generate other objects for same completed timer periph");
            else
                Exception::raiseException("Cannot use completed timer while timer A is using");
        } else if (generalTimerObjects[objIndex + 1] != nullptr)
            Exception::raiseException("Cannot use completed timer while timer B is using");
    }
    else if(generalTimerObjects[objIndex] != nullptr && (isHalfATimer(timerName) || isHalfBTimer(timerName)))
        Exception::raiseException("Do not generate other objects for same A/B timer periph");
    generalTimerObjects[objIndex] = this;
    configTimerClock(timerName, true);
    DeviceSupport::TimerClockSourceSet(periph, TIMER_CLOCK_SYSTEM);
    setCycle(cycle);
}

void GeneralTimer::registerPWMChannel(std::uint32_t channel, GPIO_Pin pinName) {
    std::uint32_t timerConfig;
    if (isFullTimer(*this)) {
        Exception::raiseException("A completed timer cannot use as PWM generator");
        return;
    }

    if (isHalfATimer(*this)) {
        timerConfig = TIMER_CFG_A_PWM;
    } else if (isHalfBTimer(*this)) {
        timerConfig = TIMER_CFG_B_PWM;
    }
    DeviceSupport::TimerConfigure(periph, timerConfig);
}

void GeneralTimer::setCycle(TimeInterval cycle) {
    uint64_t reload = (uint64_t)DeviceSupport::SysCtlClockGet() / 1000000 * cycle.us;
    if (is1632BitTimer(*this)) {
        DeviceSupport::TimerLoadSet(periph, part, 1);
    } else if (is64BitTimer(*this)) {
        DeviceSupport::TimerLoadSet64(periph, 1);
    }
}

} // namespace ExLib
