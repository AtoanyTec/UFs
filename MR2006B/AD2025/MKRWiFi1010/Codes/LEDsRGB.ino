#include <Arduino_MKRIoTCarrier.h>
MKRIoTCarrier carrier;

uint32_t Rojo = carrier.leds.Color(255,0,0);
uint32_t Verde = carrier.leds.Color(0,255,0);
uint32_t Azul = carrier.leds.Color(0,0,255);


void setup() 
{
  carrier.withCase();
  carrier.begin();
  carrier.leds.setBrightness(255);
  carrier.leds.clear();
}

void loop() 
{
  //carrier.leds.fill(color, firstLedToCount, count);
  carrier.leds.fill(Rojo, 0, 3);
  carrier.leds.show();
  delay(300);

  carrier.leds.fill(Verde, 1, 4);
  carrier.leds.show();
  delay(300);

  carrier.leds.fill(Azul, 2, 5);
  carrier.leds.show();
  delay(300);
}
