/*
**厂家：浙江科技学院
**开发：张志义
**功能：I4口输入，确定I3
**版本：V1.O
**时间：2020-4-1
*/
int potpin=0;         //定义模拟接口A0
int ledpin=3;         //定义数字接口3（PWM 输出）
int val=0;              // 暂存来自传感器的变量数值
void setup()
{
    pinMode(ledpin,OUTPUT);     //定义数字接口3 为输出
   Serial.begin(9600);                  //设置波特率为9600
}
void loop()
{
    val=analogRead(potpin);         // 读取传感器的模拟值并赋值给val
    Serial.println(val);                    //显示val 变量
    analogWrite(ledpin,val/4);       // 打开LED 并设置亮度（PWM 输出最大值255）
    delay(10);                               //延时10ms
}


