#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20,16,2);  // set the LCD address to 0x20(Cooperate with 3 short circuit caps) for a 16 chars and 2 line display

void setup(){
  
  lcd.init();                      // initialize the lcd 
  lcd.backlight();
  lcd.home();
  lcd.setCursor(0, 0);
  lcd.print("Bienvenido a");
  lcd.setCursor(0, 1);
  lcd.print("Arduino Day Zgz");
  while(1);
}
  
void loop(){
}

