/**
 * 功能：小车循迹
 */
 
const int MotorLeft1=8;
const int MotorLeft2=9; 
const int MotorRight1=11;
const int MotorRight2=10;

const int SensorLeft=4; //左传感器
const int SensorRight=3; //右传感器

int SL;    //左状态
int SR;    //右状态

void setup() {
  Serial.begin(9600);
  
  pinMode(MotorLeft1,  OUTPUT);
  pinMode(MotorLeft2,  OUTPUT);
  pinMode(MotorRight1, OUTPUT);
  pinMode(MotorRight2, OUTPUT);
  
  pinMode(SensorLeft, INPUT);
  pinMode(SensorRight, INPUT);
}

void loop() {
  SL=digitalRead(SensorLeft);
  SR=digitalRead(SensorRight);
  if(SR==LOW&&SL==LOW){ //前进
    analogWrite(MotorLeft2,100);
    analogWrite(MotorRight2,100);
//    digitalWrite(MotorLeft2,HIGH);
    digitalWrite(MotorLeft1,LOW);
//    digitalWrite(MotorRight2,HIGH);
    digitalWrite(MotorRight1,LOW);
  }
  else if(SL==LOW&&SR==HIGH){ //左转
    analogWrite(MotorRight2,70);
    digitalWrite(MotorLeft2,LOW);
    digitalWrite(MotorLeft1,LOW);
//    digitalWrite(MotorRight2,HIGH);
    digitalWrite(MotorRight1,LOW);
  }
  else if(SL==HIGH&&SR==LOW){ //右转
    analogWrite(MotorLeft2,70);
    digitalWrite(MotorRight2,LOW);
    digitalWrite(MotorRight1,LOW);
//    digitalWrite(MotorLeft2,HIGH);
    digitalWrite(MotorLeft1,LOW);
  }
}
