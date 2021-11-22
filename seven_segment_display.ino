// Use seven segment display
// This will show the blinking number 0

byte leds[7] = {2,3,4,5,6,7,8};

void setup() {
  for(byte i = 0;i<7;i++){
    pinMode(leds[i],OUTPUT);
    digitalWrite(leds[i],LOW);
  }

}

void loop() {
  for(byte i = 0;i<6;i++){
    digitalWrite(leds[i],HIGH);
  }
  
  delay(1000);
  
  for(byte i = 0;i<6;i++){
    digitalWrite(leds[i],LOW);
  }

  delay(1000);
  
}
