#include <LiquidCrystal.h>

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

int number;




void setup() {
  // put your setup code here, to run once:

  Serial1.begin(9600);
  pinMode(7, OUTPUT);  //LED Backlight if needed
  digitalWrite(7, HIGH);
  lcd.begin(16, 2);

}

void loop() {
  // put your main code here, to run repeatedly:
  number = random (10000, 30000);
  lcd.print(number);
  Serial1.print(number);
  delay(5000);
  lcd.clear();

}
