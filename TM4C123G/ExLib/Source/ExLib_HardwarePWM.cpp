#include "ExLib_HardwarePWM.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"
#include "Util_HardwarePWM.hpp"

namespace ExLib {
void HardwarePWM::registerPWMChannel(std::uint32_t channel, GPIO_Pin pinName) {
    if (isLegalHWPWMPin(module, generator, channel, pinName) == false) {
        Exception::raiseException("Illegal HardwarePWM pin");
        return;
    }
    // GPIO配置
    //SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
	// GPIOPinTypePWM(GPIO_PORTF_BASE,GPIO_PIN_2);
	// GPIOPinConfigure(GPIO_PF2_M1PWM6);
    configHWPWMPin(*this, pinName);
    //PWMOutputState
    DeviceSupport::PWMOutputState(module, getHWPWMOutputBitByNameAndChannel(*this, channel), true);
}

void HardwarePWM::setDuty(std::uint32_t channel, Precent duty) {
    std::uint32_t output = getHWPWMOutputByNameAndChannel(*this, channel);
    std::uint32_t period = DeviceSupport::PWMGenPeriodGet(module, generator);
    //PWMPulseWidthSet
    DeviceSupport::PWMPulseWidthSet(module, output, duty.compute(period)-1);
}

void HardwarePWM::setCycle(TimeInterval cycle) {
    // PWMGenPeriodSet
    DeviceSupport::PWMGenPeriodSet(module, generator, DeviceSupport::SysCtlClockGet() / 16  / 1000000 * 5 * cycle.us);
}

HardwarePWM::HardwarePWM(HardwarePWM_Periph periphName, TimeInterval cycle)
    : module(getHWPWMModuleByName(periphName)), generator(getHWPWMGeneratorByName(periphName)) {
    // 设置分频
    DeviceSupport::SysCtlPWMClockSet(SYSCTL_PWMDIV_16);
    // 使能PWM SysCtlPeripheralEnable(sysCtlPeriph[(std::size_t)hwPWMName]);
    enableHWPWMClock(periphName);
    DeviceSupport::PWMGenConfigure(module, generator, PWM_GEN_MODE_UP_DOWN | PWM_GEN_MODE_NO_SYNC);
    //PWMGenPeriodSet
    setCycle(cycle);
    DeviceSupport::PWMGenEnable(module, generator);
}

HardwarePWM::operator HardwarePWM_Periph(void) {
    return getHWPWMNameByModuleAndGenerator(module, generator);
}

} // namespace ExLib