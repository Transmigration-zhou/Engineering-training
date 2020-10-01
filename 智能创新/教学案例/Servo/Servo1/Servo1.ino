/*
**厂家：浙江科技学院
**开发：张志义
**功能：I4口输入，确定I3
**版本：V1.O
**时间：2020-4-1
*/
# include "Servo.h" 
Servo myservo;
void setup() 
{
    myservo.attach(9);
}

void loop() 
{
    myservo.write(60);
    delay(2000);    
    myservo.write(120);
    delay(2000);  
}


