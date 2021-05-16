/**********************************************************************************
**                                                                               **
**                                 Fade LEDs                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte led0 = 3;          // donar nom al pin 3 de l’Arduino
const byte led1 = 5;          // donar nom al pin 5 de l’Arduino
const byte led2 = 6;          // donar nom al pin 6 de l’Arduino
const byte led3 = 9;          // donar nom al pin 9 de l’Arduino
const byte led4 = 10;         // donar nom al pin 10 de l’Arduino
const byte led5 = 11;         // donar nom al pin 11 de l’Arduino
unsigned long velocitat = 500;         // velocitat de l'acció en ms
const byte buttonPin = 2;     // donar nom al pin 2 de l’Arduino
byte buttonState = 0;         // per guardar l’estat en que és troba el button

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(buttonPin, INPUT); // definir el pin 2 com una entrada  
}

//********** Loop *****************************************************************
void loop()
{
  buttonState = digitalRead(buttonPin);     
  if (buttonState == 0)   //polsador premut, muntat amb Pull-up
  {
    analogWrite(led0, 60);     // posar PWM del pin 3 a 60
    analogWrite(led1, 60);     // posar PWM del pin 5 a 60
    analogWrite(led2, 60);     // posar PWM del pin 6 a 60
    analogWrite(led3, 60);     // posar PWM del pin 9 a 60
    analogWrite(led4, 60);     // posar PWM del pin 10 a 60
    analogWrite(led5, 60);     // posar PWM del pin 11 a 60
    
    delay(velocitat);          // es queden leds velocitat ms en aquest estat
    
    analogWrite(led0, 125);    // posar PWM del pin 3 a 125
    analogWrite(led1, 125);    // posar PWM del pin 5 a 125
    analogWrite(led2, 125);    // posar PWM del pin 6 a 125
    analogWrite(led3, 125);    // posar PWM del pin 9 a 125
    analogWrite(led4, 125);    // posar PWM del pin 10 a 125
    analogWrite(led5, 125);    // posar PWM del pin 11 a 125
    
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
    analogWrite(led0, 255);    // posar PWM del pin 3 a 255
    analogWrite(led1, 255);    // posar PWM del pin 5 a 255
    analogWrite(led2, 255);    // posar PWM del pin 6 a 255
    analogWrite(led3, 255);    // posar PWM del pin 9 a 255
    analogWrite(led4, 255);    // posar PWM del pin 10 a 255
    analogWrite(led5, 255);    // posar PWM del pin 11 a 255
     
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
    analogWrite(led0, 125);    // posar PWM del pin 3 a 125
    analogWrite(led1, 125);    // posar PWM del pin 5 a 125
    analogWrite(led2, 125);    // posar PWM del pin 6 a 125
    analogWrite(led3, 125);    // posar PWM del pin 9 a 125
    analogWrite(led4, 125);    // posar PWM del pin 10 a 125
    analogWrite(led5, 125);    // posar PWM del pin 11 a 125
    
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
  }
  else  //polsador no premut, muntat amb Pull-up
  {
    analogWrite(led0, 0);      
    analogWrite(led1, 0);      
    analogWrite(led2, 0);     
    analogWrite(led3, 0);      
    analogWrite(led4, 0);     
    analogWrite(led5, 0);     
  
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
    analogWrite(led0, 40);      
    analogWrite(led1, 0);      
    analogWrite(led2, 0);     
    analogWrite(led3, 0);      
    analogWrite(led4, 0);     
    analogWrite(led5, 0);     
  
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
    analogWrite(led0, 80);      
    analogWrite(led1, 40);      
    analogWrite(led2, 0);     
    analogWrite(led3, 0);      
    analogWrite(led4, 0);     
    analogWrite(led5, 0);     
  
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
    analogWrite(led0, 120);      
    analogWrite(led1, 80);      
    analogWrite(led2, 40);     
    analogWrite(led3, 0);      
    analogWrite(led4, 0);     
    analogWrite(led5, 0);     
  
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
    analogWrite(led0, 160);      
    analogWrite(led1, 120);      
    analogWrite(led2, 80);     
    analogWrite(led3, 40);      
    analogWrite(led4, 0);     
    analogWrite(led5, 0);     
  
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
    analogWrite(led0, 200);      
    analogWrite(led1, 160);      
    analogWrite(led2, 120);     
    analogWrite(led3, 80);      
    analogWrite(led4, 40);     
    analogWrite(led5, 0);     
  
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
    analogWrite(led0, 255);      
    analogWrite(led1, 200);      
    analogWrite(led2, 160);     
    analogWrite(led3, 120);      
    analogWrite(led4, 80);     
    analogWrite(led5, 40);     
  
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
    analogWrite(led0, 255);      
    analogWrite(led1, 255);      
    analogWrite(led2, 200);     
    analogWrite(led3, 160);      
    analogWrite(led4, 120);     
    analogWrite(led5, 80);     
  
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
    analogWrite(led0, 255);      
    analogWrite(led1, 255);      
    analogWrite(led2, 255);     
    analogWrite(led3, 200);      
    analogWrite(led4, 160);     
    analogWrite(led5, 120);     
  
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
    analogWrite(led0, 255);      
    analogWrite(led1, 255);      
    analogWrite(led2, 255);     
    analogWrite(led3, 255);      
    analogWrite(led4, 200);     
    analogWrite(led5, 160);     
  
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
    analogWrite(led0, 255);      
    analogWrite(led1, 255);      
    analogWrite(led2, 255);     
    analogWrite(led3, 255);      
    analogWrite(led4, 255);     
    analogWrite(led5, 200);     
  
    delay(velocitat);           // es queden leds velocitat ms en aquest estat
    
    analogWrite(led0, 255);      
    analogWrite(led1, 255);      
    analogWrite(led2, 255);     
    analogWrite(led3, 255);      
    analogWrite(led4, 255);     
    analogWrite(led5, 255);     
  
    delay(velocitat);           // es queden leds velocitat ms en aquest estat  
  }
}
//********** Funcions *************************************************************
