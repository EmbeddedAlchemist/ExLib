#pragma once
#include "ExLib_CallbackFunction.hpp"
#include "ExLib_Printable.hpp"
#include <stdint.h>
namespace ExLib {

/**
 * @brief 枚举了所有引脚名
 *
 */
enum GPIO_Pin : std::uint8_t {
    PA0 = 0,
    PA1 = 1,
    PA2 = 2,
    PA3 = 3,
    PA4 = 4,
    PA5 = 5,
    PA6 = 6,
    PA7 = 7,
    PA8 = 8,
    PA9 = 9,
    PA10 = 10,
    PA11 = 11,
    PA12 = 12,
    PA13 = 13,
    PA14 = 14,
    PA15 = 15,
    PB0 = 16,
    PB1 = 17,
    PB2 = 18,
    PB3 = 19,
    PB4 = 20,
    PB5 = 21,
    PB6 = 22,
    PB7 = 23,
    PB8 = 24,
    PB9 = 25,
    PB10 = 26,
    PB11 = 27,
    PB12 = 28,
    PB13 = 29,
    PB14 = 30,
    PB15 = 31,
    PC0 = 32,
    PC1 = 33,
    PC2 = 34,
    PC3 = 35,
    PC4 = 36,
    PC5 = 37,
    PC6 = 38,
    PC7 = 39,
    PC8 = 40,
    PC9 = 41,
    PC10 = 42,
    PC11 = 43,
    PC12 = 44,
    PC13 = 45,
    PC14 = 46,
    PC15 = 47,
    PD0 = 48,
    PD1 = 49,
    PD2 = 50,
    PD3 = 51,
    PD4 = 52,
    PD5 = 53,
    PD6 = 54,
    PD7 = 55,
    PD8 = 56,
    PD9 = 57,
    PD10 = 58,
    PD11 = 59,
    PD12 = 60,
    PD13 = 61,
    PD14 = 62,
    PD15 = 63,
    PE0 = 64,
    PE1 = 65,
    PE2 = 66,
    PE3 = 67,
    PE4 = 68,
    PE5 = 69,
    PE6 = 70,
    PE7 = 71,
    PE8 = 72,
    PE9 = 73,
    PE10 = 74,
    PE11 = 75,
    PE12 = 76,
    PE13 = 77,
    PE14 = 78,
    PE15 = 79,
    PF0 = 80,
    PF1 = 81,
    PF2 = 82,
    PF3 = 83,
    PF4 = 84,
    PF5 = 85,
    PF6 = 86,
    PF7 = 87,
    PF8 = 88,
    PF9 = 89,
    PF10 = 90,
    PF11 = 91,
    PF12 = 92,
    PF13 = 93,
    PF14 = 94,
    PF15 = 95,
    PG0 = 96,
    PG1 = 97,
    PG2 = 98,
    PG3 = 99,
    PG4 = 100,
    PG5 = 101,
    PG6 = 102,
    PG7 = 103,
    PG8 = 104,
    PG9 = 105,
    PG10 = 106,
    PG11 = 107,
    PG12 = 108,
    PG13 = 109,
    PG14 = 110,
    PG15 = 111,

};

/**
 * @brief 枚举了GPIO模式
 *
 */
enum class GPIO_Mode {
    Input_Hiz,        // 高阻输入
    Input_PullUp,     // 上拉输入
    Input_PullDown,   // 下拉输入
    Output_PushPull,  // 推挽输出
    Output_OpenDrain, // 开漏输出
    Analog,           // 模拟

    Input = Input_Hiz,
    Output = Output_PushPull
};

/**
 * @brief 枚举了GPIO状态
 *
 */
enum class GPIO_State {
    Low = 0,  // 低电平
    High = 1, // 高电平
    Falling,  // 下降沿
    Rising,   // 上升沿
    Changing, // 跳变沿

    Raising = Rising
};

class GPIO : protected Printable {
  private:
    void * const port;
    const std::uint16_t pin;

  protected:
    virtual size_t printTo(PrintStream &stream);

  public:
    GPIO(void) = delete;
    GPIO(GPIO_Pin pinName);
    GPIO(GPIO_Pin pinName, GPIO_Mode modeName);

    /**
     * @brief 向GPIO端口写数据
     *
     * @param level 电平
     */
    void write(bool level);

    /**
     * @brief 从GPIO端口读数据
     *
     * @return true 高电平
     * @return false 低电平
     */
    bool read(void);

    /**
     * @brief 设置GPIO端口的模式
     *
     * @param modeName 模式名
     */
    void mode(GPIO_Mode modeName);

    /**
     * @brief 为GPIO端口添加中断
     *
     * @param state 中断触发条件
     * @param callback 中断回调函数
     */
    void attachInterrupt(GPIO_State state, CallbackFunction &callback, std::uint8_t priority = 0);

    /**
     * @brief 取消该GPIO端口上的中断
     *
     */
    void detachInterrupt();

    // *
    // * 无对象版本的函数，不想新建对象时，可直接使用引脚名操作GPIO
    // * 效率可能略差
    // *

    /**
     * @brief
     *
     * @param pinName
     * @param level
     */
    static void write(GPIO_Pin pinName, bool level);
    static bool read(GPIO_Pin pinName);
    static void mode(GPIO_Pin pinName, GPIO_Mode modeName);

    // *
    // * 运算符重载
    // *

    /**
     * @brief 允许将GPIO对象转化为引脚名，用于输入引脚名的场景
     * 
     * @return GPIO_Pin 
     */
    operator GPIO_Pin();

    /**
     * @brief 允许将GPIO对象转为bool值，转化的值为GPIO端口读到的电平
     * 
     * @return true 
     * @return false 
     */
    inline operator bool() { return read(); }
    
    /**
     * @brief 重载=运算符，允许使用类似 GPIOx=1 的方式写GPIO
     * 
     * @param level 
     */
    inline void operator=(bool level) { write(level); }
    // inline bool operator==(int level) { return read() == level; }
    // inline bool operator!=(int level) { return read() != level; }
};
} // namespace ExLib
