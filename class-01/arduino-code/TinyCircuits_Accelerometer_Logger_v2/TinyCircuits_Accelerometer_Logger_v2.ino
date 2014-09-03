//-------------------------------------------------------------------------------
//  TinyCircuits Accelerometer TinyShield Example Sketch
//  Using Bosch BMA250 in I2C mode
//
//  Created 6/30/2013
//  by Ken Burns, TinyCircuits http://Tiny-Circuits.com
//
//  This example code is in the public domain.
//
//-------------------------------------------------------------------------------

// Adeptations by Johnn Keefe
// http://johnkeefe.net

// TinyCircuits_Accelerometer_Logger
// v1: writes the x,y,z to the SD card every second
// v2: checks the euclidan distance betwee the readings every 5 seconds and writes
//     the sum of all 12 to the SD card every minute

#include <Wire.h>
#include <SD.h>
#include <math.h>

// ** NEED TO CHANGE CHIPSET TO 10 for TINYDUINO SD shield
const int chipSelect = 10;   

#define BMA250_I2CADDR      0x18
#define BMA250_RANGE        0x03   // 0x03 = 2g, 0x05 = 4g, 0x08 = 8g, 0x0C = 16g
#define BMA250_BW           0x08   // 7.81Hz (update time of 64ms)

int AccelX;
int AccelY;
int AccelZ;
int AccelX_old = 0;
int AccelY_old = 0;
int AccelZ_old = 0;

int new_distance = 0;
int old_distance = 0;
int distance_sum = 0;


void setup() {
  Wire.begin();
  Serial.begin(9600);
  
  // Initialize the accellerometer
  BMA250Init();
  
 
  // Initialize the SD card
  Serial.print("Initializing SD card...");
  // make sure that the default chip select pin is set to
  // output, even if you don't use it:
  pinMode(10, OUTPUT);
  
  // see if the card is present and can be initialized:
  if (!SD.begin(chipSelect)) {
    Serial.println("Card failed, or not present");
    // don't do anything more:
    return;
  }
  Serial.println("card initialized.");
  
}


void loop() {
  
  int total_distance = 0;

  for (byte n = 0; n < 12; n++) {
  
    BMA250ReadAccel();
    
    // calculate the distance between the old and new points
    // using:    /-----------------------------------
    //         \/ (x2-x1)^2 + (y2-y1)^2 + (z2-z1)^2
    //
    double distance = sqrt( pow((AccelX_old - AccelX),2) + 
      pow((AccelY_old - AccelY),2) + 
      pow((AccelZ_old - AccelZ),2) );
    
    total_distance += int(distance);
    Serial.println(distance);
    AccelX_old = AccelX;
    AccelY_old = AccelY;
    AccelZ_old = AccelZ;
   
    // wait 5 seconds
    delay(5000);
  
  }


  // Print out the accelerometer data
  Serial.print("total change: ");
  Serial.println(total_distance);
  
  // open the file. note that only one file can be open at a time,
  // so you have to close this one before opening another.
  File dataFile = SD.open("datalog2.txt", FILE_WRITE);

  // if the file is available, write to it:
  if (dataFile) {
    dataFile.println(total_distance);
    dataFile.close();

  }  
  // if the file isn't open, pop up an error:
  else {
    Serial.println("error opening datalog.txt");
  }  

}


void BMA250Init()
{
  // Setup the range measurement setting
  Wire.beginTransmission(BMA250_I2CADDR);
  Wire.write(0x0F); 
  Wire.write(BMA250_RANGE);
  Wire.endTransmission();
  
  // Setup the bandwidth
  Wire.beginTransmission(BMA250_I2CADDR);
  Wire.write(0x10);
  Wire.write(BMA250_BW);
  Wire.endTransmission();
}


int BMA250ReadAccel()
{
  uint8_t ReadBuff[8];
  
  // Read the 7 data bytes from the BMA250
  Wire.beginTransmission(BMA250_I2CADDR);
  Wire.write(0x02);
  Wire.endTransmission();
  Wire.requestFrom(BMA250_I2CADDR,7);
  
  for(int i = 0; i < 7;i++)
  {
    ReadBuff[i] = Wire.read();
  }
  
  AccelX = ReadBuff[1] << 8;
  AccelX |= ReadBuff[0];
  AccelX >>= 6;
  
  AccelY = ReadBuff[3] << 8;
  AccelY |= ReadBuff[2];
  AccelY >>= 6;
  
  AccelZ = ReadBuff[5] << 8;
  AccelZ |= ReadBuff[4];
  AccelZ >>= 6;  
  
}



