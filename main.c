#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <stdbool.h>
#include "spi_lib.h"
#include "er-display_lib.h"
#include "images.h"
#include "battery.h"
#include "digits.h"
#include "init.h"

#define FILTER_SIZE 3
//#define DEBUG

typedef unsigned char uchar;
typedef signed char schar;

uchar timOvfCounter = 0;
uchar currentFrame = 0;
bool turnedOn = true;
bool work = true;
bool pressed = false;
volatile bool redraw = true;

ISR(INT1_vect)
{
    if(bit_is_set(PIND, OK))
    {
        TCCR0 = _BV(CS00) | _BV(CS02);
        timOvfCounter = 0;
        pressed = true;
    }
    else
    {
        TCCR0 = 0;
        timOvfCounter = 0;
        TIFR = _BV(TOV0);
        currentFrame = 0;
        setArea(0, 127, 0, 7);
        for(int i = 0; i < 1024; i++)
        {
            dispSendData(255);
        }
        redraw = true;
        if(pressed)
        {
            work = !work;
        }
    }
}

ISR(TIMER0_OVF_vect)
{
    timOvfCounter++;
    if((timOvfCounter > 10) && (timOvfCounter < 20))
    {

    }
    if(turnedOn)
    {
        if((timOvfCounter > 20) && (timOvfCounter < 30) && currentFrame == 0)
        {
            redraw = false;
            setArea(0, 64, 0, 7);
            for(int i = 0; i < 1024 / 2; i++)
            {
                dispSendData(pgm_read_byte(&(weapon[i])));
            }
            setArea(0, 63, 4, 7);
            for(int i = 0; i < (1024 / 4); i++)
            {
                dispSendData(255);
            }
            setArea(64, 127, 0, 7);
            for(int i = 0; i < 1024 / 2; i++)
            {
                dispSendData(255);
            }
            setArea(0, 127, 0, 7);
            currentFrame++;
        }
        if((timOvfCounter > 30) && (timOvfCounter < 40) && (currentFrame == 1))
        {
            redraw = false;
            setArea(0, 64, 0, 7);
            for(int i = 0; i < 1024 / 2; i++)
            {
                dispSendData(pgm_read_byte(&(weapon[i])));
            }
            setArea(64, 127, 0, 7);
            for(int i = 0; i < 1024 / 2; i++)
            {
                dispSendData(255);
            }
            setArea(0, 127, 0, 7);
            currentFrame++;
        }
        if((timOvfCounter > 40) && (timOvfCounter < 50) && (currentFrame == 2))
        {
            redraw = false;
            for(int i = 0; i < 1024; i++)
            {
                dispSendData(pgm_read_byte(&(weapon[i])));
            }
            setArea(64, 127, 0, 3);
            for(int i = 0; i < 1024 / 4; i++)
            {
                dispSendData(255);
            }
            setArea(0, 127, 0, 7);
            currentFrame++;
        }
        if((timOvfCounter > 50) && (timOvfCounter < 60) && (currentFrame == 3))
        {
            redraw = false;
            for(int i = 0; i < 1024; i++)
            {
                dispSendData(pgm_read_byte(&(weapon[i])));
            }
            currentFrame = 0;
        }
    }
    if((timOvfCounter > 61) && pressed)
    {
        turnedOn = !turnedOn;
        pressed = false;
        if(turnedOn)
        {
            dispInit();
            setArea(0, 127, 0, 7);
            for(int i = 0; i < 1024; i++)
            {
                dispSendData(255);
            }
            redraw = true;
            work = false;
        }
        else
        {
            RESET_LOW();
            _delay_us(3);
            RESET_HIGH();
            _delay_us(3);
            DISPLAY_OFF();
            work = false;
        }
    }
}

#ifdef DEBUG
void USART_Transmit(unsigned char data)
{
    while (!(UCSRA & (1 << UDRE)));
    UDR = data;
}
#endif

