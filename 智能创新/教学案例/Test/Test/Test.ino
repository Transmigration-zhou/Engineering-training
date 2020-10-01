/*
**厂家：浙江科技学院
**开发：张志义
**功能：I4口输入，确定I3
**版本：V1.O
**时间：2020-4-1
*/
#define Sensor1  3      //宏定义，预处理，存储于FLASH
#define Sensor2  4      //宏定义，预处理，存储于FLASH
#define Sensor3  5      //宏定义，预处理，存储于FLASH
#define LED1      7      //宏定义，预处理，存储于FLASH
#define LED2      12      //宏定义，预处理，存储于FLASH
int val;                    //定义变量val
void setup()
{
      pinMode(Sensor1,INPUT);      //定义按键接口为输入接口
      pinMode(Sensor2,INPUT);      //定义按键接口为输入接口
      pinMode(Sensor3,INPUT);      //定义按键接口为输入接口
      pinMode(LED1,OUTPUT);      //定义按键接口为输出接口
      pinMode(LED2,OUTPUT);      //定义按键接口为输出接口
}

void loop()
{
    val=digitalRead(Sensor3);          //读取数字4 口电平值赋给val
    
    if  ( val==LOW )                     //检测按键是否按下，按键按下时小灯亮起
    {
        digitalWrite(LED1,HIGH);
    }
    else
    { 
        digitalWrite(LED1,LOW);
    }
}

