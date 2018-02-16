#include <Wire.h> 
#include <LiquidCrystal_I2C.h>


// Set the LCD address 
LiquidCrystal_I2C lcd(0x3F, 16, 2);



void setup()
{
	
  lcd.begin();// LCD ekranı balat
  lcd.backlight();// Ekran arka ışığını aç
  lcd.setCursor(0,0);
  lcd.print("Hello, YOUTUBE!"); //İlk satıra yazalım
  lcd.setCursor(1,1);
  lcd.print("I am starting!"); //İkinci satıra yazalım
}

void loop()
{

}
