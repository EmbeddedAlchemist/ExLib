#include "ExLib_FreeRTOS.hpp"
#include "FreeRTOS/FreeRTOSSupport.hpp"

namespace ExLib {
Task::Task(void (*taskFunction)(void *), void *param, const char *taskName, std::uint32_t priority, std::size_t stackDepth)
    : taskFunction(taskFunction),
      taskParam(param),
      taskName(taskName),
      priority(priority),
      stackDepth(stackDepth),
      taskHandler(nullptr) {
}


Task::~Task() {
    end();
}

bool Task::begin() {
    BaseType_t result;
    result = xTaskCreate(taskFunction, taskName, stackDepth, taskParam, priority, (TaskHandle_t *)&taskHandler);
    if (result != pdPASS) {
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

Task_State Task::getState() {
    eTaskState state = eTaskGetState((TaskHandle_t)taskHandler);
    return (Task_State)state;
}

void Task::deleteCurrent() {
    vTaskDelete(NULL);
}

} // namespace ExLib