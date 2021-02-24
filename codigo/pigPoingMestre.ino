int contadorUnidades = 0;
int contadorDezenas = 0;
int contadorMoedas = 0; 
int contadorAvaliador;
String valor;

//MATRIZ DE BYTES
const int digitos[11] = {0b0000, 0b0001, 0b0010, 0b0011,
0b0100, 0b0101, 0b0110, 0b0111,
0b1000, 0b1001, 0b1111};

void digito1(const int c){
  int pino; //GUARDA VALOR DO PINO (6 7 8 9)
  int b;
  for(pino = 6, b = 0; pino <= 9; pino++,b++){
    digitalWrite(pino, bitRead(digitos[c], b));
  }
}

void digito2(const int c){
  int pino; //GUARDA VALOR DO PINO (2 3 4 5)
  int b;
  for(pino = 2, b = 0; pino <= 5; pino++, b++){
    digitalWrite(pino, bitRead(digitos[c], b));
  }
}

void setup(){
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
  Serial.setTimeout(50);
}

void loop(){
if(Serial.available() > 0){ 
    valor = Serial.readStringUntil('\n');
    if(valor == "0.05"){
      contadorMoedas++;
      Serial.println(valor);
  	}
    
    if(valor == "0.1" || valor == "0.10"){
      contadorMoedas++;
      Serial.println(valor);
  	}
    
    if(valor == "0.25"){
      contadorMoedas++;
      Serial.println(valor);
  	}
    
    if(valor == "0.5" || valor == "0.50"){
      contadorMoedas++;
      Serial.println(valor);
  	}
        
    if(valor == "1"){
      contadorMoedas++;
      Serial.println(valor);
  	}
  
    if(contadorMoedas>contadorAvaliador){
      	contadorUnidades++;
      	digito2(contadorUnidades);
      	if(contadorUnidades==10){
        	contadorUnidades = 0;
        	digito2(contadorUnidades);
        	contadorDezenas++;
      	}
      
	if(contadorDezenas>9){
        	contadorDezenas = 0;
        	contadorUnidades = 0;
        	contadorMoedas = 0;
      		Serial.println("99");
      	}
      
    }
    
    digito1(contadorDezenas);
    contadorAvaliador=contadorMoedas;
  }
  
  delay(10);	 
}
