byte sensorpin = A0;
int value;
void setup() {
  Serial.begin(9600);
  pinMode(sensorpin,INPUT);
}

void loop() {
  value = analogRead(sensorpin);
  Serial.print("value is ");
  Serial.println(value);
  delay(500);
}
