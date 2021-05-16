/**********************************************************************************
**                                                                               **
**                                  Morse                                        **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int LED = 2;
int buzzerPin = 3;
int dot = 250;
char* morseLetters[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.","...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
char* morseNumbers[] = {"-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."};

//********** Setup ****************************************************************
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

//********** Loop *****************************************************************
void loop()
{
  char info;
  if (Serial.available() > 0) {
    info = Serial.read();
    if (info >= 'a' && info <= 'z') { //each ASCII code is a number
      letterId(morseLetters[info - 'a']);
    }
    else if(info >= 'A' && info <= 'Z') {
      letterId(morseLetters[info - 'A']);
    }
    else if(info >= 0 && info <= 9) {
      letterId(morseNumbers[info - 0]);
    }
    else if(info == ' ') {
      delay(dot * 4); 
    }
  } 
}

//********** Funcions *************************************************************
void letterId(char* character) {
  int i = 0;
   while(character[i] != '\0') {
    output(character[i]);
    i++;
  }
  delay(dot * 3);
}

void output(char ID) {
  digitalWrite(LED,HIGH);
  digitalWrite(buzzerPin,HIGH);
  if (ID == '.') {
    delay(dot);          
  }
  else {
    delay(dot * 3);          
  }
  digitalWrite(LED,LOW);
  digitalWrite(buzzerPin,LOW); 
  delay(dot);
}
