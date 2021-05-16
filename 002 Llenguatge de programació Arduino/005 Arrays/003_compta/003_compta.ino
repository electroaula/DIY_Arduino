/**********************************************************************************
**                                                                               **
**                             Compta As                                         **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Variables ************************************************************
char dades[] = {'a', 'z', 'a', 'w','a', 'q', 'f', 'c', 'a'};
int sizeDades = sizeof(dades)/sizeof(dades[0]);
int num_a = 0;

//********** Setup ****************************************************************
void setup()      // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("El array conté ");
  for (int i=0; i < sizeDades; i++)
  {
    if (dades[i]=='a')
    {
      num_a++;
    }
  }
  Serial.print(num_a);
  Serial.println(" a");
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
  
}

//********** Funcions *************************************************************
