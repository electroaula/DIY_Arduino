/**********************************************************************************
**                                                                               **
**                              Torre de Hanoi                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int disc = 3;

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  towerOfHanoi(disc, 'A', 'C', 'B'); // A, B and C are names of rods
}

//********** Loop *****************************************************************
void loop()
{
}

//********** Funcions *************************************************************
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
  if (n == 1)
  {
    move(n, from_rod, to_rod);
    return;
  }
  towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
  move(n, from_rod, to_rod);
  towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}
 
void move(int n, char from_rod, char to_rod)
{
  Serial.print("Moure disc ");
  Serial.print(n);
  Serial.print(" de torre ");
  Serial.print(from_rod);
  Serial.print(" a torre ");
  Serial.println(to_rod);
}
