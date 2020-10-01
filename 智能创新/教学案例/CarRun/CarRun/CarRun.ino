/********************************
**厂家：浙江科技学院
**开发：张志义
**功能：车辆行走
**版本：V1.O
**时间：2020-4-10
********************************/
#define  Left_motor_go  11          //左电机前进(IN1= D11)
#define  Left_motor_back  10        //左电机后退(IN2= D10)
#define  Right_motor_go  8          // 右电机前进(IN3=D8)
#define  Right_motor_back   9      // 右电机后退(IN4=D9)

void setup()
{
  //初始化电机驱动IO为输出方式
  pinMode(Left_motor_go,OUTPUT);       
  pinMode(Left_motor_back,OUTPUT);    
  pinMode(Right_motor_go,OUTPUT);      
  pinMode(Right_motor_back,OUTPUT);  
}
/*************************************************
**函 数 名: run
**功      能:小车前进 
**入口参数: 无
**出口参数: 无
*************************************************/
void run()     
{
  digitalWrite(Right_motor_go,LOW);  // 右电机前进
  digitalWrite(Right_motor_back, HIGH);     
  digitalWrite(Left_motor_go,LOW );  // 左电机前进
  digitalWrite(Left_motor_back, HIGH);
  delay(10000);   //执行时间，可以调整  
}

/*************************************************
**函 数 名: brake
**功      能:刹车 
**入口参数: 无
**出口参数: 无
************************************************/
void brake()          
{
  digitalWrite(Right_motor_go,LOW);       //右轮停止
  digitalWrite(Right_motor_back,LOW);
  digitalWrite(Left_motor_go,LOW);         //左轮停止
  digitalWrite(Left_motor_back,LOW);
  delay(10000);     
}

/*************************************************
**函 数 名: back
**功      能:小车后退 
**入口参数: 无
**出口参数: 无
*************************************************/
void back()          
{
  digitalWrite(Right_motor_go, HIGH);       //右轮后退
  digitalWrite(Right_motor_back, LOW );
  digitalWrite(Left_motor_go,HIGH );         //左轮后退
  digitalWrite(Left_motor_back, LOW);
  delay(10000);     
}
/*************************************************
**函 数 名: left
**功      能:小车左转
**入口参数: 无
**出口参数: 无
*************************************************
*/
void left()             //左转(左轮不动，右轮前进)
{
  digitalWrite(Right_motor_go, LOW);        // 右电机前进
  digitalWrite(Right_motor_back,HIGH);
  digitalWrite(Left_motor_go,LOW);           //左轮不动
  digitalWrite(Left_motor_back,LOW);
  delay( 10000);  //执行时间，可以调整  
}

/*************************************************
**函 数 名: right
**功      能:小车右转
**入口参数: 无
**出口参数: 无
************************************************/
void right()           //右转(右轮不动，左轮前进)
{
  digitalWrite(Right_motor_go,LOW);       //右电机不动
  digitalWrite(Right_motor_back,LOW);
  digitalWrite(Left_motor_go, LOW);         //左电机前进
  digitalWrite(Left_motor_back, HIGH);
  delay(10000);                                         //执行时间，可以调整  
}

void loop()
{
  delay(2000); //延时2s后启动
  back();         //后退10s
  brake();       //停止10s
  run();           //前进10s
  brake();       //停止10s
   left();          //向左转10s
   brake();      //停止10s
   right();        //向右转110s
   brake();      //停车10S
}
