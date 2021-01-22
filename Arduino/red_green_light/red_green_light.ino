/**
 * @功能：红灯常亮10秒，绿灯亮5秒，绿灯闪3秒，黄灯亮2秒
 */
#define red 10
#define yellow 9
#define green 8

void setup(){
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
}

void loop(){
    digitalWrite(red, HIGH);    
    delay(10000);
    digitalWrite(red, LOW);  
    digitalWrite(green, HIGH);
    delay(5000);
    digitalWrite(green, LOW);
    
    for(int i=0;i<3;i++){
      digitalWrite(green, HIGH);
       delay(500);
      digitalWrite(green, LOW);
      delay(500);
    }
    
    digitalWrite(yellow, HIGH);
    delay(2000);
    digitalWrite(yellow, LOW);
}
