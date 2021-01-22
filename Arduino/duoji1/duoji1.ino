#include <Servo.h> 
Servo servol; //建立一个舵机对象
void setup(){
    servol.attach(9);
}

void loop(){
    //正转
    for(int i=0;i<=180;i++){
      servol.write(i);
      delay(15);
    }
    //反转
    for(int i=180;i>=0;i--){
      servol.write(i);
      delay(15);
    }
}
