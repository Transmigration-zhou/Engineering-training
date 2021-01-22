#include <Servo.h> 
int motorl=3;

void setup(){
    pinMode(motorl,OUTPUT);
}

void run(int time){     // 前进
    digitalWrite(motorl,HIGH);           // 右电机前进 
//    digitalWrite(motorl, LOW);         // 右电机后进
}  
void loop(){
    run(10);   
}
