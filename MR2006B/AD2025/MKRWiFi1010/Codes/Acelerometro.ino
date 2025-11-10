#include <Arduino_MKRIoTCarrier.h>
MKRIoTCarrier carrier;

float x, y, z;
  
void setup() 
{
  Serial.begin(9600);  
  carrier.noCase();
  carrier.begin();
}

void loop(){

  if (carrier.IMUmodule.accelerationAvailable())
  {
    carrier.IMUmodule.readAcceleration(x, y, z);
    Serial.print("X: ");
    Serial.println(x);

    Serial.print("Y: ");
    Serial.println(y);

    Serial.print("Z: ");
    Serial.println(z);
  }

}
