void setup(){
  Serial.begin(9600);
}

void loop(){
  Serial.print("這個不會換行");
  Serial.println("這個會換行");
}
