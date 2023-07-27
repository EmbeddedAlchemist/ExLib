#include "ExLib.hpp"
#include "ExLib_DeviceSupport.hpp"
#include "ExLib_FreeRTOS.hpp"
#include "u8g2.h"

void _delay(volatile int i) {
    while (i--)
        ;
}

using namespace ExLib;

I2C I2C0(I2C_Periph::I2C0);

static UART Serial(UART_Periph::UART0);
HardwarePWM PWMModule13(HardwarePWM_Periph::Module1Generator3);
HardwarePWM PWMModule12(HardwarePWM_Periph::Module1Generator2);
PWM_Channel pwmChannelB(PWMModule13, 0, GPIO_Pin::PF2);
PWM_Channel pwmChannelG(PWMModule13, 1, GPIO_Pin::PF3);
PWM_Channel pwmChannelR(PWMModule12, 1, GPIO_Pin::PF1);

void task1Func(void *unused) {
    while (true) {
        Serial.println("Task1");
    }
}

void task2Func(void *unused) {
    while (true) {
        Serial.println("Task2");
    }
}

Task task1(task1Func);
Task task2(task2Func);

uint8_t u8x8_gpio_and_delay_template(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr) {
    switch (msg) {
        case U8X8_MSG_GPIO_AND_DELAY_INIT: // called once during init phase of u8g2/u8x8
            break;                         // can be used to setup pins
        case U8X8_MSG_DELAY_NANO:          // delay arg_int * 1 nano second
            //_delay(1 * arg_int);
            _delay(1);
            break;
        case U8X8_MSG_DELAY_100NANO: // delay arg_int * 100 nano seconds
            //_delay(100 * arg_int);
            _delay(arg_int);
            break;
        case U8X8_MSG_DELAY_10MICRO: // delay arg_int * 10 micro seconds
            _delay(100 * arg_int);
            break;
        case U8X8_MSG_DELAY_MILLI: // delay arg_int * 1 milli second
            _delay(10000 * arg_int);
            break;
        case U8X8_MSG_DELAY_I2C: // arg_int is the I2C speed in 100KHz, e.g. 4 = 400 KHz
            break;               // arg_int=1: delay by 5us, arg_int = 4: delay by 1.25us
        case U8X8_MSG_GPIO_D0:   // D0 or SPI clock pin: Output level in arg_int
                                 // case U8X8_MSG_GPIO_SPI_CLOCK:
            break;
        case U8X8_MSG_GPIO_D1: // D1 or SPI data pin: Output level in arg_int
                               // case U8X8_MSG_GPIO_SPI_DATA:
            break;
        case U8X8_MSG_GPIO_D2: // D2 pin: Output level in arg_int
            break;
        case U8X8_MSG_GPIO_D3: // D3 pin: Output level in arg_int
            break;
        case U8X8_MSG_GPIO_D4: // D4 pin: Output level in arg_int
            break;
        case U8X8_MSG_GPIO_D5: // D5 pin: Output level in arg_int
            break;
        case U8X8_MSG_GPIO_D6: // D6 pin: Output level in arg_int
            break;
        case U8X8_MSG_GPIO_D7: // D7 pin: Output level in arg_int
            break;
        case U8X8_MSG_GPIO_E: // E/WR pin: Output level in arg_int
            break;
        case U8X8_MSG_GPIO_CS: // CS (chip select) pin: Output level in arg_int
            break;
        case U8X8_MSG_GPIO_DC: // DC (data/cmd, A0, register select) pin: Output level in arg_int
            break;
        case U8X8_MSG_GPIO_RESET: // Reset pin: Output level in arg_int
            break;
        case U8X8_MSG_GPIO_CS1: // CS1 (chip select) pin: Output level in arg_int
            break;
        case U8X8_MSG_GPIO_CS2: // CS2 (chip select) pin: Output level in arg_int
            break;
        case U8X8_MSG_GPIO_I2C_CLOCK: // arg_int=0: Output low at I2C clock pin
            break;                    // arg_int=1: Input dir with pullup high for I2C clock pin
        case U8X8_MSG_GPIO_I2C_DATA:  // arg_int=0: Output low at I2C data pin
            break;                    // arg_int=1: Input dir with pullup high for I2C data pin
        case U8X8_MSG_GPIO_MENU_SELECT:
            u8x8_SetGPIOResult(u8x8, /* get menu select pin state */ 0);
            break;
        case U8X8_MSG_GPIO_MENU_NEXT:
            u8x8_SetGPIOResult(u8x8, /* get menu next pin state */ 0);
            break;
        case U8X8_MSG_GPIO_MENU_PREV:
            u8x8_SetGPIOResult(u8x8, /* get menu prev pin state */ 0);
            break;
        case U8X8_MSG_GPIO_MENU_HOME:
            u8x8_SetGPIOResult(u8x8, /* get menu home pin state */ 0);
            break;
        default:
            u8x8_SetGPIOResult(u8x8, 1); // default return value
            break;
    }
    return 1;
}

