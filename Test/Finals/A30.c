#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}

int main()
{

	int n, i, *a;
	int mid1 = 0;
	double mid2 = 0;

	scanf("%d", &n);

	a = (int *)malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	qsort(a, n, sizeof(int), compare);

	if (n % 2 == 1)
	{
		mid1 = a[(n - 1) / 2];
		printf("%d", mid1);
	}

	else
	{
		mid2 = ((double)a[n / 2 - 1] + (double)a[n / 2]) / 2;
		printf("%.1lf", mid2);
	}

	return 0;
}