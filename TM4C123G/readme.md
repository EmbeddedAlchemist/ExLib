# ExLib-TM4C123G

这是适用TM4C123G的ExLib支持包。

[TOC]

## 快速上手

### 使用MDK

1. 克隆该仓库，此文件夹是一个完整的MDK工程。
2. 你可以重命名该工程，使用MDK打开。
3. 在main.cpp中即可体验完整的ExLib功能。
4. 若要在其他文件中使用ExLib，请添加`#include "ExLib.hpp"`。
5. 请开始你的表演。

### 其他开发环境

1. 克隆该仓库，此目录下的ExLib目录包含全部ExLib的源码。
2. 将`ExLib/Include`添加到includePath。
3. 将`ExLib/Source`中的.cpp文件加入工程源代码。
4. 将`ExLib/Source/DeviceSupport`中的.c/.cpp文件加入工程源代码。这是平台固件库，可以为这些文件关闭警告。
5. 将`ExLib/Source/FreeRTOS`中的.c/.cpp文件加入工程源代码。
6. 请开始你的表演

## Hello World!

配置好开发环境后，你就可以开始体验ExLib了。

下面通过的Hello World在ExLib和TivaC固件库的对比，来体验ExLib带来的畅快开发体验。

~~~cpp
//使用ExLib
//main.cpp

#include "ExLib.hpp"
using namespace ExLib;

UART Serial(UART_Periph::UART0);

int usr_main(){
    Serial.begin(115200);
    Serial.print("Hello World!");
    while(true){}
}
~~~

~~~cpp
//使用TivaC固件库
//main.c

#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/debug.h"
#include "driverlib/fpu.h"
#include "driverlib/gpio.h"
#include "driverlib/pin_map.h"
#include "driverlib/rom.h"
#include "driverlib/sysctl.h"
#include "driverlib/uart.h"
#include "utils/uartstdio.h"

void ConfigureUART(void){
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
    ROM_SysCtlPeripheralEnable(SYSCTL_PERIPH_UART0);
    ROM_GPIOPinConfigure(GPIO_PA0_U0RX);
    ROM_GPIOPinConfigure(GPIO_PA1_U0TX);
    ROM_GPIOPinTypeUART(GPIO_PORTA_BASE, GPIO_PIN_0 | GPIO_PIN_1);
    UARTClockSourceSet(UART0_BASE, UART_CLOCK_SYSTEM);
    UARTStdioConfig(0, 115200, ROM_SysCtlClockGet());
}

int main(void){
    ROM_FPULazyStackingEnable();
    ROM_SysCtlClockSet(SYSCTL_SYSDIV_4 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);
    ConfigureUART();
    UARTprintf("Hello, world!\n");
    while(1){}
}

~~~







# API手册

## GPIO

### 定义说明

#### GPIO_Pin (enum  class)

该枚举类枚举了所有的GPIO引脚



### 函数说明

#### GPIO(GPIO_Pin pinName) (构造函数)

- 函数说明

  该构造函数用于构造一个GPIO对象，但不更改其模式。

- 参数说明

  - pinName

    该参数用于指定一个目标GPIO引脚

#### GPIO(GPIO_Pin pinName, GPIO_Mode modeName) (构造函数)

- 函数说明

  该构造函数用于构造一个GPIO对象，并更改其模式。

- 参数说明

  - pinName

    该参数用于指定一个目标GPIO引脚

  - modeName

    该参数用于指定一个目标GPIO模式


#### write(bool level)

- 函数说明

  更改GPIO的电平

- 参数说明

  - level

    待设置的GPIO电平，`false`为低电平，`true`为高电平。

### 示例

~~~cpp
//该例程使板载LED以红绿蓝的顺序闪烁。
//main.cpp

#include "ExLib.hpp"
using namespace ExLib;

GPIO LED_R(GPIO_Pin::PA1, GPIO_Mode::Output);
GPIO LED_G(GPIO_Pin::PA3, GPIO_Mode::Output);
GPIO LED_B(GPIO_Pin::PA2, GPIO_Mode::Output);

int usr_main(){
    LED_R.write(false);
    LED_G.write(false);
    LED_B.write(false);
    while(true){
        LED_B.write(false);
        LED_R.write(true);
        delay(500_ms);
        LED_R.write(false);
        LED_G.write(true);
        delay(500_ms);
        LED_G.write(false);
        LED_B.write(true);
        delay(500_ms);  
    }
}
~~~

~~~cpp
//该例程通过串口0打印PF0(K1)的电平。
//main.cpp

#include "ExLib.hpp"
using namespace ExLib;

UART Serial(UART_Periph::UART0);
GPIO K1(GPIO_Pin::PF0);

int usr_main(){
	Serial.begin(115200);
    K1.mode(GPIO_Mode::Input);
    while(true){
		Serial.println(K1.read());
    }
}
~~~

~~~cpp
//该例程捕获PF4上的下降沿中断
//main.cpp

#include "ExLib.hpp"
using namespace ExLib;

UART Serial(UART_Periph::UART0);
GPIO K2(GPIO_Pin::PF4);

void callback(void *unusedParam){
    Serial.println("Falling edge on PF4");
}

int usr_main(){
	Serial.begin(115200);
    K2.attachInterrupt(GPIO_State::Falling, new CallbackFunction(callback));
    while(true){}
}
~~~

