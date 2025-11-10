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

    if (carrier.Light.gestureAvailable())
    {
      uint8_t gesture = carrier.Light.readGesture(); // a variable to store the type of gesture read by the light sensor
      
      // when gesture is UP
      if (gesture == UP)
      {
        Serial.print("Gesture: ");
        Serial.println("UP");
      }
  }
}
