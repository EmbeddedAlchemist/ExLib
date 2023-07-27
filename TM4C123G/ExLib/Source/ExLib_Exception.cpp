#include "ExLib_Exception.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_System.hpp"

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
    if (System::debugStream != nullptr) {
        System::debugStream->print("[FATAL ERROR] Hard Fault Raised.");
    }
    while (true) {
    }
}

void Exception::raiseException(const char *message, ...) {
    // ExLib_CoreDump();
    volatile int i = 0;
    Exception::lastExceptionMessage = message;
    if (System::debugStream != nullptr) {
        System::printExLibLOGO();
        System::debugStream->print("[FATAL ERROR] Exception Raised. Message: ");
        System::debugStream->print(message);
        System::debugStream->println();
    }
    raiseHardFault();
    while (true)
        ;
}
void Exception::raiseHardFault() {
    if (System::debugStream != nullptr) {
        System::debugStream->println("[NOTICE] Raising Hard Fault...");
    }
    *(volatile std::uint32_t *)0xFFFFFFFF = *(volatile std::uint32_t *)0xFFFFFFFF;
}
} // namespace ExLib