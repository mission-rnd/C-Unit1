//
//  L01_Functions.cpp
//  Unit1_lesson1_understanding_functions
//

/*

 Note:
 In this lesson we will understand how things work in the context of function
 - functions without arguments
 - functions with (local) argument variables
 - return keyword in void functions
 - changing loop index variable inside for loop

*/

int numberOfPeople() {
    return 662;
}

double centimetersPerInch() {
	return 2.4;
}


void swap(int a, int b) {
    int temp = a;
    a = b;
    b = a;
    return;
}


int tenTimes(int n) {
    return 10*n;
}

void tenTimesVector3(int vector[3]) {
    vector[0] = tenTimes         (vector[0]);
    vector[1] = tenTimes  (     vector[1]   );
    vector[2] = tenTimes(vector[2]);
}

int numberOfPrimeFactors(int n) {
    int primeFactors = 0;
    int prime = 2;
    while (n > 0) {
        if (n % prime == 0) {
            primeFactors += 1;
        }
        
        while (n % prime == 0) {
            n = n/prime;
        }
        prime++;
    }
    return primeFactors;
}

void primeFactorsVector(int vector[], int size) {
    for (int i = 0; i < size; i++) {
        vector[i] = numberOfPrimeFactors(vector[i]);
    }
}

void numberToString(int n, char arr[12]) {
    
    if (n == 0) {
        arr[0] = '0';
        arr[1] = '\0';
        return;
    }
    
    int index = 0;
    if (n < 0 ) {
        arr[0] = '-';
        index = 1;
        n = -n;
    }
    
    int reverse = 0;
    for (; n > 0; n = n/10) {
        reverse = reverse + n%10;
    }
    
    for (n = reverse; n > 0; index++) {
        arr[index] = '0' + n%10;
        n = n/10;
    }
    arr[index] = '\0';
}

//
// Mysterious function
// find out these functions behaviour
//
void nTimesMysteryVectorN(int n, int vector[], int size) {
    for (int i = 0; i < size; i++) {
        vector[i] = n * vector[i];
        if (vector[i] == size) {
            return;
        }
    }
}

int sigmaNWithMystery(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
        i = i + 3;
    }
    return sum;
}

void tenTimesMysteryVectorN(int vector[], int size) {
    for (int i = 0; i < size; i++) {
        vector[i] = tenTimes(vector[i]);
        i = i + 2;
    }
}

static void three_things_i_learnt() {
    /*
     -
     -
     -
     */
}
