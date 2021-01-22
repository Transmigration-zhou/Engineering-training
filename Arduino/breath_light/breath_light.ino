/**
 * 功能：呼吸灯
 */
int potpin=0;
int ledpin=3;
int val=0;
int add=5;

void setup(){
    pinMode(ledpin,OUTPUT);
    Serial.begin(9600);
}

void loop(){
    analogWrite(ledpin,val);
    Serial.println(val);
    val=val+add;
    if(val==0||val==255) val=255-val;
    delay(30);
}
