/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  int T  =  9;
  int Y  =  4;
  int K  =  8;
  int N  =  3;
  int P  = - 3;
  boolean Z  = true;
  boolean W = false;
  boolean A  =  false;
  boolean B  =  true;
  
  Serial.print("Afirmació 1: ");
  Serial.println(T > 10 && T < 14);
  Serial.print("Afirmació 2: ");
  Serial.println(Y > 4 || Y < 7);
  Serial.print("Afirmació 3: ");
  Serial.println(K > 8 && K < 10);
  Serial.print("Afirmació 4: ");
  Serial.println(N > 2 || N < 20);
  Serial.print("Afirmació 5: ");
  Serial.println(P > 0 && P < -3);
  Serial.print("Afirmació 6: ");
  Serial.println(T > 10 || Z);
  Serial.print("Afirmació 7: ");
  Serial.println(P > 0 && B);
  Serial.print("Afirmació 8: ");
  Serial.println(W && B);
  Serial.print("Afirmació 9: ");
  Serial.println(W && A);
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
