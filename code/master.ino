int counterUnity = 0, counterTens = 0, counterCoins = 0, counterEvaluator;
String value;

// BYTES ARRAY
const int digits[11] = {0b0000, 0b0001, 0b0010, 0b0011,
0b0100, 0b0101, 0b0110, 0b0111,
0b1000, 0b1001, 0b1111};

void tens(const int c){
  int pin, b; // KEEPS PIN VALUE (6 7 8 9)

  for(pin = 6, b = 0; pin <= 9; pin++,b++){
    digitalWrite(pin, bitRead(digits[c], b));
  }
}

void unity(const int c){
  int pin, b; // KEEPS PIN VALUE (2 3 4 5)

  for(pin = 2, b = 0; pin <= 5; pin++, b++){
    digitalWrite(pin, bitRead(digits[c], b));
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
    value = Serial.readStringUntil('\n');
    
    if(value == "0.05"){
      counterCoins++;
      Serial.println(value);
  	}
    
    if(value == "0.1" || value == "0.10"){
      counterCoins++;
      Serial.println(value);
  	}
    
    if(valor == "0.25"){
      counterCoins++;
      Serial.println(value);
  	}
    
    if(value == "0.5" || value == "0.50"){
      counterCoins++;
      Serial.println(value);
  	}
        
    if(value == "1"){
      counterCoins++;
      Serial.println(value);
  	}
  
    if(counterCoins > counterEvaluator){
      	counterUnity++;
        
      	unity(counterUnity);
        
      	if(counterUnity == 10){
        	counterUnity = 0;
        	digit2(counterUnity);
        	counterTens++;
      	}
      
	      if(counterTens > 9){
        	counterTens = 0;
        	counterUnity = 0;
        	counterCoins = 0;
      		Serial.println("99");
      	}
      
    }
    
    tens(counterTens);
    counterEvaluator = counterCoins;
    
  }
  
  delay(10);
}
