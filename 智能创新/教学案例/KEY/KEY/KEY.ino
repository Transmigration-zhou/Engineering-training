/*
**厂家：浙江科技学院
**开发：张志义
**功能：I4口输入，确定I3
**版本：V1.O
**时间：2020-4-1
*/
#define Key1  4      //宏定义，预处理，存储于FLASH
#define led1    3     //宏定义，预处理，存储于FLASH
int val;                    //定义变量val
void setup()
{
      pinMode(led1,OUTPUT);   //定义小灯接口为输出接口
      pinMode(Key1,INPUT);      //定义按键接口为输入接口
}

void loop()
{
    val=digitalRead(Key1);          //读取数字4 口电平值赋给val
    if  ( val==LOW )                     //检测按键是否按下，按键按下时小灯亮起
    {
        digitalWrite(led1,LOW);
    }
    else
    { 
        digitalWrite(led1,HIGH);
    }
}

