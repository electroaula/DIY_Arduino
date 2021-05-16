/**********************************************************************************
**                                                                               **
**                             Cerca Tres                                        **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Variables ************************************************************
int dades[] = {0, 12, 4, 5, 7, 8, 2, 23, 5, 7}; 
int sizeDades = sizeof(dades)/sizeof(dades[0]);
int segonMultiple = 0;
int num = 0;

//********** Setup ****************************************************************
void setup()      // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  for (int i=0; i < sizeDades; i++)
  {
    if (dades[i]!=0 && dades[i]%3==0)
    {
      segonMultiple++;
      num = dades[i];
    }
    if (segonMultiple == 2)
    {
      Serial.print("El segon múltiple de 3 de l'array és el ");
      Serial.println(num);
      break;
    }
  }
  if (segonMultiple!=2)
  {
    Serial.println("No hi ha segon multiple de 3 en l'array");
  }
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
  
}

//********** Funcions *************************************************************
