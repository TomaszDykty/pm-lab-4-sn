
#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);//RS,E,DB4,DB5,DB6,DB7
char tablica[] = "Tomasz";
int tabLen = 0;

void lcdClear(void);

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);//wtyświetla w wierszu 1 na góże
  lcd.print("Tomasz Dykty");
  delay(2000);
}
void loop() {
    for (int i = 0; i <(18-tabLen); i++) {
   lcdClear();
   lcd.setCursor(i, 0);
  lcd.print(tablica);
  delay(1000);
  }
  
  for (int i = 0; i <(17-tabLen); i--) {
   lcdClear();
   lcd.setCursor(i, 1);
  lcd.print(tablica);
  delay(1000);
  }
}

void lcdClear(void)
{
lcd.setCursor(0, 0); //zastanawia mnie dlaczego nie skożystać z jednej linijki kodu "lcd.clear();"aby wyczyścić wyświetlacz
lcd.print("                 ");
lcd.setCursor(0, 1);
lcd.print("                 ");

}










/*
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
*/