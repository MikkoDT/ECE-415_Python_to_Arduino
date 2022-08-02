#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
float d1,T2,T3;
String ok;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
lcd.begin();
lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
// Input Joint Variables
lcd.setCursor(5,0);
lcd.print("Input");
lcd.setCursor(1,1);
lcd.print("d1=?,T2=?,T3=?");


// d1=?
while(Serial.available()==0)
{
  
}
lcd.clear();
d1=Serial.readStringUntil('\r').toFloat();
lcd.setCursor(0,0);
lcd.print("d1 = ");
lcd.print(d1);

// T2=?
while(Serial.available()==0)
{
  
}
lcd.clear();
T2=Serial.readStringUntil('\r').toFloat();
lcd.setCursor(0,0);
lcd.print("T2 = ");
lcd.print(T2);

//// T3=?
while(Serial.available()==0)
{
  
}
lcd.clear();
T3=Serial.readStringUntil('\r').toFloat();
lcd.setCursor(0,0);
lcd.print("T3 = ");
lcd.print(T3);
lcd.setCursor(3,1);
lcd.print("OK? [Y]");
while(Serial.available()==0)
{
  
}

ok=Serial.readStringUntil('\r');
if(ok=="Y" || ok=="y")
{
  lcd.clear();
  return;
}

}
