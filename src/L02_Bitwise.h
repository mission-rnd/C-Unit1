//
//  L02_Bitwise.h
//  Unit1_lesson2_understanding_bitwise
//

#ifndef L02_Bitwise_h
#define L02_Bitwise_h

int xorAB(int a, int b);
int xorBA(int a, int b);
int xorAA(int a);
int xorAZero(int a);
int xorABA(int a, int b);
int xorAAB(int a, int b);
int xorNumbers(int numbers[], int size);

unsigned int turnOnNthBit(unsigned int bitFlags, int n);
int twoPowerN(int n);
int isOdd(int n);
int isEven(int n);

unsigned int leastSignificantByte(unsigned int n);
unsigned int mostSignificantByte(unsigned int n);

#endif /* L02_Bitwise_h */
