#include <stdio.h>

char A[1003][1003]; //array

int main() {
	int m, n; //input
	int i, j, k1, k2; //for loop
	int msum = 0, sum; //out come

	scanf("%d %d\n", &m, &n);

	for (i = 0; i < m; i++) {
		scanf("%s", &A[i]);  // == gets(A[i]);
	}

	for (i = 1; i < m - 1; i++) {
		for (j = 1; j < n - 1; j++) {
			sum = 0;
			for (k1 = i - 1; k1 <= i + 1; k1++) {
				for (k2 = j - 1; k2 <= j + 1; k2++) {
					sum += A[k1][k2] - '0';
				}
			}
			sum -= A[i][j] - '0';
			if (msum < sum) {
				msum = sum;
			}
		}
	}
	printf("%d\n", msum);
	return 0;
}