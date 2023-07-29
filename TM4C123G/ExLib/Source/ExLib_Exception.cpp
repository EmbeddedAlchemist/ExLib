#include "ExLib_Exception.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_System.hpp"
#include <stdarg.h>

extern "C" {

std::uint32_t ExLib_CoreDump_Buffer[16];
// extern void ExLib_CoreDump();

void vApplicationMallocFailedHook(void) {
    ExLib::Exception::raiseException("FreeRTOS Memory Allocation Failed");
}

void vApplicationStackOverflowHook(void *xTask, signed char *pcTaskName) {
    ExLib::Exception::raiseException("Application Stack Overflow at task %s", pcTaskName);
}
}

namespace ExLib {

const char *Exception::lastExceptionMessage = nullptr;

void Exception::hardFaultHandler() {
    if (System::_debugStream != nullptr) {
        System::_debugStream->print("[FATAL ERROR] Hard Fault Raised.");
    }
    while (true) {
    }
}

void Exception::raiseException(const char *message, ...) {
    // ExLib_CoreDump();
    std::va_list args;
    va_start(args, message);
    volatile int i = 0;
    Exception::lastExceptionMessage = message;
    if (System::_debugStream != nullptr) {
        System::printExLibLOGO();
        System::_debugStream->vprintf("[FATAL ERROR] Exception Raised. Message: %s", args);
    }
    va_end(args);
    raiseHardFault();
    while (true)
        ;
}
void Exception::raiseHardFault() {
    if (System::_debugStream != nullptr) {
        System::_debugStream->println("[NOTICE] Raising Hard Fault...");
    }
    *(volatile std::uint32_t *)0xFFFFFFFF = *(volatile std::uint32_t *)0xFFFFFFFF;
}
} // namespace ExLib