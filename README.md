# PigPoing
PigPoing se trata de uma espécie de "cofrinho inteligente", onde você insere suas moedas e ele conta a quantidade inserida, bem como o valor total em reais depositado. O valor monetário aparece em um display LCD, enquanto a quantidade de moedas é exibida em dois displays de 7 segmentos.

![PigPoingLogo](https://cdn.discordapp.com/attachments/806262947160653834/814185249125695508/pigPoingLogo.jpeg)


É importante deixar claro que esse projeto não foi feito fisicamente, e sim a partir do simulador online de arduino, [tinkercad](https://www.tinkercad.com/). 

## Componentes e preço:
Apesar do projeto não ter sido elaborado de forma física, ou seja, não foi gasto dinheiro com ele, abaixo tem-se uma lista dos componentes utilizados no circuito e seus respectivos preços (aproximadamente):

Quantidade|Componente|Preço
---|---|---
2|Display de 7 segmentos|R$ 24,00
1|Display LCD 16x2|R$ 23,00
1|Potenciômetro|R$ 9,00
2|Arduinos Uno R3|R$ 64,00
2|Decodificadores CD4511|R$5,00
14|Resistores - 1kΩ|R$2,00
1|Resistor - 220Ω|R$ 0,13

**Orçamento total: R$127,13**

## Funcionamento:
Para utilizar o PigPoing, basta colocar sua moeda no "cofrinho" e indicar a quantia inserida através do monitor serial. Caso o projeto tivesse sido feito fisicamente, o esquema do monitor serial poderia ser facilmente substituido por botões, sendo cada botão designado para um valor de moeda diferente. Dessa forma, o cofre faz a contagem das moedas e da quantia em dinheiro que foi depositada. 

A seguir, tem-se um modelo idealizado do PigPoing na sua forma física:

![PigPing](https://cdn.discordapp.com/attachments/806262947160653834/814184223681675344/porquinho.jpeg)

Por fim, é necessário esclarecer que, uma vez que a quantidade das moedas é exibida em dois displays de 7 segmentos, a contagem de moedas vai até 99. Sendo assim, o PigPoing foi programado para zerar a contagem de moedas quando atingida a quantidade máxima.
