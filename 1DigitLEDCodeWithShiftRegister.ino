int datapin = 13;
int latchpin = 12;
int clockpin = 11;

int count = 0;

byte number[] = {  0b11111100, 0b01100000, 0b11011010, 0b11110010, 0b01100110, 0b10110110, 0b10111110, 0b11100000, 0b11111110, 0b11100110};
void setup() {
  // put your setup code here, to run once:
    pinMode(datapin, OUTPUT);
    pinMode(latchpin, OUTPUT);
    pinMode(clockpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(latchpin, LOW);
    shiftOut(datapin, clockpin, MSBFIRST, number[count]);
    digitalWrite(latchpin, HIGH);

    delay(1000);
    

    count++;
  
    if (count > 9)
  {
    count = 0;
  }
    
}
