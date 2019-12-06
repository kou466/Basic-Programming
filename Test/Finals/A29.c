#include <stdio.h>
int RC[1000][1000];
int main() {
	int n = 0, m = 0;
	int rmax = 0, cmax = 0, nmax, mmax;
	int sum;

	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%d", &RC[i][j]);
		}
	}

	for (int i = 1; i <= n; i++) {
		sum = 0;
		for (int j = 1; j <= m; j++) {
			sum += RC[i][j];
			if (sum >= rmax) {
				rmax = sum;
				nmax = i;
			}
		}
	}
	for (int j = 1; j <= m; j++) {
		sum = 0;
		for (int i = 1; i <= n; i++) {
			sum += RC[i][j];
			if (sum >= cmax) {
				cmax = sum;
				mmax = j;
			}
		}
	}
	printf("%d %d \n%d %d", nmax, rmax, mmax, cmax);
	return 0;
}