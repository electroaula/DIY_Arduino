/**********************************************************************************
**                                                                               **
**                              Lector de Llum                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte led0 = 9;          // donar nom al pin 9 de l’Arduino
const byte ldr0 = A0;         // donar nom al pin A0 de l’Arduino

unsigned long mostreig = 20;          // velocitat de l'acció en ms
int valLdr0;                 // guardar valor del ldr

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(ldr0, INPUT);
  Serial.begin(9600);
}

//********** Loop *****************************************************************
void loop()
{
  valLdr0 = analogRead(ldr0);   // llegir valor ldr
  Serial.println(valLdr0);   // mostrar el valor llegit del LDR
  
  valLdr0 = map(valLdr0, 0, 1023, 0, 255);   // mapejar valor de 0-1023 a 0-255
  valLdr0 = constrain(valLdr0, 0, 255); // limita valor de 0-255
  
  analogWrite(led0, valLdr0);    // actualitzar l'estat del led
  delay(mostreig);
}

//********** Funcions *************************************************************
