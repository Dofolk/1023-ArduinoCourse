byte R = 11;
byte G = 10;
byte B = 9;

void setup(){
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
}

void loop() {
  analogWrite(R,95);
  analogWrite(G,27);
  analogWrite(B,88);
  delay(1000);
  analogWrite(R,0);
  analogWrite(G,0);
  analogWrite(B,0);
  delay(1000);
}
