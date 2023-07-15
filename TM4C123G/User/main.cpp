#include "ExLib.hpp"
#include "ExLib_FreeRTOS.hpp"


void _delay(int i){
	while(i--);
}

using namespace ExLib;

//UART Serial(UART_Periph::UART0);
GPIO LED_R(GPIO_Pin::PF1, GPIO_Mode::Output);
UART Serial(UART_Periph::UART0);

int ExLib::usr_main() {

//		Serial.begin(115200);
		LED_R.write(1);
		//Serial.setPins(PA0, PA1);
		Serial.begin();

    while (1) {
			while(Serial.avaliableForRead()){
				Serial.write(Serial.read());
			}
    }

    //auto a = 1_pct;
    return 0;
}
