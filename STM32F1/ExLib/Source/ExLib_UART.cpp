#include "ExLib_UART.hpp"
#include "ExLib_Exception.hpp"
#include "DeviceSupport/DeviceSupport.hpp"

namespace ExLib {

DeviceSupport::USART_TypeDef *getPeriphByName(UART_Periph name){
    switch(name){
        case UART_Periph::UART1:
            return DeviceSupport::USART1;
        case UART_Periph::UART2:
            return DeviceSupport::USART2;
        case UART_Periph::UART3:
            return DeviceSupport::USART3;
        case UART_Periph::UART4:
            return DeviceSupport::UART4;
        case UART_Periph::UART5:
            return DeviceSupport::UART5;
        default:
            ExLib_Exception::raiseException("Bad UART name");
            return nullptr;
    }
}

UART::UART(UART_Periph UARTName) {
    periph = getPeriphByName(UARTName);
}

void UART::setPins(GPIO_Pin pinRx, GPIO_Pin pinTx) {
}

} // namespace ExLib
