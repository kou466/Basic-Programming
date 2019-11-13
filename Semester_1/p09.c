#include <stdio.h>

int main() {
	double quart;

	scanf("%lf", &quart);
	printf("%e", quart * 950 / 3.0e-23);

	return 0;
}