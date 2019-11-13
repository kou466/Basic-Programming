#include<stdio.h>

int logic(int gate, int input1, int input2)
{
	if (gate == 1) return input1 | input2;
	else if (gate == 2) return input1 & input2;
	else if (gate == 3) return !(input1 | input2);
	else if (gate == 4) return !(input1 & input2);
	else if (gate == 5) return input1 != input2;
}
int main()
{
	int v, w, x, y, z;
	int A, B, C;
	int count = 0;

	scanf("%d %d %d", &A, &B, &C);

	for (v = 0; v <= 1; v++)
	{
		for (w = 0; w <= 1; w++)
		{
			for (x = 0; x <= 1; x++)
			{
				for (y = 0; y <= 1; y++)
				{
					for (z = 0; z <= 1; z++)
					{
						if (logic(5, logic(3, logic(A, v, w), logic(4, x, y)), logic(C, logic(4, x, y), logic(B, y, z))) == 1)
						{
							count++;
						}
					}
				}
			}
		}
	}
	printf("%d", count);

	return 0;
}