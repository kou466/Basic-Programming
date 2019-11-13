#include <stdio.h>
#include <math.h>

int main() {

	double a, b, c, s;
	double x;

	scanf("%lf %lf %lf", &a, &b, &c);

	s = (a + b + c) / 2;
	x = sqrt(s * (s - a) * (s - b) * (s - c));

	if (a + b < c || a + c < b || b + c < a) {
		printf("Not a Triangle");
	}
	else {
		printf("%.2lf", x);
	}

	return 0;
}