/**********************************************************************************
**                                                                               **
**            Prem tecla i mostra valor en dec, hex, oct i binari                **
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
 Serial.println("Prem una tecla..."); // prints title with ending line break
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
      Serial.print("El caràcter ");
      Serial.write(thisByte);
      Serial.print(" té el valor ASCII en decimal ");
      Serial.println(thisByte,DEC);
      Serial.println();
      Serial.println("Prem una tecla..."); 
    }
  }  
}

//********** Funcions *************************************************************
