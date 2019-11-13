#include <stdio.h>

int main()
{
	double C, F, K;

	scanf("%lf", &K);

	C = K - 273.16;
	F = 9.0 * C / 5.0 + 32.0;

	printf("%.2lf %.2lf", F, C);

	return 0;
}