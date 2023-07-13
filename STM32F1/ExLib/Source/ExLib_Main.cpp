#include "ExLib_Main.hpp"
#include "DeviceSupport/DeviceSupport.hpp"


namespace ExLib {
    void ExLib_Init(void){
        DeviceSupport::NVIC_PriorityGroupConfig(NVIC_PriorityGroup_4);
    }
} // namespace ExLib

extern "C" {
int main() {
    
    while (1) {
        ExLib::usr_main();
    }
}
}
