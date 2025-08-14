#define button_pin 13 //pin of micro switch that sends button presses
#include "Adafruit_LEDBackpack.h"
#include <Adafruit_GFX.h>
Adafruit_7segment matrix = Adafruit_7segment();

// variables will change:
int button_press_count = 0;
int button_state = 0;
int prev_button_state = 0;



void setup() {
  // put your setup code here, to run once:
  delay(100);
  Serial.begin(9600);
  pinMode (button_pin, INPUT_PULLUP); //Set digi pin 13 as pull up button
  pinMode (A5, OUTPUT);
  matrix.begin(0x70);
  matrix.println(button_press_count);
  matrix.writeDisplay();

  Serial.println("Button Count:");
}

void loop() {
  // put your main code here, to run repeatedly:
  button_state = digitalRead(button_pin); // 0 or 1 values. 1 when it is not pressed and 0 when pressed
  if (button_state != prev_button_state) { // This Prevents the count to grow continously when button is pressed
    if (button_state == HIGH) { // Button is not pressed
      digitalWrite(A5, LOW);
      matrix.println(button_press_count);
      matrix.writeDisplay();
      
    } else { //button press
      
      digitalWrite(A5, HIGH);
      button_press_count++; //button_press_count = button_press_count +10; will add 10 everytime button pressed
      Serial.println(button_press_count); //print the count
      matrix.println(button_press_count);
      matrix.writeDisplay();
    }
    delay(50);
  }
  prev_button_state = button_state;
}
