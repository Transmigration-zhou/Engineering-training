/**
 * 功能：小车定点停车
 */

const int MotorLeft1=8;
const int MotorLeft2=9; 
const int MotorRight1=11;
const int MotorRight2=10;

const int SensorLeft=4; //左传感器
const int SensorRight=3; //右传感器
const int SensorMid=6;

const int SensorLeft0=2;
const int SensorRight0=5;

int SL;    //左状态
int SR;    //右状态
int SM;
int SL0;
int SR0;

void stop(){
  digitalWrite(MotorLeft2,LOW);
  digitalWrite(MotorLeft1,LOW);
  digitalWrite(MotorRight2,LOW);
  digitalWrite(MotorRight1,LOW);
}

void straight(){
  analogWrite(MotorLeft2,100);
  analogWrite(MotorRight2,100);
//    digitalWrite(MotorLeft2,HIGH);
  digitalWrite(MotorLeft1,LOW);
//    digitalWrite(MotorRight2,HIGH);
  digitalWrite(MotorRight1,LOW);
}

void left(){
  analogWrite(MotorRight2,100);
  digitalWrite(MotorLeft2,LOW);
  digitalWrite(MotorLeft1,LOW);
//  digitalWrite(MotorRight2,HIGH);
  digitalWrite(MotorRight1,LOW);
}

void right(){
  analogWrite(MotorLeft2,100);
  digitalWrite(MotorRight2,LOW);
  digitalWrite(MotorRight1,LOW);
//  digitalWrite(MotorRight2,HIGH);
  digitalWrite(MotorLeft1,LOW);
}

void setup() {
  Serial.begin(9600);
  
  pinMode(MotorLeft1,  OUTPUT);
  pinMode(MotorLeft2,  OUTPUT);
  pinMode(MotorRight1, OUTPUT);
  pinMode(MotorRight2, OUTPUT);
  
  pinMode(SensorLeft, INPUT);
  pinMode(SensorRight, INPUT);
  pinMode(SensorMid, INPUT);
  pinMode(SensorLeft0, INPUT);
  pinMode(SensorRight0, INPUT);
}

void loop() {
  SL=digitalRead(SensorLeft);
  SR=digitalRead(SensorRight);
  SM=digitalRead(SensorMid);
  SL0=digitalRead(SensorLeft0);
  SR0=digitalRead(SensorRight0);
  if(SL0==HIGH&&SR0==HIGH){
    stop();
  }
  if(SR0==HIGH){
    stop();
    delay(1000);
    straight();
    delay(500);
  }
  else if(SR==LOW&&SL==LOW&&SM==HIGH){
      straight();
  }
  else if(SM==LOW){
    left();
    delay(800);
    straight();
    delay(800);
    right();
    delay(800);
    straight();
    delay(1500);
    right();
    delay(800);
    straight();
    delay(800);
    left();
    delay(800);
  }
  
  else if(SR==HIGH&&SL==LOW&&SM==HIGH){
    left();
  }
  else if(SL==HIGH&&SR==LOW&&SM==HIGH){
    right();
  }
  
}
