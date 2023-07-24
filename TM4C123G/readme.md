# ExLib-TM4C123G

这是适用TM4C123G的ExLib支持包。

[TOC]

## 开发进度

### 外设

- [x] GPIO
- [x] UART
- [x] 专用PWM
- [ ] 定时器
  - [x] 定时中断

- [ ] SPI
- [x] I2C
- [x] ADC

### 硬件驱动

- [ ] DRV8841
- [ ] MPU6050
- [ ] 蜂鸣器

### 软件算法

- 滤波器
  - [ ] PID
  - [ ] 低通滤波器
  - [ ] 卡尔曼滤波

### 其他

- [ ] ArduHal 用于白嫖Arduino的库



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
4. 将`ExLib/Source/DeviceSupport`中的.c/.cpp文件加入工程源代码。这是平台固件库，可以为这·些文件关闭警告。
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
    Serial.println("Hello World!");
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



## 典型的main.cpp模板

你可以使用以下模板来作为main.cpp的初始内容。

~~~cpp
//main.cpp Tamplate

#include "ExLib.hpp"
using namespace ExLib;

UART Serial(UART_Periph::UART0);			//构造UART0对象

int usr_main(){
    Serial.begin(115200);					//初始化UART0
    System::setDebugStream(Serial);  		//将UART0设置为调试信息的输出流，日志和错误信息会通过串口0打印。
    //setup and initialize soneting here	
    //...
    while(true){
        //main loop, do something here
        //...
    }
}
~~~





# API手册

## GPIO

### 概述

GPIO类为基本输入输出操作和外部中断捕获提供了接口。

枚举类`GPIO_Pin` `GPIO_Mode` `GPIO_State` 分别枚举了GPIO引脚、GPIO模式和GPIO状态。

GPIO类中提供了函数`mode` `read` `write` ，可以完成基本的模式设置、输入和输出；同时提供了与之对应的无对象版本函数`pinMode` `pinRead` `pinWrite`，允许你在不生成对象的情况下直接使用引脚名操作GPIO。

函数`attachInterrupt` `detachInterrupt` 可以在该GPIO引脚上附加外部中断。

### 定义说明

#### GPIO_Pin (enum  class)

该枚举类枚举了所有的GPIO引脚。

#### GPIO_Mode (enum class)

该枚举类枚举了所有的GPIO模式。

- `Input_Hiz` `Input` 高阻/浮空输入
- `Input_PullUp` 上拉输入
- `Input_PullDown` 下拉输入
- `Output_PushPull` `Output` 推挽输出
- `Output_OpenDrain` 开漏输出
- `Analog` 模拟输入

#### GPIO_State (enum class)

该枚举类枚举了所有GPIO状态。

- `Low` 低电平
- `High` 高电平
- `Falling` 下降沿
- `Rising` `Raising` 上升沿
- `Changing` 跳变沿

### 函数说明

#### GPIO(GPIO_Pin pinName) (构造函数)

- 函数说明

  该构造函数用于构造一个GPIO对象，但不更改其模式。

- 参数说明

  - pinName 该参数用于指定一个目标GPIO引脚


#### GPIO(GPIO_Pin pinName, GPIO_Mode modeName) (构造函数)

- 函数说明

  该构造函数用于构造一个GPIO对象，并更改其模式。

- 参数说明

  - pinName 该参数用于指定一个目标GPIO引脚

  - modeName 该参数用于指定一个目标GPIO模式


#### void write(bool level)

- 函数说明

  更改GPIO的电平

- 参数说明

  - level 待设置的GPIO电平，`false`为低电平，`true`为高电平。


#### bool read(void)

- 函数说明

  获取GPIO上的电平

- 返回

  `false`为低电平，`true`为高电平

#### void mode(GPIO_Mode modeName)

- 函数说明

  设置GPIO的模式

- 参数说明

  - modeName 指定一个GPIO模式




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
//当K1为高电平时，串口打印"HIGH"，反之打印"LOW"
//main.cpp

#include "ExLib.hpp"
using namespace ExLib;

