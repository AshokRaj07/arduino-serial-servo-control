#include <Servo.h>
Servo servo1;
void setup() {
  // put your setup code here, to run once:
  servo1.attach(9);
  Serial.begin(9600);
  servo1.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()>0){
    char x = Serial.read();
    if (x=='1'){
      servo1.write(90);
      
    }else{
      servo1.write(0);
      
    }
  }
}
