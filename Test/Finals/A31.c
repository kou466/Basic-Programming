#include <stdio.h>

int main() {
	int a[10001] = { 0, };
	int n, num;
	int mode = 0, freq = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		a[num]++;
	}

	for (int i = 1; i <= 10000; i++) {
		if (freq <= a[i]) {
			freq = a[i];
			mode = i;
		}
	}
	printf("%d %d", mode, freq);

	return 0;
}