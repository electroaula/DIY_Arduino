/**********************************************************************************
**                                                                               **
**                                  Morse                                        **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
// pin for speaker
const int pin = 8;

int note = 1047;
int velocitat = 10;

//********** Setup ****************************************************************
void setup()
{

}

//********** Loop *****************************************************************
void loop()
{
  // ** Exemple CURS A... **
  ratlla();
  punt();
  ratlla();
  punt();
  
  espaiL();
  
  punt();
  punt();
  ratlla();
  
  espaiL();
  
  punt();
  ratlla();
  punt();
  
  espaiL();
  
  punt();
  punt();
  punt();
  
  espaiP();
  
  punt();
  ratlla();
  
  espaiL();
  
  punt();
  ratlla();
  punt();
  ratlla();
  punt();
  ratlla();
  
  espaiL();
  
  punt();
  ratlla();
  punt();
  ratlla();
  punt();
  ratlla();
  
  espaiL();
  
  punt();
  ratlla();
  punt();
  ratlla();
  punt();
  ratlla(); 
  
  espaiP();
}

//********** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}
