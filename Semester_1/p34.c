#include <stdio.h>

int main(void) {
	float a, b;

	while (scanf("%f %f", &a, &b) == 2) {
		printf("%.3f\n", (a - b) / (a * b));
	}
	return 0;
}