int main(void)
{
    // 11   - 19
    // 10.5 - 33
    // 10   - 45
    // 9.5  - 60
    // 9    - 76
    // 8.5  - 89
    // 8    - 102
    // 7.5  - 116
    // 7    - 131
    // 6.5  - 146
    // 6    - 162
    // 5.5  - 177
    // 5    - 192
    // 4.5  - 207
    // 4    - 218
    // 3.5  - 229
    // 3    - 239
    // 2.5  - 250
    // 2    - 255
    //uchar dVoltages[] = {255, 255, 255, 255, 250, 239, 229, 218, 207, 192,
    //                     177, 162, 146, 131, 116, 102, 89,  76,  60,  45,  33,
    //                     19};
    uchar dVoltages[] = {255, 255, 255, 187, 178, 170, 165, 158, 140, 130,
                         124, 112, 105, 93, 85, 71, 62,  51,  40,  28,  7,
                         0};
    int pwm = 0;
    schar desired = 0;
    static uchar pressCounter = 0;
    static schar nkeyPressed = -1;
    bool keyPressed = false;
    uchar motorVoltage[FILTER_SIZE] = {255, 255, 255};
    int mVoltage;
    uchar index = 0;
    // controller
    int integral = 0;
    int error;
    bool batteryLow = false, batterLowPrev = false;
    initChip();
    dispInit();
    _delay_ms(100);
#ifndef DEBUG
    for(int i = 0; i < 1024; i++)
    {
        dispSendData(pgm_read_byte(&(weapon[i])));
    }
#endif
    _delay_ms(1500);
    setArea(0, 127, 0, 7);
    for(int i = 0; i < 1024; i++)
    {
        dispSendData(255);
    }
    while(1)
    {
        uchar batteryVoltage;
        batteryVoltage = readAdc(0);
        cli();
        if(redraw)
        {
            if(batteryLow)
            {
                if(batterLowPrev != true)
                {
                    setArea(0, 127, 0, 7);
                    for(int i = 0; i < 1024; i++)
                    {
                        dispSendData(255);
                    }
                }
            }
            else
            {
                setArea(0, 45, 0, 7);
                for(int i = 0; i < 360; i++)
                {
                    dispSendData(~pgm_read_byte(&(digits[desired / 100][i])));
                }
                setArea(46, 90, 0, 7);
                for(int i = 0; i < 360; i++)
                {
                    dispSendData(~pgm_read_byte(&(digits[(desired / 10) % 10][i])));
                }
                setArea(94, 98, 7, 7);
                for(int i = 0; i < 4; i++)
                {
                    dispSendData(0x0F);
                }
                setArea(99, 127, 3, 7);
                for(int i = 0; i < 140; i++)
                {
                    dispSendData(~pgm_read_byte(&(smallDigits[(desired % 10) / 5][i])));
                }
            }
            setArea(98, 127, 0, 1);
            batterLowPrev = batteryLow;
            if((batteryVoltage > 252))
            {
                batteryLow = false;
                for(int i = 0; i < sizeof(fullBattery); i++)
                {
                    dispSendData(~pgm_read_byte(&(fullBattery[i])));
                }
            }
            else if(batteryVoltage > 248)
            {
                batteryLow = false;
                for(int i = 0; i < sizeof(fullBattery); i++)
                {
                    dispSendData(~pgm_read_byte(&(midBattery[i])));
                }
            }
            else if((batteryVoltage > 240 && !batteryLow) ||
                    (batteryVoltage > 245 && batteryLow))
            {
                batteryLow = false;
                for(int i = 0; i < sizeof(lowBattery); i++)
                {
                    dispSendData(~pgm_read_byte(&(lowBattery[i])));
                }
            }
            else
            {
                batteryLow = true;
                for(int i = 0; i < sizeof(lowBattery); i++)
                {
                    dispSendData(~pgm_read_byte(&(lowBattery[i])));
                }
            }
            setArea(0, 127, 0, 7);
        }
        sei();

        motorVoltage[index++] = readAdc(7);
        index &= 3;
        mVoltage = 0;
        for(uchar i = 0; i < FILTER_SIZE; ++i)
        {
            mVoltage += motorVoltage[i];
        }
        mVoltage /= FILTER_SIZE;

        if(bit_is_set(PIND, LEFT) && (desired > 0) && (keyPressed == false))
        {
            desired -= 5;
            keyPressed = true;
            nkeyPressed = LEFT;
        }
        if(bit_is_set(PIND, RIGHT) && (desired < 110) && (keyPressed == false))
        {
            desired += 5;
            keyPressed = true;
            nkeyPressed = RIGHT;
        }
        if(bit_is_clear(PIND, LEFT) && bit_is_clear(PIND, RIGHT))
        {
            keyPressed = false;
            pressCounter = 0;
            nkeyPressed = -1;
        }
        if(nkeyPressed > 0)
        {
            if(++pressCounter > 20)
            {
                pressCounter = 0;
                if(nkeyPressed == LEFT)
                {
                    if(desired > 0)
                    {
                        desired -= 5;
                    }
                }
                else
                {
                    if(desired < 110)
                    {
                        desired += 5;
                    }
                }
            }
        }
        if(desired == 0)
        {
            pwm = 0;
        }
        else
        {
          error = mVoltage - dVoltages[(int)desired * 2 / 10 - 1];
          integral += error / 20; // / 20
          if(integral > 240) integral = 240;
          pwm = error * 2 + integral * 2;
          if(pwm < 0) pwm = 0;
          else if(pwm > 255) pwm = 255;
        }
        if(work && turnedOn && !batteryLow)
        {
            OCR1A = pwm;
        }
        else
        {
            OCR1A = 0;
        }
#ifdef DEBUG
        USART_Transmit(batteryVoltage / 100 + '0');
        USART_Transmit((batteryVoltage / 10) % 10 + '0');
        USART_Transmit(batteryVoltage % 10 + '0');
        USART_Transmit('\n');
        USART_Transmit('\r');
#endif
        _delay_ms(5);
    }
}

