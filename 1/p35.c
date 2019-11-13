#include <stdio.h>

int square(int lower, int upper);

int main(void) {
	int lower, upper;

	while (scanf("%d %d", &lower, &upper) == 2 && lower < upper) {
		printf("%d", square(lower, upper));
		printf("\n");
	}

	return 0;
}

int square(int lower, int upper) {
	int sum = 0;

	for (int i = lower; i <= upper; i++) {
		sum += i * i;
	}
	return sum;
}