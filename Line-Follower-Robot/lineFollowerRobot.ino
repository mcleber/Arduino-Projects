/*------------------------------------------------------------------
 * ROBO SEGUIDOR DE LINHA
 *
 * Arduino Uno R2, Proto shield, L293D e QRE-1113 Analogico
 *
 * Cleber Moretti
 * www.binarycodec.blogspot.com
 * Data: 05/02/2015
 * v.1.0
------------------------------------------------------------------*/
#include <Wire.h>

// Sensores
const int SensorDireito = 0; // Sensor do lado direito - pino A0 -- Visto de tras para frente
const int SensorEsquerdo = 1; // Sensor do lado esquerdo - pino A1

// Motores
int MotorDireitoAciona = 3; // Ligado ao Enable 1 do L293D
int MotorEsquerdoAciona = 6; // Ligado ao Enable 2 do L293D
int MotorDireito = 2; // Motor direito para frente - sentido rotacao
int MotorEsquerdo = 7; // Motor esquerdo para frente - sentido rotacao
// int MotorDireitoTras = 4; // Motor direito para tras
// int MotorEsquerdoTras = 8; //Motor esquerdo para tras

void setup() {

  pinMode(SensorDireito, INPUT);
  pinMode(SensorEsquerdo, INPUT);
  pinMode(MotorDireitoAciona, OUTPUT);
  pinMode(MotorEsquerdoAciona, OUTPUT);
  pinMode(MotorDireito, OUTPUT);
  pinMode(MotorEsquerdo, OUTPUT);
    
  digitalWrite(MotorDireito,HIGH);
  digitalWrite(MotorEsquerdo, HIGH); 
}

void loop() {
 
  int sLadoDireito = analogRead(SensorDireito);
  int sLadoEsquerdo = analogRead(SensorEsquerdo);

  if (sLadoDireito >= 300 && sLadoEsquerdo < 300) { //300 leituras por segundo
      // ViraDireita
      digitalWrite(MotorDireitoAciona, LOW);
      digitalWrite(MotorEsquerdoAciona, HIGH);
  }
  else if (sLadoDireito < 300 && sLadoEsquerdo >= 300) {
      // ViraEsquerda
      digitalWrite(MotorDireitoAciona, HIGH);
      digitalWrite(MotorEsquerdoAciona, LOW);
  }
  else {
      // Frente
      digitalWrite(MotorDireitoAciona, HIGH);
      digitalWrite(MotorEsquerdoAciona, HIGH);
  }
  
}
