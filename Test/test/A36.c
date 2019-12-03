#include <stdio.h>

int main()
{
	int n, m;
	int i, j;

	scanf("%d %d", &n, &m);

	int** A = (int**)malloc(sizeof(int*) * n);
	for (int k = 0; k < n; k++)
		A[k] = (int)malloc(sizeof(int) * m);

	int** B = (int**)malloc(sizeof(int*) * n);
	for (int k = 0; k < n; k++)
		B[k] = (int)malloc(sizeof(int) * m);

	int** C = (int**)malloc(sizeof(int*) * n);
	for (int k = 0; k < n; k++)
		C[k] = (int)malloc(sizeof(int) * m);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &B[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}