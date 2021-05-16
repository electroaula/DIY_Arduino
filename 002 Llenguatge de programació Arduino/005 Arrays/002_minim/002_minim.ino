/**********************************************************************************
**                                                                               **
**                             Valor Mínim                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Variables ************************************************************
int dades[] = {1, 12, 4, 5, 7, 9, -6, 9, 6, 7};
int sizeDades = sizeof(dades)/sizeof(dades[0]);
int minim;

//********** Setup ****************************************************************
void setup()      // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("El valor mínim de l'array és: ");
  minim = dades[0];
  for (int i=1; i < sizeDades; i++)
  {
    if (minim>dades[i])
    {
      minim = dades[i];
    }
  }
  Serial.println(minim);
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
  
}

//********** Funcions *************************************************************
