int in = 5;
int out = 4;
float l1 = 0;
float l2 = 0;
float v = 0;
void setup() {
  Serial.begin(9600);
  pinMode(in,INPUT);
  pinMode(out,OUTPUT);
}

void loop() {
  digitalWrite(out,LOW);
  delayMicroseconds(5);
  digitalWrite(out,HIGH);
  delayMicroseconds(10);
  digitalWrite(out,LOW);
  float x = pulseIn(in,HIGH)/58.0;
  Serial.println(x);
  l1 = l2;
  l2 = x;
  v = (l2-l1)/200.05; //單位：cm/ms
  Serial.print("速度(cm/ms)為： “);
  Serial.println(v);
  delay(200);
}
