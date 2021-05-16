/**********************************************************************************
**                                                                               **
**                               Math Is Fun                                     **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int drive_gb = 100;
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;
long missing_drive_kb;

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024;

  Serial.print("In theory, it can store ");
  Serial.print(drive_mb);
  Serial.print(" Megabytes, ");

  drive_kb = drive_mb;
  drive_kb = drive_kb * 1024;

  Serial.print(drive_kb);
  Serial.println(" Kilobytes.");
  
  real_drive_mb = drive_gb;
  real_drive_mb = real_drive_mb * 1000;

  Serial.print("But it really only stores ");
  Serial.print(real_drive_mb);
  Serial.print(" Megabytes, ");

  real_drive_kb = real_drive_mb;
  real_drive_kb = real_drive_kb * 1000;

  Serial.print(real_drive_kb);
  Serial.println(" Kilobytes.");

  missing_drive_kb = drive_kb - real_drive_kb;

  Serial.print("You are missing ");
  Serial.print(missing_drive_kb);
  Serial.println(" Kilobytes!");
}

//********** Loop *****************************************************************
void loop()
{
}

//********** Funcions *************************************************************
