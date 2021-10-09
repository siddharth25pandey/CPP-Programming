#include <Keypad.h>
#include <Wire.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
long n1 = 0;
long n2 = 0;
double total = 0;
char key;
const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS] = {
{'1','2','3','+'},
{'4','5','6','-'},
{'7','8','9','*'},
{'C','0','=','/'}
};
byte rowPins[ROWS] = {A2,A1,A0,A3};
byte colPins[COLS] = {9,8,7,6};
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS);
void setup()
{
lcd.begin(16, 2);
for(int i=0;i<=3;i++);
lcd.setCursor(0,0);
}
void loop()
{
key = keypad.getKey();
switch(key)
{
case '0' ... '9':
lcd.setCursor(0,0);
n1 = n1 * 10 + (key - '0');
lcd.print(n1);
break;
case '+':
n1 = (total != 0 ? total : n1);
lcd.setCursor(0,1);
lcd.print("+");
n2 = SecondNumber();
total = n1 + n2;
lcd.setCursor(0,3);
lcd.print(total);
n1 = 0, n2 = 0;
break;
case '-':
n1 = (total != 0 ? total : n1);
lcd.setCursor(1,2);
lcd.print("-");
n2 = SecondNumber();
total = n1 - n2;
lcd.setCursor(0,3);
lcd.print(total);
n1 = 0, n2 = 0;
break;
case '*':
n1 = (total != 0 ? total : n1);
//lcd.setCursor(0,1);
lcd.print("*");
n2 = SecondNumber();
total = n1 * n2;
 lcd.setCursor(0,3);
lcd.print(total);
n1 = 0, n2 = 0;
break;
case '/':
n1 = (total != 0 ? total : n1);
lcd.setCursor(0,1);
lcd.print("/");
n2 = SecondNumber();
lcd.setCursor(0,3);
n2 == 0 ? lcd.print("Invalid") : total = (float)n1 / (float)n2;
lcd.print(total);
n1 = 0, n2 = 0;
break;
case 'C':
total = 0;
lcd.clear();
break;
}
}
long SecondNumber()
{
while( 1 )
{
key = keypad.getKey();
if(key >= '0' && key <= '9')
{
n2 = n2 * 10 + (key - '0');
  lcd.setCursor(3,0);
lcd.print(n2);
}
if(key == '=') break;
}
return n2;
}