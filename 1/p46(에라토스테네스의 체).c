#include <stdio.h>

int main() {
	int N = 1;
	int i, t, r;
	int cnt = 0;

	scanf("%d", &N);

	int pn[100000];

	for (i = 2; N >= i; i++) {
		pn[i] = 1;
	}
	for (r = 2; r <= 1000; r++) {
		for (t = r * 2; t <= N; t += r) {
			pn[t] = 0;
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