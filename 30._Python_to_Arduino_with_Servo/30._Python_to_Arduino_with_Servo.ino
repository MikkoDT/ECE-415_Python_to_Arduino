#include <Servo.h>
int servoPin=9;
Servo myServo;
float servPos;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(servoPin,OUTPUT);
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available()==0)
{
  
}
servPos=Serial.readStringUntil('\r').toFloat();
myServo.write(servPos);
Serial.print("Position: ");
Serial.println(servPos);
Serial.println();
}
