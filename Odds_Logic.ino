int nextraceodds = 0;

int h12odds = 0;
int h13odds = 0;
int h14odds = 0;
int h15odds = 0;
int h23odds = 0;
int h24odds = 0;
int h25odds = 0;
int h34odds = 0;
int h35odds = 0;
int h45odds = 0;

int oddssum = 0;
int oddssum1 = 0;
int oddssum2 = 0;
int oddssum3 = 0;
int oddssum4 = 0;
int oddssum5 = 0;
int oddssum6 = 0;
int oddssum7 = 0;
int oddssum8 = 0;
int oddssum9 = 0;
int oddssum10 = 0;

int winner = 0;

int racenum = 0;

int nextracenum =0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  // put your main code here, to run repeatedly:

  nextraceodds = random(10,108);

  switch(nextraceodds)
  {

case 10:
h12odds = 12;
h13odds = 13;
h14odds = 66;
h15odds = 2;
h23odds = 68;
h24odds = 6;
h25odds = 99;
h34odds = 3;
h35odds = 18;
h45odds = 8;
break;
case 11:
h12odds = 68;
h13odds = 3;
h14odds = 7;
h15odds = 8;
h23odds = 23;
h24odds = 21;
h25odds = 35;
h34odds = 18;
h35odds = 6;
h45odds = 13;
break;
case 12:
h12odds = 9;
h13odds = 41;
h14odds = 12;
h15odds = 21;
h23odds = 13;
h24odds = 22;
h25odds = 99;
h34odds = 8;
h35odds = 3;
h45odds = 6;
break;
case 13:
h12odds = 2;
h13odds = 22;
h14odds = 9;
h15odds = 54;
h23odds = 41;
h24odds = 3;
h25odds = 17;
h34odds = 6;
h35odds = 66;
h45odds = 25;
break;
case 14:
h12odds = 9;
h13odds = 17;
h14odds = 2;
h15odds = 22;
h23odds = 12;
h24odds = 5;
h25odds = 8;
h34odds = 6;
h35odds = 16;
h45odds = 20;
break;
case 15:
h12odds = 12;
h13odds = 13;
h14odds = 3;
h15odds = 8;
h23odds = 9;
h24odds = 18;
h25odds = 19;
h34odds = 2;
h35odds = 16;
h45odds = 68;
break;
case 16:
h12odds = 10;
h13odds = 8;
h14odds = 20;
h15odds = 2;
h23odds = 6;
h24odds = 3;
h25odds = 22;
h34odds = 18;
h35odds = 99;
h45odds = 15;
break;
case 17:
h12odds = 23;
h13odds = 54;
h14odds = 6;
h15odds = 2;
h23odds = 15;
h24odds = 10;
h25odds = 3;
h34odds = 21;
h35odds = 46;
h45odds = 18;
break;
case 18:
h12odds = 13;
h13odds = 6;
h14odds = 21;
h15odds = 20;
h23odds = 16;
h24odds = 18;
h25odds = 23;
h34odds = 15;
h35odds = 12;
h45odds = 7;
break;
case 19:
h12odds = 8;
h13odds = 3;
h14odds = 78;
h15odds = 21;
h23odds = 46;
h24odds = 6;
h25odds = 2;
h34odds = 16;
h35odds = 20;
h45odds = 23;
break;
case 20:
h12odds = 54;
h13odds = 17;
h14odds = 41;
h15odds = 16;
h23odds = 20;
h24odds = 13;
h25odds = 23;
h34odds = 15;
h35odds = 18;
h45odds = 21;
break;
case 21:
h12odds = 10;
h13odds = 5;
h14odds = 3;
h15odds = 25;
h23odds = 99;
h24odds = 13;
h25odds = 23;
h34odds = 8;
h35odds = 12;
h45odds = 9;
break;
case 22:
h12odds = 54;
h13odds = 12;
h14odds = 7;
h15odds = 21;
h23odds = 99;
h24odds = 5;
h25odds = 20;
h34odds = 17;
h35odds = 2;
h45odds = 13;
break;
case 23:
h12odds = 19;
h13odds = 17;
h14odds = 68;
h15odds = 21;
h23odds = 8;
h24odds = 3;
h25odds = 25;
h34odds = 35;
h35odds = 54;
h45odds = 9;
break;
case 24:
h12odds = 23;
h13odds = 3;
h14odds = 41;
h15odds = 78;
h23odds = 20;
h24odds = 6;
h25odds = 13;
h34odds = 21;
h35odds = 46;
h45odds = 55;
break;
case 25:
h12odds = 9;
h13odds = 20;
h14odds = 23;
h15odds = 6;
h23odds = 3;
h24odds = 16;
h25odds = 12;
h34odds = 15;
h35odds = 35;
h45odds = 13;
break;
case 26:
h12odds = 25;
h13odds = 20;
h14odds = 18;
h15odds = 9;
h23odds = 46;
h24odds = 68;
h25odds = 22;
h34odds = 13;
h35odds = 66;
h45odds = 6;
break;
case 27:
h12odds = 18;
h13odds = 20;
h14odds = 3;
h15odds = 7;
h23odds = 25;
h24odds = 2;
h25odds = 21;
h34odds = 35;
h35odds = 78;
h45odds = 68;
break;
case 28:
h12odds = 18;
h13odds = 41;
h14odds = 17;
h15odds = 16;
h23odds = 68;
h24odds = 15;
h25odds = 46;
h34odds = 2;
h35odds = 78;
h45odds = 21;
break;
case 29:
h12odds = 46;
h13odds = 21;
h14odds = 55;
h15odds = 18;
h23odds = 13;
h24odds = 3;
h25odds = 8;
h34odds = 22;
h35odds = 12;
h45odds = 15;
break;
case 30:
h12odds = 21;
h13odds = 6;
h14odds = 5;
h15odds = 20;
h23odds = 3;
h24odds = 18;
h25odds = 16;
h34odds = 46;
h35odds = 54;
h45odds = 17;
break;
case 31:
h12odds = 12;
h13odds = 20;
h14odds = 18;
h15odds = 6;
h23odds = 16;
h24odds = 8;
h25odds = 23;
h34odds = 21;
h35odds = 46;
h45odds = 9;
break;
case 32:
h12odds = 68;
h13odds = 13;
h14odds = 12;
h15odds = 21;
h23odds = 99;
h24odds = 2;
h25odds = 46;
h34odds = 66;
h35odds = 23;
h45odds = 9;
break;
case 33:
h12odds = 3;
h13odds = 8;
h14odds = 19;
h15odds = 20;
h23odds = 6;
h24odds = 23;
h25odds = 13;
h34odds = 12;
h35odds = 54;
h45odds = 2;
break;
case 34:
h12odds = 54;
h13odds = 21;
h14odds = 6;
h15odds = 46;
h23odds = 2;
h24odds = 20;
h25odds = 19;
h34odds = 3;
h35odds = 18;
h45odds = 8;
break;
case 35:
h12odds = 13;
h13odds = 68;
h14odds = 18;
h15odds = 9;
h23odds = 3;
h24odds = 5;
h25odds = 66;
h34odds = 20;
h35odds = 12;
h45odds = 19;
break;
case 36:
h12odds = 9;
h13odds = 41;
h14odds = 68;
h15odds = 6;
h23odds = 3;
h24odds = 10;
h25odds = 54;
h34odds = 13;
h35odds = 12;
h45odds = 46;
break;
case 37:
h12odds = 16;
h13odds = 9;
h14odds = 10;
h15odds = 54;
h23odds = 21;
h24odds = 18;
h25odds = 8;
h34odds = 3;
h35odds = 7;
h45odds = 2;
break;
case 38:
h12odds = 55;
h13odds = 12;
h14odds = 46;
h15odds = 18;
h23odds = 9;
h24odds = 20;
h25odds = 22;
h34odds = 68;
h35odds = 23;
h45odds = 21;
break;
case 39:
h12odds = 18;
h13odds = 23;
h14odds = 46;
h15odds = 5;
h23odds = 35;
h24odds = 6;
h25odds = 25;
h34odds = 9;
h35odds = 20;
h45odds = 3;
break;
case 40:
h12odds = 13;
h13odds = 54;
h14odds = 6;
h15odds = 21;
h23odds = 9;
h24odds = 12;
h25odds = 66;
h34odds = 68;
h35odds = 10;
h45odds = 99;
break;
case 41:
h12odds = 21;
h13odds = 55;
h14odds = 6;
h15odds = 9;
h23odds = 54;
h24odds = 13;
h25odds = 22;
h34odds = 46;
h35odds = 12;
h45odds = 41;
break;
case 42:
h12odds = 15;
h13odds = 12;
h14odds = 13;
h15odds = 6;
h23odds = 9;
h24odds = 3;
h25odds = 25;
h34odds = 17;
h35odds = 18;
h45odds = 2;
break;
case 43:
h12odds = 68;
h13odds = 35;
h14odds = 8;
h15odds = 12;
h23odds = 66;
h24odds = 9;
h25odds = 22;
h34odds = 17;
h35odds = 23;
h45odds = 21;
break;
case 44:
h12odds = 3;
h13odds = 55;
h14odds = 18;
h15odds = 41;
h23odds = 10;
h24odds = 9;
h25odds = 46;
h34odds = 21;
h35odds = 66;
h45odds = 7;
break;
case 45:
h12odds = 21;
h13odds = 18;
h14odds = 3;
h15odds = 20;
h23odds = 78;
h24odds = 23;
h25odds = 9;
h34odds = 17;
h35odds = 99;
h45odds = 12;
break;
case 46:
h12odds = 78;
h13odds = 2;
h14odds = 12;
h15odds = 23;
h23odds = 17;
h24odds = 9;
h25odds = 41;
h34odds = 6;
h35odds = 25;
h45odds = 3;
break;
case 47:
h12odds = 6;
h13odds = 99;
h14odds = 21;
h15odds = 19;
h23odds = 8;
h24odds = 7;
h25odds = 54;
h34odds = 23;
h35odds = 12;
h45odds = 5;
break;
case 48:
h12odds = 17;
h13odds = 3;
h14odds = 12;
h15odds = 2;
h23odds = 54;
h24odds = 23;
h25odds = 20;
h34odds = 5;
h35odds = 18;
h45odds = 68;
break;
case 49:
h12odds = 22;
h13odds = 5;
h14odds = 20;
h15odds = 21;
h23odds = 9;
h24odds = 18;
h25odds = 35;
h34odds = 68;
h35odds = 6;
h45odds = 3;
break;
case 50:
h12odds = 18;
h13odds = 9;
h14odds = 23;
h15odds = 99;
h23odds = 8;
h24odds = 46;
h25odds = 20;
h34odds = 66;
h35odds = 3;
h45odds = 17;
break;
case 51:
h12odds = 3;
h13odds = 23;
h14odds = 54;
h15odds = 25;
h23odds = 2;
h24odds = 12;
h25odds = 13;
h34odds = 8;
h35odds = 55;
h45odds = 20;
break;
case 52:
h12odds = 7;
h13odds = 16;
h14odds = 99;
h15odds = 21;
h23odds = 3;
h24odds = 15;
h25odds = 2;
h34odds = 35;
h35odds = 78;
h45odds = 12;
break;
case 53:
h12odds = 19;
h13odds = 6;
h14odds = 12;
h15odds = 21;
h23odds = 55;
h24odds = 3;
h25odds = 9;
h34odds = 13;
h35odds = 78;
h45odds = 16;
break;
case 54:
h12odds = 6;
h13odds = 2;
h14odds = 8;
h15odds = 9;
h23odds = 55;
h24odds = 46;
h25odds = 3;
h34odds = 68;
h35odds = 23;
h45odds = 54;
break;
case 55:
h12odds = 13;
h13odds = 99;
h14odds = 2;
h15odds = 3;
h23odds = 35;
h24odds = 15;
h25odds = 21;
h34odds = 9;
h35odds = 54;
h45odds = 8;
break;
case 56:
h12odds = 6;
h13odds = 55;
h14odds = 19;
h15odds = 18;
h23odds = 15;
h24odds = 9;
h25odds = 16;
h34odds = 8;
h35odds = 10;
h45odds = 35;
break;
case 57:
h12odds = 8;
h13odds = 5;
h14odds = 66;
h15odds = 3;
h23odds = 2;
h24odds = 22;
h25odds = 99;
h34odds = 9;
h35odds = 20;
h45odds = 12;
break;
case 58:
h12odds = 12;
h13odds = 7;
h14odds = 9;
h15odds = 18;
h23odds = 21;
h24odds = 10;
h25odds = 17;
h34odds = 6;
h35odds = 23;
h45odds = 20;
break;
case 59:
h12odds = 18;
h13odds = 46;
h14odds = 5;
h15odds = 7;
h23odds = 9;
h24odds = 20;
h25odds = 6;
h34odds = 99;
h35odds = 19;
h45odds = 25;
break;
case 60:
h12odds = 23;
h13odds = 3;
h14odds = 66;
h15odds = 2;
h23odds = 20;
h24odds = 21;
h25odds = 12;
h34odds = 9;
h35odds = 35;
h45odds = 41;
break;
case 61:
h12odds = 9;
h13odds = 35;
h14odds = 12;
h15odds = 5;
h23odds = 3;
h24odds = 13;
h25odds = 20;
h34odds = 15;
h35odds = 18;
h45odds = 19;
break;
case 62:
h12odds = 9;
h13odds = 5;
h14odds = 17;
h15odds = 78;
h23odds = 20;
h24odds = 55;
h25odds = 6;
h34odds = 23;
h35odds = 35;
h45odds = 3;
break;
case 63:
h12odds = 23;
h13odds = 10;
h14odds = 6;
h15odds = 54;
h23odds = 8;
h24odds = 66;
h25odds = 46;
h34odds = 25;
h35odds = 22;
h45odds = 20;
break;
case 64:
h12odds = 16;
h13odds = 6;
h14odds = 22;
h15odds = 12;
h23odds = 23;
h24odds = 9;
h25odds = 20;
h34odds = 99;
h35odds = 21;
h45odds = 18;
break;
case 65:
h12odds = 16;
h13odds = 3;
h14odds = 23;
h15odds = 6;
h23odds = 8;
h24odds = 21;
h25odds = 78;
h34odds = 9;
h35odds = 18;
h45odds = 20;
break;
case 66:
h12odds = 78;
h13odds = 18;
h14odds = 35;
h15odds = 8;
h23odds = 46;
h24odds = 16;
h25odds = 12;
h34odds = 21;
h35odds = 10;
h45odds = 23;
break;
case 67:
h12odds = 8;
h13odds = 23;
h14odds = 6;
h15odds = 17;
h23odds = 18;
h24odds = 3;
h25odds = 10;
h34odds = 9;
h35odds = 20;
h45odds = 68;
break;
case 68:
h12odds = 9;
h13odds = 17;
h14odds = 54;
h15odds = 8;
h23odds = 13;
h24odds = 78;
h25odds = 25;
h34odds = 12;
h35odds = 19;
h45odds = 20;
break;
case 69:
h12odds = 78;
h13odds = 23;
h14odds = 21;
h15odds = 20;
h23odds = 35;
h24odds = 8;
h25odds = 3;
h34odds = 12;
h35odds = 25;
h45odds = 5;
break;
case 70:
h12odds = 21;
h13odds = 16;
h14odds = 3;
h15odds = 20;
h23odds = 41;
h24odds = 12;
h25odds = 9;
h34odds = 15;
h35odds = 17;
h45odds = 68;
break;
case 71:
h12odds = 9;
h13odds = 5;
h14odds = 20;
h15odds = 41;
h23odds = 17;
h24odds = 10;
h25odds = 46;
h34odds = 12;
h35odds = 8;
h45odds = 21;
break;
case 72:
h12odds = 21;
h13odds = 8;
h14odds = 18;
h15odds = 12;
h23odds = 3;
h24odds = 20;
h25odds = 19;
h34odds = 6;
h35odds = 99;
h45odds = 66;
break;
case 73:
h12odds = 6;
h13odds = 20;
h14odds = 17;
h15odds = 46;
h23odds = 2;
h24odds = 8;
h25odds = 21;
h34odds = 18;
h35odds = 3;
h45odds = 19;
break;
case 74:
h12odds = 3;
h13odds = 55;
h14odds = 46;
h15odds = 2;
h23odds = 13;
h24odds = 5;
h25odds = 18;
h34odds = 23;
h35odds = 15;
h45odds = 35;
break;
case 75:
h12odds = 2;
h13odds = 7;
h14odds = 21;
h15odds = 18;
h23odds = 9;
h24odds = 8;
h25odds = 13;
h34odds = 3;
h35odds = 12;
h45odds = 5;
break;
case 76:
h12odds = 12;
h13odds = 3;
h14odds = 10;
h15odds = 9;
h23odds = 68;
h24odds = 78;
h25odds = 6;
h34odds = 41;
h35odds = 17;
h45odds = 46;
break;
case 77:
h12odds = 66;
h13odds = 68;
h14odds = 6;
h15odds = 22;
h23odds = 55;
h24odds = 25;
h25odds = 3;
h34odds = 9;
h35odds = 12;
h45odds = 2;
break;
case 78:
h12odds = 66;
h13odds = 8;
h14odds = 41;
h15odds = 9;
h23odds = 18;
h24odds = 25;
h25odds = 3;
h34odds = 12;
h35odds = 6;
h45odds = 78;
break;
case 79:
h12odds = 99;
h13odds = 35;
h14odds = 8;
h15odds = 2;
h23odds = 54;
h24odds = 20;
h25odds = 25;
h34odds = 68;
h35odds = 23;
h45odds = 46;
break;
case 80:
h12odds = 46;
h13odds = 54;
h14odds = 22;
h15odds = 35;
h23odds = 10;
h24odds = 13;
h25odds = 23;
h34odds = 99;
h35odds = 9;
h45odds = 8;
break;
case 81:
h12odds = 6;
h13odds = 19;
h14odds = 18;
h15odds = 3;
h23odds = 21;
h24odds = 9;
h25odds = 66;
h34odds = 17;
h35odds = 23;
h45odds = 10;
break;
case 82:
h12odds = 12;
h13odds = 5;
h14odds = 17;
h15odds = 21;
h23odds = 6;
h24odds = 23;
h25odds = 54;
h34odds = 55;
h35odds = 18;
h45odds = 46;
break;
case 83:
h12odds = 15;
h13odds = 23;
h14odds = 8;
h15odds = 18;
h23odds = 9;
h24odds = 25;
h25odds = 41;
h34odds = 55;
h35odds = 99;
h45odds = 21;
break;
case 84:
h12odds = 2;
h13odds = 13;
h14odds = 21;
h15odds = 41;
h23odds = 10;
h24odds = 35;
h25odds = 6;
h34odds = 23;
h35odds = 3;
h45odds = 46;
break;
case 85:
h12odds = 35;
h13odds = 9;
h14odds = 18;
h15odds = 8;
h23odds = 68;
h24odds = 16;
h25odds = 46;
h34odds = 78;
h35odds = 21;
h45odds = 12;
break;
case 86:
h12odds = 46;
h13odds = 54;
h14odds = 20;
h15odds = 2;
h23odds = 55;
h24odds = 13;
h25odds = 6;
h34odds = 12;
h35odds = 68;
h45odds = 21;
break;
case 87:
h12odds = 99;
h13odds = 3;
h14odds = 16;
h15odds = 55;
h23odds = 23;
h24odds = 20;
h25odds = 12;
h34odds = 18;
h35odds = 13;
h45odds = 9;
break;
case 88:
h12odds = 12;
h13odds = 8;
h14odds = 25;
h15odds = 23;
h23odds = 3;
h24odds = 13;
h25odds = 5;
h34odds = 21;
h35odds = 41;
h45odds = 10;
break;
case 89:
h12odds = 19;
h13odds = 18;
h14odds = 54;
h15odds = 68;
h23odds = 5;
h24odds = 46;
h25odds = 25;
h34odds = 21;
h35odds = 6;
h45odds = 12;
break;
case 90:
h12odds = 41;
h13odds = 3;
h14odds = 20;
h15odds = 17;
h23odds = 13;
h24odds = 35;
h25odds = 23;
h34odds = 55;
h35odds = 46;
h45odds = 54;
break;
case 91:
h12odds = 46;
h13odds = 17;
h14odds = 16;
h15odds = 15;
h23odds = 6;
h24odds = 66;
h25odds = 8;
h34odds = 9;
h35odds = 10;
h45odds = 21;
break;
case 92:
h12odds = 13;
h13odds = 21;
h14odds = 5;
h15odds = 6;
h23odds = 55;
h24odds = 22;
h25odds = 8;
h34odds = 15;
h35odds = 66;
h45odds = 2;
break;
case 93:
h12odds = 2;
h13odds = 13;
h14odds = 17;
h15odds = 23;
h23odds = 16;
h24odds = 6;
h25odds = 20;
h34odds = 7;
h35odds = 12;
h45odds = 3;
break;
case 94:
h12odds = 8;
h13odds = 3;
h14odds = 23;
h15odds = 13;
h23odds = 9;
h24odds = 68;
h25odds = 12;
h34odds = 6;
h35odds = 46;
h45odds = 54;
break;
case 95:
h12odds = 66;
h13odds = 6;
h14odds = 18;
h15odds = 2;
h23odds = 35;
h24odds = 13;
h25odds = 20;
h34odds = 46;
h35odds = 12;
h45odds = 25;
break;
case 96:
h12odds = 2;
h13odds = 6;
h14odds = 78;
h15odds = 12;
h23odds = 17;
h24odds = 15;
h25odds = 9;
h34odds = 66;
h35odds = 46;
h45odds = 35;
break;
case 97:
h12odds = 21;
h13odds = 2;
h14odds = 55;
h15odds = 54;
h23odds = 5;
h24odds = 10;
h25odds = 12;
h34odds = 25;
h35odds = 17;
h45odds = 41;
break;
case 98:
h12odds = 54;
h13odds = 99;
h14odds = 7;
h15odds = 23;
h23odds = 46;
h24odds = 20;
h25odds = 12;
h34odds = 3;
h35odds = 13;
h45odds = 5;
break;
case 99:
h12odds = 5;
h13odds = 17;
h14odds = 8;
h15odds = 9;
h23odds = 23;
h24odds = 2;
h25odds = 12;
h34odds = 18;
h35odds = 19;
h45odds = 54;
break;
case 100:
h12odds = 68;
h13odds = 6;
h14odds = 8;
h15odds = 15;
h23odds = 16;
h24odds = 2;
h25odds = 23;
h34odds = 22;
h35odds = 12;
h45odds = 66;
break;
case 101:
h12odds = 13;
h13odds = 8;
h14odds = 3;
h15odds = 21;
h23odds = 18;
h24odds = 2;
h25odds = 25;
h34odds = 66;
h35odds = 20;
h45odds = 9;
break;
case 102:
h12odds = 16;
h13odds = 99;
h14odds = 25;
h15odds = 12;
h23odds = 19;
h24odds = 7;
h25odds = 66;
h34odds = 6;
h35odds = 21;
h45odds = 41;
break;
case 103:
h12odds = 78;
h13odds = 7;
h14odds = 25;
h15odds = 3;
h23odds = 21;
h24odds = 12;
h25odds = 13;
h34odds = 6;
h35odds = 18;
h45odds = 2;
break;
case 104:
h12odds = 3;
h13odds = 25;
h14odds = 9;
h15odds = 2;
h23odds = 8;
h24odds = 21;
h25odds = 19;
h34odds = 20;
h35odds = 10;
h45odds = 16;
case 105:
h13odds = 7;
h14odds = 25;
h15odds = 3;
h23odds = 21;
h24odds = 12;
h25odds = 13;
h34odds = 6;
h35odds = 18;
h45odds = 2;
break;
case 106:
h12odds = 13;
h13odds = 23;
h14odds = 8;
h15odds = 22;
h23odds = 17;
h24odds = 2;
h25odds = 20;
h34odds = 46;
h35odds = 18;
h45odds = 19;
break;
case 107:
h12odds = 20;
h13odds = 15;
h14odds = 6;
h15odds = 23;
h23odds = 12;
h24odds = 17;
h25odds = 3;
h34odds = 2;
h35odds = 46;
h45odds = 13;
break;
case 108:
h12odds = 18;
h13odds = 10;
h14odds = 54;
h15odds = 6;
h23odds = 8;
h24odds = 68;
h25odds = 19;
h34odds = 20;
h35odds = 9;
h45odds = 2;
break;

}

  oddssum = h12odds + h13odds + h14odds + h15odds + h23odds + h24odds + h25odds + h34odds + h35odds + h45odds; // 288

  oddssum1 = int(oddssum / h12odds); // 295 / 12 = 24
  oddssum2 = int(oddssum / h13odds + oddssum1); // 295 / 13 = 22 + 24 = 46
  oddssum3 = int(oddssum / h14odds + oddssum2); // 295 / 66 = 4 + 46 = 50
  oddssum4 = int(oddssum / h15odds + oddssum3); // 295 / 2 = 147 + 50 = 197
  oddssum5 = int(oddssum / h23odds + oddssum4); // 295 / 68 = 4 + 197 = 201
  oddssum6 = int(oddssum / h24odds + oddssum5); // 295 / 6 = 49 + 201 = 250
  oddssum7 = int(oddssum / h25odds + oddssum6); // 295 / 99 = 2 + 250 = 252
  oddssum8 = int(oddssum / h34odds + oddssum7); // 295 / 3 = 98 + 252 = 350
  oddssum9 = int(oddssum / h35odds + oddssum8); // 295 / 18 = 16 + 350 = 366
  oddssum10 = int(oddssum / h45odds + oddssum9); // 295 / 8 = 36 + 366 = 402

  winner = random(1,oddssum10+1);  //winner between 1 and last horse odds total (1-403)

