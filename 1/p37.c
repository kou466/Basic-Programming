#include <stdio.h>

int main(void) {
	long long int limit;
	double sign = 1.0;
	double s1 = 0, s2 = 0;

	scanf("%lld", &limit);

	for (long long int i = 1; i <= limit; i++) {
		s1 += 1.0 / i;
		s2 += (1.0 / i) * sign;
		sign = -sign;
	}

	printf("%.5lf %.5lf\n", s1, s2);

	return 0;
}