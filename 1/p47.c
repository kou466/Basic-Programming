#include <stdio.h>

#define MAX 10000000

int main() {
	int N = 1;
	int i, j, k;
	int cnt = 0;
	int *pn = malloc(sizeof(int) * MAX);

	scanf("%d", &N);

	for (i = 1; N >= i; i++) {
		pn[i] = 1;
	}
	for (j = 2; j <= 1000; j++) {
		for (k = j * 2; k <= N; k += j) {
			pn[k] = 0;
		}
	}
	for (i = 2; i <= N; i++) {
		if (pn[i] == 1) {
			cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}