/* Taper Rotary Potentiometer B10K (B10K) [S060] : http://rdiot.tistory.com/191 [RDIoT Demo] */

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // LCD2004
int potPin = A0;
int val;

void setup()
{
  lcd.init();  // initialize the lcd 
  lcd.backlight();
  lcd.print("start LCD2004");

  //pinMode(potPin, INPUT);
  delay(1000);

  lcd.clear();
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.print("S060:B10K");

  val = analogRead(potPin);

  lcd.setCursor(0,1);
  lcd.print("analog=" + (String)val + "  " );

  val = map(val, 0, 1021, 100, 1);
 
  lcd.setCursor(0,2);
  lcd.print("val1~100=" + (String)val + "  " );

  delay(10);
}
