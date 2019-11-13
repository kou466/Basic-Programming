#include <stdio.h>
int main() {
	int n;
	int cnt1, cnt2 = 0;

	scanf("%d", &n);

	for (int i = 2; i <= n; i++) {
		cnt1 = 0;

		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				cnt1++;
			}
		}
		if (cnt1 == 2) {
			cnt2++;
		}
	}
	printf("%d", cnt2);

	return 0;
}