int servopin=9;     //设置舵机驱动脚到数字口9
int myangle;        //定义角度变量
int pulsewidth;     //定义脉宽变量
int val;

void servopulse(int servopin,int myangle){      //构建函数
    pulsewidth=(myangle*11)+500;      //将角度转化为500-2480 的脉宽值
    digitalWrite(servopin,HIGH);        //将舵机接口电平置高
    delayMicroseconds(pulsewidth);      //延时脉宽值的微秒数
    digitalWrite(servopin,LOW);         //将舵机接口电平置低
    delay(20-pulsewidth/1000);          //延时周期内剩余时间
}

void setup(){
    pinMode(servopin,OUTPUT);    //设定舵机接口为输出接口
    Serial.begin(9600);          //设置波特率为9600
    Serial.println("servo=o_seral_simple ready" ) ;
}
void loop(){                   //将0到9的数转化为0到180角度，并让
    val=Serial.read();         //读取串口收到的数据
    if(val>'0'&&val<='9'){     //判断收到数据值是否符合范围
        val=val-'0';             //将ASCII码转换成数值，例'9'-'0'=0x39-0x30=9
        val=val*(180/9);       //将数字转化为角度，例9*（180/9）=180
        Serial.print("moving servo to ");
        Serial.print(val,DEC);
        Serial.println();
        for(int i=0;i<=50;i++){    //给予舵机足够的时间让它转到指定角度
            servopulse(servopin,val);  //引用脉冲函数
        }
    }
}
