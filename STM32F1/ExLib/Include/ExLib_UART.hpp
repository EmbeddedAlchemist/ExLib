#pragma once

#include "ExLib_GPIO.hpp"
#include "ExLib_PrintStream.hpp"
#include "ExLib_ScanStream.hpp"

#include "stdint.h"

namespace ExLib {

enum class UART_Periph : std::uint8_t {
    UART1,
    UART2,
    UART3,
    UART4,
    UART5
};

enum class UART_StopBits : std::uint8_t {

};

enum class UART_Privacy : std::uint8_t {
};

class UART : public PrintStream, ScanStream {
  private:
    void *periph;
    GPIO_Pin pinRx, pinTx;

  public:
    UART(void) = delete;
    UART(UART_Periph UARTName);
    UART(UART_Periph UARTName, GPIO_Pin pinRx, GPIO_Pin pinTx);

    /**
     * @brief 选择UART使用的引脚
     * 
     * @param pinRx 
     * @param pinTx 
     */
    void setPins(GPIO_Pin pinRx, GPIO_Pin pinTx);


    void begin(std::uint32_t baudrate);

    /**
     * @brief 失能UART外设
     * 
     */
    void end();
};

} // namespace ExLib