#include <LiquidCrystal_I2C.h>

//initialize lcd
LiquidCrystal_I2C lcd(0x20,16,2);

void setup()
{
  lcd.init();
  lcd.clear();         
  lcd.backlight();      // Make sure backlight is on
}

void loop()
{
  // Print a message on both lines of the LCD.
  //lcd.cursor(column,row) index starts at 0
  lcd.setCursor(2,0);   //Set cursor to character 2 on line 0
  lcd.print("Temporizador");
  
  lcd.setCursor(2,1);   //Move cursor to character 2 on line 1
  lcd.print(millis() / 1000);
  lcd.print(" segundos");
  
}
