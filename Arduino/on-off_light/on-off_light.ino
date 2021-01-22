/**
 * @功能：按键-指示灯亮灭
 */
#define key 2
#define led 5
void setup() {
  pinMode(key,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  int val=digitalRead(key);
  if(val==LOW) digitalWrite(led,LOW);
  else digitalWrite(led,HIGH);
}
