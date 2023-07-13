#pragma once

#include "ExLib_BufferFIFO.hpp"
#include "ExLib_GPIO.hpp"
#include "ExLib_PrintStream.hpp"
#include "ExLib_ScanStream.hpp"

#include <stddef.h>
#include <stdint.h>

namespace ExLib {

enum class UART_Periph : std::uint8_t {
    UART0 = 0,
    UART1 = 1,
    UART2 = 2,
    UART3 = 3,
    UART4 = 4,
    UART5 = 5,
    UART6 = 6,
    UART7 = 7,
};

enum class UART_StopBits : std::uint8_t {
    Bits1,
    Bits2,
};

enum class UART_Parity : std::uint8_t {
    None,
    Even,
    Odd,
    Zero,
    One
};

enum class UART_WordLength : std::uint8_t {
    Bits5,
    Bits6,
    Bits7,
    Bits8,

};

class UART : public PrintStream, ScanStream {
  private:
    static UART *UARTObjects[8];
    static void UART0InterruptHandler(void);
    static void UART1InterruptHandler(void);
    static void UART2InterruptHandler(void);
    static void UART3InterruptHandler(void);
    static void UART4InterruptHandler(void);
    static void UART5InterruptHandler(void);
    static void UART6InterruptHandler(void);
    static void UART7InterruptHandler(void);
    void (*getInterruptHandlerByName(UART_Periph UARTName))(void);

  private:
    uintptr_t periph;
    GPIO_Pin pinRx, pinTx;
    BufferFIFO<char> &rxBuffer;
    CallbackFunction *onReceviceCallback;

    void interruptHandler(void);

  public:
    UART(void) = delete;
    UART(UART_Periph UARTName, BufferFIFO<char> *buffer = nullptr);
    UART(UART_Periph UARTName, GPIO_Pin pinRx, GPIO_Pin pinTx, BufferFIFO<char> *buffer = nullptr);
    ~UART();

    /**
     * @brief 选择UART使用的引脚
     *
     * @param pinRx
     * @param pinTx
     */
    void setPins(GPIO_Pin pinRx, GPIO_Pin pinTx);

    /**
     * @brief 使能UART外设
     *
     * @param baudrate
     * @param wordLength
     * @param stopBits
     * @param parity
     */
    void begin(std::uint32_t baudrate = 115200,
               UART_WordLength wordLength = UART_WordLength::Bits8,
               UART_StopBits stopBits = UART_StopBits::Bits1,
               UART_Parity parity = UART_Parity::None);

    /**
     * @brief 失能UART外设
     *
     */
    void end();

    virtual bool write(char ch);
    //virtual std::size_t write(const char *dataToWrite, std::size_t length);
    virtual bool read(char &ch);

    operator UART_Periph();
};

} // namespace ExLib