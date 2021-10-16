// First class, blink two LEDs
// Also, can use AETHDX or other switch
byte R = 2;
byte G = 3;

void setup() {
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
}

void loop() {
  digitalWrite(R,HIGH);
  digitalWrite(G,LOW);
  delay(1000);
  digitalWrite(R,LOW);
  digitalWrite(G,HIGH);
  delay(1000);
}
