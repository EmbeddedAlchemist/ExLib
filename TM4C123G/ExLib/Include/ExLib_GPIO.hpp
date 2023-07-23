#pragma once

#include "ExLib_CallbackFunction.hpp"
#include "ExLib_PrintStream.hpp"
#include <stdint.h>
namespace ExLib {

/**
 * @brief 枚举了所有引脚名
 *
 */
enum class GPIO_Pin : std::uint8_t {
    PA0 = 0,
    PA1 = 1,
    PA2 = 2,
    PA3 = 3,
    PA4 = 4,
    PA5 = 5,
    PA6 = 6,
    PA7 = 7,
    PB0 = 8,
    PB1 = 9,
    PB2 = 10,
    PB3 = 11,
    PB4 = 12,
    PB5 = 13,
    PB6 = 14,
    PB7 = 15,
    PC0 = 16,
    PC1 = 17,
    PC2 = 18,
    PC3 = 19,
    PC4 = 20,
    PC5 = 21,
    PC6 = 22,
    PC7 = 23,
    PD0 = 24,
    PD1 = 25,
    PD2 = 26,
    PD3 = 27,
    PD4 = 28,
    PD5 = 29,
    PD6 = 30,
    PD7 = 31,
    PE0 = 32,
    PE1 = 33,
    PE2 = 34,
    PE3 = 35,
    PE4 = 36,
    PE5 = 37,
    PE6 = 38,
    PE7 = 39,
    PF0 = 40,
    PF1 = 41,
    PF2 = 42,
    PF3 = 43,
    PF4 = 44,
    PF5 = 45,
    PF6 = 46,
    PF7 = 47,
    PG0 = 48,
    PG1 = 49,
    PG2 = 50,
    PG3 = 51,
    PG4 = 52,
    PG5 = 53,
    PG6 = 54,
    PG7 = 55,
    PH0 = 56,
    PH1 = 57,
    PH2 = 58,
    PH3 = 59,
    PH4 = 60,
    PH5 = 61,
    PH6 = 62,
    PH7 = 63,
    PJ0 = 64,
    PJ1 = 65,
    PJ2 = 66,
    PJ3 = 67,
    PJ4 = 68,
    PJ5 = 69,
    PJ6 = 70,
    PJ7 = 71,
    PK0 = 72,
    PK1 = 73,
    PK2 = 74,
    PK3 = 75,
    PK4 = 76,
    PK5 = 77,
    PK6 = 78,
    PK7 = 79,
    PL0 = 80,
    PL1 = 81,
    PL2 = 82,
    PL3 = 83,
    PL4 = 84,
    PL5 = 85,
    PL6 = 86,
    PL7 = 87,
    PM0 = 88,
    PM1 = 89,
    PM2 = 90,
    PM3 = 91,
    PM4 = 92,
    PM5 = 93,
    PM6 = 94,
    PM7 = 95,
    PN0 = 96,
    PN1 = 97,
    PN2 = 98,
    PN3 = 99,
    PN4 = 100,
    PN5 = 101,
    PN6 = 102,
    PN7 = 103,
    PP0 = 104,
    PP1 = 105,
    PP2 = 106,
    PP3 = 107,
    PP4 = 108,
    PP5 = 109,
    PP6 = 110,
    PP7 = 111,
    PQ0 = 112,
    PQ1 = 113,
    PQ2 = 114,
    PQ3 = 115,
    PQ4 = 116,
    PQ5 = 117,
    PQ6 = 118,
    PQ7 = 119,
    PR0 = 120,
    PR1 = 121,
    PR2 = 122,
    PR3 = 123,
    PR4 = 124,
    PR5 = 125,
    PR6 = 126,
    PR7 = 127,
    PS0 = 128,
    PS1 = 129,
    PS2 = 130,
    PS3 = 131,
    PS4 = 132,
    PS5 = 133,
    PS6 = 134,
    PS7 = 135,
    PT0 = 136,
    PT1 = 137,
    PT2 = 138,
    PT3 = 139,
    PT4 = 140,
    PT5 = 141,
    PT6 = 142,
    PT7 = 143,

    NotAPin = 255

};

/**
 * @brief 枚举了GPIO模式
 *
 */
enum class GPIO_Mode {
    Input_Hiz = 0,        // 高阻输入
    Input_PullUp = 1,     // 上拉输入
    Input_PullDown = 2,   // 下拉输入
    Output_PushPull = 3,  // 推挽输出
    Output_OpenDrain = 4, // 开漏输出
    Analog = 5,           // 模拟

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

class GPIO : public Printable {
  private:
    const std::uintptr_t port;
    const std::uint8_t pin;

  protected:
    virtual std::size_t printTo(PrintStream &stream);

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
    static void pinWrite(GPIO_Pin pinName, bool level);
    static bool pinRead(GPIO_Pin pinName);
    static void pinMode(GPIO_Pin pinName, GPIO_Mode modeName);

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
