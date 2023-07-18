#include "ExLib.hpp"
#include "ExLib_FreeRTOS.hpp"

void _delay(int i) {
    while (i--)
        ;
}

using namespace ExLib;

UART Serial(UART_Periph::UART0);
HardwarePWM PWMModule13(HardwarePWM_Periph::Module1Generator3, 100_us);
HardwarePWM PWMModule12(HardwarePWM_Periph::Module1Generator2, 20_ms);
PWM_Channel pwmChannelB(PWMModule13, 0, PF2);
PWM_Channel pwmChannelG(PWMModule13, 1, PF3);
PWM_Channel pwmChannelR(PWMModule12, 1, PF1);

int ExLib::usr_main() {

    Serial.begin();
    System::setDebugStream(Serial);
    Serial.print("System Clock: ");
    Serial.print(System::getSystemClockSpeed());
    Serial.println("Hz.");
	I2C I2C0(I2C_Periph::I2C0);

    char c;
    I2C0.begin();
	I2C0.beginTransmission(0x48);
    I2C0.write(0x40);
    I2C0.read(c);
    I2C0.endTransmission();


    pwmChannelR.setDuty(1_pct);
    pwmChannelG.setDuty(1_pct);
    pwmChannelB.setDuty(1_pct);
    while (1) {
    }

    return 0;
}
