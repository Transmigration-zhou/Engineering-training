/**
 * 功能：小车避障
 */

const int MotorLeft1=8;
const int MotorLeft2=9; 
const int MotorRight1=11;
const int MotorRight2=10;

const int SensorLeft=4; //左传感器
const int SensorRight=3; //右传感器
const int SensorMid=6;
 
int SL;    //左状态
int SR;    //右状态
int SM;

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
}

void loop() {
  SL=digitalRead(SensorLeft);
  SR=digitalRead(SensorRight);
  SM=digitalRead(SensorMid);
  if(SR==LOW&&SL==LOW&&SM==HIGH){
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
