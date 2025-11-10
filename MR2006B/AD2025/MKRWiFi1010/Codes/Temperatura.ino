#include <Arduino_MKRIoTCarrier.h>
MKRIoTCarrier carrier;
  
void setup() 
{
  Serial.begin(9600);
  carrier.withCase();
  carrier.begin();
}

void loop() 
{
  float temperature = carrier.Env.readTemperature();
   
  Serial.print("Temperatura: ");
  Serial.println(temperature);
  delay(500);
}
