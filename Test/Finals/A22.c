#include <stdio.h>

double harmonic(double x[], int n);

int main() {
	int n;
	double rn[1000] = { 0, };

	while (scanf("%d", &n) && n != 0) {
		for (int i = 0; i < n; i++) {
			scanf("%lf", &rn[i]);
		}
		printf("%.3lf\n", harmonic(rn, n));
	}

	return 0;
}

double harmonic(double x[], int n) {
	double sum = 0.0;
	for (int i = 0; i < n; i++) {
		double a = 1.0 / x[i];
		sum += a;
	}
	return (n / sum);
}