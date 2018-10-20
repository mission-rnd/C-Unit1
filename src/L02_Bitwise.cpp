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
