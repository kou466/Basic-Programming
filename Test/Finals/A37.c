#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, m, k, i, j, p, ** A, ** B, Cij;

	scanf("%d %d %d", &n, &m, &k);

	A = (int**)calloc(n, sizeof(int*));

	for (i = 0; i < n; i++) {
		A[i] = (int*)calloc(m, sizeof(int));
		for (j = 0; j < m; j++) {
			scanf("%d", &A[i][j]);
		}
	}

	B = (int**)calloc(m, sizeof(int*));

	for (i = 0; i < m; i++) {
		B[i] = (int*)calloc(k, sizeof(int));
		for (j = 0; j < k; j++) {
			scanf("%d", &B[i][j]);
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < k; j++) {
			Cij = 0;
			for (p = 0; p < m; p++) {
				Cij += A[i][p] * B[p][j];
			}
			printf("%d ", Cij);
		}
		printf("\n");
	}
	for (i = 0; i < n; i++) {
		free(A[i]);
	}
	free(A);

	for (i = 0; i < m; i++) {
		free(B[i]);
	}
	free(B);

	return 0;
}