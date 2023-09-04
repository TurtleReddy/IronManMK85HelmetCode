#include <Servo.h>
Servo servo1;
Servo servo2;
int servo1Pin=9;
int servo2Pin=10;
int servo1Pos=0;
int servo2Pos=180;
int ButtonPin=2;
int ButtonNew;
int buttonOld=1;
int servo1state=0;
int servo2state=180;

void setup(){
Serial.begin(9600);
servo1.attach(servo1Pin);
servo2.attach(servo2Pin);
servo2.write(180);
servo1.write(0);
}

void loop(){
ButtonNew=digitalRead(ButtonPin);
if(buttonOld==0 && ButtonNew == 1){
  if (servo1state == 0) {
    servo1.write(180);
    servo1state=180;
  }
  else{
    servo1.write(0);
    servo1state=0;
  }
}
  if (servo2state == 180) {
    servo2.write(0);
    servo2state=0;
  }
  else{
    servo2.write(180);
    servo2state=180;
  }
}

