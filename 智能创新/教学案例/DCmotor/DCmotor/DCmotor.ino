int motor1_1 =10;               //直流电机接口(IN1)
int motor1_2 =11 ;              //直流电机接口(IN2)
void setup()
{
  pinMode(motor1_1 ,OUTPUT);         // PIN10 
  pinMode(motor1_2,OUTPUT);         // PIN 11 
}
void run()     // 前进
{
  digitalWrite(motor1_1 ,LOW);  // 右电机前进
  digitalWrite(motor1_2, HIGH);     
}
void loop()
{
  run();        //前进  
}






