#pragma once

namespace ExLib {
class CallbackFunction {
  protected:
    void (*callback)(void *param);
    void *param;

  public:
    inline CallbackFunction(void (*callback)(void *), void *param = nullptr) : callback(callback), param(param) {}
    inline void call() { callback(param); }
};
} // namespace ExLib