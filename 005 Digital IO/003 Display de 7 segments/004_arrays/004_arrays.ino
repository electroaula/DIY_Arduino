/**********************************************************************************
**                                                                               **
**                             Display de 7 segments                             **
**                                                                               **
**                        Display Càtode Comú / Ànode Comú                       **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
// Cal utilitzar aquests dos parametres si es catode comu
const char ledOn = HIGH;
const char ledOff = LOW;
// Cal utilitzar aquests dos paramtre si es anode comu
//const char ledOn = LOW;
//const char ledOff = HIGH;

// Assignacio de segments a ports de sortida
byte seg_a = 5;
byte seg_b = 6;
byte seg_c = 7;
byte seg_d = 8;
byte seg_e = 9;
byte seg_f = 10;
byte seg_g = 11;

const byte segmentPin[] = {seg_a,seg_b,seg_c,seg_d,seg_e,seg_f,seg_g};//pins segments

int segmentNum = 7;    // número de segment
int pausa = 200;       // definir variable per marcar velocitat de mostrar lletres
const byte codis[] = { // números i lletres en format 7segments ABCDEFG
 //ABCDEFG_
  B11111100,  // Representa el 0
  B01100000,  // Representa el 1
  B11011010,  // Representa el 2
  B11110010,  // Representa el 3
  B01100110,  // Representa el 4
  B10110110,  // Representa el 5
  B00111110,  // Representa el 6
  B11100000,  // Representa el 7
  B11111110,  // Representa el 8
  B11100110,  // Representa el 9
  B11101110,  // Representa la a (10)
  B00111110,  // Representa la b (11)
  B10011100,  // Representa la c (12)
  B01111010,  // Representa la d (13)
  B10011110,  // Representa la e (14)
  B10001110,  // Representa la f (15)
  B11110110,  // Representa la g (16)
  B01101110,  // Representa la h (17)
  B00001100,  // Representa la i (18)
  B01111000,  // Representa la j (19)
  B01101110,  // Representa la k (20)
  B00011100,  // Representa la l (21)
  B10101000,  // Representa la m (22)
  B00101010,  // Representa la n (23)
  B11111100,  // Representa la o (24)
  B11001110,  // Representa la p (25)
  B11100110,  // Representa la q (26)
  B00001010,  // Representa la r (27)
  B10110110,  // Representa la s (28)
  B00111100,  // Representa la t (29)
  B01111100,  // Representa la u (30)
  B00111000,  // Representa la v (31)
  B01010100,  // Representa la w (32)
  B01101110,  // Representa la x (33)
  B01110110,  // Representa la y (34)
  B11011010,  // Representa la z (35)
  B00000000,  // Representa el   (36)
};

//********** Setup ****************************************************************
void setup()
{
  // Configura els pins com a sortides i deixa el Display parat 
  for(int i = 0; i < segmentNum; i++)
  {
    pinMode(segmentPin[i], OUTPUT);
    digitalWrite(segmentPin[i], ledOff);
  } 
}

//********** Loop *****************************************************************
void loop()
{
  mostra(10);  // A
  mostra(27);  // R
  mostra(13);  // D
  mostra(30);  // U
  mostra(18);  // I
  mostra(23);  // N
  mostra(24);  // O
 
  delay(1000);
  shutDown();
  delay(500);
}

//********** Funcions *************************************************************
void mostra(int element)
{
  boolean estatSegment;
  for(int segment = 1; segment < 8; segment++)
  {
    estatSegment = bitRead(codis[element], segment);
    if (ledOn == LOW) estatSegment = ! estatSegment;// Si anode comu, invertir sortida
    digitalWrite(segmentPin[(7-segment)], estatSegment);
  }
  delay(pausa);
}

//Aquesta funcio apaga tots elssegments
void shutDown()
{
  for(int i = 0; i < 7; i++)
  {
    digitalWrite(segmentPin[i], ledOff); 
  }

}
