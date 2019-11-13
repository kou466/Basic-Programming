#include <stdio.h>

int main() {
	int n;
	int num;
	long long int sum = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		sum += num;
	}
	printf("%lld\n", sum);

	return 0;
}