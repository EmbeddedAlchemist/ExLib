#include "ExLib_Exception.hpp"
#include "DeviceSupport/DeviceSupport.hpp"

extern "C" {
/**
 * @brief  This function handles Hard Fault exception.
 * @param  None
 * @retval None
 */
void HardFault_Handler(void) {
    /* Go to infinite loop when Hard Fault exception occurs */
    while (1) {
    }
}

/**
 * @brief  This function handles Memory Manage exception.
 * @param  None
 * @retval None
 */
void MemManage_Handler(void) {
    /* Go to infinite loop when Memory Manage exception occurs */
    while (1) {
    }
}

/**
 * @brief  This function handles Bus Fault exception.
 * @param  None
 * @retval None
 */
void BusFault_Handler(void) {
    /* Go to infinite loop when Bus Fault exception occurs */
    while (1) {
    }
}

/**
 * @brief  This function handles Usage Fault exception.
 * @param  None
 * @retval None
 */
void UsageFault_Handler(void) {
    /* Go to infinite loop when Usage Fault exception occurs */
    while (1) {
    }
}

std::uint32_t ExLib_CoreDump_Buffer[16];
//extern void ExLib_CoreDump();
}

namespace ExLib {

const char *ExLib_Exception::lastExceptionMessage = nullptr;

void ExLib_Exception::raiseException(const char *message) {
    //ExLib_CoreDump();
    ExLib_Exception::lastExceptionMessage = message;
    raiseHardFault();
}
void ExLib_Exception::raiseHardFault() {
    *(volatile std::uint32_t *)nullptr = 0;
}
} // namespace ExLib