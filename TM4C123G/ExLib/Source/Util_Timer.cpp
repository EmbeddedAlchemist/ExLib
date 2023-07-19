#include "Util_Timer.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"

namespace ExLib {

std::uintptr_t getTimerPeriphByName(GeneralTimer_Periph timerName) {
    static const std::uintptr_t periph[] = {
        TIMER0_BASE,
        TIMER1_BASE,
        TIMER2_BASE,
        TIMER3_BASE,
        TIMER4_BASE,
        TIMER5_BASE,
        WTIMER0_BASE,
        WTIMER1_BASE,
        WTIMER2_BASE,
        WTIMER3_BASE,
        WTIMER4_BASE,
        WTIMER5_BASE,
    };
    if ((std::size_t)timerName / 3 >= sizeof(periph) / sizeof(periph[0])) {
        Exception::raiseException("Bad GeneralTimer_Periph");
    }
    return periph[(std::size_t)timerName / 3];
}

std::uint32_t getTimerPartByName(GeneralTimer_Periph timerName) {
    std::uint32_t modValue = (std::uint32_t)timerName % 3;
    if (modValue == 0 || modValue == 1) {
        return TIMER_A;
    } else if (modValue == 2) {
        return TIMER_B;
    }
    return 0;
}

GeneralTimer_Periph getTimerNameByPeriph(std::uintptr_t periph) {
    switch (periph) {
    }
}

bool is1632BitTimer(GeneralTimer_Periph timerName) {
    return timerName == GeneralTimer_Periph::Timer0 ||
           timerName == GeneralTimer_Periph::Timer0A ||
           timerName == GeneralTimer_Periph::Timer0B ||
           timerName == GeneralTimer_Periph::Timer1 ||
           timerName == GeneralTimer_Periph::Timer1A ||
           timerName == GeneralTimer_Periph::Timer1B ||
           timerName == GeneralTimer_Periph::Timer2 ||
           timerName == GeneralTimer_Periph::Timer2A ||
           timerName == GeneralTimer_Periph::Timer2B ||
           timerName == GeneralTimer_Periph::Timer3 ||
           timerName == GeneralTimer_Periph::Timer3A ||
           timerName == GeneralTimer_Periph::Timer3B ||
           timerName == GeneralTimer_Periph::Timer4 ||
           timerName == GeneralTimer_Periph::Timer4A ||
           timerName == GeneralTimer_Periph::Timer4B ||
           timerName == GeneralTimer_Periph::Timer5 ||
           timerName == GeneralTimer_Periph::Timer5A ||
           timerName == GeneralTimer_Periph::Timer5B ||
           timerName == GeneralTimer_Periph::WideTimer0A ||
           timerName == GeneralTimer_Periph::WideTimer0B ||
           timerName == GeneralTimer_Periph::WideTimer1A ||
           timerName == GeneralTimer_Periph::WideTimer1B ||
           timerName == GeneralTimer_Periph::WideTimer2A ||
           timerName == GeneralTimer_Periph::WideTimer2B ||
           timerName == GeneralTimer_Periph::WideTimer3A ||
           timerName == GeneralTimer_Periph::WideTimer3B ||
           timerName == GeneralTimer_Periph::WideTimer4A ||
           timerName == GeneralTimer_Periph::WideTimer4B ||
           timerName == GeneralTimer_Periph::WideTimer5A;
}

bool is64BitTimer(GeneralTimer_Periph timerName) {
    return timerName == GeneralTimer_Periph::WideTimer0 ||
           timerName == GeneralTimer_Periph::WideTimer1 ||
           timerName == GeneralTimer_Periph::WideTimer2 ||
           timerName == GeneralTimer_Periph::WideTimer3 ||
           timerName == GeneralTimer_Periph::WideTimer4 ||
           timerName == GeneralTimer_Periph::WideTimer5;
}

bool isHalfATimer(GeneralTimer_Periph timerName) {
    return timerName == GeneralTimer_Periph::Timer0A ||
           timerName == GeneralTimer_Periph::Timer1A ||
           timerName == GeneralTimer_Periph::Timer2A ||
           timerName == GeneralTimer_Periph::Timer3A ||
           timerName == GeneralTimer_Periph::Timer4A ||
           timerName == GeneralTimer_Periph::Timer5A ||
           timerName == GeneralTimer_Periph::WideTimer0A ||
           timerName == GeneralTimer_Periph::WideTimer1A ||
           timerName == GeneralTimer_Periph::WideTimer2A ||
           timerName == GeneralTimer_Periph::WideTimer3A ||
           timerName == GeneralTimer_Periph::WideTimer4A ||
           timerName == GeneralTimer_Periph::WideTimer5A;
}

bool isHalfBTimer(GeneralTimer_Periph timerName) {
    return timerName == GeneralTimer_Periph::Timer0A ||
           timerName == GeneralTimer_Periph::Timer1B ||
           timerName == GeneralTimer_Periph::Timer2B ||
           timerName == GeneralTimer_Periph::Timer3B ||
           timerName == GeneralTimer_Periph::Timer4B ||
           timerName == GeneralTimer_Periph::Timer5B ||
           timerName == GeneralTimer_Periph::WideTimer0B ||
           timerName == GeneralTimer_Periph::WideTimer1B ||
           timerName == GeneralTimer_Periph::WideTimer2B ||
           timerName == GeneralTimer_Periph::WideTimer3B ||
           timerName == GeneralTimer_Periph::WideTimer4B ||
           timerName == GeneralTimer_Periph::WideTimer5B;
}

bool isFullTimer(GeneralTimer_Periph timerName) {
    return timerName == GeneralTimer_Periph::Timer0 ||
           timerName == GeneralTimer_Periph::Timer1 ||
           timerName == GeneralTimer_Periph::Timer2 ||
           timerName == GeneralTimer_Periph::Timer3 ||
           timerName == GeneralTimer_Periph::Timer4 ||
           timerName == GeneralTimer_Periph::Timer5 ||
           timerName == GeneralTimer_Periph::WideTimer0 ||
           timerName == GeneralTimer_Periph::WideTimer1 ||
           timerName == GeneralTimer_Periph::WideTimer2 ||
           timerName == GeneralTimer_Periph::WideTimer3 ||
           timerName == GeneralTimer_Periph::WideTimer4 ||
           timerName == GeneralTimer_Periph::WideTimer5;
}

void configTimerClock(GeneralTimer_Periph timerName, bool isEnable) {
    static const std::uintptr_t sysCtlPeriph[] = {
        SYSCTL_PERIPH_TIMER0,
        SYSCTL_PERIPH_TIMER1,
        SYSCTL_PERIPH_TIMER2,
        SYSCTL_PERIPH_TIMER3,
        SYSCTL_PERIPH_TIMER4,
        SYSCTL_PERIPH_TIMER5,
        SYSCTL_PERIPH_WTIMER0,
        SYSCTL_PERIPH_WTIMER1,
        SYSCTL_PERIPH_WTIMER2,
        SYSCTL_PERIPH_WTIMER3,
        SYSCTL_PERIPH_WTIMER4,
        SYSCTL_PERIPH_WTIMER5,
    };
    if ((std::size_t)timerName / 3 >= sizeof(sysCtlPeriph) / sizeof(sysCtlPeriph[0])) {
        Exception::raiseException("Bad GenericTimer_Periph");
        return;
    }
    if (isEnable != false) {
        DeviceSupport::SysCtlPeripheralEnable(sysCtlPeriph[(std::size_t)timerName / 3]);
        while (DeviceSupport::SysCtlPeripheralReady(sysCtlPeriph[(std::size_t)timerName / 3])) {
        }
    } else {
        DeviceSupport::SysCtlPeripheralDisable(sysCtlPeriph[(std::size_t)timerName / 3]);
    }
}

std::size_t getTimerObjectsIndexByName(GeneralTimer_Periph timerName) {
    std::size_t div = (std::size_t)timerName / 3;
    std::size_t mod = (std::size_t)timerName % 3;
    if(mod == 0 || mod ==1)
        return div * 2;
    else if(mod == 2)
        return div * 2 + 1;
    return 0;
}

std::uint32_t getTimerInterruptNumberByName(GeneralTimer_Periph timerName) {
    static const std::uint32_t interruptNumber[] = {
        INT_TIMER0A,
        INT_TIMER0B,
        INT_TIMER1A,
        INT_TIMER1B,
        INT_TIMER2A,
        INT_TIMER2B,
        INT_TIMER3A,
        INT_TIMER3B,
        INT_TIMER4A,
        INT_TIMER4B,
        INT_TIMER5A,
        INT_TIMER5B,
        INT_WTIMER0A,
        INT_WTIMER0B,
        INT_WTIMER1A,
        
    };
    std::size_t div = (std::size_t)timerName / 3;
    std::size_t mod = (std::size_t)timerName % 3;

}

} // namespace ExLib