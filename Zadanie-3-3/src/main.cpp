//3,3,1
#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);//RS,E,DB4,DB5,DB6,DB7

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);//wtyświetla w wierszu 1 na góże
  lcd.print("Dykty");
}
void loop() {
  lcd.setCursor(6, 0);
  lcd.print(millis()/1000);
  delay(500);
}
//przy wyjąciu poza zakres nie jest wyświetlane