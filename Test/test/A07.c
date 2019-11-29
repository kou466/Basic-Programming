#include <stdio.h>

int main(void) {
	int lower, upper;

	scanf("%d%d", &lower, &upper);

	for (int i = lower; i <= upper; i++)
	{
		printf("%d %d %d\n", i, i * i, i * i * i);
	}
	printf("\n");

	return 0;
}