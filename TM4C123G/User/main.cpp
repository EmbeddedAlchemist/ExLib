#include "ExLib.hpp"
#include "ExLib_DeviceSupport.hpp"
#include "ExLib_FreeRTOS.hpp"

void _delay(int i) {
    while (i--)
        ;
}

using namespace ExLib;
using namespace DeviceSupport;

UART Serial(UART_Periph::UART0);
HardwarePWM PWMModule13(HardwarePWM_Periph::Module1Generator3);
PWM_Channel pwmChannel(PWMModule13, 0, PF2);



int ExLib::usr_main() {

    Serial.begin();
    System::setDebugStream(Serial);
    Serial.println(DeviceSupport::SysCtlClockGet());
    pwmChannel.setDuty(99_pct);

    while (1) {

    }

    return 0;
}
