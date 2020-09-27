#include <16F877A.h>
#device ADC=16

#FUSES NOWDT                 	//No Watch Dog Timer
#FUSES NOLVP                 	//No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O

#use delay(crystal=20000000)

#define LED PIN_A0
#define DELAY 1000


