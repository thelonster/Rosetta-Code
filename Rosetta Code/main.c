unsigned sumDigits(unsigned x) {
	unsigned sum, y;
	while (x) {
		y = x % 10;
		sum += y;
		x /= 10;
	}
	return sum;
}

unsigned sumFactors(int* arr, int size) {
	unsigned sum;
	for (int a = 0; a < size; a++)
		sum += arr[0];
	return sum;
}

int main() {
	return 0;
}