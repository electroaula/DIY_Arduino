/**********************************************************************************
**                                                                               **
**                           Ohmetre                                             **
**                                                                               **
**********************************************************************************/


//********** Includes *************************************************************


//********** Variables ************************************************************
// pins for the LEDs:
const int ledPin = 13, pinMesura = A0;
int rebut, estat = 1, valorR1;

//********** Setup ****************************************************************
void setup() {
  // initialize serial:
  Serial.begin(9600);
  Serial.print("Prem 1 per iniciar mesura de R1... ");
  // make the pins outputs:
  pinMode(ledPin, OUTPUT); 
}

//********** Loop *****************************************************************
void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) {

    // look for the next valid integer in the incoming serial stream:
    rebut = Serial.parseInt(); 
    Serial.print("has premut ");
    Serial.println(rebut);

    // look for the newline. That's the end of your sentence:
    if (Serial.read() == '\n') {
      switch (rebut) {
        case 1:
          Serial.println("Realitzant la mesura del valor de R1...");
          valorR1 = mesuraR1(pinMesura);
          mostraR1(valorR1);
          Serial.print("Prem 1 per iniciar mesura de R1... ");
          break;
        default:
          Serial.println("Has entrat una opcio incorrecta!!!");
          Serial.println();
          Serial.print("Prem 1 per iniciar mesura de R1...");
      }
    }
  }
}

//********** Funcions *************************************************************
int mesuraR1(int pinR1)
{
  int i;
  int valorMax = 0, valorMin = 1023, valorActual, valorSumat = 0;
  float  valorFinal = 0, valorVout;
  int valorR1;
  
  // Fer 10 lectures, desestimar la més petita i gran i fer la mitja de la resta
  for (i = 0; i < 10; i++)
  {
    valorActual = analogRead(pinR1);
    if (valorActual > valorMax)
    {
      valorMax = valorActual;
    }
    if (valorActual < valorMin)
    {
      valorMin = valorActual;
    }
    valorSumat = valorSumat + valorActual;
  }
  valorSumat = valorSumat - valorMax - valorMin;
  valorFinal = valorSumat / 8;
  
  //Adaptar el senyal de 0-1023 a 0-5v
  valorVout = (valorFinal / 1023) * 5;
  
  //Calcular el valor de R1
  valorR1 = 1000 * (5 - valorVout) / valorVout;
  
  return(valorR1);
}

void mostraR1(int dada)
{
  unsigned long tempsInicial = millis();
  unsigned long tempsLed = tempsInicial;
  boolean onOff = true;
  
  if ( dada < 1000)
  {
    Serial.print("El valor de R1 es ");
    Serial.print(dada);
    Serial.println(" ohms");
    Serial.println();
  }
  else
  {
    Serial.print("El valor de R1 es ");
    Serial.print(dada);
    Serial.print(" ohms o tambe es pot dir ");
    Serial.print(dada / 1000);
    Serial.print("K");
    if ((dada % 1000) / 100 != 0)
    {
      Serial.print((dada % 1000) / 100);
    }
    Serial.println(" ohms");
    Serial.println();
  }
  while (millis() - tempsInicial < 2000)
  {
    if (millis() - tempsLed > 200)
    {
      digitalWrite(ledPin, estat);
      tempsLed = millis();
      estat = !estat;
    }  
  }
}
