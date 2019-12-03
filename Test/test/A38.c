#include <stdio.h>

int main() {
	int n, cnt1 = 0, cnt2 = 0;

	scanf("%d", &n);

	while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
			cnt1++;
		}
		else {
			n = 3 * n + 1;
			cnt2++;
		}
	}
	printf("%d", cnt1 + cnt2 - 1);

	return 0;
 }