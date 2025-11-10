#include <Arduino_MKRIoTCarrier.h>
MKRIoTCarrier carrier;

uint32_t Rojo = carrier.leds.Color(255,0,0);
uint32_t Verde = carrier.leds.Color(0,255,0);
uint32_t Azul = carrier.leds.Color(0,0,255);


void setup() 
{
  carrier.withCase();
  carrier.begin();
}

void loop() 
{
  float freq = 1000;
  carrier.Buzzer.sound(freq);
}
