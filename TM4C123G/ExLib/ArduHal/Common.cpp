#include "ExLib.hpp"

#include "Common.h"
#include "stdlib.h"

/* C++ prototypes */
long map(long x, long in_min, long in_max, long out_min, long out_max) {
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

uint16_t makeWord(uint16_t w) { return w; }
uint16_t makeWord(uint8_t h, uint8_t l) { return (h << 8) | l; }

void pinMode(pin_size_t pinNumber, PinMode pinMode) {
    static const ExLib::GPIO_Mode modeTable[] = {
        ExLib::GPIO_Mode::Input,
        ExLib::GPIO_Mode::Output,
        ExLib::GPIO_Mode::Input_PullUp,
        ExLib::GPIO_Mode::Input_PullDown,
        ExLib::GPIO_Mode::Output_OpenDrain,
    };
    ExLib::GPIO::pinMode((ExLib::GPIO_Pin)pinNumber, modeTable[pinMode]);
}

void digitalWrite(pin_size_t pinNumber, PinStatus status) {
    ExLib::GPIO::pinWrite((ExLib::GPIO_Pin)pinNumber, (bool)status);
}

PinStatus digitalRead(pin_size_t pinNumber) {
    return (PinStatus)ExLib::GPIO::pinRead((ExLib::GPIO_Pin)pinNumber);
}

unsigned long millis(void) {
    return ExLib::System::getMilliseconds();
}

unsigned long micros(void) {
    return ExLib::System::getMicroseconds();
}

void delay(unsigned long millisec) {
    ExLib::System::delay(ExLib::TimeInterval(millisec * 1000));
}

void delayMicroseconds(unsigned int us) {
    ExLib::System::delay(ExLib::TimeInterval(us));
}

void attachInterrupt(pin_size_t interruptNumber, voidFuncPtr callback, PinStatus mode) {
    attachInterruptParam(interruptNumber, (void (*)(void *))callback, mode, nullptr);
}

void attachInterruptParam(pin_size_t interruptNumber, voidFuncPtrParam callback, PinStatus mode, void *param) {
    static const ExLib::GPIO_State pinStateTable[] = {
        ExLib::GPIO_State::Low,
        ExLib::GPIO_State::High,
        ExLib::GPIO_State::Changing,
        ExLib::GPIO_State::Falling,
        ExLib::GPIO_State::Raising,
    };
    ExLib::EXTI::attachInterrupt((ExLib::GPIO_Pin)interruptNumber,
                                 pinStateTable[mode],
                                 *new ExLib::CallbackFunction(callback, param));
}

void detachInterrupt(pin_size_t interruptNumber) {
    ExLib::EXTI::detachInterrupt((ExLib::GPIO_Pin)interruptNumber);
}

long random(long m) {
    return rand() % m;
}

long random(long mi, long ma) {
    return random(ma - mi) + mi;
}

void randomSeed(unsigned long seed) {
    srand(seed);
}
