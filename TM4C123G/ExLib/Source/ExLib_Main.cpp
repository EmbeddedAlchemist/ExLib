#include "ExLib_Main.hpp"
#include "ExLib_System.hpp"
#include "DeviceSupport/DeviceSupport.hpp"

namespace ExLib {
void ExLib_Init(void) {
    System::init();
}
} // namespace ExLib

extern "C" {
int main() {
    ExLib::ExLib_Init();
    while (1) {
        ExLib::usr_main();
    }
}
}
