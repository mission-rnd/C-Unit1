//
//  L02_Bitwise.h
//  Unit1_lesson2_understanding_bitwise
//

//
// Bitwise operations
//

//
// Note:
// Bitwise operations are necessary particularly in lower-level
// programming such as device drivers, low-level graphics,
// communications protocol packet assembly, and decoding.
//
// Follow these guidelines
// 00. Don't change code of any function in this file,
//     expect write the comments in function: three_things_i_learnt().
// 01. Understand everything in this wiki page:
//     https://en.wikipedia.org/wiki/Bitwise_operations_in_C
// 10. Your goal is to fill in the blanks in L02_BitwiseSpec.cpp file.
// 11. For any doubts post on the forum.
//


//
// Note#1:
// XOR is used in multiple applications in Computer Science
// for some examples check this wiki page
// https://en.wikipedia.org/wiki/Exclusive_or#Bitwise_operation
//
int xorAB(int a, int b) {
	return (a^b);
}

int xorBA(int a, int b) {
	return (b^a);
}

int xorAA(int a) {
	return (a^a);
}

int xorAZero(int a) {
	return (a ^ 0);
}

int xorABA(int a, int b) {
	return (a^b^a);
}

int xorAAB(int a, int b) {
	return (a^a^b);
}

int xorNumbers(int numbers[], int size) {
    int xorOfAll = numbers[0];
    for (int i = 1; i < size; i++) {
        xorOfAll = xorOfAll ^ numbers[i];
    }
    return xorOfAll;
}

//
// Range of n is
//  0 <= n <= 31
//
unsigned int turnOnNthBit(unsigned int bitFlags, int n) {
	unsigned int res = bitFlags;
	res = res | (1 << n);
	return res;
}

//
// Return
//  2 power n.
//
int twoPowerN(int n) {
	return (1 << n);
}

//
// Returns
//  1 - odd
//  0 - even
//
int isOdd(int n) {
	return (n & 0x1);
}

//
// Returns
//  1 - even
//  0 - odd
//
int isEven(int n) {
	if (isOdd(n)) {
		return 0;
	}
	return 1;
}


unsigned int leastSignificantByte(unsigned int n) {
    return n & 0xFF;
}

unsigned int mostSignificantByte(unsigned int n) {
    n = n >> 12;
    return leastSignificantByte(n);
}

static void three_things_i_learnt() {
    /*
     -
     -
     -
     */
}
