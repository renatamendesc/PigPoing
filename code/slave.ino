#include <LiquidCrystal.h>

LiquidCrystal LCD(12, 11, 5, 4, 3, 2);
float totalValue, currentValue;

void setup(){
  Serial.begin(9600);
  
  LCD.begin(16, 2);
  LCD.setCursor(4, 1);
  LCD.print("PigPoing");
}

void loop(){
  
  LCD.setCursor(0, 0);
  
  if(Serial.available() > 0){
    totalValue += Serial.parseFloat();
    currentValue = Serial.parseFloat();
    
  	LCD.print("Value: $");
    LCD.print(totalValue);
    
    if(currentValue == 99){
      totalValue = 0;
    }
    
  }
  
}
