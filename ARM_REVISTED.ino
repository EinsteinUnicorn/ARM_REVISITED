#include <Servo.h>



int pot = 0;
int potvalue = analogRead(pot);
Servo servo;


void setup() {                
  pinMode(pot, INPUT);
  servo.attach(9);
  Serial.begin(9600);  
}


void loop() {
  
  Serial.println(potvalue);
  delay(1);
  int potvalue = analogRead(pot);
  potvalue= map(potvalue, 0, 1023, 0, 180);
  servo.write(potvalue);
  delay(1);
       
}

