/**********************************************************************************
**                                                                               **
**                              Lector de Llum                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte led0 = 9;          // donar nom al pin 9 de l’Arduino
const byte led1 = 10;         // donar nom al pin 10 de l’Arduino
const byte led2 = 11;         // donar nom al pin 11 de l’Arduino
const byte ldr0 = A0;         // donar nom al pin A0 de l’Arduino
const byte ldr1 = A1;         // donar nom al pin A1 de l’Arduino
const byte ldr2 = A2;         // donar nom al pin A2 de l’Arduino

int mostreig = 20;          // velocitat de l'acció en ms
int valLdr0;                 // guardar valor del ldr  
int valLdr1;
int valLdr2;

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(valLdr0, INPUT);  
  pinMode(valLdr1, INPUT);   
  pinMode(valLdr2, INPUT);      
}

//********** Loop *****************************************************************
void loop()
{
  valLdr0 = analogRead(ldr0);   // llegir valor ldr
  valLdr1 = analogRead(ldr1);   
  valLdr2 = analogRead(ldr2);
  
  valLdr0 = map(valLdr0, 0, 1023, 0, 255);   // mapejar valor de 0-1023 a 0-255
  valLdr1 = map(valLdr1, 0, 1023, 0, 255);   
  valLdr2 = map(valLdr2, 0, 1023, 0, 255);   

  valLdr0 = constrain(valLdr0, 0, 255); // limita valor de 0-255
  valLdr1 = constrain(valLdr1, 0, 255); 
  valLdr2 = constrain(valLdr2, 0, 255); 
  
  analogWrite(led0, valLdr0);    // actualitzar l'estat del led
  analogWrite(led1, valLdr2);    
  analogWrite(led1, valLdr2);    
}

//********** Funcions *************************************************************
