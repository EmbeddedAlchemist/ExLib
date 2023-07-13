#include "ExLib.hpp"
// #include "ExLib_FreeRTOS.hpp"

void func(ExLib::GPIO &p) {
}

int ExLib::usr_main() {
    ExLib::GPIO PC13(ExLib::GPIO_Pin::PC13);
    func(PC13);
    PC13 = 1;


    *((PrintStream *)nullptr) << 1;

    return 0;
}
