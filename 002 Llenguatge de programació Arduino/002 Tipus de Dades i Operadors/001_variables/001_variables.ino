/**********************************************************************************
**                                                                               **
**                             Math Is Fun                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  int a = 0;
  a = 1;
  a = a + 1;
  int b = 0;
  a = 2;
  a = a + a * ( a + a * (a + a));
  a = 1;
  a = a + a;
  b = 2;
  b = a + 1;
  b = a + b;
  b = a + b;
  a = 1;
  b = 2;
  b = b - 1;
  b = b - a;
  a = 1;
  a = a + 2;
  a = 1;
  a = a * 2;
  a = 1;
  b = 2;
  int c = 0;
  int d = 0;
  c = a;
  d = b;
  a = d;
  b = c;

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);  
  Serial.print("c = ");
  Serial.println(c);
  Serial.print("d = ");
  Serial.println(d);
}

//********** Loop *****************************************************************
void loop()  // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
