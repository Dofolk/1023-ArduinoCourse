byte s;
long t,t1,t2,t3,t4;
int Light;

void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT);
  s = 0;
  t = 0;
  t1 = 0;
  t2 = 0;
  t3 = 0;
  t4 = 0;

}

void loop() {
  Light = analogRead(A0);
  t = t+1;
  if(Light<900){
    Serial.println(Light);
    t1 = t;
    s = 1;
  }
  if(s==1 && Light>=900){
    Serial.print("Time");
    t3 = t1+t2; //紀錄兩次亮暗中間的時間長度
    Serial.println((t3-t4)/20.0); //這邊除20包含剛剛說的除以2，所以是時間先除以10(變成毫秒)再除以2(因為算到2個週期)
    t4 = t3; //更新並記錄後面拿到的時間，以便下次的週期紀錄使用
    t2 = t1; //同上
    s = 0; //重新設定訊號狀態
  }
  if(t>10000000){
    t = 0;
  }
  delay(100);

}
