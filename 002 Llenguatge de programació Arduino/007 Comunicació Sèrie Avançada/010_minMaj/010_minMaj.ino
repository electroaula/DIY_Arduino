/**********************************************************************************
**                                                                               **
**           Entra un caràcter de la a a la z o de la A a la Z                   **
**     el programa diu si el caràcter està amb minùscula o majùscula             **
**                                                                               **
**********************************************************************************/


//********** Includes *************************************************************


//********** Variables ************************************************************
byte thisByte;
byte bufferData;     

//********** Setup ****************************************************************
void setup() 
{
 Serial.begin(9600);    //Initialize serial and wait for port to open:
 Serial.print("Entra un caràcter de l'abecedari..."); // prints title with ending line break
}

//********** Loop *****************************************************************
void loop()
{
  while (Serial.available() > 0) // see if there's incoming serial data:
  { 
    thisByte = bufferData;
    bufferData = Serial.read();
    if (bufferData == '\n') // look for the newline. Is the end of your sentence:   
    {
      Serial.write(thisByte);
      Serial.println();
      if (thisByte >= 65 && thisByte <= 90)
      {
        Serial.println("Majúsucula");
      }
      else if (thisByte >= 97 && thisByte <= 122)
      {
        Serial.println("Minúsucla");
      }
      else
      {
        Serial.println("El caràcter entrat no està a l'abecedari");
      }
      Serial.println();
      Serial.print("Entra un caràcter de l'abecedari...");
    }
  }  
}

//********** Funcions *************************************************************
