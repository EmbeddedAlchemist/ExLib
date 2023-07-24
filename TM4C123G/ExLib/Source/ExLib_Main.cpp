#include "ExLib_Main.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"
#include "ExLib_FreeRTOS.hpp"
#include "ExLib_System.hpp"
#include "FreeRTOS/FreeRTOSSupport.hpp"

namespace ExLib {

void mainTask(void *unusedParam) {
    usr_main();
    Exception::raiseException("usr_main function has been returned.");
    while (true) {
    }
}

Task mainTaskObj(mainTask);

void ExLib_Init(void) {
    System::init();
    mainTaskObj.begin("MainTask", 1, 256);
}
} // namespace ExLib

extern "C" {
int main() {
    ExLib::ExLib_Init();
    vTaskStartScheduler();
    // 如果调度器启动成功，应该不会运行到这里
    ExLib::Exception::raiseException("Fail to start RTOS scheduler.");
    while (true) {
    }
}
}
