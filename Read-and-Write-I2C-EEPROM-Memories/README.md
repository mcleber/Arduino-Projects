# Escrever e Ler Memórias EEPROM I2C
## Read and Write I2C EEPROM Memories

Aqui iremos escrever e ler em duas memórias EEPROM (Electrically Erasable Programmable Read-Only Memory) utilizando o barramento I2C (Inter-Integrated Circuit) do Arduino.

### Materiais
- Arduino Uno;
- 2 EEPROM Microchip 24LC256;
- 2 Resistores de 10kΩ;
- Fios para ligação;
- Protoboard.

### Montagem
Copie o código localizado no diretório "sourceFile" e faça o upload no Arduino.

O esquema de ligação das memórias no Arduino encontra-se no diretório "assets".

### Teste
Conecte o Arduino na USB e abra o Serial Monitor.

![](https://github.com/mcleber/Arduino-Projects/blob/main/Read-and-Write-I2C-EEPROM-Memories/assets/serial_monitor.png)

Note que pelo código fonte disponibilizado, estamos escrevendo os endereços 0x51 e 0x52 nas memórias. Assim, estas serão as informações apresentadas no teste. Pode-se modificar a saída de HEX (hexadecimal) para OCT (octal) ou DEC (decimal), alterando a apresentação dos dados.

### Links
[Protocolo I2C](https://en.wikipedia.org/wiki/I²C)

[EEPROM](https://en.wikipedia.org/wiki/EEPROM)

[Datasheet 24LC256](http://ww1.microchip.com/downloads/en/devicedoc/21203m.pdf)

[Arduino Wire Library](https://www.arduino.cc/reference/en/language/functions/communication/wire/)
