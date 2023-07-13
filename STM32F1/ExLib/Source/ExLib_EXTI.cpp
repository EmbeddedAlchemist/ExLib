#include "ExLib_EXTI.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"
#include "stdint.h"

ExLib::CallbackFunction *EXTICallback[15];

namespace ExLib {

std::uint8_t getPinSourceByName(GPIO_Pin pinName) {
    switch ((std::uint8_t)pinName % 16) {
        case 0:
            return GPIO_PinSource0;
        case 1:
            return GPIO_PinSource1;
        case 2:
            return GPIO_PinSource2;
        case 3:
            return GPIO_PinSource3;
        case 4:
            return GPIO_PinSource4;
        case 5:
            return GPIO_PinSource5;
        case 6:
            return GPIO_PinSource6;
        case 7:
            return GPIO_PinSource7;
        case 8:
            return GPIO_PinSource8;
        case 9:
            return GPIO_PinSource9;
        case 10:
            return GPIO_PinSource10;
        case 11:
            return GPIO_PinSource11;
        case 12:
            return GPIO_PinSource12;
        case 13:
            return GPIO_PinSource13;
        case 14:
            return GPIO_PinSource14;
        case 15:
            return GPIO_PinSource15;
        default:
            // will never reach here
            ExLib_Exception::raiseException("Bad GPIO pin");
            return 0;
    }
}

std::uint8_t getPortSourceByName(GPIO_Pin pinName) {
    switch ((std::uint8_t)pinName / 16) {
        case 0:
            return GPIO_PortSourceGPIOA;
        case 1:
            return GPIO_PortSourceGPIOB;
        case 2:
            return GPIO_PortSourceGPIOC;
        case 3:
            return GPIO_PortSourceGPIOD;
        case 4:
            return GPIO_PortSourceGPIOE;
        case 5:
            return GPIO_PortSourceGPIOF;
        case 6:
            return GPIO_PortSourceGPIOG;
        default:
            ExLib_Exception::raiseException("Bad GPIO port");
            return 0xFF;
    }
}

std::uint32_t getEXTILineByName(GPIO_Pin pinName) {
    switch ((std::uint8_t)pinName % 16) {
        case 0:
            return EXTI_Line0;
        case 1:
            return EXTI_Line1;
        case 2:
            return EXTI_Line2;
        case 3:
            return EXTI_Line3;
        case 4:
            return EXTI_Line4;
        case 5:
            return EXTI_Line5;
        case 6:
            return EXTI_Line6;
        case 7:
            return EXTI_Line7;
        case 8:
            return EXTI_Line8;
        case 9:
            return EXTI_Line9;
        case 10:
            return EXTI_Line10;
        case 11:
            return EXTI_Line11;
        case 12:
            return EXTI_Line12;
        case 13:
            return EXTI_Line13;
        case 14:
            return EXTI_Line14;
        case 15:
            return EXTI_Line15;
        default:
            // will never reach here
            ExLib_Exception::raiseException("Bad GPIO pin");
            return 0;
    }
}

DeviceSupport::EXTITrigger_TypeDef getTiggerByName(GPIO_State state) {
    switch (state) {
        case GPIO_State::Rising:
            return DeviceSupport::EXTI_Trigger_Rising;
        case GPIO_State::Falling:
            return DeviceSupport::EXTI_Trigger_Falling;
        case GPIO_State::Changing:
            return DeviceSupport::EXTI_Trigger_Rising_Falling;
        default:
            ExLib_Exception::raiseException("Bad GPIO State");
            return (DeviceSupport::EXTITrigger_TypeDef)-1;
    }
}

std::size_t getCallbaclIndexByName(GPIO_Pin pinName) {
    return (std::uint8_t)pinName % 16;
}

std::uint8_t getIRQChannelByName(GPIO_Pin pinName) {
    switch ((std::uint8_t)pinName % 16) {
        case 0:
            return DeviceSupport::EXTI0_IRQn;
        case 1:
            return DeviceSupport::EXTI1_IRQn;
        case 2:
            return DeviceSupport::EXTI2_IRQn;
        case 3:
            return DeviceSupport::EXTI3_IRQn;
        case 4:
            return DeviceSupport::EXTI4_IRQn;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            return DeviceSupport::EXTI9_5_IRQn;
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            return DeviceSupport::EXTI15_10_IRQn;
        default:
            // will never reach here
            ExLib_Exception::raiseException("Bad GPIO pin");
            return 0;
    }
}

void EXTI::attachInterrupt(GPIO_Pin pinName, GPIO_State state, CallbackFunction &callback, std::uint8_t priority) {
    DeviceSupport::EXTI_InitTypeDef EXTIInitData;
    DeviceSupport::NVIC_InitTypeDef NVICInitData;

    DeviceSupport::GPIO_EXTILineConfig(getPortSourceByName(pinName), getPinSourceByName(pinName));
    EXTIInitData.EXTI_Line = getEXTILineByName(pinName);
    EXTIInitData.EXTI_Mode = DeviceSupport::EXTI_Mode_Interrupt;
    EXTIInitData.EXTI_LineCmd = DeviceSupport::ENABLE;
    EXTIInitData.EXTI_Trigger = getTiggerByName(state);
    DeviceSupport::EXTI_Init(&EXTIInitData);
    EXTICallback[getCallbaclIndexByName(pinName)] = &callback;

    NVICInitData.NVIC_IRQChannel = getIRQChannelByName(pinName);
    NVICInitData.NVIC_IRQChannelCmd = DeviceSupport::ENABLE;
    NVICInitData.NVIC_IRQChannelPreemptionPriority = 16 - priority;
    NVICInitData.NVIC_IRQChannelSubPriority = 0;
    DeviceSupport::NVIC_Init(&NVICInitData);
}

void EXTI::detachInterrupt(GPIO_Pin pinName) {
    DeviceSupport::EXTI_InitTypeDef EXTIInitData;
    DeviceSupport::NVIC_InitTypeDef NVICInitData;

    EXTIInitData.EXTI_Line = getEXTILineByName(pinName);
    EXTIInitData.EXTI_LineCmd = DeviceSupport::DISABLE;
    DeviceSupport::EXTI_Init(&EXTIInitData);

    NVICInitData.NVIC_IRQChannel = getIRQChannelByName(pinName);
    NVICInitData.NVIC_IRQChannelCmd = DeviceSupport::DISABLE;
    NVICInitData.NVIC_IRQChannelPreemptionPriority = 16;
    NVICInitData.NVIC_IRQChannelSubPriority = 0;
    DeviceSupport::NVIC_Init(&NVICInitData);
}

} // namespace ExLib

