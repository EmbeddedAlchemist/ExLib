# ExLib
用于快速构建可跨平台程序的嵌入式固件库

这个固件库位不同硬件平台提供了尽可能相似的API，并保证这些API的效果尽可能相同，使得基于该固件库的程序可以轻易地在不同硬件平台上相互移植而不需要做出太大改动。

固件库基于C++构建，提供类Arduino的语法，但允许可选的更精细的控制。

使用ExLib，通过UART0打印"Hello World!"：

~~~Cpp
#include <ExLib.hpp> //引入ExLib头文件
using namespace ExLib; //使用ExLib命名空间

UART Serial(UART_Periph::UART0); //构造UART对象，名称为Serial，目标外设为UART0

int usr_main(){
    Serial.begin(115200); //配置UART0及其相关外设（时钟、GPIO等）。配置波特率为115200，其他参数默认。
    Serial.println("Hello World!"); //打印Hello World
    while(true){} //死循环卡住
}
~~~
