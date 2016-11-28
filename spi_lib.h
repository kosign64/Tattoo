#ifndef SPI_LIB_H
#define SPI_LIB_H

// SELECT ATMEGA
#include "chipName.h"

#ifdef ATMEGA128

#include <mega128.h>

#define DDR_SPI DDRB
#define PORT_SPI PORTB
#define SS 0
#define MOSI 2
#define MISO 3
#define SCK 1

#endif

#ifdef ATMEGA8

#include <avr/io.h>

#define DDR_SPI DDRB
#define PORT_SPI PORTB
#define SS 2
#define MOSI 3
#define MISO 4
#define SCK 5

#endif

#define CSN_LOW() PORT_SPI &= ~(1 << (SS))
#define CSN_HIGH() PORT_SPI |= (1 << (SS))

void spiInit(void);
unsigned char spiSendByte(unsigned char byte);

#endif
