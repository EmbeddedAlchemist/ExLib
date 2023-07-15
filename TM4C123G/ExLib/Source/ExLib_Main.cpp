#include "ExLib_Main.hpp"
#include "DeviceSupport/DeviceSupport.hpp"


namespace ExLib {
    void ExLib_Init(void){
        //DeviceSupport::NVIC_PriorityGroupConfig(NVIC_PriorityGroup_4);
    }
} // namespace ExLib

extern "C" {
int main() {
	DeviceSupport::SysCtlClockSet(SYSCTL_SYSDIV_4 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);
    while (1) {
        ExLib::usr_main();
    }
}
}
