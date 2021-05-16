/**********************************************************************************
**                                                                               **
**                                  Sirena                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte sirena = 9;        // donar nom al pin 9 de l’Arduino
const byte pot0 = A0;         // donar nom al pin A0 de l’Arduino
const byte pot1 = A1;         // donar nom al pin A1 de l’Arduino
int valPot0;                 // guardar valor del potènciometre  
int valPot1;

//********** Setup ****************************************************************
void setup()
{
  pinMode(sirena, OUTPUT);   // definir el pin 9 com una sortida
  pinMode(pot0, INPUT);
  pinMode(pot1, INPUT);
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);   // llegir valor potenciòmetre
  valPot1 = analogRead(pot1);   

  tone(sirena, 800, valPot0);    // sirena de durada valPot0
  delay(valPot0 + valPot1);  // esperar valPot0 de la sirena + valPot1 silenci
}

//********** Funcions *************************************************************