if (winner > 0 && winner <= oddssum1) // winner 1-6, horse 1-2
  {
         
    racenum = random(1,13); // random 1-12 racenumber
    switch(racenum)
    {
      case 1:
      nextracenum = 2;
    break;
      case 2:
      nextracenum = 22;
    break;
      case 3:
      nextracenum = 33;
    break;
      case 4:
      nextracenum = 34;
    break;
      case 5:
      nextracenum = 41;
    break;
      case 6:
      nextracenum = 44;
    break;
      case 7:
      nextracenum = 51;
    break;
      case 8:
      nextracenum = 61;
    break;
      case 9:
      nextracenum = 80;
    break;
      case 10:
      nextracenum = 97;
    break;
      case 11:
      nextracenum = 104;
    break;
      case 12:
      nextracenum = 105;
      break;
    }

  }

  else if (winner > oddssum1 && winner <= oddssum2) // winner 7-102, horse 1-3
      {
      
       racenum = random(1,13); // random 1-12 racenumber
    switch(racenum)
    {
      case 1:
      nextracenum = 27;
    break;
      case 2:
      nextracenum = 38;
    break;
      case 3:
      nextracenum = 39;
    break;
      case 4:
      nextracenum = 45;
    break;
      case 5:
      nextracenum = 46;
    break;
      case 6:
      nextracenum = 48;
    break;
      case 7:
      nextracenum = 49;
    break;
      case 8:
      nextracenum = 76;
    break;
      case 9:
      nextracenum = 78;
    break;
      case 10:
      nextracenum = 87;
    break;
      case 11:
      nextracenum = 88;
    break;
      case 12:
      nextracenum = 89;
    break;
    }
      }
  else if (winner > oddssum2 && winner <= oddssum3) // winner 103-134, horse 1-4
    {
     
    
          racenum = random(1,13); // random 1-12 racenumber
    switch(racenum)
    {
      case 1:
      nextracenum = 1;
    break;
      case 2:
      nextracenum = 8;
    break;
      case 3:
      nextracenum = 12;
    break;
      case 4:
      nextracenum = 13;
    break;
      case 5:
      nextracenum = 19;
    break;
      case 6:
      nextracenum = 50;
    break;
      case 7:
      nextracenum = 57;
    break;
      case 8:
      nextracenum = 62;
    break;
      case 9:
      nextracenum = 99;
    break;
      case 10:
      nextracenum = 109;
    break;
      case 11:
      nextracenum = 113;
    break;
      case 12:
      nextracenum = 115;
      break;
    }
    }
  else if (winner > oddssum3 && winner <= oddssum4) // winner 135-148, horse 1-5
  {
    
    
          racenum = random(1,13); // random 1-12 racenumber
    switch(racenum)
    {
      case 1:
      nextracenum = 15;
    break;
      case 2:
      nextracenum = 17;
    break;
      case 3:
      nextracenum = 23;
    break;
      case 4:
      nextracenum = 32;
    break;
      case 5:
      nextracenum = 42;
    break;
      case 6:
      nextracenum = 47;
    break;
      case 7:
      nextracenum = 56;
    break;
      case 8:
      nextracenum = 68;
    break;
      case 9:
      nextracenum = 82;
    break;
      case 10:
      nextracenum = 85;
    break;
      case 11:
      nextracenum = 94;
    break;
      case 12:
      nextracenum = 111;
      break;
        }
  }
  else if (winner > oddssum4 && winner <= oddssum5) // winner 149-152, horse 2-3
  {
    
    
          racenum  = random(1,13); // random 1-12 racenumber
    switch(racenum)
    {
      case 1:
      nextracenum = 3;
    break;
      case 2:
      nextracenum = 7;
    break;
      case 3:
      nextracenum = 24;
    break;
      case 4:
      nextracenum = 26;
    break;
      case 5:
      nextracenum = 40;
    break;
      case 6:
      nextracenum = 43;
    break;
      case 7:
      nextracenum = 74;
    break;
      case 8:
      nextracenum = 83;
    break;
      case 9:
      nextracenum = 84;
    break;
      case 10:
      nextracenum = 96;
    break;
      case 11:
      nextracenum = 102;
    break;
      case 12:
      nextracenum = 103;
      break;
    }
  }
      else if (winner > oddssum5 && winner <= oddssum6) // winner 153-160, horse 2-4
  {
    
    
          racenum = random(1,13); // random 1-12 racenumber
    switch(racenum)
    {
      case 1:
      nextracenum = 5;
    break;
      case 2:
      nextracenum = 11;
    break;
      case 3:
      nextracenum = 18;
    break;
      case 4:
      nextracenum = 25;
    break;
      case 5:
      nextracenum = 63;
    break;
      case 6:
      nextracenum = 67;
    break;
      case 7:
      nextracenum = 77;
    break;
      case 8:
      nextracenum = 79;
    break;
      case 9:
      nextracenum = 81;
    break;
      case 10:
      nextracenum = 86;
    break;
      case 11:
      nextracenum = 90;
    break;
      case 12:
      nextracenum = 116;
      break;
    }
  }
  else if (winner > oddssum6 && winner <= oddssum7) // winner 161-172, horse 2-5
  {
    
    
          racenum = random(1,13); // random 1-12 racenumber
    switch(racenum)
    {
      case 1:
      nextracenum = 20;
    break;
      case 2:
      nextracenum = 21;
    break;
      case 3:
      nextracenum = 52;
    break;
      case 4:
      nextracenum = 55;
    break;
      case 5:
      nextracenum = 66;
    break;
      case 6:
      nextracenum = 71;
    break;
      case 7:
      nextracenum = 93;
    break;
      case 8:
      nextracenum = 95;
    break;
      case 9:
      nextracenum = 98;
    break;
      case 10:
      nextracenum = 101;
    break;
      case 11:
      nextracenum = 106;
    break;
      case 12:
      nextracenum = 112;
      break;
    }
}
  else if (winner > oddssum7 && winner <= oddssum8) // winner 173-177, horse 3-4
  {
    
    
    racenum = random(1,13); // random 1-12 racenumber
    switch(racenum)
    {
      case 1:
      nextracenum = 14;
    break;
      case 2:
      nextracenum = 16;
    break;
      case 3:
      nextracenum = 28;
    break;
      case 4:
      nextracenum = 36;
    break;
      case 5:
      nextracenum = 53;
    break;
      case 6:
      nextracenum = 54;
    break;
      case 7:
      nextracenum = 59;
    break;
      case 8:
      nextracenum = 64;
    break;
      case 9:
      nextracenum = 73;
    break;
      case 10:
      nextracenum = 91;
    break;
      case 11:
      nextracenum = 92;
    break;
      case 12:
      nextracenum = 114;
      break;
    }
  }
  else if (winner > oddssum8 && winner <= oddssum9) // winner 178-225, horse 3-5
  {
    
    
    racenum = random(1,13); // random 1-12 racenumber
    switch(racenum)
    {
      case 1:
      nextracenum = 6;
    break;
      case 2:
      nextracenum = 29;
    break;
      case 3:
      nextracenum = 30;
    break;
      case 4:
      nextracenum = 31;
    break;
      case 5:
      nextracenum = 58;
    break;
      case 6:
      nextracenum = 65;
    break;
      case 7:
      nextracenum = 69;
    break;
      case 8:
      nextracenum = 75;
    break;
      case 9:
      nextracenum = 100;
    break;
      case 10:
      nextracenum = 110;
    break;
      case 11:
      nextracenum = 119;
    break;
      case 12:
      nextracenum = 120;
      break;
    }
  }
  else if (winner > oddssum9 && winner <= oddssum10) // winner 225-237, horse 4-5
  {
    
    
    racenum = random(1,13); // random 1-12 racenumber
    switch(racenum)
    {
      case 1:
      nextracenum = 4;
    break;
      case 2:
      nextracenum = 9;
    break;
      case 3:
      nextracenum = 10;
    break;
      case 4:
      nextracenum = 35;
    break;
      case 5:
      nextracenum = 37;
    break;
      case 6:
      nextracenum = 60;
    break;
      case 7:
      nextracenum = 70;
    break;
      case 8:
      nextracenum = 72;
    break;
      case 9:
      nextracenum = 107;
    break;
      case 10:
      nextracenum = 108;
    break;
      case 11:
      nextracenum = 117;
    break;
      case 12:
      nextracenum = 118;
      break;
    }
  }
 }
