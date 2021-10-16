int music[100] = {523,543,...};
int length[100] = {10,50,...};

void setup() {
    pinMode(3,OUTPUT);
}

void loop() {
    for(byte i = 0;i<100;i++){
        tone(3,music[i]);
        delay(length[i]);
        noTone(3);
    }
    noTone(3);
    delay(1000);
}
