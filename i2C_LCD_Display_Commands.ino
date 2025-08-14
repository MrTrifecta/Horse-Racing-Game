#include <LiquidCrystal_PCF8574.h>

LiquidCrystal_PCF8574 lcd(0x27); // set the LCD address to 0x27 for a 16 chars and 2 line display

int credits = 0;

void setup() {
  // put your setup code here, to run once:

lcd.begin(16,2);
lcd.setCursor(0,0);
lcd.print("Big Game BOI");
lcd.setCursor(0,1);
lcd.print("Credits = ");
lcd.setCursor(10,1);
lcd.print(credits);
lcd.setBacklight(HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:

lcd.begin(16,2);
lcd.setCursor(0,0);
lcd.print("Big Game BOI");
lcd.setCursor(0,1);
lcd.print("Credits = ");
lcd.setCursor(10,1);
lcd.print(credits);

credits++;
delay(2000);

}
