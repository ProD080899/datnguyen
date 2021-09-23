#include <Arduino.h>
const int ledPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin,0);
  delay(15);
   digitalWrite(ledPin,1);
  delay(15);

}