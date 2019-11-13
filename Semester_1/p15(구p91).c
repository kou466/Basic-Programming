#include <stdio.h>

int main() {

	double a, b, c, d, e, f;
	double x, y;

	scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

	x = a + (c * e + d * f) / (e * e + f * f);
	y = b + (d * e - c * f) / (e * e + f * f);

	if ((e * e + f * f) == 0)
		printf("X");
	else
		printf("%.2lf %.2lf", x, y);

	return 0;
}