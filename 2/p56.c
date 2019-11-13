#include <stdio.h>

double harmonic_mean(double, double);

int main() {
	double x, y;

	while (scanf("%lf %lf", &x, &y) == 2) {
		printf("%.3lf\n", harmonic_mean(x, y));
	}

	return 0;
}

double harmonic_mean(double x, double y) {

	return 2 / (1 / x + 1 / y);
}