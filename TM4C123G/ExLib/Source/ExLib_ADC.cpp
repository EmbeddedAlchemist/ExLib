#include "ExLib_ADC.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"
#include "Util_ADC.hpp"

std::uint32_t ExLib::ADC::resignerADCChannel(GPIO_Pin pinName) {
    if (isLegalADCPin(pinName) == false) {
        Exception::raiseException("Illegal ADC pin selected");
    }
    configADCPin(pinName);
    DeviceSupport::ADCHardwareOversampleConfigure(periph, 64);
    return getADCChannelByPin(pinName);
}

std::uint32_t ExLib::ADC::readADCChannel(std::uint32_t channelNum) {
    std::uint32_t ret;
    DeviceSupport::ADCSequenceDisable(periph, 0);
    DeviceSupport::ADCSequenceConfigure(periph, 0, ADC_TRIGGER_PROCESSOR, 0);
    DeviceSupport::ADCSequenceStepConfigure(periph, 0, 0, channelNum | ADC_CTL_IE | ADC_CTL_END);
    DeviceSupport::ADCSequenceEnable(periph, 0);
    DeviceSupport::ADCProcessorTrigger(periph, 0);
    while (!DeviceSupport::ADCIntStatus(periph, 0, false)) {
    }
    DeviceSupport::ADCIntClear(periph, 0);
    DeviceSupport::ADCSequenceDataGet(periph, 0, &ret);
    return ret;
}

ExLib::ADC::ADC(ADC_Periph adcName)
    : periph(getADCPeriphByName(adcName)) {
    configADCClock(adcName, true);
}

ExLib::ADC_Channel::ADC_Channel(ADC &periph, GPIO_Pin pinName)
    : periph(periph),
      channel(periph.resignerADCChannel(pinName)) {
}

std::uint32_t ExLib::ADC_Channel::read() {
    return periph.readADCChannel(channel);
}
