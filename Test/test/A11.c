#include <stdio.h>

int main() {
	double x, y = 1;
	double s1, sign = -1.0;
	int n;

	scanf("%lf %d", &x, &n);

	y = x * x;
	s1 = x;

	for (int i = 2; i <= n; i ++) {
		s1 += (y / i) * sign;
		sign = -sign;
		y = y * x;
	}

	printf("%.5lf", s1);

	return 0;
}