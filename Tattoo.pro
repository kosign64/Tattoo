TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    er-display_lib.c \
    init.c \
    main.c \
    spi_lib.c

HEADERS += \
    battery.h \
    chipName.h \
    digits.h \
    er-display_lib.h \
    images.h \
    init.h \
    spi_lib.h

INCLUDEPATH += "/usr/lib/avr/include"

DEFINES += __AVR_ATmega8
