//
//    FILE: DMM_millivolts.ino
//  AUTHOR: Rob Tillaart
// PURPOSE: demo DMM
//     URL: https://github.com/RobTillaart/DMM


#include "DMM.h"


DMM dmm;


void setup()
{
  Serial.begin(115200);
  while (!Serial);
  Serial.println(__FILE__);
  Serial.print("VOLTMETER_LIB_VERSION: ");
  Serial.println(VOLTMETER_LIB_VERSION);

  dmm.begin(A0, 5, 1023);
}


void loop()
{
  int mV = dmm.readMilliVolts();
  Serial.print("mV: ");
  Serial.print(mV);
  Serial.println();

  delay(1000);
}


// -- END OF FILE --