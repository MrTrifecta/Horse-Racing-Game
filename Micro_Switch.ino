int datapin = 13;
int latchpin = 12;
int clockpin = 11;

int switchpin = 8;

int count = 0;
byte number[] = {  0b11111100, 0b01100000, 0b11011010, 0b11110010, 0b01100110, 0b10110110, 0b10111110, 0b11100000, 0b11111110, 0b11100110};
void setup() {
  // put your setup code here, to run once:
    pinMode(datapin, OUTPUT);
    pinMode(latchpin, OUTPUT);
    pinMode(clockpin, OUTPUT);
    pinMode(switchpin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(latchpin, LOW);
    shiftOut(datapin, clockpin, MSBFIRST, print[1,DEC]);
    digitalWrite(latchpin, HIGH);
      

    if (digitalRead(switchpin) == HIGH)
    {
    count++;
    delay(500);
    }
    if (count > 9)
  {
    count = 0;
  }
    
}
