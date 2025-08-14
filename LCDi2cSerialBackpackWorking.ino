#include <LiquidCrystal_PCF8574.h>
#include <Wire.h>

LiquidCrystal_PCF8574 lcd(0x27); // set the LCD address to 0x27 for a 16 chars and 2 line display

int number;





void setup()
{
  
  Serial1.begin(9600);
    lcd.begin(16, 2);
lcd.setBacklight(HIGH);
} // setup()



void loop() {
   // put your main code here, to run repeatedly:
  number = random (10000, 30000);
  lcd.print(number);
  Serial1.print(number);
  delay(5000);
  lcd.clear();

}
