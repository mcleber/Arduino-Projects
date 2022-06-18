/*------------------------------------------------------------------
 * ESCREVER E LER EM 2 EEPROMS - I2C
 *
 * (2x) Microchip 24LC256
 *
 * www.binarycodec.blogspot.com
 * Data: 10/12/2013, 16/12/2013
 * v.1.2
 *-----------------------------------------------------------------*/
#include <Wire.h> 

#define memoria1 0x51  // Endereço para a primeira memoria
#define memoria2 0x52  // Endereço para a segunda memoria

void setup(void)
{
  Serial.begin(9600);
  Wire.begin();  

  unsigned int address = 0;

  for (address = 0; address < 4096; address++) {

    writeEEPROM(memoria1, address, 0x51); // 51 sera escrito na memoria 1
    writeEEPROM(memoria2, address, 0x52); // 52 sera escrito na memoria 2
    
    Serial.print("Endereco: ");
    Serial.print(address);  
    Serial.print("\tMemoria 1: ");  
    Serial.print(readEEPROM(memoria1, address), HEX); // DEC, OCT, HEX
    Serial.print("\tMemoria 2: ");
    Serial.print(readEEPROM(memoria2, address), HEX); // DEC, OCT, HEX
    Serial.println();  

  } 
}

void loop(){
}

void writeEEPROM(int deviceaddress, unsigned int eeaddress, byte data ) 
{
  Wire.beginTransmission(deviceaddress);
  Wire.write((int)(eeaddress >> 8));   // MSB - Bit mais significativo
  Wire.write((int)(eeaddress & 0xFF)); // LSB - Bit menos significativo
  Wire.write(data);
  Wire.endTransmission();

  delay(5);
}

byte readEEPROM(int deviceaddress, unsigned int eeaddress ) 
{
  byte rdata = 0xFF;

  Wire.beginTransmission(deviceaddress);
  Wire.write((int)(eeaddress >> 8));   // MSB - Bit mais significativo
  Wire.write((int)(eeaddress & 0xFF)); // LSB - Bit menos significativo
  Wire.endTransmission();

  Wire.requestFrom(deviceaddress,1);

  if (Wire.available()) rdata = Wire.read();

  return rdata;
 
}
