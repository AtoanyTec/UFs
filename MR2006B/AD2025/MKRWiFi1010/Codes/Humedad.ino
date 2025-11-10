#include <Arduino_MKRIoTCarrier.h>
MKRIoTCarrier carrier;
  
void setup() 
{
  Serial.begin(9600);
  carrier.noCase();
  carrier.begin();
}

void loop() 
{
  float temperature = carrier.Env.readTemperature();
  float humidity = carrier.Env.readHumidity(); 
   
  Serial.print("   Humidity: ");
  Serial.println(humidity);
  delay(500);
}
