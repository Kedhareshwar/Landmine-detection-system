#include <LiquidCrystal.h>


LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int buzzerpin=9; 
int ledpin1 = 8;               
int ledpin2 =6;
int pirpin = 10;               
                  
void setup()
{
  pinMode(ledpin1, OUTPUT);      
  pinMode(ledpin2,OUTPUT);
  pinMode(pirpin, INPUT);    
  pinMode(buzzerpin,OUTPUT);
 lcd.begin(16, 2);
  
 Serial.begin(9600);
}

void loop()
{

 if (digitalRead(pirpin) == HIGH)
{
lcd.clear();
 
digitalWrite(buzzerpin,HIGH);
digitalWrite(ledpin1,HIGH);
digitalWrite(ledpin2,LOW);
delay(100); 
digitalWrite(ledpin2,HIGH); 
digitalWrite(buzzerpin,LOW);
digitalWrite(ledpin1,LOW);


lcd.print("MOTION DETECTED");
Serial.println("MOTION DETECTED");
delay(100);
 }
else 
{
 lcd.clear();
 lcd.print("NO ACTIVITY");

  Serial.println("NO ACTIVITY");
}
}
  
  
  
  
