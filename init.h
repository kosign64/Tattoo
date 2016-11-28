#ifndef INIT_H
#define INIT_H

typedef unsigned char uchar;

// Keys
#define OK    3
#define LEFT  2
#define RIGHT 4

void initChip(void);
uchar readAdc(uchar channel);

#endif // INIT_H

