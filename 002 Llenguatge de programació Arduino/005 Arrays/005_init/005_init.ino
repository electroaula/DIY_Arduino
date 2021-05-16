/**********************************************************************************
**                                                                               **
**                             Inicialitza                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Variables ************************************************************
int dades[100]; 

//********** Setup ****************************************************************
void setup()      // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.println("L'array conté els números: ");
  for (int i=0; i < 100; i++)
  {
    dades[i]=i;
    if (dades[i]<10)
    {
      Serial.print(0);
    }
    Serial.print(dades[i]);
    if (dades[i] < 100)
    {
      if ((dades[i]+1)%25 == 0 && dades[i]!=0)
      {
        Serial.println( );
      }
      else
      {
        Serial.print("-");
      }
    }   
  }
  Serial.println();
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
  
}

//********** Funcions *************************************************************
