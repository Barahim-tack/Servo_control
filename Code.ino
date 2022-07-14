#include <Servo.h>

Servo servo1;  

int POT;  
  

void setup() {
  servo1.attach(9);
}

void loop() {
  POT = analogRead(A0);            
  POT = map(POT, 0, 1023, 0, 180);    
  servo1.write(POT);                  
  delay(15);                           
}
