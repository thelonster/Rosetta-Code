#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int numPrimeFactors(unsigned x) {
	unsigned p = 2;
	int pf;
	if (x == 1)
		return 1;
	else {
		while (true) {
			if (!(x % p)) {
				++pf;
				x /= p;
				if (x == 1)
					return pf;
			}
			else
				++p;
		}
	}
}

unsigned sumDigits(unsigned x) {
	unsigned sum, y;
	while (x) {
		y = x % 10;
		sum += y;
		x /= 10;
	}
	return sum;
}

unsigned sumFactors(unsigned* arr, int size) {
	unsigned sum;
	for (int a = 0; a < size; a++)
		sum += arr[0];
	return sum;
}

int main() {
	return 0;
}