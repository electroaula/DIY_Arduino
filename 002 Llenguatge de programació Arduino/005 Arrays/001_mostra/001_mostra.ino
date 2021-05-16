/**********************************************************************************
**                                                                               **
**                            Mostra Array                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Variables ************************************************************
int dades[] = {1, 12, 4, 5, 7, 9, 0, 9, 6, 7};
int sizeDades = sizeof(dades)/sizeof(dades[0]);

//********** Setup ****************************************************************
void setup()      // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("L'array conté els números: ");
  for (int i=0; i < sizeDades; i++)
  {
    Serial.print(dades[i]);
    if (i < sizeDades-1)
    {
      Serial.print(" - ");
    }      
    else
    {
      Serial.println();
    }
  }
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
  
}

//********** Funcions *************************************************************
