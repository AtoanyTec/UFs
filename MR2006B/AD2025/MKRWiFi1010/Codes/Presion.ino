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
  float pressure = carrier.Pressure.readPressure();
   
  Serial.print("Pressure: ");
  Serial.print(pressure);
  Serial.println(" kPa");
  delay(500);
}
