#include "CCNET.h"
//#include <avr/pgmspace.h>
#include "Arduino.h"
#include <inttypes.h>

void sendcc(const void *pData, int size) //
{
  uint8_t *pData2 = (uint8_t*)pData;
  for (; size > 0; size--) {
    Serial.print(*pData2, HEX ); Serial.print(" "); //мониторим программу
    Serial1.write(*pData2++); //отправляем данные внешнему устройству
  }
  Serial.println("");
}
