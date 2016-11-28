#include "er-display_lib.h"
#include <util/delay.h>

void dispInit(void)
{
  DISP_DDR |= (1 << DI) | (1 << RESET);

  spiInit();
  CSN_LOW();   
  
  //delay_ms(10);
  
  RESET_LOW();
  _delay_us(3);
  RESET_HIGH();
  
  _delay_us(3);
  
  DISPLAY_OFF();   
  // Set display Clock Divide Ratio
  dispSendCommand(0xD5);
  dispSendCommand(0x80);
                       
  // Set multiplex ratio
  dispSendCommand(0xA8);
  dispSendCommand(0x3F);
                         
  // Set display offset
  dispSendCommand(0xD3);
  dispSendCommand(0x00);
                       
  // Set display start line
  SET_DISPLAY_START_LINE(0);
                           
  // Set charge pump
  dispSendCommand(0x8D);
  dispSendCommand(0x14);
                    
  //Set segment Re-map
  dispSendCommand(0xA0);
                      
  // Set COM output scan direction
  dispSendCommand(0xC0);
                                  
  // Set COM pins hardware configuration
  dispSendCommand(0xDA);
  dispSendCommand(0x12);
                                        
  // Set contrast 
  dispSendCommand(SET_CONTRAST);
  dispSendCommand(0xFF);
                           
  // Set pre-charge period
  dispSendCommand(0xD9);
  dispSendCommand(0xF1);
                          
  // Set VCOMH deselect level
  dispSendCommand(0xDB);
  //dispSendCommand(0x40);
  dispSendCommand(0x30);
                             
  // Set entire display on
  dispSendCommand(0xA4);
                          
  // Set inverse
  dispSendCommand(0xA7);  
                                 
  // Set Address mode
  dispSendCommand(SET_ADDRESS_MODE);
  dispSendCommand(VERTICAL);
  
  dispSendCommand(SET_COLUMN_ADDRESS);
  dispSendCommand(0x00);
  dispSendCommand(127);
  
  dispSendCommand(SET_PAGE_ADDRESS);
  dispSendCommand(0x00);
  dispSendCommand(7);
                       
  // Set display on
  DISPLAY_ON();
}

void dispSendData(unsigned char data)
{
  DISP_DATA();
  spiSendByte(data);
}
void dispSendCommand(unsigned char command)
{
  DISP_COMMAND();
  spiSendByte(command);
}

void setArea(unsigned char xStart, unsigned char xStop, unsigned char yStart, unsigned char yStop)
{
  DISP_COMMAND();
  dispSendCommand(SET_COLUMN_ADDRESS);
  dispSendCommand(xStart);
  dispSendCommand(xStop);
  
  dispSendCommand(SET_PAGE_ADDRESS);
  dispSendCommand(yStart);
  dispSendCommand(yStop);
}
