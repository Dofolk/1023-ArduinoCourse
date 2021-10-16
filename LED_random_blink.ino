byte leds[6] = {2,3,4,5};
byte index = 0;
byte t = 0;

void setup() {
  for(byte i = 1;i<4;i++){
    pinMode(leds[i],OUTPUT);
    digitalWrite(leds[i],LOW);
  }
}

void loop() {
  index = random(0,4);
  t = random(1,5);
  digitalWrite(leds[index],HIGH);
  delay(t * 1000);
  digitalWrite(leds[index],LOW);
  delay(t * 1000);
}
