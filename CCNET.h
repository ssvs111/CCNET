

#ifndef CCNET_h
#define CCNET_h
#include "Arduino.h"
#include <inttypes.h>

void sendcc(const void* pData, int size); //

template< typename T > void CCNET_SEND(const T &data) //что такое template< typename T > ?
{
  sendcc(&data, sizeof(data));
}

#endif
