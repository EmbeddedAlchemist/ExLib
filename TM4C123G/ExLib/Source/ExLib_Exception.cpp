#include "ExLib_Exception.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_System.hpp"

extern "C" {

std::uint32_t ExLib_CoreDump_Buffer[16];
// extern void ExLib_CoreDump();
}

namespace ExLib {

const char *ExLib_Exception::lastExceptionMessage = nullptr;

void ExLib_Exception::hardFaultHandler() {
    if (System::debugStream != nullptr) {
        System::debugStream->print("Hard Fault Raised.");
    }
		while(true){}
}

void ExLib_Exception::raiseException(const char *message) {
    // ExLib_CoreDump();
    volatile int i = 0;
    ExLib_Exception::lastExceptionMessage = message;
    if (System::debugStream != nullptr) {
        System::printExLibLOGO();
        System::debugStream->print("Exception Raised. Message: ");
        System::debugStream->println(message);
    }
    raiseHardFault();
    while (true)
        ;
}
void ExLib_Exception::raiseHardFault() {
	if(System::debugStream!=nullptr){
		System::debugStream->println("Rainsing Hard Fault...");
	}
    *(volatile std::uint32_t *)0xFFFFFFFF = *(volatile std::uint32_t *)0xFFFFFFFF;
}
} // namespace ExLib