UART Serial(UART_Periph::UART0);
GPIO K1(GPIO_Pin::PF0);

int usr_main(){
	Serial.begin(115200);
    K1.mode(GPIO_Mode::Input);
    while(true){
		Serial.println(K1);
    }
}
~~~

~~~cpp
//该例程捕获PF4(K2)上的下降沿中断
//当K2被按下时，callback函数被调用，串口打印"Falling edge on PF4"
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

~~~Cpp
//该例程是GPIO无对象版本函数的演示
//若不想为GPIO生成对象，可使用无对象版本的函数。
//main.cpp

#include "ExLib.hpp"
using namespace ExLib;

constexpr GPIO_Pin LED_R_PIN = GPIO_Pin::PF1; //C++中定义常量的方式，近似等价于#define

int usr_main(){
    //使用无对象函数操作GPIO必须先调用pinMode设置模式，否则GPIO时钟可能不会打开
	GPIO::pinMode(LED_R_PIN, GPIO_Mode::Output);
    GPIO::pinWrite(LED_R_Pin, true); //将LED_R_Pin设为高电平
    while(true){}
}
~~~

## UART

### 概述

UART类实现了UART通信相关功能，包括写入和带缓冲的读取。

UART类还实现了了PrintStream和ScanStream，为格式化输入输出提供了强大支持。

### 定义说明

### 函数说明

#### print, println, printf, << 等格式化输出方法

这些函数继承自PrintStream类。请参阅PrintStream类章节。

#### praseXXX, scanf, >> 等格式化输入方法

这些函数继承自ScanStream类。请参阅ScanStream类章节。



#### UART(UART_Periph UARTName, BufferFIFO\<char\> *buffer) (构造函数)

- 函数说明

  这是UART类的构造函数之一，使用默认的Tx和Rx引脚

- 参数说明

  - UARTName 指定一个UART外设

  - buffer 默认`nullptr` 指向接收缓冲区的指针。若为`nullptr`，则在构造时生成一个64字节的缓冲区，否则使用指定的缓冲区。


#### UART(UART_Periph UARTName, GPIO_Pin pinRx, GPIO_Pin pinTx, BufferFIFO\<char\> *buffer)(构造函数)

- 函数说明

  这是UART类的构造函数之一，使用指定的的Tx和Rx引脚

- 参数说明

  - UARTName 指定一个UART外设

  - pinRx 指定的Rx引脚

  - pinTx 指定的Tx引脚

  - buffer 默认`nullptr` 指向接收缓冲区的指针。若为`nullptr`，则在构造时生成一个64字节的缓冲区，否则使用指定的缓冲区。

- 备注

  这等价于在begin之前调用setPins。注意事项请参阅setPins函数。

#### void begin(std::uint32_t baudrate, UART_WordLength wordLength, UART_StopBits stopBits, UART_Parity parity) 



- 函数说明

  该函数使用指定的参数开始UART通信。

- 参数说明

  - baudrate 默认为`115200` 指定波特率

  - wordLength 默认为`Bits8` 指定字长

  - stopBits 默认为`Bits1` 指定停止位

  - parity 默认为`None` 指定奇偶校验位


#### void end(void)

- 函数说明

  结束UART通信。

#### void setPins(GPIO_Pin pinRx, GPIO_Pin pinTx);

- 函数说明

  指定UART通信时使用的引脚。

- 参数说明

  - pinRx rx引脚

  - pinTx tx引脚

- 备注

  1. 该函数需要在begin之前调用才能生效。
  2. 引脚重映射受到硬件限制，若指定了不合法的引脚，将引发`Illigal UART pin`异常。



#### bool write(char ch)

- 函数说明

  向UART写一字节。该函数实现了WriteStream的write方法

- 参数说明

  - ch 待写入的字符

- 返回

  是否写入成功。恒为`true`。

#### bool read(char &ch);

- 函数说明

  从UART缓冲区。该函数继承自ReadStreamBuffered类。

- 参数说明

  - ch 接收读取字符的变量的引用

