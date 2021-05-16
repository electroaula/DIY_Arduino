/**********************************************************************************
**                                                                               **
**                              Funció map()                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
unsigned long mostreig = 20;
long valor;

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  Serial.println("Provar la funció map(valor, 0, 1023, 0, 255);");
  Serial.println();
  Serial.print("Entra un valor per mapejar...");
}

//********** Loop *****************************************************************
void loop()
{
  while (Serial.available() > 0)
  {
    valor = Serial.parseInt(); 
    Serial.print(valor);
    
    // look for the newline. That's the end of your sentence:
    if (Serial.read() == '\n')
    { 
      valor = map(valor, 0, 1023, 0, 255);   // mapejar valor de 0-1023 a 0-255
      Serial.print(" es comberteix en ");
      Serial.println(valor);
      Serial.print("Si fem constrain entre 0 i 255 obtenim ");
      Serial.println(constrain(valor, 0, 255)); // limita valor de 0-255
      Serial.println();
      Serial.print("Entra un valor per mapejar...");
    }
  }
}

//********** Funcions *************************************************************
