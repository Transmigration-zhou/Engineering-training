int motor1_1 =10;               //直流电机接口(IN1)
int motor1_2 =11 ;            //直流电机接口(IN2)
void setup()
{
  pinMode(motor1_1 ,OUTPUT);         // PIN10 
  pinMode(motor1_2,OUTPUT);         // PIN 11 
}
void run(int time)     // 前进
{
    analogWrite(motor1_1 ,80);//PWM比例0~255调速，左右轮差异略增减
    analogWrite(motor1_2,0);
}
void loop()
{
  run(10);        //前进  
}






