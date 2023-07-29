#pragma once

#include <stddef.h>
#include <stdint.h>

#include "../Source/FreeRTOS/FreeRTOSSupport.hpp"

namespace ExLib {

enum class Task_State {
    Running = 0,
    Ready,
    Blocked,
    Suspended,
    Deleted,
    Invalid
};

class Task {
  private:
    void *taskHandler;
    void (*const taskFunction)(void *);
    void *const taskParam;
    const char *const taskName;
    const std::uint32_t priority;
    const std::size_t stackDepth;

  public:
    Task() = delete;
    Task(void (*taskFunction)(void *), void *param = nullptr, const char *taskName = "Default", std::uint32_t priority = 1, std::size_t stackDepth = 256);
    ~Task();
    bool begin(void);
    void end(void);
    void suspend(void);
    void resume(void);
    Task_State getState();

    static void deleteCurrent();
};
} // namespace ExLib