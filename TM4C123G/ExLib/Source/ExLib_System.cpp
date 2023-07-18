#include "ExLib_System.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"

namespace ExLib {

PrintStream *System::debugStream = nullptr;

void System::init(void) {
    // 设置系统时钟到80MHz
    DeviceSupport::SysCtlClockSet(SYSCTL_SYSDIV_2_5 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);
    // 注册HardFault回调
    DeviceSupport::IntRegister(3, Exception::hardFaultHandler); 
}

void System::setDebugStream(PrintStream &dbgStream) {
    System::debugStream = &dbgStream;
    if (debugStream != nullptr) {
        printExLibLOGO();
        debugStream->println("[NOTICE] Debug stream has been set to this.");
    }
}

void System::printExLibLOGO(void) {
    if (debugStream != nullptr) {
        debugStream->print("\n"
                           " _____     _     _ _     \n"
                           "|  ___|   | |   (_) |    \n"
                           "| |____  _| |    _| |__  \n"
                           "|  __\\ \\/ / |   | | '_ \\ \n"
                           "| |___>  <| |___| | |_) |\n"
                           "\\____/_/\\_\\_____/_|_.__/ \n"
                           "\n");
    }
}

std::uint32_t System::getSystemClockSpeed(void) {
    return DeviceSupport::SysCtlClockGet();
}

} // namespace ExLib