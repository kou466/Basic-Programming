#include <stdio.h>

int main() {
	long long int n, m, s, l;
	long long int sum = 0;
	
	scanf("%lld %lld", &n, &m);

	s = n - m;
	l = n + m;

	for (; s <= l; s++) {
		sum += s;
	}
	printf("%lld", sum);
}