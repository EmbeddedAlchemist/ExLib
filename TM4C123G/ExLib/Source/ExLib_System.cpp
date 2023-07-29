#include "ExLib_System.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"
#include "FreeRTOS/FreeRTOSSupport.hpp"
#include <stdio.h>

// 防止编译器报错
// #ifndef __builtin_va_start
// #define __builtin_va_start
// #endif
// #ifndef __builtin_va_copy
// #define __builtin_va_copy
// #endif
// #ifndef __builtin_va_end
// #define __builtin_va_end
// #endif

static std::uint32_t powerOnMilliseconds = 0;

extern "C" {
extern void vPortSVCHandler(void);
extern void xPortPendSVHandler(void);
extern void xPortSysTickHandler(void);

void vApplicationTickHook(void) {
    powerOnMilliseconds++;
}
}

namespace ExLib {

constexpr auto InterruptNumber_HardFault = 3;
constexpr auto InterruptNumber_SVCall = 11;
constexpr auto InterruptNumber_PendSV = 14;
constexpr auto InterruptNumber_Systick = 15;

PrintStream *System::_debugStream = nullptr;

void System::init(void) {

    // 设置系统时钟到80MHz
    DeviceSupport::SysCtlClockSet(SYSCTL_SYSDIV_2_5 | SYSCTL_USE_PLL | SYSCTL_XTAL_16MHZ | SYSCTL_OSC_MAIN);
    // 注册HardFault回调
    DeviceSupport::IntRegister(InterruptNumber_HardFault, Exception::hardFaultHandler);

    // FreeRTOS启动
    DeviceSupport::IntRegister(InterruptNumber_SVCall, vPortSVCHandler);
    DeviceSupport::IntRegister(InterruptNumber_PendSV, xPortPendSVHandler);
    DeviceSupport::IntRegister(InterruptNumber_Systick, xPortSysTickHandler);
}

void System::setDebugStream(PrintStream &dbgStream) {
    System::_debugStream = &dbgStream;
    if (_debugStream != nullptr) {
        printExLibLOGO();
        log_i("Debug stream has been set to this.");
    }
}

void System::printExLibLOGO(void) {
    if (_debugStream != nullptr) {
        _debugStream->print("\n"
                            " _____     _     _ _     \n"
                            "|  ___|   | |   (_) |    \n"
                            "| |____  _| |    _| |__  \n"
                            "|  __\\ \\/ / |   | | '_ \\ \n"
                            "| |___>  <| |___| | |_) |\n"
                            "\\____/_/\\_\\_____/_|_.__/ \n"
                            "\n");
    }
}

std::uint32_t System::getSystemClockSpeed(void) {
    return DeviceSupport::SysCtlClockGet();
}

std::uint32_t System::getMilliseconds(void) {
    return powerOnMilliseconds;
}

std::uint32_t System::getMicroseconds(void) {
    return System::getMilliseconds() * 1000 + 1000 * DeviceSupport::SysTickValueGet() / DeviceSupport::SysTickPeriodGet();
}

static void busyDelayUs(volatile uint32_t us) {
    while (us--)
        ;
}

void System::delay(TimeInterval interval) {
    std::uint32_t usTime, msTime;
    if (interval.us < 1000) {
        busyDelayUs(interval.us);
        return;
    }
    usTime = interval.us % 1000;
    msTime = interval.us / 1000;
    vTaskDelay(msTime / portTICK_PERIOD_MS);
    busyDelayUs(usTime);
}

void System::log_e(const char *fmt, ...) {
    if (_debugStream != nullptr) {
        _debugStream->print("[ERROR]   ");
        std::va_list arg;
        va_start(arg, fmt);
        _debugStream->vprintf(fmt, arg);
        va_end(arg);
        _debugStream->println();
    }
}

void System::log_w(const char *fmt, ...) {
    if (_debugStream != nullptr) {
        _debugStream->print("[WARNING] ");
        std::va_list arg;
        va_start(arg, fmt);
        _debugStream->vprintf(fmt, arg);
        va_end(arg);
        _debugStream->println();
    }
}

void System::log_i(const char *fmt, ...) {
    if (_debugStream != nullptr) {
        _debugStream->print("[INFO]    ");
        std::va_list arg;
        va_start(arg, fmt);
        _debugStream->vprintf(fmt, arg);
        va_end(arg);
        _debugStream->println();
    }
}

void System::log_d(const char *fmt, ...) {
    if (_debugStream != nullptr) {
        _debugStream->print("[DEBUG]   ");
        std::va_list arg;
        va_start(arg, fmt);
        _debugStream->vprintf(fmt, arg);
        va_end(arg);
        _debugStream->println();
    }
}

void System::log_v(const char *fmt, ...) {
    if (_debugStream != nullptr) {
        _debugStream->print("[VERBOSE] ");
        std::va_list arg;
        va_start(arg, fmt);
        _debugStream->vprintf(fmt, arg);
        va_end(arg);
        _debugStream->println();
    }
}

} // namespace ExLib