# Controlando Robô com Arduino, Bluetooth e Android
## Controlling Robot with Arduino, Bluetooth and Android

Este é um projeto antigo e na ocasião foi testado no Android v.2.2 e v.4.2.

### Materiais
- 1 Kit do chassis Zumo da Pololu com motores;
- 1 Arduino Uno;
- 1 Módulo transceiver Bluetooth (HC-06);
- 1 Conversor de nível lógico de dois canais Sparkfun;
- 1 Proto shield;
- 1 L293D;
- Fios (jumpers) para montagem em protoboard;
- 4 Pilhas AA;
- Parafusos com espaçadores para fixar o Arduino no chassis. 

### Montagem
Copie o código localizado no diretório "sourceFile" e faça o upload no Arduino.

Monte o L293D, o módulo bluetooth, o conversor de nível, o proto shield e o Arduino no chassis.

O esquema de ligação está no diretório "assets".

### Aplicativo Android
O aplicativo utilizado no controle do robô foi elaborado através do MIT App Inventor.

No diretório "assets" encontram-se o App "ControleRoboBC.apk" pronto para instalar no celular/tablet e também um breve tutorial em PDF caso queira fazer do zero.

### Teste
Conecte a alimentação do robô. Perceba que o led do módulo Bluetooth começa a piscar. 

Ative o Bluetooth do celular/tablet e efetue o pareamento (dispositivo HC-06). Será solicitado uma senha (1234).

Abra o aplicativo de controle e clique em "CONECTAR". Aparecerá todos os dispositivos que o celular/tablet já detectou incluindo o módulo. Clique no dispositivo HC-06 e aguarde o aplicativo apresentar os botões de movimento. Neste ponto o led do módulo deverá permanecer aceso.

Ao clicar em "DESCONECTAR" os botões de movimento perdem efeito e o led do módulo volta a piscar.

### Link
[MIT App Inventor](https://appinventor.mit.edu)
