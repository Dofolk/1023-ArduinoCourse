#include <Servo.h>
Servo myservo;

byte pin = A0;
float angle;

void setup() {
  pinMode(pin,INPUT);
  Serial.begin(9600);
  myservo.attach(6);
}

void loop() {
  int val = analogRead(pin);
  Serial.println(val);
  angle = map(val,0,1023,20,150);
  myservo.write(angle);
  Serial.println(angle);
  delay(10);
}
