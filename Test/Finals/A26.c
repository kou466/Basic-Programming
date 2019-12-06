#include <stdio.h>

#define size 100001

int max_int(int* a, int as);

int main() {
	int n[size];
	int i = 1;

	while (scanf("%d", &n[i]) != EOF) {
		i++;
	}
	printf("%d\n", max_int(n, i));
	return 0;
}

int max_int(int* a, int as) {

	int max = a[0];

	for (int i = 1; i < as; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	return max;
}