uint8_t my_u8x8_byte_i2c(u8x8_t *u8x8, uint8_t msg, uint8_t arg_int, void *arg_ptr) {

    switch (msg) {
        case U8X8_MSG_BYTE_SEND:
            I2C0.write((char *)arg_ptr, arg_int);
            break;
        case U8X8_MSG_BYTE_INIT:
            /* add your custom code to init i2c subsystem */
            I2C0.begin(400_kHz);
            break;
        case U8X8_MSG_BYTE_SET_DC:
            /* ignored for i2c */
            break;
        case U8X8_MSG_BYTE_START_TRANSFER:
            I2C0.beginTransmission(u8x8_GetI2CAddress(u8x8) >> 1);
            break;
        case U8X8_MSG_BYTE_END_TRANSFER:
            I2C0.endTransmission();
            break;
        default:
            return 0;
    }
    return 1;
}

u8g2_t u8g2;

void drawLogo(void) {
    u8g2_SetFontMode(&u8g2, 1); // Transparen
    u8g2_SetFontDirection(&u8g2, 0);
    u8g2_SetFont(&u8g2, u8g2_font_inb24_mf);
    u8g2_DrawStr(&u8g2, 0, 30, "U");
    u8g2_SetFontDirection(&u8g2, 1);
    u8g2_SetFont(&u8g2, u8g2_font_inb30_mn);
    u8g2_DrawStr(&u8g2, 21, 8, "8");
    u8g2_SetFontDirection(&u8g2, 0);
    u8g2_SetFont(&u8g2, u8g2_font_inb24_mf);
    u8g2_DrawStr(&u8g2, 51, 30, "g");
    u8g2_DrawStr(&u8g2, 67, 30, "\xb2");
    u8g2_DrawHLine(&u8g2, 2, 35, 47);
    u8g2_DrawHLine(&u8g2, 3, 36, 47);
    u8g2_DrawVLine(&u8g2, 45, 32, 12);
    u8g2_DrawVLine(&u8g2, 46, 33, 12);
}

void drawURL(void) {
#ifndef MINI_LOGO
    u8g2_SetFont(&u8g2, u8g2_font_4x6_tr);
    if (u8g2_GetDisplayHeight(&u8g2) < 59) {
        u8g2_DrawStr(&u8g2, 89, 20, "github.com");
        u8g2_DrawStr(&u8g2, 73, 29, "/olikraus/u8g2");
    } else {
        u8g2_DrawStr(&u8g2, 1, 54, "github.com/olikraus/u8g2");
    }
#endif
}

void cb(void *unused) {
    static int i = 0;
    i++;
    if (i == 1000) {
        Serial.println("int");
        i = 0;
    }
}

volatile int stackOverflowGenerator() {
    volatile int i;
    return stackOverflowGenerator() + i;
}

int ExLib::usr_main() {

    Serial.begin();
    System::setDebugStream(Serial);
    Serial.print("System Clock: ");
    Serial.print(System::getSystemClockSpeed());
    Serial.println("Hz.");

    u8g2_Setup_ssd1306_i2c_128x64_noname_f(&u8g2, U8G2_R0, my_u8x8_byte_i2c, u8x8_gpio_and_delay_template);
    u8g2_InitDisplay(&u8g2);     // send init sequence to the display, display is in sleep mode after this,
    u8g2_SetPowerSave(&u8g2, 0); // wake up
    u8g2_ClearBuffer(&u8g2);
    drawLogo();
    drawURL();
    u8g2_SendBuffer(&u8g2);

    // GeneralTimer Timer0(GeneralTimer_Periph::Timer0A);
    // Timer0.begin();
    // Timer0.setCycle(200_us);
    // //Timer0.onOverflow(*new CallbackFunction(cb));
    // ADC ADC0(ADC_Periph::ADC0);
    // ADC_Channel channel0(ADC0, GPIO_Pin::PE3);

    QuadraticEncoder encoder0(QuadraticEncoder_Periph::QuadraticEncoder0, GPIO_Pin::PD6, GPIO_Pin::PD7);
    encoder0.begin();
    Serial.println("Begin!");
    // task1.begin();
    // task2.begin();
    std::uint32_t maxv = 0;
    while (1) {
        Serial.println(System::getMicroseconds());
        //stackOverflowGenerator();

    }

    return 0;
}