- 返回

  是否读取成功。若缓冲区有可读取字符，返回`true`，否则返回`false`。

#### std::size_t avaliableForRead(void);

参阅ReadStreamBuffered章节

- 函数说明

  返回缓冲区中可读的字符数目

- 返回

  缓冲区中可读的字符数目



#### std::size_t avaliableForWrite(void);

- 函数说明

  返回可写入的字符数目

- 返回

  恒为1.

- 备注

  永远可写

#### void onReceive(CallbackFunction &callback)

- 函数说明

  注册接收中断回调函数

- 参数说明

  - callback

    传入一个回调函数对象引用

- 备注

  1. 该方法只会保存回调函数对象的引用，请确保在串口使用期间该回调函数对象不被销毁。
  2. 对于TM4C123系列，ExLib在该系列芯片上启用了硬件FIFO，所以只有FIFO将满或接收超时时才会调用该回调函数，而非每接收到一个字符就调用回调函数。

### 示例

~~~cpp
//该示例使用串口0输出0到100的所有整数
//main.cpp

#include "ExLib.hpp"
using namespace ExLib;

UART Serial(UART_Periph::UART0);

int usr_main(){
    Serial.begin(115200);
    for(int i = 0; i <= 100; i++){
        Serial.println(i);
    }
}
~~~



## PWM

### 概述

此章节所述的PWM均为PWM抽象类。此章节旨在说明这些类之间的关系，实际使用部分不再复述。

PWM模块抽象了PWM生成器`PWM_Generator`和PWM通道`PWM_Channel`。

### PWM_Generator

PWM_Generator是一个PWM生成器的抽象类，本身没有实现PWM的任何功能，但提供了相关的接口以便同一不同PWM实现方法之间的调用。

#### setCycle(TimeInteval cycle)

- 函数说明

  设置该PWM生成器下所有通道的周期

- 参数说明

  - cycle 周期长度

- 备注

  有关TimeInteval的定义参阅Units(单位)章节

### PWM_Channel

PWM_Generator是PWM通道的类，需要借助一个PWM_Generator来完成实例化。

####  PWM_Channel(PWM_Generator &generator, std::uint32_t channel, GPIO_Pin pinName) (构造函数)

- 函数说明

  这是PWM_Channel的构造方法，需要指定该通道使用的PWM生成器，该生成器所对应的通道序号和该通道对应的GPIO引脚。

- 参数说明

  - generator 要使用的PWM生成器
  - channel 该生成器所对应的通道序号
  - pinName 要使用的GPIO引脚

- 备注

  PWM_Channel只保存了PWM_Generator的引用。请保证所使用的PWM_Generator对象在PWM_Channel使用期间没有被销毁。

#### void setDuty(Precent duty)

- 函数说明

  设置该通道的占空比

- 参数说明

  - duty 指定该通道的占空比

- 备注

  有关Precent 的定义参阅Units(单位)章节

## Units

### 概述

在Units部分定义了单位相关的符号。这些符号使程序更具语义性，减少对变量含义的误解。

### TimeInterval

TimeInterval定义了一段时间间隔。您可以使用文本运算符(推荐的方法)`_us` (微秒)`_ms`(毫秒) `_s`(秒)或显式地调用其构造函数来生成一个TimeInterval.

#### 文本运算符

这是推荐的构造TimeInterval的方法。例如

~~~cpp
//delay函数的参数是TimeInterval，下面以delay为例展示如何使用文本运算符构造TimeInterval
delay(30_us);//延时30微秒
delay(5_ms);//延时5毫秒
delay(1_s);//延时1秒
~~~

#### TimeInterval(std::uint32_t us) (构造函数)

如果不方便使用文本运算符，可以**显式地**调用其构造函数来构造TimeInterval

- 函数说明

  TimeInterval的构造函数

- 参数说明

  - us 时间间隔，以微秒位单位

~~~cpp
//使用构造函数法重写文本运算符的程序
delay(TimeInterval(30));//延时30微秒
delay(TimeInterval(5000));//延时5毫秒
delay(TimeInterval(1000000));//延时1秒
~~~
