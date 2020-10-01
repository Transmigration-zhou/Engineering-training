#include <EEPROM.h>
/*
**厂家：浙江科技学院
**开发：张志义
**功能：I3和I2口闪烁
**版本：V1.O
**时间：2020-4-1
*/
#define led1 3    //宏定义，预处理，存储于FLASH
#define led2 2    //宏定义，预处理，存储于FLASH
void setup() 
{
  pinMode(led1, OUTPUT);   //设定数字端口模式=输出
  pinMode(led2, OUTPUT);   //设定数字端口模式=输出
}
void loop()
{
  digitalWrite(led1, HIGH);    // 点亮LED
  digitalWrite(led2, LOW);     // 点亮LED
  delay(1000);                       // 等待一秒钟
  digitalWrite(led1, LOW);     // 通过将引脚电平拉低，关闭LED
  digitalWrite(led2, HIGH);    // 点亮LED
  delay(1000);                       // 等待一秒钟
}
