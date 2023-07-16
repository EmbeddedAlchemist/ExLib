#include "ExLib.hpp"
#include "ExLib_FreeRTOS.hpp"
#include "ExLib_DeviceSupport.hpp"

void _delay(int i) {
    while (i--)
        ;
}

using namespace ExLib;

UART Serial(UART_Periph::UART0);

int ExLib::usr_main() {

    Serial.begin();
    System::setDebugStream(Serial);
    Serial.println(DeviceSupport::SysCtlClockGet());

    while (1) {
    }

    return 0;
}
