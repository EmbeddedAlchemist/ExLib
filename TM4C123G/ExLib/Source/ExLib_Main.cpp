#include "ExLib_Main.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"
#include "ExLib_FreeRTOS.hpp"
#include "ExLib_System.hpp"

namespace ExLib {

void mainTask(void *unusedParam) {
    int retCode;
    retCode = usr_main();
    System::log_w("usr_main function has return with code %d, main task deleted.", retCode);
    Task::deleteCurrent();
}

Task mainTaskObj(mainTask,nullptr, "MainTask", 1, 256);

void ExLib_Init(void) {
    System::init();
    mainTaskObj.begin();
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
