 /**
 * 功能：串口输出hello world
 */
void setup() {
  Serial.begin(9600);
}
 
void loop() {
  Serial.println("hello world!");
  delay(1000);
}
