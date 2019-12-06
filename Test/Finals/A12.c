#include <stdio.h>

int main() {
	double principal, interest;
	int n;

	scanf("%lf %lf %d", &principal, &interest, &n);

	while (n > 0) {
		principal += principal * interest;
		n--;
	}
	printf("%.5lf", principal);

	return 0;
}