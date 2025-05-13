#include <Wire.h>
#define NOTE_C4 262
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_F4 349
#define NOTE_G4 392
#define NOTE_A4 440
#define NOTE_B4 494
int x = 0;
int anote = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  Wire.begin(9);
  Wire.onReceive(receiveEvent);
}
void receiveEvent(int bytes) {
  x = Wire.read();    // read one character from the I2C
}

void loop() {
  // put your main code here, to run repeatedly:
  if(x>=2.5 && X<=20){
    if(x<=5){
      tone(5, NOTE_C4);
    }
    else if(x <= 7.5){
      tone(5, NOTE_D4);
    }
    else if(x <=10){
      tone(5, NOTE_E4);
    }
    else if(x<=12.5){
      tone(5, NOTE_F4);
    }
    else if(x<=15){
      tone(5, NOTE_G4);
    }
    else if(x<=17.5);{
      tone(5, NOTE_A4);
    }
    else{
      tone(5, NOTE_B4);
    }
  }
}
