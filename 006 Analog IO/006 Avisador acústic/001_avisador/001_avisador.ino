/**********************************************************************************
**                                                                               **
**                              Avisador Acústic                                 **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte xiulet = 9;        // donar nom al pin 9 de l’Arduino
const byte ldr0 = A0;         // donar nom al pin A0 de l’Arduino

int valLdr0;                 // guardar valor del ldr  
int freq;                    // freqüència del xiulet

//********** Setup ****************************************************************
void setup()
{
  pinMode(xiulet, OUTPUT);     // definir el pin 9 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  valLdr0 = analogRead(ldr0);   // llegir valor ldr

  freq = map(freq, 0, 1023, 2000, 35);   // mapejar valor de 0-1023 a 2000-35
  freq = constrain(freq, 2000, 35); // limita valor de 2000-35

  tone(xiulet, freq, 100);   // xiulet de durada 100ms
  delay(100+100);            // esperar xiulet + silenci
}

//********** Funcions *************************************************************
