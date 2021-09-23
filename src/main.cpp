#include <Arduino.h>
const int ledPin = 2;
const int ledPin1 = 15;
const int ledPin2 = 16;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin,0);
    digitalWrite(ledPi1,1);
    digitalWrite(ledPin2,0);
  delay(1500);
   digitalWrite(ledPin,1);  
  digitalWrite(ledPin1,0);
    digitalWrite(ledPin2,0);
  delay(1500);

}
