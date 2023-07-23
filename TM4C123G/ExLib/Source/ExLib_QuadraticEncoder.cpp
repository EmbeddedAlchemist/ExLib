#include "ExLib_QuadraticEncoder.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"
#include "Util_QuadraticEncoder.hpp"

#include <limits>

namespace ExLib {

QuadraticEncoder::QuadraticEncoder(QuadraticEncoder_Periph encoderName)
    : QuadraticEncoder(encoderName,
                       getQuadraticEncoderDefaultAPin(encoderName),
                       getQuadraticEncoderDefaultBPin(encoderName)) {
}
QuadraticEncoder::QuadraticEncoder(QuadraticEncoder_Periph encoderName, GPIO_Pin pinA, GPIO_Pin pinB)
    : periph(getQuadraticEncoderPeriphByName(encoderName)) {
    setPins(pinA, pinB);
}
void QuadraticEncoder::setPins(GPIO_Pin _pinA, GPIO_Pin _pinB) {
    if (isLegalQuadraticEncoderPin(periph, _pinA, _pinB) == false) {
        Exception::raiseException("Illegal QuadraticRncoder pin");
    }
    pinA = _pinA;
    pinB = _pinB;
}
void QuadraticEncoder::begin() {
    configQuadraticEncoderClock(*this, true);
    configQuadraticEncoderPin(periph, pinA, pinB);
    DeviceSupport::QEIConfigure(periph,
                                QEI_CONFIG_CAPTURE_A_B | QEI_CONFIG_NO_RESET | QEI_CONFIG_QUADRATURE | QEI_CONFIG_NO_SWAP,
                                std::numeric_limits<std::int32_t>::max());
    DeviceSupport::QEIVelocityConfigure(periph, QEI_VELDIV_1, DeviceSupport::SysCtlClockGet() / 100);
    DeviceSupport::QEIVelocityEnable(periph);
    DeviceSupport::QEIEnable(periph);
}
void QuadraticEncoder::end() {
    DeviceSupport::QEIDisable(periph);
    configQuadraticEncoderClock(*this, false);
}
std::int32_t QuadraticEncoder::getCounter(void) {
    return DeviceSupport::QEIPositionGet(periph);
}
void QuadraticEncoder::setCounter(std::int32_t counter) {
    DeviceSupport::QEIPositionSet(periph, counter);
}
void QuadraticEncoder::resetCounter() {
    setCounter(0);
}
QuadraticEncoder::operator QuadraticEncoder_Periph() {
    return getQuadraticEncoderNameByPeriph(periph);
}
} // namespace ExLib