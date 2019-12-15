#include <stdio.h>

int main() {

	int n = 0, m = 0;
	int rmax = 0, cmax = 0, nmax, mmax;
	int sum;

	scanf("%d %d", &n, &m);

	int** RC = (int**)malloc(sizeof(int*) * n);
	for (int k = 0; k < n; k++)
		RC[k] = (int)malloc(sizeof(int) * m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &RC[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		sum = 0;
		for (int j = 0; j < m; j++) {
			sum += RC[i][j];
			if (sum >= rmax) {
				rmax = sum;
				nmax = i;
			}
		}
	}
	for (int j = 0; j < m; j++) {
		sum = 0;
		for (int i = 0; i < n; i++) {
			sum += RC[i][j];
			if (sum >= cmax) {
				cmax = sum;
				mmax = j;
			}
		}
	}
	printf("%d %d \n%d %d", nmax + 1, rmax, mmax + 1, cmax);
	return 0;
}