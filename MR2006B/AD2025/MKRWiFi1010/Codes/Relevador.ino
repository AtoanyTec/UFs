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
  carrier.Relay1.open();
  delay(200);
  //carrier.Relay1.close();
  //delay(200);

  Serial.print("Estado del Relevador 1: ");
  Serial.println(carrier.Relay1.getStatus());
  
}
