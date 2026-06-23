//
//    FILE: MATRIX7219_VU_METER.ino
//  AUTHOR: Rob Tillaart
// PURPOSE: demo of MATRIX7219 8x8 LED MATRIX MAX7219
//     URL: https://github.com/RobTillaart/MATRIX7219


#include "MATRIX7219.h"

uint8_t dataPin   = 2;
uint8_t selectPin = 3;
uint8_t clockPin  = 4;

uint8_t count     = 1;

MATRIX7219 mx(dataPin, selectPin, clockPin, count);
uint8_t letterA[8] = {
  B00111100,
  B01100110,
  B11000011,
  B11000011,
  B11111111,
  B11111111,
  B11000011,
  B11000011
};
uint8_t letterB[8] = {
  B11111100,
  B11000011,
  B11000011,
  B11111100,
  B11111100,
  B11000011,
  B11000011,
  B11111100
};
uint8_t letterC[8] ={
  B00111100,
  B01100110,
  B11000011,
  B11000000,
  B11000000,
  B11000011,
  B01100110,
  B00111100
};
uint8_t letterD[8] = {
  B11111110,
  B11000011,
  B11000011,
  B11000011,
  B11000011,
  B11000011,
  B11000011,
  B11111110
};
uint8_t letterE[8] = {
  B11111111,
  B11000000,
  B11000000,
  B11111100,
  B11111100,
  B11000000,
  B11000000,
  B11111111
};
uint8_t letterF[8] = {
  B11111111,
  B11000000,
  B11000000,
  B11111100,
  B11111100,
  B11000000,
  B11000000,
  B11000000
};


void setup()
{
  Serial.begin(115200);
  Serial.println();
  Serial.println(__FILE__);
  Serial.print("MATRIX7219_LIB_VERSION: ");
  Serial.println(MATRIX7219_LIB_VERSION);
  Serial.println();

  mx.begin();
  mx.clear();
  mx.setBrightness(1);
  mx.setReverse(false);
}


void loop()
{
  // //  simulation of VU.
  // for (int n = 1; n < 9; n++)
  // {
  //   mx.setRow(n, (1 << random(9)) - 1, 1);
  //   delay(10);
  // }
  for (int n = 1; n<9; n++){
    mx.setRow(n,letterA[n-1],1);
  }
  delay(1000);
  for (int n = 1; n<9; n++){
    mx.setRow(n,letterB[n-1],1);
  }
  delay(1000);
  for (int n = 1; n<9; n++){
    mx.setRow(n,letterC[n-1],1);
  }
  delay(1000);
  for (int n = 1; n<9; n++){
    mx.setRow(n,letterD[n-1],1);
  }
  delay(1000);
  for (int n = 1; n<9; n++){
    mx.setRow(n,letterE[n-1],1);
  }
  delay(1000);
  for (int n = 1; n<9; n++){
    mx.setRow(n,letterF[n-1],1);
  }
  delay(1000);

}


//  -- END OF FILE --