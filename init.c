#include "init.h"
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

void initChip(void)
{
    DDRB = _BV(1);
    ADCSRA = _BV(ADEN);
    // Turn on PWM (8-bit, Phase correct)
    TCCR1A = _BV(COM1A1) | _BV(WGM10);
    TCCR1B = _BV(CS10);
    OCR1A = 0;
    // Keyboard
    //PORTD = _BV(OK) | _BV(LEFT) | _BV(RIGHT);
    // OK Interrupt
    MCUCR |= _BV(ISC10);
    GICR |= _BV(INT1);
    sei();
    // Delay timer
    //TCCR0 = _BV(CS00) | _BV(CS02);
    TIMSK = _BV(TOIE0);

    // UART 9600
    UCSRB = _BV(TXEN);
    UCSRC = _BV(URSEL) | _BV(UCSZ1) | _BV(UCSZ0);
    UBRRH = 0;
    UBRRL = 51;
}

#define MUX (_BV(REFS0) | _BV(REFS1) | _BV(ADLAR))

uchar readAdc(uchar channel)
{
    ADMUX = MUX | channel;
    _delay_us(10);
    ADCSRA |= _BV(ADSC);
    while(bit_is_clear(ADCSRA, ADIF));
    ADCSRA |= ADIF;

    return ADCH;
}
