/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
float qualEnergy = 3;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600); 
  
  if (qualEnergy >= 43.2)
  {
    Serial.print("G");
  }
  else if (qualEnergy < 43.2 & qualEnergy > 38.2)
  {
    Serial.print("F");
  }
  else if (qualEnergy <= 38.2 & qualEnergy > 17.7)
  {
    Serial.print("E");
  }
  else if (qualEnergy <= 17.7 & qualEnergy > 11.1)
  {
    Serial.print("D");
  }
  else if (qualEnergy <= 11.1 & qualEnergy > 6.5)
  {
    Serial.print("C");
  }
  else if (qualEnergy <= 6.5 & qualEnergy > 3.5)
  {
    Serial.print("B");
  }
  else
  {
    Serial.print("A");
  }
}

//********** Loop *****************************************************************
void loop()  
{
}

//********** Funcions *************************************************************
