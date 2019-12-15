#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c;
	double x1, x2;
	double d;

	while (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
		d = b * b - 4.0 * a * c;

		if (d > 0) {
			x1 = (-b + sqrt(d)) / (2.0 * a);
			x2 = (-b - sqrt(d)) / (2.0 * a);
			printf("%.3lf %.3lf\n", x1, x2);
		}
		else if (d == 0) {
			x1 = -b / (2.0 * a);
			printf("%.3lf\n", x1);
		}
		else {
			printf("Imaginary root\n");
		}
	}
	return 0;
}