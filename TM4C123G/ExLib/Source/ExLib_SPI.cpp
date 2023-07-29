#include "ExLib_SPI.hpp"
#include "ExLib_DeviceSupport.hpp"
#include "ExLib_Exception.hpp"
#include "Util_SSI.hpp"

namespace ExLib {

SPI::SPI(SPI_Periph periphName)
    : SPI(periphName,
          getSSIDefaultClkPin(periphName),
          getSSIDefaultRxPin(periphName),
          getSSIDefaultTxPin(periphName)) {
}

SPI::SPI(SPI_Periph periphName, GPIO_Pin pinCLK, GPIO_Pin pinMOSI, GPIO_Pin pinMISO)
    : periph(getSSIPeriphByName(periphName)) {
    setPins(pinCLK, pinMOSI, pinMISO);
}

void SPI::setPins(GPIO_Pin _pinCLK, GPIO_Pin _pinMOSI, GPIO_Pin _pinMISO) {
    if (isLegalSSIPin(periph, _pinCLK, _pinMISO, _pinMOSI)) {
        Exception::raiseException("Illegal SPI pin specified");
        return;
    }
    pinCLK = _pinCLK;
    pinMOSI = _pinMOSI;
    pinMISO = _pinMISO;
}

bool SPI::write(char ch) {
    DeviceSupport::SSIDataPut(periph, ch);
    while (DeviceSupport::SSIBusy(periph) != false) {
    }
    return true;
}

bool SPI::read(char &ch) {
    uint32_t recv;
    DeviceSupport::SSIDataGet(periph, &recv);
    ch = recv & 0xFF;
    return true;
}

bool SPI::begin(SPI_Mode mode, Frequency freq) {
    configSSIClock(*this, true);
    configSSIPin(periph, pinCLK, pinMISO, pinMOSI);
    DeviceSupport::SSIConfigSetExpClk(periph,
                                      DeviceSupport::SysCtlClockGet(),
                                      getSSIModeByModeName(mode),
                                      SSI_MODE_MASTER,
                                      freq.hz,
                                      8);
    DeviceSupport::SSIEnable(periph);
    return true;
}

void SPI::end() {
    DeviceSupport::SSIDisable(periph);
    configSSIClock(*this, false);
}

SPI::operator SPI_Periph() {
    return getSSINameByPeriph(periph);
}

} // namespace ExLib