#ifndef DIGITS_H
#define DIGITS_H

#include <avr/pgmspace.h>

const unsigned char digits[][360] PROGMEM = {{0x0, 0x0, 0x0, 0xfe, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0xff, 0xff, 0xf, 0x0, 0x0, 0x0, 0x0,
                                             0xfe, 0xff, 0xff, 0x7f, 0x0, 0x0, 0x0, 0x80, 0xff, 0xff, 0xff, 0xff, 0x1, 0x0, 0x0, 0xe0, 0xff, 0xff,
                                             0xff, 0xff, 0x7, 0x0, 0x0, 0xf8, 0xff, 0x3, 0xc0, 0xff, 0x1f, 0x0, 0x0, 0xfc, 0x3f, 0x0, 0x0, 0xfc,
                                             0x3f, 0x0, 0x0, 0xff, 0x7, 0x0, 0x0, 0xe0, 0xff, 0x0, 0x80, 0xff, 0x1, 0x0, 0x0, 0x80, 0xff, 0x1,
                                             0xc0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0xff, 0x3, 0xe0, 0x3f, 0x0, 0x0, 0x0, 0x0, 0xfc, 0x7, 0xe0, 0x1f,
                                             0x0, 0x0, 0x0, 0x0, 0xf8, 0xf, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x0, 0xf0, 0xf, 0xf8, 0x7, 0x0, 0x0,
                                             0x0, 0x0, 0xe0, 0x1f, 0xf8, 0x3, 0x0, 0x0, 0x0, 0x0, 0xc0, 0x1f, 0xfc, 0x3, 0x0, 0x0, 0x0, 0x0,
                                             0xc0, 0x3f, 0xfc, 0x1, 0x0, 0x0, 0x0, 0x0, 0x80, 0x3f, 0xfc, 0x1, 0x0, 0x0, 0x0, 0x0, 0x80, 0x3f,
                                             0xfe, 0x1, 0x0, 0x0, 0x0, 0x0, 0x80, 0x7f, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xfe, 0x0,
                                             0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0x0,
                                             0x0, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
                                             0x0, 0x7f, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xfe, 0x1, 0x0, 0x0, 0x0, 0x0, 0x80, 0x7f,
                                             0xfc, 0x1, 0x0, 0x0, 0x0, 0x0, 0x80, 0x3f, 0xfc, 0x1, 0x0, 0x0, 0x0, 0x0, 0x80, 0x3f, 0xfc, 0x3,
                                             0x0, 0x0, 0x0, 0x0, 0xc0, 0x3f, 0xf8, 0x3, 0x0, 0x0, 0x0, 0x0, 0xc0, 0x1f, 0xf8, 0x7, 0x0, 0x0,
                                             0x0, 0x0, 0xe0, 0x1f, 0xf0, 0xf, 0x0, 0x0, 0x0, 0x0, 0xf0, 0xf, 0xe0, 0x1f, 0x0, 0x0, 0x0, 0x0,
                                             0xf8, 0x7, 0xe0, 0x3f, 0x0, 0x0, 0x0, 0x0, 0xfc, 0x7, 0xc0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x3,
                                             0x80, 0xff, 0x1, 0x0, 0x0, 0x80, 0xff, 0x1, 0x0, 0xff, 0x7, 0x0, 0x0, 0xe0, 0xff, 0x0, 0x0, 0xfc,
                                             0x3f, 0x0, 0x0, 0xfc, 0x3f, 0x0, 0x0, 0xf8, 0xff, 0x3, 0xc0, 0xff, 0x1f, 0x0, 0x0, 0xe0, 0xff, 0xff,
                                             0xff, 0xff, 0x7, 0x0, 0x0, 0x80, 0xff, 0xff, 0xff, 0xff, 0x1, 0x0, 0x0, 0x0, 0xfe, 0xff, 0xff, 0x7f,
                                             0x0, 0x0, 0x0, 0x0, 0xf0, 0xff, 0xff, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x7f, 0x0, 0x0, 0x0},
                                            {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                             0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                             0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                             0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                             0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                             0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                             0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                             0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f,
                                             0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xfe, 0xff,
                                             0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xfe, 0xff, 0xff, 0xff,
                                             0xff, 0xff, 0xff, 0x7f, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                             0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                             0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                             0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                             0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                             0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                             0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                             0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                             0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                             0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
                                            {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0x7f, 0x0, 0x1c, 0x0, 0x0, 0x0, 0xf0, 0xff, 0x7f, 0x0, 0x3e,
                                            0x0, 0x0, 0x0, 0xfc, 0xff, 0x7f, 0x0, 0xfe, 0x0, 0x0, 0x0, 0xff, 0xff, 0x7f, 0x0, 0xff, 0x1, 0x0,
                                            0x80, 0xff, 0xff, 0x7f, 0x80, 0xff, 0x0, 0x0, 0xc0, 0xff, 0xff, 0x7f, 0x80, 0x7f, 0x0, 0x0, 0xe0, 0xff,
                                            0xff, 0x7f, 0xc0, 0x7f, 0x0, 0x0, 0xf0, 0xff, 0x0, 0x7f, 0xe0, 0x3f, 0x0, 0x0, 0xf8, 0x1f, 0x0, 0x7f,
                                            0xe0, 0x1f, 0x0, 0x0, 0xfc, 0xf, 0x0, 0x7f, 0xf0, 0x1f, 0x0, 0x0, 0xfc, 0x7, 0x0, 0x7f, 0xf0, 0xf,
                                            0x0, 0x0, 0xfe, 0x3, 0x0, 0x7f, 0xf8, 0x7, 0x0, 0x0, 0xfe, 0x1, 0x0, 0x7f, 0xf8, 0x7, 0x0, 0x0,
                                            0xff, 0x1, 0x0, 0x7f, 0xf8, 0x3, 0x0, 0x0, 0xff, 0x0, 0x0, 0x7f, 0xfc, 0x3, 0x0, 0x80, 0xff, 0x0,
                                            0x0, 0x7f, 0xfc, 0x3, 0x0, 0x80, 0x7f, 0x0, 0x0, 0x7f, 0xfc, 0x1, 0x0, 0xc0, 0x7f, 0x0, 0x0, 0x7f,
                                            0xfc, 0x1, 0x0, 0xc0, 0x3f, 0x0, 0x0, 0x7f, 0xfe, 0x1, 0x0, 0xc0, 0x3f, 0x0, 0x0, 0x7f, 0xfe, 0x0,
                                            0x0, 0xe0, 0x1f, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0xe0, 0x1f, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0xf0,
                                            0xf, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0xf0, 0x7, 0x0,
                                            0x0, 0x7f, 0xfe, 0x0, 0x0, 0xf8, 0x7, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0xf8, 0x7, 0x0, 0x0, 0x7f,
                                            0xfe, 0x0, 0x0, 0xfc, 0x3, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0xfc, 0x3, 0x0, 0x0, 0x7f, 0xfc, 0x1,
                                            0x0, 0xfe, 0x1, 0x0, 0x0, 0x7f, 0xfc, 0x1, 0x0, 0xfe, 0x1, 0x0, 0x0, 0x7f, 0xfc, 0x1, 0x0, 0xff,
                                            0x0, 0x0, 0x0, 0x7f, 0xfc, 0x3, 0x80, 0xff, 0x0, 0x0, 0x0, 0x7f, 0xf8, 0x7, 0x80, 0x7f, 0x0, 0x0,
                                            0x0, 0x7f, 0xf8, 0xf, 0xc0, 0x7f, 0x0, 0x0, 0x0, 0x7f, 0xf0, 0x1f, 0xe0, 0x3f, 0x0, 0x0, 0x0, 0x7f,
                                            0xf0, 0x7f, 0xf8, 0x1f, 0x0, 0x0, 0x0, 0x7f, 0xe0, 0xff, 0xff, 0x1f, 0x0, 0x0, 0x0, 0x7f, 0xc0, 0xff,
                                            0xff, 0xf, 0x0, 0x0, 0x0, 0x7f, 0x80, 0xff, 0xff, 0x7, 0x0, 0x0, 0x0, 0x7f, 0x0, 0xff, 0xff, 0x3,
                                            0x0, 0x0, 0x0, 0x7f, 0x0, 0xfe, 0xff, 0x1, 0x0, 0x0, 0x0, 0x7f, 0x0, 0xf8, 0x7f, 0x0, 0x0, 0x0,
                                            0x0, 0x7f, 0x0, 0xc0, 0x1f, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f},
                                            {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                            0x0, 0x0, 0x0, 0x0, 0x78, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfc, 0x0, 0x0, 0x6, 0x0, 0x0,
                                            0x0, 0x0, 0xfe, 0x1, 0x0, 0x1f, 0x0, 0x0, 0x0, 0x0, 0xff, 0x3, 0x80, 0x7f, 0x0, 0x0, 0x0, 0x0,
                                            0xfe, 0x7, 0x80, 0xff, 0x1, 0x0, 0x0, 0x0, 0xfc, 0xf, 0xc0, 0xff, 0x0, 0x0, 0x0, 0x0, 0xf8, 0xf,
                                            0xe0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x1f, 0xf0, 0x3f, 0x0, 0x0, 0x0, 0x0, 0xe0, 0x1f, 0xf0, 0x1f,
                                            0x0, 0x0, 0x0, 0x0, 0xc0, 0x3f, 0xf8, 0xf, 0x0, 0x0, 0x0, 0x0, 0xc0, 0x3f, 0xf8, 0x7, 0x0, 0x0,
                                            0x0, 0x0, 0x80, 0x7f, 0xfc, 0x7, 0x0, 0x0, 0x0, 0x0, 0x80, 0x7f, 0xfc, 0x3, 0x0, 0x0, 0x0, 0x0,
                                            0x0, 0x7f, 0xfe, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xfe, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f,
                                            0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7e, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7e, 0xfe, 0x0,
                                            0x0, 0x0, 0x0, 0x0, 0x0, 0x7e, 0x7e, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7e, 0x7e, 0x0, 0x0, 0x0,
                                            0x0, 0x0, 0x0, 0x7e, 0x7e, 0x0, 0x0, 0xfc, 0x1, 0x0, 0x0, 0x7e, 0x7e, 0x0, 0x0, 0xfc, 0x1, 0x0,
                                            0x0, 0x7e, 0x7e, 0x0, 0x0, 0xfc, 0x1, 0x0, 0x0, 0x7e, 0x7e, 0x0, 0x0, 0xfc, 0x1, 0x0, 0x0, 0x7e,
                                            0x7e, 0x0, 0x0, 0xfc, 0x1, 0x0, 0x0, 0x7f, 0x7e, 0x0, 0x0, 0xfc, 0x1, 0x0, 0x0, 0x7f, 0xfe, 0x0,
                                            0x0, 0xfc, 0x1, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0xfe, 0x3, 0x0, 0x80, 0x7f, 0xfe, 0x1, 0x0, 0xfe,
                                            0x3, 0x0, 0x80, 0x7f, 0xfe, 0x1, 0x0, 0xfe, 0x3, 0x0, 0xc0, 0x3f, 0xfc, 0x3, 0x0, 0xff, 0x3, 0x0,
                                            0xc0, 0x3f, 0xfc, 0xf, 0x80, 0xff, 0x7, 0x0, 0xe0, 0x1f, 0xf8, 0x3f, 0xe0, 0xff, 0xf, 0x0, 0xf0, 0x1f,
                                            0xf0, 0xff, 0xff, 0xff, 0x1f, 0x0, 0xf8, 0xf, 0xe0, 0xff, 0xff, 0xff, 0x3f, 0x0, 0xfe, 0x7, 0xc0, 0xff,
                                            0xff, 0xcf, 0xff, 0x80, 0xff, 0x3, 0x80, 0xff, 0xff, 0xc7, 0xff, 0xff, 0xff, 0x1, 0x0, 0xfe, 0xff, 0x81,
                                            0xff, 0xff, 0xff, 0x0, 0x0, 0xe0, 0x3f, 0x0, 0xff, 0xff, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfc, 0xff,
                                            0x1f, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0xff, 0x7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0xff, 0x0, 0x0},
                                            {0x0, 0x0, 0x0, 0x0, 0x80, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc0, 0x7f, 0x0, 0x0, 0x0, 0x0,
                                            0x0, 0x0, 0xe0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                            0xf8, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0x7f,
                                            0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0xff, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc0, 0xff, 0x7f, 0x0, 0x0,
                                            0x0, 0x0, 0x0, 0xf0, 0x7f, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf8, 0x1f, 0x7f, 0x0, 0x0, 0x0, 0x0,
                                            0x0, 0xfc, 0xf, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x7, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff,
                                            0x3, 0x7f, 0x0, 0x0, 0x0, 0x0, 0xc0, 0xff, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0xe0, 0x7f, 0x0, 0x7f,
                                            0x0, 0x0, 0x0, 0x0, 0xf0, 0x3f, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0xf8, 0x1f, 0x0, 0x7f, 0x0, 0x0,
                                            0x0, 0x0, 0xfc, 0xf, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0xff, 0x3, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x80,
                                            0xff, 0x1, 0x0, 0x7f, 0x0, 0x0, 0x0, 0xc0, 0xff, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0xe0, 0x7f, 0x0,
                                            0x0, 0x7f, 0x0, 0x0, 0x0, 0xf0, 0x3f, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0xfc, 0xf, 0x0, 0x0, 0x7f,
                                            0x0, 0x0, 0x0, 0xfe, 0x7, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0xff, 0x3, 0x0, 0x0, 0x7f, 0x0, 0x0,
                                            0x80, 0xff, 0x1, 0x0, 0x0, 0x7f, 0x0, 0x0, 0xe0, 0xff, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0xf0, 0x3f,
                                            0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0xf8, 0x1f, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0xfc, 0xf, 0x0, 0x0,
                                            0x0, 0x7f, 0x0, 0x0, 0xfe, 0x7, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                                            0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                                            0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0x0,
                                            0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                            0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f,
                                            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0x0, 0x0},
                                            {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0xff, 0xff, 0x0, 0xc0, 0x7f, 0x0, 0xff, 0xff,
                                            0xff, 0xff, 0x0, 0x80, 0xff, 0x0, 0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0xff, 0x1, 0xff, 0xff, 0xff, 0xff,
                                            0x0, 0x0, 0xfe, 0x1, 0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0xfe, 0x3, 0xff, 0xff, 0xff, 0x7f, 0x0, 0x0,
                                            0xfc, 0x7, 0x3f, 0x0, 0xc0, 0x3f, 0x0, 0x0, 0xf8, 0x7, 0x3f, 0x0, 0xe0, 0x3f, 0x0, 0x0, 0xf8, 0xf,
                                            0x3f, 0x0, 0xe0, 0x1f, 0x0, 0x0, 0xf0, 0xf, 0x3f, 0x0, 0xe0, 0x1f, 0x0, 0x0, 0xe0, 0x1f, 0x3f, 0x0,
                                            0xf0, 0xf, 0x0, 0x0, 0xe0, 0x1f, 0x3f, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xc0, 0x1f, 0x3f, 0x0, 0xf0, 0x7,
                                            0x0, 0x0, 0xc0, 0x1f, 0x3f, 0x0, 0xf0, 0x7, 0x0, 0x0, 0xc0, 0x1f, 0x3f, 0x0, 0xf0, 0x7, 0x0, 0x0,
                                            0x80, 0x1f, 0x3f, 0x0, 0xf8, 0x7, 0x0, 0x0, 0x80, 0x1f, 0x3f, 0x0, 0xf8, 0x3, 0x0, 0x0, 0x80, 0x3f,
                                            0x3f, 0x0, 0xf8, 0x3, 0x0, 0x0, 0x0, 0x3f, 0x3f, 0x0, 0xf8, 0x3, 0x0, 0x0, 0x0, 0x3f, 0x3f, 0x0,
                                            0xf8, 0x3, 0x0, 0x0, 0x0, 0x3f, 0x3f, 0x0, 0xf8, 0x3, 0x0, 0x0, 0x0, 0x3f, 0x3f, 0x0, 0xf8, 0x3,
                                            0x0, 0x0, 0x0, 0x3f, 0x3f, 0x0, 0xf8, 0x3, 0x0, 0x0, 0x0, 0x3f, 0x3f, 0x0, 0xf8, 0x3, 0x0, 0x0,
                                            0x0, 0x3f, 0x3f, 0x0, 0xf8, 0x3, 0x0, 0x0, 0x0, 0x3f, 0x3f, 0x0, 0xf8, 0x3, 0x0, 0x0, 0x0, 0x3f,
                                            0x3f, 0x0, 0xf0, 0x7, 0x0, 0x0, 0x80, 0x1f, 0x3f, 0x0, 0xf0, 0x7, 0x0, 0x0, 0x80, 0x1f, 0x3f, 0x0,
                                            0xf0, 0x7, 0x0, 0x0, 0x80, 0x1f, 0x3f, 0x0, 0xf0, 0xf, 0x0, 0x0, 0xc0, 0x1f, 0x3f, 0x0, 0xe0, 0xf,
                                            0x0, 0x0, 0xc0, 0x1f, 0x3f, 0x0, 0xe0, 0x1f, 0x0, 0x0, 0xe0, 0x1f, 0x3f, 0x0, 0xc0, 0x1f, 0x0, 0x0,
                                            0xf0, 0x1f, 0x3f, 0x0, 0xc0, 0x3f, 0x0, 0x0, 0xf8, 0xf, 0x3f, 0x0, 0x80, 0x7f, 0x0, 0x0, 0xfc, 0x7,
                                            0x3f, 0x0, 0x80, 0xff, 0x0, 0x0, 0xfe, 0x7, 0x3f, 0x0, 0x0, 0xff, 0x3, 0x80, 0xff, 0x3, 0x3f, 0x0,
                                            0x0, 0xfe, 0xf, 0xf0, 0xff, 0x1, 0x3f, 0x0, 0x0, 0xfc, 0xff, 0xff, 0xff, 0x0, 0x3f, 0x0, 0x0, 0xf8,
                                            0xff, 0xff, 0x7f, 0x0, 0x0, 0x0, 0x0, 0xe0, 0xff, 0xff, 0x1f, 0x0, 0x0, 0x0, 0x0, 0xc0, 0xff, 0xff,
                                            0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xff, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x3f, 0x0, 0x0},
                                            {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                            0x0, 0xfe, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0xff, 0xff, 0xf, 0x0, 0x0, 0x0, 0x0, 0xfe, 0xff,
                                            0xff, 0x7f, 0x0, 0x0, 0x0, 0xc0, 0xff, 0xff, 0xff, 0xff, 0x3, 0x0, 0x0, 0xf0, 0xff, 0xff, 0xff, 0xff,
                                            0xf, 0x0, 0x0, 0xf8, 0xff, 0xf8, 0xf, 0xff, 0x1f, 0x0, 0x0, 0xfe, 0xf, 0xf8, 0x7, 0xf0, 0x7f, 0x0,
                                            0x0, 0xff, 0x3, 0xfc, 0x3, 0xc0, 0xff, 0x0, 0x80, 0xff, 0x0, 0xfe, 0x1, 0x0, 0xff, 0x1, 0xc0, 0x3f,
                                            0x0, 0xfe, 0x1, 0x0, 0xfe, 0x3, 0xe0, 0x1f, 0x0, 0xff, 0x0, 0x0, 0xf8, 0x7, 0xf0, 0xf, 0x0, 0x7f,
                                            0x0, 0x0, 0xf0, 0xf, 0xf8, 0x7, 0x80, 0x7f, 0x0, 0x0, 0xe0, 0x1f, 0xf8, 0x3, 0x80, 0x3f, 0x0, 0x0,
                                            0xc0, 0x3f, 0xfc, 0x3, 0xc0, 0x3f, 0x0, 0x0, 0xc0, 0x3f, 0xfc, 0x1, 0xc0, 0x1f, 0x0, 0x0, 0x80, 0x7f,
                                            0xfc, 0x1, 0xc0, 0x1f, 0x0, 0x0, 0x0, 0x7f, 0xfe, 0x1, 0xe0, 0x1f, 0x0, 0x0, 0x0, 0x7f, 0xfe, 0x0,
                                            0xe0, 0xf, 0x0, 0x0, 0x0, 0xff, 0xfe, 0x0, 0xe0, 0xf, 0x0, 0x0, 0x0, 0xfe, 0xfe, 0x0, 0xe0, 0xf,
                                            0x0, 0x0, 0x0, 0xfe, 0xfe, 0x0, 0xe0, 0xf, 0x0, 0x0, 0x0, 0xfe, 0xfe, 0x0, 0xe0, 0xf, 0x0, 0x0,
                                            0x0, 0xfe, 0xfe, 0x0, 0xe0, 0xf, 0x0, 0x0, 0x0, 0xfe, 0xfe, 0x0, 0xe0, 0xf, 0x0, 0x0, 0x0, 0xfe,
                                            0xfe, 0x1, 0xe0, 0xf, 0x0, 0x0, 0x0, 0xfe, 0xfc, 0x1, 0xe0, 0x1f, 0x0, 0x0, 0x0, 0xfe, 0xfc, 0x3,
                                            0xc0, 0x1f, 0x0, 0x0, 0x0, 0x7f, 0xfc, 0x3, 0xc0, 0x1f, 0x0, 0x0, 0x0, 0x7f, 0xf8, 0x7, 0xc0, 0x3f,
                                            0x0, 0x0, 0x80, 0x7f, 0xf8, 0xf, 0x80, 0x7f, 0x0, 0x0, 0xc0, 0x3f, 0xf0, 0x1f, 0x0, 0xff, 0x0, 0x0,
                                            0xe0, 0x3f, 0xe0, 0x3f, 0x0, 0xff, 0x1, 0x0, 0xf0, 0x1f, 0xe0, 0x7f, 0x0, 0xfe, 0x3, 0x0, 0xf8, 0x1f,
                                            0xc0, 0xff, 0x0, 0xfc, 0xf, 0x0, 0xfe, 0xf, 0x80, 0xff, 0x1, 0xf8, 0x3f, 0x80, 0xff, 0x7, 0x0, 0xff,
                                            0x1, 0xf0, 0xff, 0xff, 0xff, 0x1, 0x0, 0x7c, 0x0, 0xc0, 0xff, 0xff, 0xff, 0x0, 0x0, 0x18, 0x0, 0x80,
                                            0xff, 0xff, 0x3f, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfc, 0xff, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe0, 0xff,
                                            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
                                            {0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0,
                                            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0,
                                            0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
                                            0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x40, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x70,
                                            0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7c, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xfe, 0x0,
                                            0x0, 0x0, 0x0, 0x0, 0xc0, 0x7f, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf0, 0x7f, 0xfe, 0x0, 0x0, 0x0,
                                            0x0, 0x0, 0xfc, 0x7f, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0x3f, 0xfe, 0x0, 0x0, 0x0, 0x0, 0xc0,
                                            0xff, 0xf, 0xfe, 0x0, 0x0, 0x0, 0x0, 0xf0, 0xff, 0x3, 0xfe, 0x0, 0x0, 0x0, 0x0, 0xfc, 0xff, 0x0,
                                            0xfe, 0x0, 0x0, 0x0, 0x0, 0xff, 0x3f, 0x0, 0xfe, 0x0, 0x0, 0x0, 0xc0, 0xff, 0xf, 0x0, 0xfe, 0x0,
                                            0x0, 0x0, 0xf0, 0xff, 0x3, 0x0, 0xfe, 0x0, 0x0, 0x0, 0xfc, 0xff, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0,
                                            0xff, 0x3f, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xe0, 0xff, 0xf, 0x0, 0x0, 0xfe, 0x0, 0x0, 0xf8, 0xff, 0x3,
                                            0x0, 0x0, 0xfe, 0x0, 0x0, 0xfe, 0xff, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x80, 0xff, 0x3f, 0x0, 0x0, 0x0,
                                            0xfe, 0x0, 0xe0, 0xff, 0xf, 0x0, 0x0, 0x0, 0xfe, 0x0, 0xf8, 0xff, 0x3, 0x0, 0x0, 0x0, 0xfe, 0x0,
                                            0xfe, 0xff, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x80, 0xff, 0x3f, 0x0, 0x0, 0x0, 0x0, 0xfe, 0xe0, 0xff, 0xf,
                                            0x0, 0x0, 0x0, 0x0, 0xfe, 0xf8, 0xff, 0x3, 0x0, 0x0, 0x0, 0x0, 0xfe, 0xfe, 0xff, 0x0, 0x0, 0x0,
                                            0x0, 0x0, 0xfe, 0xff, 0x3f, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0xff, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0,
                                            0xfe, 0xff, 0x3, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x3f,
                                            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0x3, 0x0, 0x0,
                                            0x0, 0x0, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3e, 0x0, 0x0, 0x0, 0x0, 0x0,
                                            0x0, 0x0, 0xe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
                                            {0x0, 0x0, 0x0, 0x0, 0x80, 0xff, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf8, 0xff, 0xf, 0x0, 0x0, 0x0,
                                            0x0, 0x0, 0xfe, 0xff, 0x3f, 0x0, 0x0, 0xe0, 0x1f, 0x0, 0xff, 0xff, 0xff, 0x0, 0x0, 0xfc, 0xff, 0x80,
                                            0xff, 0xff, 0xff, 0x1, 0x0, 0xff, 0xff, 0xc1, 0xff, 0xff, 0xff, 0x3, 0x80, 0xff, 0xff, 0xe7, 0xff, 0x80,
                                            0xff, 0x7, 0xc0, 0xff, 0xff, 0xff, 0x1f, 0x0, 0xfc, 0xf, 0xe0, 0xff, 0xff, 0xff, 0xf, 0x0, 0xf8, 0xf,
                                            0xf0, 0x3f, 0xf0, 0xff, 0x7, 0x0, 0xe0, 0x1f, 0xf0, 0xf, 0xe0, 0xff, 0x3, 0x0, 0xe0, 0x3f, 0xf8, 0x7,
                                            0xc0, 0xff, 0x3, 0x0, 0xc0, 0x3f, 0xf8, 0x3, 0x80, 0xff, 0x1, 0x0, 0x80, 0x3f, 0xfc, 0x3, 0x80, 0xff,
                                            0x1, 0x0, 0x80, 0x7f, 0xfc, 0x1, 0x0, 0xff, 0x1, 0x0, 0x0, 0x7f, 0xfc, 0x1, 0x0, 0xff, 0x1, 0x0,
                                            0x0, 0x7f, 0xfe, 0x1, 0x0, 0xff, 0x0, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0xfe,
                                            0xfe, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0xfe, 0xfe, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0xfe, 0xfe, 0x0,
                                            0x0, 0xfe, 0x0, 0x0, 0x0, 0xfe, 0xfe, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0xfe, 0xfe, 0x0, 0x0, 0xfe,
                                            0x0, 0x0, 0x0, 0xfe, 0xfe, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0xfe, 0xfe, 0x0, 0x0, 0xfe, 0x0, 0x0,
                                            0x0, 0xfe, 0xfe, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0xfe, 0xfe, 0x0, 0x0, 0xfe, 0x0, 0x0, 0x0, 0xfe,
                                            0xfe, 0x1, 0x0, 0xff, 0x0, 0x0, 0x0, 0xff, 0xfc, 0x1, 0x0, 0xff, 0x1, 0x0, 0x0, 0x7f, 0xfc, 0x1,
                                            0x0, 0xff, 0x1, 0x0, 0x0, 0x7f, 0xfc, 0x3, 0x80, 0xff, 0x1, 0x0, 0x80, 0x7f, 0xf8, 0x3, 0x80, 0xff,
                                            0x1, 0x0, 0x80, 0x3f, 0xf8, 0x7, 0xc0, 0xff, 0x3, 0x0, 0xc0, 0x3f, 0xf0, 0xf, 0xe0, 0xff, 0x3, 0x0,
                                            0xc0, 0x3f, 0xf0, 0x3f, 0xf8, 0xff, 0x7, 0x0, 0xe0, 0x1f, 0xe0, 0xff, 0xff, 0xff, 0xf, 0x0, 0xf0, 0xf,
                                            0xc0, 0xff, 0xff, 0xff, 0x1f, 0x0, 0xfc, 0xf, 0x80, 0xff, 0xff, 0xe7, 0xff, 0x0, 0xff, 0x7, 0x0, 0xff,
                                            0xff, 0xc1, 0xff, 0xff, 0xff, 0x3, 0x0, 0xfc, 0xff, 0x80, 0xff, 0xff, 0xff, 0x1, 0x0, 0xe0, 0x1f, 0x0,
                                            0xff, 0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfe, 0xff, 0x3f, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf8, 0xff,
                                            0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0xc0, 0xff, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
                                            {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
                                            0xfe, 0xf, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe0, 0xff, 0x7f, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf8, 0xff, 0xff,
                                            0x3, 0x0, 0x30, 0x0, 0x0, 0xfe, 0xff, 0xff, 0x7, 0x0, 0x7c, 0x0, 0x0, 0xff, 0xff, 0xff, 0x1f, 0x0,
                                            0xff, 0x1, 0xc0, 0xff, 0x3, 0xf8, 0x3f, 0x0, 0xff, 0x3, 0xe0, 0xff, 0x0, 0xe0, 0x7f, 0x0, 0xfe, 0x7,
                                            0xf0, 0x3f, 0x0, 0x80, 0xff, 0x0, 0xfc, 0xf, 0xf0, 0x1f, 0x0, 0x0, 0xff, 0x1, 0xf8, 0xf, 0xf8, 0xf,
                                            0x0, 0x0, 0xfe, 0x1, 0xf0, 0x1f, 0xf8, 0x7, 0x0, 0x0, 0xfc, 0x3, 0xe0, 0x3f, 0xfc, 0x3, 0x0, 0x0,
                                            0xf8, 0x7, 0xc0, 0x3f, 0xfc, 0x1, 0x0, 0x0, 0xf0, 0x7, 0x80, 0x7f, 0xfc, 0x1, 0x0, 0x0, 0xf0, 0x7,
                                            0x80, 0x7f, 0xfe, 0x0, 0x0, 0x0, 0xf0, 0xf, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0x0, 0xe0, 0xf, 0x0, 0xff,
                                            0xfe, 0x0, 0x0, 0x0, 0xe0, 0xf, 0x0, 0xfe, 0xfe, 0x0, 0x0, 0x0, 0xe0, 0xf, 0x0, 0xfe, 0xfe, 0x0,
                                            0x0, 0x0, 0xe0, 0xf, 0x0, 0xfe, 0xfe, 0x0, 0x0, 0x0, 0xe0, 0xf, 0x0, 0xfe, 0xfe, 0x0, 0x0, 0x0,
                                            0xe0, 0xf, 0x0, 0xfe, 0xfe, 0x0, 0x0, 0x0, 0xe0, 0xf, 0x0, 0xfe, 0xfe, 0x1, 0x0, 0x0, 0xe0, 0xf,
                                            0x0, 0xfe, 0xfc, 0x1, 0x0, 0x0, 0xf0, 0xf, 0x0, 0xff, 0xfc, 0x1, 0x0, 0x0, 0xf0, 0x7, 0x0, 0x7f,
                                            0xfc, 0x3, 0x0, 0x0, 0xf0, 0x7, 0x0, 0x7f, 0xf8, 0x7, 0x0, 0x0, 0xf8, 0x7, 0x80, 0x7f, 0xf8, 0x7,
                                            0x0, 0x0, 0xf8, 0x3, 0x80, 0x3f, 0xf0, 0xf, 0x0, 0x0, 0xfc, 0x3, 0xc0, 0x3f, 0xe0, 0x1f, 0x0, 0x0,
                                            0xfc, 0x1, 0xe0, 0x1f, 0xc0, 0x3f, 0x0, 0x0, 0xfe, 0x1, 0xf0, 0xf, 0x80, 0xff, 0x0, 0x0, 0xff, 0x0,
                                            0xf8, 0x7, 0x0, 0xff, 0x1, 0x0, 0xff, 0x0, 0xfe, 0x3, 0x0, 0xfe, 0x7, 0x80, 0x7f, 0x80, 0xff, 0x1,
                                            0x0, 0xfc, 0x1f, 0xc0, 0x3f, 0xe0, 0xff, 0x0, 0x0, 0xf0, 0xff, 0xe1, 0x3f, 0xfe, 0x3f, 0x0, 0x0, 0xe0,
                                            0xff, 0xff, 0xff, 0xff, 0x1f, 0x0, 0x0, 0x80, 0xff, 0xff, 0xff, 0xff, 0x7, 0x0, 0x0, 0x0, 0xfc, 0xff,
                                            0xff, 0xff, 0x0, 0x0, 0x0, 0x0, 0xe0, 0xff, 0xff, 0x1f, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfc, 0xff, 0x0,
                                            0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}
                                           };

const unsigned char smallDigits[][140] PROGMEM = {{0x0, 0x0, 0xfe, 0x1, 0x0, 0x0, 0xe0, 0xff, 0x1f,
                                                   0x0, 0x0, 0xf8, 0xff, 0x7f, 0x0, 0x0, 0xfe, 0x0,
0xfc, 0x1, 0x0, 0x1f, 0x0, 0xe0, 0x3, 0x80, 0xf, 0x0, 0xc0, 0x7, 0xc0, 0x7, 0x0, 0x80, 0xf, 0xe0,
0x3, 0x0, 0x0, 0x1f, 0xe0, 0x1, 0x0, 0x0, 0x1e, 0xe0, 0x0, 0x0, 0x0, 0x1c, 0xf0, 0x0, 0x0, 0x0,
0x3c, 0xf0, 0x0, 0x0, 0x0, 0x3c, 0xf0, 0x0, 0x0, 0x0, 0x3c, 0xf0, 0x0, 0x0, 0x0, 0x3c, 0xf0, 0x0,
0x0, 0x0, 0x3c, 0xe0, 0x0, 0x0, 0x0, 0x1c, 0xe0, 0x1, 0x0, 0x0, 0x1e, 0xe0, 0x3, 0x0, 0x0, 0x1f,
0xc0, 0x7, 0x0, 0x80, 0xf, 0x80, 0xf, 0x0, 0xc0, 0x7, 0x0, 0x1f, 0x0, 0xe0, 0x3, 0x0, 0xfe, 0x0,
0xfc, 0x1, 0x0, 0xf8, 0xff, 0x7f, 0x0, 0x0, 0xe0, 0xff, 0x1f, 0x0, 0x0, 0x0, 0xfe, 0x1, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0},
{0x10, 0x0, 0x10, 0x40, 0x0, 0xf0, 0xff, 0x3f, 0xc0, 0x7, 0xf0, 0xff, 0x3f, 0x80, 0x7, 0xf0, 0xff, 0x1f,
0x80, 0xf, 0x70, 0x0, 0xf, 0x0, 0x1f, 0x70, 0x80, 0xf, 0x0, 0x1e, 0x70, 0x80, 0x7, 0x0, 0x1e, 0x70,
0x80, 0x7, 0x0, 0x1c, 0x70, 0x80, 0x7, 0x0, 0x1c, 0x70, 0xc0, 0x3, 0x0, 0x3c, 0x70, 0xc0, 0x3, 0x0,
0x38, 0x70, 0xc0, 0x3, 0x0, 0x38, 0x70, 0xc0, 0x3, 0x0, 0x38, 0x70, 0xc0, 0x3, 0x0, 0x38, 0x70, 0x80,
0x7, 0x0, 0x3c, 0x70, 0x80, 0x7, 0x0, 0x1c, 0x70, 0x80, 0x7, 0x0, 0x1c, 0x70, 0x0, 0xf, 0x0, 0x1e,
0x70, 0x0, 0x1f, 0x0, 0x1f, 0x70, 0x0, 0x3e, 0x80, 0xf, 0x70, 0x0, 0xfc, 0xf0, 0x7, 0x70, 0x0, 0xf8,
0xff, 0x3, 0x0, 0x0, 0xf0, 0xff, 0x1, 0x0, 0x0, 0x80, 0x3f, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}};

#endif // DIGITS_H

