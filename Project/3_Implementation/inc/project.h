#ifndef PROJECT_H_
#define PROJECT_H_

#ifndef __AVR_ATmega32__
#define __AVR_ATmega32__
#endif

#include <avr/io.h>     //header to enable data flow control over pins
#define F_CPU 1000000   // telling controller crystal frequency attached
#include <util/delay.h> //header to enable delay function in program
#endif