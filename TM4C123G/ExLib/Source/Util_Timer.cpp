#include "Util_Timer.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"
#include "Util_AllPinMuxConfig.hpp"
#include "Util_GPIO.hpp"

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

GeneralTimer_Periph getTimerNameByPeriphAndType(std::uintptr_t periph, GeneralTimer_Type type) {
    uint32_t base;
    switch (periph) {
        case TIMER0_BASE:
            base = 0 * 3;
            break;
        case TIMER1_BASE:
            base = 1 * 3;
            break;
        case TIMER2_BASE:
            base = 2 * 3;
            break;
        case TIMER3_BASE:
            base = 3 * 3;
            break;
        case TIMER4_BASE:
            base = 4 * 3;
            break;
        case TIMER5_BASE:
            base = 5 * 3;
            break;
        case WTIMER0_BASE:
            base = 6 * 3;
            break;
        case WTIMER1_BASE:
            base = 7 * 3;
            break;
        case WTIMER2_BASE:
            base = 8 * 3;
            break;
        case WTIMER3_BASE:
            base = 9 * 3;
            break;
        case WTIMER4_BASE:
            base = 10 * 3;
            break;
        case WTIMER5_BASE:
            base = 11 * 3;
            break;
    }
    return (GeneralTimer_Periph)(base + (std::uint32_t)type);
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

GeneralTimer_Type getTimerTypeByName(GeneralTimer_Periph timerName) {
    std::uint32_t mod = (std::uint32_t)timerName % 3;
    if (mod == 0)
        return GeneralTimer_Type::Completed;
    else if (mod == 1)
        return GeneralTimer_Type::SplitedA;
    else if (mod == 2)
        return GeneralTimer_Type::SplitedB;

    // 正常情况不可能运行到这
    return (GeneralTimer_Type)0;
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
    std::uint32_t periph;
    if ((std::size_t)timerName / 3 >= sizeof(sysCtlPeriph) / sizeof(sysCtlPeriph[0])) {
        Exception::raiseException("Bad GenericTimer_Periph");
        return;
    }
    periph = sysCtlPeriph[(std::size_t)timerName / 3];
    if (isEnable != false) {
        DeviceSupport::SysCtlPeripheralEnable(periph);
        while (DeviceSupport::SysCtlPeripheralReady(periph) == false) {
        }
    } else {
        DeviceSupport::SysCtlPeripheralDisable(periph);
    }
}

std::uint32_t getTimerPinMuxConfig(std::uintptr_t periph, GPIO_Pin pin) {
    switch (periph) {
        case TIMER0_BASE:
            if (pin == GPIO_Pin::PB6)
                return GPIO_PB6_T0CCP0;
            else if (pin == GPIO_Pin::PB7)
                return GPIO_PB7_T0CCP1;
            else if (pin == GPIO_Pin::PF0)
                return GPIO_PF0_T0CCP0;
            else if (pin == GPIO_Pin::PF1)
                return GPIO_PF1_T0CCP1;
            else if (pin == GPIO_Pin::PL0)
                return GPIO_PL0_T0CCP0;
            else if (pin == GPIO_Pin::PL1)
                return GPIO_PL1_T0CCP1;
        case TIMER1_BASE:
            if (pin == GPIO_Pin::PB4)
                return GPIO_PB4_T1CCP0;
            else if (pin == GPIO_Pin::PB5)
                return GPIO_PB5_T1CCP1;
            else if (pin == GPIO_Pin::PF2)
                return GPIO_PF2_T1CCP0;
            else if (pin == GPIO_Pin::PF3)
                return GPIO_PF3_T1CCP1;
            else if (pin == GPIO_Pin::PJ0)
                return GPIO_PJ0_T1CCP0;
            else if (pin == GPIO_Pin::PJ1)
                return GPIO_PJ1_T1CCP1;
            else if (pin == GPIO_Pin::PL2)
                return GPIO_PL2_T1CCP0;
            else if (pin == GPIO_Pin::PL3)
                return GPIO_PL3_T1CCP1;
        case TIMER2_BASE:
            if (pin == GPIO_Pin::PB0)
                return GPIO_PB0_T2CCP0;
            else if (pin == GPIO_Pin::PB1)
                return GPIO_PB1_T2CCP1;
            else if (pin == GPIO_Pin::PF4)
                return GPIO_PF4_T2CCP0;
            else if (pin == GPIO_Pin::PF5)
                return GPIO_PF5_T2CCP1;
            else if (pin == GPIO_Pin::PJ2)
                return GPIO_PJ2_T2CCP0;
            else if (pin == GPIO_Pin::PJ3)
                return GPIO_PJ3_T2CCP1;
            else if (pin == GPIO_Pin::PL4)
                return GPIO_PL4_T2CCP0;
            else if (pin == GPIO_Pin::PL5)
                return GPIO_PL5_T2CCP1;
        case TIMER3_BASE:
            if (pin == GPIO_Pin::PB2)
                return GPIO_PB2_T3CCP0;
            else if (pin == GPIO_Pin::PB3)
                return GPIO_PB3_T3CCP1;
            else if (pin == GPIO_Pin::PF6)
                return GPIO_PF6_T3CCP0;
            else if (pin == GPIO_Pin::PF7)
                return GPIO_PF7_T3CCP1;
            else if (pin == GPIO_Pin::PJ4)
                return GPIO_PJ4_T3CCP0;
            else if (pin == GPIO_Pin::PJ5)
                return GPIO_PJ5_T3CCP1;
            else if (pin == GPIO_Pin::PL6)
                return GPIO_PL6_T3CCP0;
            else if (pin == GPIO_Pin::PL7)
                return GPIO_PL7_T3CCP1;
        case TIMER4_BASE:
            if (pin == GPIO_Pin::PC0)
                return GPIO_PC0_T4CCP0;
            else if (pin == GPIO_Pin::PC1)
                return GPIO_PC1_T4CCP1;
            else if (pin == GPIO_Pin::PG0)
                return GPIO_PG0_T4CCP0;
            else if (pin == GPIO_Pin::PG1)
                return GPIO_PG1_T4CCP1;
            else if (pin == GPIO_Pin::PM0)
                return GPIO_PM0_T4CCP0;
            else if (pin == GPIO_Pin::PM1)
                return GPIO_PM1_T4CCP1;
            else if (pin == GPIO_Pin::PP0)
                return GPIO_PP0_T4CCP0;
            else if (pin == GPIO_Pin::PP1)
                return GPIO_PP1_T4CCP1;
        case TIMER5_BASE:
            if (pin == GPIO_Pin::PC2)
                return GPIO_PC2_T5CCP0;
            else if (pin == GPIO_Pin::PC3)
                return GPIO_PC3_T5CCP1;
            else if (pin == GPIO_Pin::PG2)
                return GPIO_PG2_T5CCP0;
            else if (pin == GPIO_Pin::PG3)
                return GPIO_PG3_T5CCP1;
            else if (pin == GPIO_Pin::PM2)
                return GPIO_PM2_T5CCP0;
            else if (pin == GPIO_Pin::PM3)
                return GPIO_PM3_T5CCP1;
            else if (pin == GPIO_Pin::PP2)
                return GPIO_PP2_T5CCP0;
            else if (pin == GPIO_Pin::PP3)
                return GPIO_PP3_T5CCP1;
        case WTIMER0_BASE:
            if (pin == GPIO_Pin::PC4)
                return GPIO_PC4_WT0CCP0;
            else if (pin == GPIO_Pin::PC5)
                return GPIO_PC5_WT0CCP1;
            else if (pin == GPIO_Pin::PG4)
                return GPIO_PG4_WT0CCP0;
            else if (pin == GPIO_Pin::PG5)
                return GPIO_PG5_WT0CCP1;
            else if (pin == GPIO_Pin::PL0)
                return GPIO_PL0_WT0CCP0;
            else if (pin == GPIO_Pin::PL1)
                return GPIO_PL1_WT0CCP1;
            else if (pin == GPIO_Pin::PM6)
                return GPIO_PM6_WT0CCP0;
            else if (pin == GPIO_Pin::PM7)
                return GPIO_PM7_WT0CCP1;
            else if (pin == GPIO_Pin::PP4)
                return GPIO_PP4_WT0CCP0;
            else if (pin == GPIO_Pin::PP5)
                return GPIO_PP5_WT0CCP1;
        case WTIMER1_BASE:
            if (pin == GPIO_Pin::PC6)
                return GPIO_PC6_WT1CCP0;
            else if (pin == GPIO_Pin::PC7)
                return GPIO_PC7_WT1CCP1;
            else if (pin == GPIO_Pin::PG6)
                return GPIO_PG6_WT1CCP0;
            else if (pin == GPIO_Pin::PG7)
                return GPIO_PG7_WT1CCP1;
            else if (pin == GPIO_Pin::PK6)
                return GPIO_PK6_WT1CCP0;
            else if (pin == GPIO_Pin::PK7)
                return GPIO_PK7_WT1CCP1;
            else if (pin == GPIO_Pin::PL2)
                return GPIO_PL2_WT1CCP0;
            else if (pin == GPIO_Pin::PL3)
                return GPIO_PL3_WT1CCP1;
            else if (pin == GPIO_Pin::PP6)
                return GPIO_PP6_WT1CCP0;
            else if (pin == GPIO_Pin::PP7)
                return GPIO_PP7_WT1CCP1;
        case WTIMER2_BASE:
            if (pin == GPIO_Pin::PD0)
                return GPIO_PD0_WT2CCP0;
            else if (pin == GPIO_Pin::PD1)
                return GPIO_PD1_WT2CCP1;
            else if (pin == GPIO_Pin::PH0)
                return GPIO_PH0_WT2CCP0;
            else if (pin == GPIO_Pin::PH1)
                return GPIO_PH1_WT2CCP1;
            else if (pin == GPIO_Pin::PL4)
                return GPIO_PL4_WT2CCP0;
            else if (pin == GPIO_Pin::PL5)
                return GPIO_PL5_WT2CCP1;
            else if (pin == GPIO_Pin::PN2)
                return GPIO_PN2_WT2CCP0;
            else if (pin == GPIO_Pin::PN3)
                return GPIO_PN3_WT2CCP1;
            else if (pin == GPIO_Pin::PQ0)
                return GPIO_PQ0_WT2CCP0;
            else if (pin == GPIO_Pin::PQ1)
                return GPIO_PQ1_WT2CCP1;
        case WTIMER3_BASE:
            if (pin == GPIO_Pin::PD2)
                return GPIO_PD2_WT3CCP0;
            else if (pin == GPIO_Pin::PD3)
                return GPIO_PD3_WT3CCP1;
            else if (pin == GPIO_Pin::PH4)
                return GPIO_PH4_WT3CCP0;
            else if (pin == GPIO_Pin::PH5)
                return GPIO_PH5_WT3CCP1;
            else if (pin == GPIO_Pin::PL6)
                return GPIO_PL6_WT3CCP0;
            else if (pin == GPIO_Pin::PL7)
                return GPIO_PL7_WT3CCP1;
            else if (pin == GPIO_Pin::PN4)
                return GPIO_PN4_WT3CCP0;
            else if (pin == GPIO_Pin::PN5)
                return GPIO_PN5_WT3CCP1;
            else if (pin == GPIO_Pin::PQ2)
                return GPIO_PQ2_WT3CCP0;
            else if (pin == GPIO_Pin::PQ3)
                return GPIO_PQ3_WT3CCP1;
        case WTIMER4_BASE:
            if (pin == GPIO_Pin::PD4)
                return GPIO_PD4_WT4CCP0;
            else if (pin == GPIO_Pin::PD5)
                return GPIO_PD5_WT4CCP1;
            else if (pin == GPIO_Pin::PH6)
                return GPIO_PH6_WT4CCP0;
            else if (pin == GPIO_Pin::PH7)
                return GPIO_PH7_WT4CCP1;
            else if (pin == GPIO_Pin::PM0)
                return GPIO_PM0_WT4CCP0;
            else if (pin == GPIO_Pin::PM1)
                return GPIO_PM1_WT4CCP1;
            else if (pin == GPIO_Pin::PN6)
                return GPIO_PN6_WT4CCP0;
            else if (pin == GPIO_Pin::PN7)
                return GPIO_PN7_WT4CCP1;
            else if (pin == GPIO_Pin::PQ4)
                return GPIO_PQ4_WT4CCP0;
            else if (pin == GPIO_Pin::PQ5)
                return GPIO_PQ5_WT4CCP1;
        case WTIMER5_BASE:
            if (pin == GPIO_Pin::PD6)
                return GPIO_PD6_WT5CCP0;
            else if (pin == GPIO_Pin::PD7)
                return GPIO_PD7_WT5CCP1;
            else if (pin == GPIO_Pin::PH2)
                return GPIO_PH2_WT5CCP0;
            else if (pin == GPIO_Pin::PH3)
                return GPIO_PH3_WT5CCP1;
            else if (pin == GPIO_Pin::PM2)
                return GPIO_PM2_WT5CCP0;
            else if (pin == GPIO_Pin::PM3)
                return GPIO_PM3_WT5CCP1;
            else if (pin == GPIO_Pin::PQ6)
                return GPIO_PQ6_WT5CCP0;
            else if (pin == GPIO_Pin::PQ7)
                return GPIO_PQ7_WT5CCP1;
    }
    return 0;
}

bool isLegalTimerPin(std::uintptr_t periph, GeneralTimer_Type type, GPIO_Pin pin) {
    static const GPIO_Pin legalPin[][5] = {
        {GPIO_Pin::PB6, GPIO_Pin::PF0, GPIO_Pin::PL0, GPIO_Pin::NotAPin, GPIO_Pin::NotAPin},
        {GPIO_Pin::PB7, GPIO_Pin::PF1, GPIO_Pin::PL1, GPIO_Pin::NotAPin, GPIO_Pin::NotAPin},
        {GPIO_Pin::PB4, GPIO_Pin::PF2, GPIO_Pin::PJ0, GPIO_Pin::PL2, GPIO_Pin::NotAPin},
        {GPIO_Pin::PB5, GPIO_Pin::PF3, GPIO_Pin::PJ1, GPIO_Pin::PL3, GPIO_Pin::NotAPin},
        {GPIO_Pin::PB0, GPIO_Pin::PF4, GPIO_Pin::PJ2, GPIO_Pin::PL4, GPIO_Pin::NotAPin},
        {GPIO_Pin::PB1, GPIO_Pin::PF5, GPIO_Pin::PJ3, GPIO_Pin::PL5, GPIO_Pin::NotAPin},
        {GPIO_Pin::PB2, GPIO_Pin::PF6, GPIO_Pin::PJ4, GPIO_Pin::PL6, GPIO_Pin::NotAPin},
        {GPIO_Pin::PB3, GPIO_Pin::PF7, GPIO_Pin::PJ5, GPIO_Pin::PL7, GPIO_Pin::NotAPin},
        {GPIO_Pin::PC0, GPIO_Pin::PG0, GPIO_Pin::PM0, GPIO_Pin::PP1, GPIO_Pin::NotAPin},
        {GPIO_Pin::PC1, GPIO_Pin::PG1, GPIO_Pin::PM1, GPIO_Pin::PP1, GPIO_Pin::NotAPin},
        {GPIO_Pin::PC2, GPIO_Pin::PG2, GPIO_Pin::PM2, GPIO_Pin::PP2, GPIO_Pin::NotAPin},
        {GPIO_Pin::PC3, GPIO_Pin::PG3, GPIO_Pin::PM3, GPIO_Pin::PP3, GPIO_Pin::NotAPin},
        {GPIO_Pin::PC4, GPIO_Pin::PG4, GPIO_Pin::PL0, GPIO_Pin::PM6, GPIO_Pin::PP4},
        {GPIO_Pin::PC5, GPIO_Pin::PG5, GPIO_Pin::PL1, GPIO_Pin::PM7, GPIO_Pin::PP5},
        {GPIO_Pin::PC6, GPIO_Pin::PG6, GPIO_Pin::PK6, GPIO_Pin::PL2, GPIO_Pin::PP6},
        {GPIO_Pin::PC7, GPIO_Pin::PG7, GPIO_Pin::PK7, GPIO_Pin::PL3, GPIO_Pin::PP7},
        {GPIO_Pin::PD0, GPIO_Pin::PH0, GPIO_Pin::PL4, GPIO_Pin::PN2, GPIO_Pin::PQ0},
        {GPIO_Pin::PD1, GPIO_Pin::PH1, GPIO_Pin::PL5, GPIO_Pin::PN3, GPIO_Pin::PQ1},
        {GPIO_Pin::PD2, GPIO_Pin::PH4, GPIO_Pin::PL6, GPIO_Pin::PN4, GPIO_Pin::PQ2},
        {GPIO_Pin::PD3, GPIO_Pin::PH5, GPIO_Pin::PL7, GPIO_Pin::PN5, GPIO_Pin::PQ3},
        {GPIO_Pin::PD4, GPIO_Pin::PH6, GPIO_Pin::PM0, GPIO_Pin::PN6, GPIO_Pin::PQ4},
        {GPIO_Pin::PD5, GPIO_Pin::PH7, GPIO_Pin::PM1, GPIO_Pin::PN7, GPIO_Pin::PQ5},
        {GPIO_Pin::PD6, GPIO_Pin::PH2, GPIO_Pin::PM2, GPIO_Pin::PQ6, GPIO_Pin::NotAPin},
        {GPIO_Pin::PD7, GPIO_Pin::PH3, GPIO_Pin::PM3, GPIO_Pin::PQ7, GPIO_Pin::NotAPin},
    };
    std::size_t index = (std::size_t)getTimerNameByPeriphAndType(periph, type) / 3;
    if (type == GeneralTimer_Type::SplitedB)
        index++;
    for (std::size_t i = 0; i < 5; i++)
        if (legalPin[index][i] == pin)
            return true;
    return false;
}

void configTimerPin(std::uintptr_t periph, GPIO_Pin pinName) {
    std::uintptr_t port = getGPIOPortByName(pinName);
    std::uint8_t pin = getGPIOPinByName(pinName);
    enableGPIOClock(port);
    DeviceSupport::GPIOUnlockPin(port, pin);
    DeviceSupport::GPIOPinConfigure(getTimerPinMuxConfig(periph, pinName));
    DeviceSupport::GPIODirModeSet(port, pin, GPIO_DIR_MODE_HW);
    DeviceSupport::GPIOPadConfigSet(port, pin, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD);
}

std::size_t getTimerObjectsIndexByName(GeneralTimer_Periph timerName) {
    std::size_t div = (std::size_t)timerName / 3;
    std::size_t mod = (std::size_t)timerName % 3;
    if (mod == 0 || mod == 1)
        return div * 2;
    else if (mod == 2)
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
        INT_WTIMER1B,
        INT_WTIMER2A,
        INT_WTIMER2B,
        INT_WTIMER3A,
        INT_WTIMER3B,
        INT_WTIMER4A,
        INT_WTIMER4B,
        INT_WTIMER5A,
        INT_WTIMER5B,
    };
    std::size_t div = (std::size_t)timerName / 3;
    std::size_t mod = (std::size_t)timerName % 3;
    if (mod == 0 || mod == 1)
        return interruptNumber[div * 2];
    else if (mod == 2)
        return interruptNumber[div * 2 + 1];

    // 正常运行不可能到这里
    return 0;
}

} // namespace ExLib