// Use seven segment display(4 digital)
// Can display 4 digital numbers

#define pin_0 2
#define pin_g 3
#define pin_c 4
#define pin_h 5
#define pin_d 6
#define pin_e 7
#define pin_b 8
#define pin_1 9
#define pin_2 10
#define pin_f 11
#define pin_a 12
#define pin_3 13

byte pos_pins[4] = {pin_0, pin_1, pin_2, pin_3};
byte seg_pins[8] = {pin_a, pin_b, pin_c, pin_d, pin_e, pin_f, pin_g, pin_h};


boolean data[10][8] = {
{1, 1, 1, 1, 1, 1, 0, 0},
{0, 1, 1, 0, 0, 0, 0, 0},
{1, 1, 0, 1, 1, 0, 1, 0},
{1, 1, 1, 1, 0, 0, 1, 0},
{0, 1, 1, 0, 0, 1, 1, 0},
{1, 0, 1, 1, 0, 1, 1, 0},
{1, 0, 1, 1, 1, 1, 1, 0},
{1, 1, 1, 0, 0, 0, 0, 0},
{1, 1, 1, 1, 1, 1, 1, 0},
{1, 1, 1, 1, 0, 1, 1, 0},
};

void setDigit(int pos, int n){
  
  for(int p = 0; p < 4; p++){
    if(p == pos){
      digitalWrite(pos_pins[p], HIGH);
    }
    else{
      digitalWrite(pos_pins[p], LOW);
    }
  }
  
  if(0 <= n && n <= 9){
    for(int i = 0; i < 8; i++){
      digitalWrite(seg_pins[i], !data[n][i]);
    }
  }
  else{
    for(int i = 0; i < 8; i++){
      digitalWrite(seg_pins[i], LOW);
    }
      digitalWrite(pin_h, HIGH);
  }
  
}

void setNumber(int number){
  int n0, n1, n2, n3;
  n3 = number / 1000;
  number %= 1000;
  n2 = number / 100;
  number %= 100;
  n1 = number / 10;
  n0 = number % 10; 
  setDigit(0, n0); delay(5);
  setDigit(1, n1); delay(5);
  setDigit(2, n2); delay(5);
  setDigit(3, n3); delay(5);
}


void setup() {
  for(int i = 0; i < 4; i++){
    pinMode(pos_pins[i], OUTPUT);
    digitalWrite(pos_pins[i], HIGH);
  }
  for(int i = 0; i < 8; i++){
    pinMode(seg_pins[i], OUTPUT);
    digitalWrite(seg_pins[i],LOW);
  }
  delay(1000);
}

void loop() {
  setNumber(9527);  
}
