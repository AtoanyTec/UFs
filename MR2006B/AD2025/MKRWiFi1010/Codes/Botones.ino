#include <Arduino_MKRIoTCarrier.h>
MKRIoTCarrier carrier;

void setup() 
{
  Serial.begin(9600);  
  //carrier.noCase();
  carrier.withCase();
  carrier.begin();
}

void loop()
{
  // updates buttons status
  carrier.Buttons.update();

  // Checks if button 00 is getting touched, true until it gets released
  if (carrier.Buttons.getTouch(TOUCH0))
  {
    Serial.println("Boton 0 esta siendo presionado");
  }

  // Checks if button 00 is touched
  if (carrier.Buttons.onTouchDown(TOUCH1))
  {
    Serial.println("Boton 1 ha sido presionado");
  }

   // Get when the buttpn has been released
  if (carrier.Buttons.onTouchUp(TOUCH2))
  {
    Serial.println("Boton 2 fue presionado y ha sido liberado");
  }

   // Get both, touched and released
  if (carrier.Buttons.onTouchUp(TOUCH3))
  {
    Serial.println("Boton 3 fue presionado y fue liberado");
  }

  delay(200);
}
