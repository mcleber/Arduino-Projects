/*-------------------------------------------------------
 * CONTROLANDO ROBÔ COM ARDUINO, BLUETOOTH E ANDROID
 *-------------------------------------------------------
 * Desativar o modulo Bluetooth antes de fazer upload!
 * O módulo utiliza os pinos Tx e Rx do arduino e gera 
 * um erro na gravação.
 *-------------------------------------------------------
 * www.binarycodec.blogspot.com
 * Data: 31/03/2015
 * v.2.0
-------------------------------------------------------*/

char caracter;

void setup() {

  Serial.begin(9600);
  pinMode(2, OUTPUT); // Motor 1 - Direita
  pinMode(3, OUTPUT); // Motor 1 - Direita - Inverte sentido
  pinMode(4, OUTPUT); // Motor 2 - Esquerda
  pinMode(5, OUTPUT); // Motor 2 - Esquerda - Inverte sentido

}

void loop() {

  if (Serial.available()) {
    
  caracter = Serial.read();
  
  switch (caracter) {
    
    case 'w': // Para frente
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      break;
      
    case 's': // Para tras
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      break;
      
    case 'a': // Para esquerda
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      break;
      
    case 'd': // Para direita
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      break;
      
    case 'e': // Parar
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      break;
      
    default: // Motores sempre desligados
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      
    }

  }

}
