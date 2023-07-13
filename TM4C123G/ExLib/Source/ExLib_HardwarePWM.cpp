#include "ExLib_HardwarePWM.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "Util_HardwarePWM.hpp"
#include "ExLib_Exception.hpp"

namespace ExLib {
void HardwarePWM::registerChannel(std::uint32_t channel, GPIO_Pin pinName) {
    if(isLegalHWPWMPin(module, generator, channel, pinName) == false){
        ExLib_Exception::raiseException("Illegal HardwarePWM pin");
        return;
    }
    // GPIO配置
    configHWPWMPin(*this, pinName);
    DeviceSupport::PWMOutputState(module, getHWPWMOutputBitByNameAndChannel(*this, channel), true);
}

void HardwarePWM::setDuty(std::uint32_t channel, Precent duty) {
    std::uint32_t output = getHWPWMOutputByNameAndChannel(*this, channel);
    std::uint32_t period = DeviceSupport::PWMGenPeriodGet(module, generator);
    DeviceSupport::PWMPulseWidthSet(module,output, duty.compute(period));
}

void HardwarePWM::setCycle(TimeInterval cycle){
    // PWMGenPeriodSet
    DeviceSupport::PWMGenPeriodSet(module, generator, DeviceSupport::SysCtlClockGet() / 1000000 * cycle.us);
}

HardwarePWM::HardwarePWM(HardwarePWM_Periph periphName, TimeInterval cycle)
    : module(getHWPWMModuleByName(periphName)), generator(getHWPWMGeneratorByName(periphName)) {
    // 设置分频
    DeviceSupport::SysCtlPWMClockSet(SYSCTL_PWMDIV_1);
    // 使能PWM
    enableHWPWMClock(periphName);
    //配置生成器
    DeviceSupport::PWMGenConfigure(module, generator, PWM_GEN_MODE_UP_DOWN | PWM_GEN_MODE_NO_SYNC);
    setCycle(cycle);
    DeviceSupport::PWMGenEnable(module, generator);
}

HardwarePWM::operator HardwarePWM_Periph(void) {
    return getHWPWMNameByModuleAndGenerator(module, generator);
}

} // namespace ExLib