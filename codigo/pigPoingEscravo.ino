//ESCRAVO

#include <LiquidCrystal.h>
float valorTotal;
float valorAtual;

LiquidCrystal LCD(12, 11, 5, 4, 3, 2);

void setup(){
  Serial.begin(9600);
  LCD.begin(16, 2);
  LCD.setCursor(4, 1);
  LCD.print("PigPoing");
}

void loop(){
  LCD.setCursor(0, 0);
  if(Serial.available() > 0){
    valorTotal += Serial.parseFloat();
    valorAtual = Serial.parseFloat();
  	LCD.print("Valor: R$");
    LCD.print(valorTotal);
    
    if(valorAtual == 99){
      valorTotal = 0;
    }
  }
}
