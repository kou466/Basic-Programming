#include <stdio.h>

int main() {
	int n1, n2;
	int gcd = 0;

	scanf("%d %d", &n1, &n2);

	for (int i = 1; i <= n1; i++) {
		if (n1 % i == 0 && n2 % i == 0) {
			gcd = i;
		}
	}
	printf("%d", gcd);

	return 0;
}