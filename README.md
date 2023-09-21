# ExLib

ExLib is an embedded firmware library for rapidly building cross-platform programs.

In order to make the code base on Exlib have ability to port to diffierent hardware platform without large changes, ExLib provice same APIs for different hardware platform, and try to make sure APIs work similarity .

Exlib based on C++, provices Arduino-like grammar, but allow finer control.


A example that print `Hello World!` with Exlib:

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
