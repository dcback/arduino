/*******************************************************************************
    Adruino : 1~13, A0~A7
    STM32   : PA0~PA15, PB0~PB15, PC0~PC15
    ESP8266 : D0~D10(D0=16, D1=5, D2=4, D3=0, D4=2, D5=14, D6=12, D7=13, D8=15,
********************************************************************************/
#include <TM1637.h>

const int pinClk = 5;  // D1
const int pinDta = 4;  // D2

TM1637 led;

void setup() {
}

void loop() {
    for (int i = 0; i < 10000; i++)
    {
        led.DigitDisplayWrite(pinClk, pinDta, i);
        delay(10);
    }
}
