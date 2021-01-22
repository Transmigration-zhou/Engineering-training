const int motor1 = 3;
void setup(){
    pinMode(motor1,OUTPUT);
}

void run(int time){     // 前进
    analogWrite(motor1 ,255);  //PWM比例0~255调速，左右轮差异略增减
}

void loop(){
    run(10);        //前进  
}
