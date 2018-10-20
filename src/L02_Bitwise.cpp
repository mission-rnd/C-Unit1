//
//  L02_Bitwise.h
//  Unit1_lesson2_understanding_bitwise
//


// binary operations

int xorAB(int a, int b) {
	return (a^b);
}

int xorBA(int a, int b) {
	return (b^a);
}

int xorAA(int a) {
	return (a^a);
}

int xorBB(int b) {
	return (b^b);
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


int turnOnNthBit(unsigned int bitFlags, int n) {
	int res = bitFlags;
	res = res | (1 << n);
	return res;
}

int xorNumbers(int numbers[], int size) {
    int xorOfAll = numbers[0];
    for (int i = 1; i < size; i++) {
        xorOfAll = xorOfAll ^ numbers[i];
    }
    return xorOfAll;
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
