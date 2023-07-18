#include "ExLib_BufferFIFO.hpp"
#include "ExLib_UART.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"
#include "Util_GPIO.hpp"
#include "Util_UART.hpp"

namespace ExLib {

UART *UART::UARTObjects[8] = {nullptr};

void UART::UART0InterruptHandler(void) { UARTObjects[0]->interruptHandler(); }
void UART::UART1InterruptHandler(void) { UARTObjects[1]->interruptHandler(); }
void UART::UART2InterruptHandler(void) { UARTObjects[2]->interruptHandler(); }
void UART::UART3InterruptHandler(void) { UARTObjects[3]->interruptHandler(); }
void UART::UART4InterruptHandler(void) { UARTObjects[4]->interruptHandler(); }
void UART::UART5InterruptHandler(void) { UARTObjects[5]->interruptHandler(); }
void UART::UART6InterruptHandler(void) { UARTObjects[6]->interruptHandler(); }
void UART::UART7InterruptHandler(void) { UARTObjects[7]->interruptHandler(); }

void (*UART::getInterruptHandlerByName(UART_Periph UARTName))(void) {
    static void (*const interruptHandlerFunction[8])(void) = {
        UART0InterruptHandler,
        UART1InterruptHandler,
        UART2InterruptHandler,
        UART3InterruptHandler,
        UART4InterruptHandler,
        UART5InterruptHandler,
        UART6InterruptHandler,
        UART7InterruptHandler,
    };
    return interruptHandlerFunction[(std::size_t)UARTName];
}

void UART::interruptHandler(void) {
    std::uint32_t intStatus = DeviceSupport::UARTIntStatus(periph, true);
    DeviceSupport::UARTIntClear(periph, intStatus);
    if ((intStatus & UART_INT_RX) != false ||
        (intStatus & UART_INT_RT) != false) {
        // 接收和接收超时
        // ? 把数据转移到自己的缓冲区里，以便后续读取
        while (DeviceSupport::UARTCharsAvail(periph)) {
            rxBuffer.write(DeviceSupport::UARTCharGetNonBlocking(periph));
        }
        // ? 接收中断回调函数
        if (onReceviceCallback != nullptr) {
            onReceviceCallback->call();
        }
    }
}

UART::UART(UART_Periph UARTName, BufferFIFO<char> *buffer)
    : UART(UARTName,
           getUARTDefaultRxPin(UARTName),
           getUARTDefaultTxPin(UARTName),
           buffer) {}

UART::UART(UART_Periph UARTName, GPIO_Pin pinRx, GPIO_Pin pinTx, BufferFIFO<char> *buffer)
    : rxBuffer(*(buffer = (buffer == nullptr) ? new BufferFIFO<char>(64, BufferFIFO_WriteMode::Overwrite) : buffer)),
      periph(getUARTPeriphByName(UARTName)),
      onReceviceCallback(nullptr),
      ScanStream::ScanStream(*(buffer = (buffer == nullptr) ? new BufferFIFO<char>(64, BufferFIFO_WriteMode::Overwrite) : buffer)) {
    if (UARTObjects[(std::size_t)UARTName] != nullptr) {
        Exception::raiseException("Only generate one object for an UART peripheral at same time");
        return;
    }
    UARTObjects[(std::size_t)UARTName] = this;
    setPins(pinRx, pinTx);
}

UART::~UART() {
    UARTObjects[(std::size_t)(UART_Periph) * this] = nullptr;
}

void UART::setPins(GPIO_Pin _pinRx, GPIO_Pin _pinTx) {
    if (!isLegalUARTPin(periph, _pinRx, _pinTx)) {
        Exception::raiseException("Illegal UART pin specified");
        return;
    }
    pinRx = _pinRx;
    pinTx = _pinTx;
}

void UART::begin(std::uint32_t baudrate, UART_WordLength wordLengthName, UART_StopBits stopBitsName, UART_Parity parityName) {
    std::uint32_t wordLength = getUARTWordLengthByName(wordLengthName),
                  stopBits = getUARTStopBitsByName(stopBitsName),
                  parity = getUARTParityByName(parityName);
    configUARTPin(periph, pinRx, pinTx);
    configUARTState(periph, true); // SysCtlPeripheralEnable(SYSCTL_PERIPH_UARTx);
    DeviceSupport::UARTClockSourceSet(periph, UART_CLOCK_SYSTEM);
    DeviceSupport::UARTConfigSetExpClk(periph,
                                       DeviceSupport::SysCtlClockGet(),
                                       baudrate,
                                       wordLength | stopBits | parity);

    DeviceSupport::UARTFIFOLevelSet(periph, UART_FIFO_TX7_8, UART_FIFO_RX7_8);
    DeviceSupport::UARTFIFOEnable(periph);
    DeviceSupport::UARTIntRegister(periph, getInterruptHandlerByName(*this));
    DeviceSupport::UARTIntEnable(periph, UART_INT_RX | UART_INT_RT);
    DeviceSupport::IntEnable(getUARTIntByName(*this));
    DeviceSupport::UARTEnable(periph);
    
}

void UART::end() {
    configUARTState(periph, false);
    configGPIOMode(getGPIOPortByName(pinRx), getGPIOPinByName(pinRx), GPIO_Mode::Input_Hiz);
    configGPIOMode(getGPIOPortByName(pinTx), getGPIOPinByName(pinTx), GPIO_Mode::Input_Hiz);
}

bool UART::write(char ch) {
    DeviceSupport::UARTCharPut(periph, ch); // 由于打开了FIFO，前16字节可以高速写入
    return true;
}

// bool UART::read(char &ch) {
//     return rxBuffer.read(ch);
// }

UART::operator UART_Periph() {
    return getUARTNameByPeriph(periph);
}

} // namespace ExLib
