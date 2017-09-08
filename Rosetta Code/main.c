unsigned sumDigits(unsigned x) {
	unsigned sum, y;
	while (x) {
		y = x % 10;
		sum += y;
		x /= 10;
	}
	return sum;
}

int main() {
	return 0;
}