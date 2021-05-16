/**********************************************************************************
**                                                                               **
**                              Hipotenusa                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int a = 3;
int b = 4;
int h = 0;

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);

  Serial.println("Lets calculate a hypoteneuse");

  h = hipo(a,b);
      
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("h = ");
  Serial.println(h);
}

//********** Loop *****************************************************************
void loop()
{
  
}

//********** Funcions *************************************************************
int hipo(int catet1, int catet2)
{
  float resultat;
  resultat = sqrt(catet1*catet1 + catet2*catet2);
  return resultat;
}
