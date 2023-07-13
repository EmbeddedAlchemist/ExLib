#include "Util_HardwarePWM.hpp"
#include "Util_GPIO.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"

namespace ExLib {
std::uintptr_t getHWPWMModuleByName(HardwarePWM_Periph hwPWMName) {
    static const std::uintptr_t module[] = {
        PWM0_BASE,
        PWM1_BASE,
    };
    if ((std::size_t)hwPWMName / 4 >= sizeof(module) / sizeof(module[0])) {
        ExLib_Exception::raiseException("Bad HardwarePWM_Periph");
    }
    return module[(std::size_t)hwPWMName / 4];
}
std::uintptr_t getHWPWMGeneratorByName(HardwarePWM_Periph hwPWMName) {
    static const std::uint32_t generator[] = {
        PWM_GEN_0,
        PWM_GEN_1,
        PWM_GEN_2,
        PWM_GEN_3,
    };
    if ((std::size_t)hwPWMName % 4 >= sizeof(generator) / sizeof(generator[0])) {
        ExLib_Exception::raiseException("Bad HardwarePWM_Periph");
    }
    return generator[(std::size_t)hwPWMName % 4];
}
void enableHWPWMClock(HardwarePWM_Periph hwPWMName) {
    static const std::uint32_t sysCtlPeriph[] = {
        SYSCTL_PERIPH_PWM0,
        SYSCTL_PERIPH_PWM1};
    if ((std::size_t)hwPWMName / 4 >= sizeof(sysCtlPeriph) / sizeof(sysCtlPeriph[0])) {
        ExLib_Exception::raiseException("Bad HardwarePWM_Periph");
    }
    DeviceSupport::SysCtlPeripheralEnable(sysCtlPeriph[(std::size_t)hwPWMName]);
}

bool isLegalHWPWMPin(std::uintptr_t module, std::uint32_t generator, std::uint32_t channel, GPIO_Pin pinName) {
    channel = channel % 2;
    return //
        (module == PWM0_BASE &&
         (((generator == PWM_GEN_0 &&
            ((channel == 0 &&
              (pinName == PB6)) ||
             (channel == 1 &&
              (pinName == PB7)))) ||
           (generator == PWM_GEN_1 &&
            ((channel == 0 &&
              (pinName == PB4)) ||
             (channel == 1 &&
              (pinName == PB5)))) ||
           (generator == PWM_GEN_2 &&
            ((channel == 0 &&
              (pinName == PE4)) ||
             (channel == 1 &&
              (pinName == PE5)))) ||
           (generator == PWM_GEN_3 &&
            ((channel == 0 &&
              (pinName == PC4 ||
               pinName == PD0)) ||
             (channel == 1 &&
              (pinName == PC5 ||
               pinName == PD1))))))) ||
        (module == PWM1_BASE &&
         ((generator == PWM_GEN_0 &&
           ((channel == 0 &&
             (pinName == PD0)) ||
            (channel == 1 &&
             (pinName == PD1)))) ||
          (generator == PWM_GEN_1 &&
           ((channel == 0 &&
             (pinName == PA6 ||
              pinName == PD4)) ||
            (channel == 1 &&
             (pinName == PA7 ||
              pinName == PE5)))) ||
          (generator == PWM_GEN_2 &&
           ((channel == 0 &&
             (pinName == PF0)) ||
            (channel == 1 &&
             (pinName == PF1)))) ||
          (generator == PWM_GEN_3 &&
           ((channel == 0 &&
             (pinName == PF2)) ||
            (channel == 1 &&
             (pinName == PF3))))));
}

std::uint32_t getHWPWMOutputBitByNameAndChannel(HardwarePWM_Periph hwPWMName, std::uint32_t channel) {
    static const std::uint32_t outputBit[][2] = {
        {PWM_OUT_0_BIT, PWM_OUT_1_BIT},
        {PWM_OUT_2_BIT, PWM_OUT_3_BIT},
        {PWM_OUT_4_BIT, PWM_OUT_5_BIT},
        {PWM_OUT_6_BIT, PWM_OUT_7_BIT},
    };
    return outputBit[(std::size_t)hwPWMName % 4][(std::size_t)hwPWMName % 2];
}

std::uint32_t getHWPWMOutputByNameAndChannel(HardwarePWM_Periph hwPWMName, std::uint32_t channel) {
    static const std::uint32_t output[][2] = {
        {PWM_OUT_0, PWM_OUT_1},
        {PWM_OUT_2, PWM_OUT_3},
        {PWM_OUT_4, PWM_OUT_5},
        {PWM_OUT_6, PWM_OUT_7},
    };
    return output[(std::size_t)hwPWMName % 4][(std::size_t)hwPWMName % 2];
}

std::uint32_t getHWPWMPinMuxConfig(HardwarePWM_Periph hwPWMName, GPIO_Pin pinName) {
    switch (hwPWMName) {
        case HardwarePWM_Periph::Module0Generator0:
            if (pinName == PB6)
                return 0x00011804;
            else if (pinName == PB7)
                return 0x00011C04;
        case HardwarePWM_Periph::Module0Generator1:
            if (pinName == PB4)
                return 0x00011004;
            else if (pinName == PB5)
                return 0x00011404;
        case HardwarePWM_Periph::Module0Generator2:
            if (pinName == PE4)
                return 0x00041004;
            else if (pinName == PE5)
                return 0x00041404;
        case HardwarePWM_Periph::Module0Generator3:
            if (pinName == PC4)
                return 0x00021004;
            else if (pinName == PC5)
                return 0x00021404;
            else if (pinName == PD0)
                return 0x00030004;
            else if (pinName == PD1)
                return 0x00030404;
        case HardwarePWM_Periph::Module1Generator0:
            if (pinName == PD0)
                return 0x00030005;
            else if (pinName == PD1)
                return 0x00030405;
        case HardwarePWM_Periph::Module1Generator1:
            if (pinName == PA6)
                return 0x00001805;
            else if (pinName == PA7)
                return 0x00001C05;
            else if (pinName == PE4)
                return 0x00041005;
            else if (pinName == PE5)
                return 0x00041405;
        case HardwarePWM_Periph::Module1Generator2:
            if (pinName == PF0)
                return 0x00050005;
            else if (pinName == PF1)
                return 0x00050405;
        case HardwarePWM_Periph::Module1Generator3:
            if (pinName == PF2)
                return 0x00050805;
            else if (pinName == PF3)
                return 0x00050C05;
    }
}

void configHWPWMPin(HardwarePWM_Periph hwPWMName, GPIO_Pin pinName) {
    std::uintptr_t port = getGPIOPortByName(pinName);
    std::uint8_t pin = getGPIOPinByName(pinName);
    enableGPIOClock(port);
    DeviceSupport::GPIOPinConfigure(getHWPWMPinMuxConfig(hwPWMName, pinName));
    DeviceSupport::GPIODirModeSet(port, pin, GPIO_DIR_MODE_HW);
    DeviceSupport::GPIOPadConfigSet(port, pin, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD);
}

HardwarePWM_Periph getHWPWMNameByModuleAndGenerator(std::uintptr_t module, std::uint32_t generator) {
    switch (module) {
        case PWM0_BASE: {
            switch (generator) {
                case PWM_GEN_0:
                    return HardwarePWM_Periph::Module0Generator0;
                case PWM_GEN_1:
                    return HardwarePWM_Periph::Module0Generator1;
                case PWM_GEN_2:
                    return HardwarePWM_Periph::Module0Generator2;
                case PWM_GEN_3:
                    return HardwarePWM_Periph::Module0Generator3;
            }
        } break;
        case PWM1_BASE: {
            switch (generator) {
                case PWM_GEN_0:
                    return HardwarePWM_Periph::Module1Generator0;
                case PWM_GEN_1:
                    return HardwarePWM_Periph::Module1Generator1;
                case PWM_GEN_2:
                    return HardwarePWM_Periph::Module1Generator2;
                case PWM_GEN_3:
                    return HardwarePWM_Periph::Module1Generator3;
            }
        } break;
    }
}
} // namespace ExLib