#include <stdio.h>

int main() {
	long long int n, m = 0;
	long long int s = 0;

	scanf("%lld", &n);

	for (int i = 1; i <= n; i++) {
		m = m + 1000;
		s = s + m;
	}
	printf("%lld", s);
}