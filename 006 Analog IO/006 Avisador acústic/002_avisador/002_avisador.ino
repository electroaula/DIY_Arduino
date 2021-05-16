/**********************************************************************************
**                                                                               **
**                              Avisador Acústic                                 **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int xiulet = 9;        // donar nom al pin 9 de l’Arduino
const int ldr0 = A0;         // donar nom al pin A0 de l’Arduino
const int ldr1 = A1;         // donar nom al pin A1 de l’Arduino
const int ldr2 = A2;         // donar nom al pin A2 de l’Arduino

int valLdr0;                 // guardar valor del ldr  
int valLdr1;
int valLdr2;
int durada;                    // durada del xiulet

//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(ldr0, INPUT);
  pinMode(ldr1, INPUT);
  pinMode(ldr2, INPUT);
}

//********** Loop *****************************************************************
void loop()
{
  valLdr0 = analogRead(ldr0);   // llegir valor ldr
  valLdr1 = analogRead(ldr1);   
  valLdr2 = analogRead(ldr2);
  
  durada = min(valLdr0, valLdr1);  // veure quin ldr té objecte més aprop
  durada = min(valLdr2, durada);
  durada = map(durada, 0, 1023, 1000, 100);   // mapejar valor de 0-1023 a 1000-100
  durada = constrain(durada, 1000, 100); // limita valor de 1000-100

  tone(xiulet, 1000, durada);   // xiulet
  delay(2*durada);          // esperar xiulet + silenci
}

//********** Funcions *************************************************************
