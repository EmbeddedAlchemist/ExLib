#include "ExLib_FreeRTOS.hpp"
#include "FreeRTOS/FreeRTOSSupport.hpp"

namespace ExLib {
Task::Task(void (*taskFunction)(void *), void *param)
    : taskFunction(taskFunction), taskParam(param), taskHandler(nullptr) {
}

Task::~Task() {
    end();
}

bool Task::begin(const char *name, std::uint32_t priority, std::size_t stackDepth) {
    BaseType_t result;
    result = xTaskCreate(taskFunction, name, stackDepth, taskParam, priority, (TaskHandle_t *)&taskHandler);
    if(result!=pdPASS){
        vTaskDelete((TaskHandle_t)taskHandler);
        taskHandler = nullptr;
        return false;
    }
    return true;
}

void Task::end() {
    vTaskDelete((TaskHandle_t)taskHandler);
    taskHandler = nullptr;
}

void Task::suspend() {
    vTaskSuspend((TaskHandle_t)taskHandler);
}

void Task::resume() {
    vTaskResume((TaskHandle_t)taskHandler);
}

} // namespace ExLib