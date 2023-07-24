#pragma once

#include <stddef.h>
#include <stdint.h>

#include "../Source/FreeRTOS/FreeRTOSSupport.hpp"

namespace ExLib {

class Task {
  private:
    void (*taskFunction)(void *);
    void *taskHandler;
    void *taskParam;

  public:
    Task() = delete;
    Task(void (*taskFunction)(void *), void *param = nullptr);
    ~Task();
    bool begin(const char *name = "Default", std::uint32_t proity = 1, std::size_t stackDepth = 256);
    void end();
    void suspend();
    void resume();
};
} // namespace ExLib