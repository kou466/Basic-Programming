#include <stdio.h>

int main() {
	int n, idx;
	int sml = 10000000, sec = 10000000;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &idx);
		if (idx < sml) {
			sec = sml;
			sml = idx;
		}
		else if (idx < sec) {
			sec = idx;
		}
	}
	printf("%d", sec);

	return 0;
}