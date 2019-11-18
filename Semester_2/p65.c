#include<stdio.h>

long long arr[61][61];

int main() {

	long long i, j, n, k;

	scanf("%lld %lld", &n, &k);

	arr[1][1] = 1;

	for (i = 2; i <= n; i++) {
		arr[i][1] = 1;

		for (j = 1; j < n; j++) {
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}

		arr[i][n] = 1;
	}

	printf("%lld", arr[n][k]);

	return 0;
}