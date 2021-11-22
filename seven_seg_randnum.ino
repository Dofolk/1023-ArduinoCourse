// Use seven segment display
// Random show numbers from 0 to 9

byte leds[8] = {2,3,4,5,6,7,8,9};
byte showindex2[5] = {0,1,3,4,6};
byte showindex3[5] = {0,1,2,3,6};
byte showindex4[4] = {1,2,5,6};
byte showindex5[5] = {0,2,3,5,6};
byte showindex6[6] = {0,2,3,4,5,6};
byte showindex7[4] = {0,1,2,5};
byte showindex8[7] = {0,1,2,3,4,5,6};
byte showindex9[6] = {0,1,2,3,5,6};

void setup() {
  for(byte i = 0;i<8;i++){
    pinMode(leds[i],OUTPUT);
    digitalWrite(leds[i],HIGH);
  }
  delay(500);
  for(byte i = 0;i<8;i++){
    digitalWrite(leds[i],LOW);
  }
  delay(500);
  Serial.begin(9600);
}

void loop() {
  int val = random(0,10);
  Serial.println(val);
  switch(val){
    case 0:
    for(byte i = 0;i<6;i++){
      digitalWrite(leds[i],HIGH);
    }
    delay(1000);
    break;
    
    case 1:
    digitalWrite(leds[1],HIGH);
    digitalWrite(leds[2],HIGH);
    delay(1000);
    break;
    
    case 2:
    for(byte i = 0;i<5;i++){
      digitalWrite(leds[showindex2[i]],HIGH);
    }
    delay(1000);
    break;
    
    case 3:
    for(byte i = 0;i<5;i++){
      digitalWrite(leds[showindex3[i]],HIGH);
    }
    delay(1000);
    break;
    
    case 4:
    for(byte i = 0;i<4;i++){
      digitalWrite(leds[showindex4[i]],HIGH);
    }
    delay(1000);
    break;
    
    case 5:
    for(byte i = 0;i<5;i++){
      digitalWrite(leds[showindex5[i]],HIGH);
    }
    delay(1000);
    break;

    case 6:
    for(byte i = 0;i<6;i++){
      digitalWrite(leds[showindex6[i]],HIGH);
    }
    delay(1000);
    break;
    
    case 7:
    for(byte i = 0;i<4;i++){
      digitalWrite(leds[showindex7[i]],HIGH);
    }
    delay(1000);
    break;

    case 8:
    for(byte i = 0;i<7;i++){
      digitalWrite(leds[showindex8[i]],HIGH);
    }
    delay(1000);
    break;

    case 9:
    for(byte i = 0;i<6;i++){
      digitalWrite(leds[showindex9[i]],HIGH);
    }
    delay(1000);
    break;
  }
  
  for(byte i = 0;i<8;i++){
    digitalWrite(leds[i],LOW);
  }
  delay(500);
}
