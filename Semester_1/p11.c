#include <stdio.h>

int main() {
	double a, b, c, d, sum;
	double per;

	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

	sum = a + b + c + d;
	per = d / sum * 100;

	printf("%.2lf%%", per);

	return 0;
}