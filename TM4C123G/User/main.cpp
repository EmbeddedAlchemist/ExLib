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
    ; // 构造生成器时
	// SysCtlPWMClockSet(SYSCTL_PWMDIV_4);
	// SysCtlPeripheralEnable(SYSCTL_PERIPH_PWM1);
	// PWMGenConfigure(PWM1_BASE,PWM_GEN_3,PWM_GEN_MODE_UP_DOWN|PWM_GEN_MODE_NO_SYNC);
	// PWMGenPeriodSet(PWM1_BASE,PWM_GEN_3,2000);
	// PWMGenEnable(PWM1_BASE,PWM_GEN_3);

    // //注册通道时
	// SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
	// GPIOPinTypePWM(GPIO_PORTF_BASE,GPIO_PIN_2);
	// GPIOPinConfigure(GPIO_PF2_M1PWM6);
	// PWMOutputState(PWM1_BASE,PWM_OUT_6_BIT,true);

    // //设置占空比时
	// PWMPulseWidthSet(PWM1_BASE,PWM_OUT_6,PWMGenPeriodGet(PWM1_BASE, PWM_GEN_3)*0.01 - 1);
    while (1) {

    }

    return 0;
}
