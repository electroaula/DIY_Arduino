/**********************************************************************************
**                                                                               **
**                        Decimal a binari                                       **
**                                                                               **
**********************************************************************************/


//********** Includes *************************************************************


//********** Variables ************************************************************
int numEntrat;
const int ledPin[] = {5, 6, 7, 8, 9, 10, 11, 12};  
int ledNum = 8;

//********** Setup ****************************************************************
void setup() {
  for(int i = 0; i < ledNum; i++) // definir sortides
  {
    pinMode(ledPin[i], OUTPUT);
  }
  for(int j = 0; j < ledNum ; j++)  // definir estat inicals sortides, mostren número 0
  { 
    digitalWrite(ledPin[j], 0);
  }
  // initialize serial:
  Serial.begin(9600);
  Serial.println("Quin numero vols visualitzar? ");
}

//********** Loop *****************************************************************
void loop() {
  while (Serial.available() > 0)
  {
    numEntrat = Serial.parseInt(); 
    Serial.print(numEntrat);
    Serial.print(" -> ");
    if (Serial.read() == '\n') 
    { 
      for(int j = 0; j < ledNum ; j++) // actualitzar estat leds per mostrar número
      { 
      digitalWrite(ledPin[j], bitRead(numEntrat, j));
      Serial.print(bitRead(numEntrat, 7-j));
      }   
      Serial.println();
      Serial.println();
      Serial.println("Quin numero vols visualitzar? ");
    }
  }
}

//********** Funcions *************************************************************
