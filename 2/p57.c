#include <stdio.h>

void func(double *a, double *b, double *c);

int main() {
	double a, b, c;

	while (scanf("%lf %lf %lf", &a, &b, &c) == 3) {

		func(&a, &b, &c);

		printf("%lf %lf %lf\n", a, b, c);
	}
	return 0;
}

void func(double *a, double *b, double *c) {
	double tmp;

	if (*a > *b) {
		tmp = *b;
		*b = *a;
		*a = tmp;
	}

	if (*b > *c) {
		tmp = *c;
		*c = *b;
		*b = tmp;

		if (*a > * b) {
			tmp = *b;
			*b = *a;
			*a = tmp;
		}
	}
}