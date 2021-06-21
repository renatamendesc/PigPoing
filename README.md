# PigPoing
PigPoing is a smart piggy bank for you to insert your coins in it. It'll count the number of coins and the total value of money inside it. The value shows up on a LCD display, meanwhile the number of coins on a 7 segment display.

![Pig Poing Logo](https://cdn.discordapp.com/attachments/806262947160653834/814207232412483584/pigPoingLogo.png)

It's important to clarify that this project wasn't made physically. It was developed using the Arduino online simulator, [tinkercad](https://www.tinkercad.com/). 

## Components and prices
Even though the project wasn't made physically, which means that no money was spent on it, there's a list of all the components used on the circuit and its prices below:

Quantity|Component|Price
---|---|---
2|7 segment display|R$ 24,00
1|LCD Display 16x2|R$ 23,00
1|Potentiometer|R$ 9,00
2|Arduino Uno R3|R$ 64,00
2|Decoder CD4511|R$ 5,00
14|Resistors - 1kΩ|R$ 2,00
1|Resistor - 220Ω|R$ 0,13

**Total budget: R$ 127,13**

## Running
To use PigPoing, you have to insert a coin on the piggy bank and indicate the value by the serial monitor. If the project was made physically, the serial monitor could have been replaced with buttons, which each button would mean a different value for a coin. This way, PigPoing counts all the coins and money inside it.

There's an idealized model of PigPoing on its physical form below:

![PigPoing](https://cdn.discordapp.com/attachments/806262947160653834/814184223681675344/porquinho.jpeg)

It's also important to clarify that once the number of coins is shown on two 7 segment displays, the counting goes from 0 to 99. After 99 coins, PigPoing was programmed to reset the count, starting once again from 0.

## Contributors
* Gabriel Alexandre Carvalho
* [Joaquim Breno Brito Cavalcante](https://github.com/JoaquimBreno)
* Maria Cândida Barbosa Lima
* [Renata Mendes Pereira Campos](https://github.com/renatamendesc)
