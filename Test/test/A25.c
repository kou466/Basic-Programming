#include <stdio.h>

unsigned long long Fibonacci(unsigned long long);

int main() {
	long long int n;

	while (scanf("%lld", &n) == 1) {
		if (n > -1)
			printf("#%lld: %llu\n", n, Fibonacci(n));
		else
			break;
	}
	return 0;
}

unsigned long long Fibonacci(unsigned long long n) {

	if (n < 0) {
		return -1;
	}
	if (n == 0) return 0;
	if (n == 1) return 1;
	if (n == 2) return 1;

	long long int a = 1, b = 1, c;

	for (int i = 3; i <= n; i++) {
		c = b;
		b = a;
		a = b + c;
	}
	return a;
}