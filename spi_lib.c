#include "spi_lib.h"

#ifdef ATMEGA8
#include <avr/io.h>
#endif

#ifdef ATMEGA128
#include <mega128.h>
#endif

void spiInit(void)
{
    // init proper data direction of pins
    DDR_SPI |= (1 << SS) |(1 << MOSI) | (1 << SCK);
    //PORT_SPI |= (1 << MISO);     
    // Enable SPI, Master, set clock rate fck/2
    SPCR = (1 << SPE) | (1 << MSTR); 
    SPSR = (1 << SPI2X);
}

unsigned char spiSendByte(unsigned char byte)
{
    // Start transmission
    SPDR = byte;
    // Wait for transmission complete
    while(!(SPSR & (1 << SPIF)));
    
    return SPDR;
}
