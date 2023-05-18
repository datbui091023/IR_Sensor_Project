
int inputPin = 2;       // chọn ngõ tín hiệu vào cho PIR
int val = 0;
int pinSpeaker = 10;    //chọn chân cho chuông khi có đột nhập
 
void setup()
{
  pinMode(inputPin, INPUT);
  pinMode(pinSpeaker, OUTPUT);
}
 
void loop()
{
  val = digitalRead(inputPin); // đọc giá trị vào

  if (val == HIGH)                
  {
    digitalWrite(pinSpeaker, HIGH);
    delay(30000);
  }
  else
  {
    digitalWrite(pinSpeaker, LOW);
    delay(1000);
  }
}
