#ifndef ER-DISPLAY_LIB_H
#define ER-DISPLAY_LIB_H

#include "spi_lib.h"

// Port
#define DISP_PORT PORTD
#define DISP_DDR DDRD
#define DISP_PIN PIND

// Pins
#define DI 7
#define RESET 6

//-----------------------------------------------------------------------------

// 2 bytes commands
#define SET_CONTRAST (0x81) // 0-255

#define SET_ADDRESS_MODE (0x20)
  #define HORIZONTAL (0x00)
  #define VERTICAL (0x01)
  #define PAGE (0x02)
  
// 3 bytes commans
#define SET_COLUMN_ADDRESS 0x21 // Only for horizontal or vertical
#define SET_PAGE_ADDRESS 0x22 // Only for horizontal or vertical

// Functions
#define SET_NORMAL() do{DISP_COMMAND();spiSendByte(0xA6);}while(0)
#define SET_INVERSE() do{DISP_COMMAND();spiSendByte(0xA7);}while(0)
#define DISPLAY_ON() do{DISP_COMMAND();spiSendByte(0xAF);}while(0)
#define DISPLAY_OFF() do{DISP_COMMAND();spiSendByte(0xAE);}while(0)
#define SET_DISPLAY_START_LINE(line) do{DISP_COMMAND();spiSendByte((1 << 6) | (line));}while(0)

#define ENTIRE_DISPLAY_ON() do{DISP_COMMAND();spiSendByte(0xA4);}while(0)

#define RESET_LOW() DISP_PORT &= ~(1 << RESET)
#define RESET_HIGH() DISP_PORT |= (1 << RESET)

#define DISP_COMMAND() DISP_PORT &= ~(1 << DI)
#define DISP_DATA() DISP_PORT |= (1 << DI)

void dispInit(void);
void dispSendData(unsigned char data);
void dispSendCommand(unsigned char command);
void setArea(unsigned char xStart, // x: 0-127
             unsigned char xStop,
             unsigned char yStart, // y: 0-7 
             unsigned char yStop);


#endif
