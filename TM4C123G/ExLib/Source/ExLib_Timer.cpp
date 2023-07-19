#include "ExLib_Timer.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"
#include "Util_Timer.hpp"

namespace ExLib {
GeneralTimer *GeneralTimer::generalTimerObjects[24] = {nullptr};

void GeneralTimer::begin() {
    std::uint32_t interruptType;
    std::uint32_t timerConfig;
    if (type == GeneralTimer_Type::Completed) {
        interruptType = TIMER_TIMA_TIMEOUT;
        timerConfig = TIMER_CFG_PERIODIC;
    } else if (type == GeneralTimer_Type::SplitedA) {
        interruptType = TIMER_TIMA_TIMEOUT;
        timerConfig = TIMER_CFG_A_PERIODIC;
    } else if (type == GeneralTimer_Type::SplitedB) {
        interruptType = TIMER_TIMB_TIMEOUT;
        timerConfig = TIMER_CFG_B_PERIODIC;
    }
    DeviceSupport::TimerConfigure(periph, timerConfig);
    DeviceSupport::IntRegister(getTimerInterruptNumberByName(*this), getTimerInterruptHandlerByName(*this));
    DeviceSupport::IntEnable(getTimerInterruptNumberByName(*this));
    DeviceSupport::TimerIntEnable(periph, interruptType);
    DeviceSupport::TimerEnable(periph, part);
}

GeneralTimer::operator GeneralTimer_Periph() {
    return getTimerNameByPeriphAndType(periph, type);
}

void (*GeneralTimer::getTimerInterruptHandlerByName(GeneralTimer_Periph timerName))(void) {
    static void (*const interruptHandlerFunction[])(void) = {
        timer0AInterruptCallback,
        timer0BInterruptCallback,
        timer1AInterruptCallback,
        timer1BInterruptCallback,
        timer2AInterruptCallback,
        timer2BInterruptCallback,
        timer3AInterruptCallback,
        timer3BInterruptCallback,
        timer4AInterruptCallback,
        timer4BInterruptCallback,
        timer5AInterruptCallback,
        timer5BInterruptCallback,
        wtimer0AInterruptCallback,
        wtimer0BInterruptCallback,
        wtimer1AInterruptCallback,
        wtimer1BInterruptCallback,
        wtimer2AInterruptCallback,
        wtimer2BInterruptCallback,
        wtimer3AInterruptCallback,
        wtimer3BInterruptCallback,
        wtimer4AInterruptCallback,
        wtimer4BInterruptCallback,
        wtimer5AInterruptCallback,
        wtimer5BInterruptCallback,
    };
    std::size_t div = (std::size_t)timerName / 3;
    std::size_t mod = (std::size_t)timerName % 3;
    if (mod == 0 || mod == 1)
        return interruptHandlerFunction[div * 2];
    else if (mod == 2)
        return interruptHandlerFunction[div * 2 + 1];

    // 正常运行不可能到这里
    return nullptr;
}

GeneralTimer::GeneralTimer(GeneralTimer_Periph timerName, TimeInterval cycle)
    : periph(getTimerPeriphByName(timerName)),
      part(getTimerPartByName(timerName)),
      type(getTimerTypeByName(timerName)) {
    std::size_t objIndex = getTimerObjectsIndexByName(timerName);
    if (type == GeneralTimer_Type::Completed) {
        if (generalTimerObjects[objIndex] != nullptr) {
            if (generalTimerObjects[objIndex]->type == GeneralTimer_Type::Completed)
                Exception::raiseException("Do not generate other objects for same completed timer periph");
            else
                Exception::raiseException("Cannot use completed timer while splited timer A is using");
        } else if (generalTimerObjects[objIndex + 1] != nullptr)
            Exception::raiseException("Cannot use completed timer while splited timer B is using");
    } else if (generalTimerObjects[objIndex] != nullptr &&
               (type == GeneralTimer_Type::SplitedA || type == GeneralTimer_Type::SplitedB))
        Exception::raiseException("Do not generate other objects for same splited timer A/B");
    generalTimerObjects[objIndex] = this;
    configTimerClock(timerName, true);
    DeviceSupport::TimerClockSourceSet(periph, TIMER_CLOCK_SYSTEM);
    setCycle(cycle);
}

void GeneralTimer::interruptCallback() {
    std::uint32_t intFlag = DeviceSupport::TimerIntStatus(periph, true);
    DeviceSupport::TimerIntClear(periph, intFlag);
    if (intFlag & TIMER_TIMA_TIMEOUT &&
        (type == GeneralTimer_Type::Completed || type == GeneralTimer_Type::SplitedA)) {
        if (onOverflowCallback != nullptr)
            onOverflowCallback->call();
    }
    if (intFlag & TIMER_TIMB_TIMEOUT &&
        type == GeneralTimer_Type::SplitedB) {
        if (onOverflowCallback != nullptr)
            onOverflowCallback->call();
    }
}

void GeneralTimer::registerPWMChannel(std::uint32_t channel, GPIO_Pin pinName) {
    std::uint32_t timerConfig;
    if (type == GeneralTimer_Type::Completed) {
        Exception::raiseException("A completed timer cannot use as PWM generator");
        return;
    }

    // isLegalTimerPin
    // configTimerPin

    if (type == GeneralTimer_Type::SplitedA)
        timerConfig = TIMER_CFG_A_PWM;
    else if (type == GeneralTimer_Type::SplitedB)
        timerConfig = TIMER_CFG_B_PWM;
    DeviceSupport::TimerConfigure(periph, timerConfig);
}

void GeneralTimer::setDuty(std::uint32_t channel, Precent duty) {
}

void GeneralTimer::setCycle(TimeInterval cycle) {
    uint64_t reload = (uint64_t)DeviceSupport::SysCtlClockGet() / 1000000 * cycle.us;
    if (is1632BitTimer(*this)) {
        DeviceSupport::TimerLoadSet(periph, part, reload);
    } else if (is64BitTimer(*this)) {
        DeviceSupport::TimerLoadSet64(periph, reload);
    }
}

void GeneralTimer::onOverflow(CallbackFunction &callback) {
    onOverflowCallback = &callback;
}

void GeneralTimer::timer0AInterruptCallback(void) {
    generalTimerObjects[0]->interruptCallback();
}

void GeneralTimer::timer0BInterruptCallback(void) {
    generalTimerObjects[1]->interruptCallback();
}

void GeneralTimer::timer1AInterruptCallback(void) {
    generalTimerObjects[2]->interruptCallback();
}

void GeneralTimer::timer1BInterruptCallback(void) {
    generalTimerObjects[3]->interruptCallback();
}

void GeneralTimer::timer2AInterruptCallback(void) {
    generalTimerObjects[4]->interruptCallback();
}

void GeneralTimer::timer2BInterruptCallback(void) {
    generalTimerObjects[5]->interruptCallback();
}

void GeneralTimer::timer3AInterruptCallback(void) {
    generalTimerObjects[6]->interruptCallback();
}

void GeneralTimer::timer3BInterruptCallback(void) {
    generalTimerObjects[7]->interruptCallback();
}

void GeneralTimer::timer4AInterruptCallback(void) {
    generalTimerObjects[8]->interruptCallback();
}

void GeneralTimer::timer4BInterruptCallback(void) {
    generalTimerObjects[9]->interruptCallback();
}

void GeneralTimer::timer5AInterruptCallback(void) {
    generalTimerObjects[10]->interruptCallback();
}

void GeneralTimer::timer5BInterruptCallback(void) {
    generalTimerObjects[11]->interruptCallback();
}

void GeneralTimer::wtimer0AInterruptCallback(void) {
    generalTimerObjects[12]->interruptCallback();
}

void GeneralTimer::wtimer0BInterruptCallback(void) {
    generalTimerObjects[13]->interruptCallback();
}

void GeneralTimer::wtimer1AInterruptCallback(void) {
    generalTimerObjects[14]->interruptCallback();
}

void GeneralTimer::wtimer1BInterruptCallback(void) {
    generalTimerObjects[15]->interruptCallback();
}

void GeneralTimer::wtimer2AInterruptCallback(void) {
    generalTimerObjects[16]->interruptCallback();
}

void GeneralTimer::wtimer2BInterruptCallback(void) {
    generalTimerObjects[17]->interruptCallback();
}

void GeneralTimer::wtimer3AInterruptCallback(void) {
    generalTimerObjects[18]->interruptCallback();
}

void GeneralTimer::wtimer3BInterruptCallback(void) {
    generalTimerObjects[19]->interruptCallback();
}

void GeneralTimer::wtimer4AInterruptCallback(void) {
    generalTimerObjects[20]->interruptCallback();
}

void GeneralTimer::wtimer4BInterruptCallback(void) {
    generalTimerObjects[21]->interruptCallback();
}

void GeneralTimer::wtimer5AInterruptCallback(void) {
    generalTimerObjects[22]->interruptCallback();
}

void GeneralTimer::wtimer5BInterruptCallback(void) {
    generalTimerObjects[23]->interruptCallback();
}

} // namespace ExLib