extern "C" {
void EXTI0_IRQHandler() {
    if (DeviceSupport::EXTI_GetITStatus(EXTI_Line0) == DeviceSupport::SET) {
        EXTICallback[0]->call();
        DeviceSupport::EXTI_ClearITPendingBit(EXTI_Line0);
    }
}
void EXTI1_IRQHandler() {
    if (DeviceSupport::EXTI_GetITStatus(EXTI_Line1) == DeviceSupport::SET) {
        EXTICallback[1]->call();
        DeviceSupport::EXTI_ClearITPendingBit(EXTI_Line1);
    }
}
void EXTI2_IRQHandler() {
    if (DeviceSupport::EXTI_GetITStatus(EXTI_Line2) == DeviceSupport::SET) {
        EXTICallback[2]->call();
        DeviceSupport::EXTI_ClearITPendingBit(EXTI_Line2);
    }
}
void EXTI3_IRQHandler() {
    if (DeviceSupport::EXTI_GetITStatus(EXTI_Line3) == DeviceSupport::SET) {
        EXTICallback[3]->call();
        DeviceSupport::EXTI_ClearITPendingBit(EXTI_Line3);
    }
}
void EXTI4_IRQHandler() {
    if (DeviceSupport::EXTI_GetITStatus(EXTI_Line4) == DeviceSupport::SET) {
        EXTICallback[4]->call();
        DeviceSupport::EXTI_ClearITPendingBit(EXTI_Line4);
    }
}
void EXTI9_5_IRQHandler() {
    if (DeviceSupport::EXTI_GetITStatus(EXTI_Line5) == DeviceSupport::SET) {
        EXTICallback[5]->call();
        DeviceSupport::EXTI_ClearITPendingBit(EXTI_Line5);
    }
    if (DeviceSupport::EXTI_GetITStatus(EXTI_Line6) == DeviceSupport::SET) {
        EXTICallback[6]->call();
        DeviceSupport::EXTI_ClearITPendingBit(EXTI_Line6);
    }
    if (DeviceSupport::EXTI_GetITStatus(EXTI_Line7) == DeviceSupport::SET) {
        EXTICallback[7]->call();
        DeviceSupport::EXTI_ClearITPendingBit(EXTI_Line7);
    }
    if (DeviceSupport::EXTI_GetITStatus(EXTI_Line8) == DeviceSupport::SET) {
        EXTICallback[8]->call();
        DeviceSupport::EXTI_ClearITPendingBit(EXTI_Line8);
    }
    if (DeviceSupport::EXTI_GetITStatus(EXTI_Line9) == DeviceSupport::SET) {
        EXTICallback[9]->call();
        DeviceSupport::EXTI_ClearITPendingBit(EXTI_Line9);
    }
}
void EXTI15_10_IRQHandler() {
    if (DeviceSupport::EXTI_GetITStatus(EXTI_Line10) == DeviceSupport::SET) {
        EXTICallback[10]->call();
        DeviceSupport::EXTI_ClearITPendingBit(EXTI_Line10);
    }
    if (DeviceSupport::EXTI_GetITStatus(EXTI_Line11) == DeviceSupport::SET) {
        EXTICallback[11]->call();
        DeviceSupport::EXTI_ClearITPendingBit(EXTI_Line11);
    }
    if (DeviceSupport::EXTI_GetITStatus(EXTI_Line12) == DeviceSupport::SET) {
        EXTICallback[12]->call();
        DeviceSupport::EXTI_ClearITPendingBit(EXTI_Line12);
    }
    if (DeviceSupport::EXTI_GetITStatus(EXTI_Line13) == DeviceSupport::SET) {
        EXTICallback[13]->call();
        DeviceSupport::EXTI_ClearITPendingBit(EXTI_Line13);
    }
    if (DeviceSupport::EXTI_GetITStatus(EXTI_Line14) == DeviceSupport::SET) {
        EXTICallback[14]->call();
        DeviceSupport::EXTI_ClearITPendingBit(EXTI_Line14);
    }
    if (DeviceSupport::EXTI_GetITStatus(EXTI_Line15) == DeviceSupport::SET) {
        EXTICallback[15]->call();
        DeviceSupport::EXTI_ClearITPendingBit(EXTI_Line15);
    }
}
}
