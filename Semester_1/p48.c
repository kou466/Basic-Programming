#include <stdio.h>

int main() {
	double R1, R2, R3, R4, R5;
	double R, PC;

	scanf("%lf %lf %lf %lf %lf", &R1, &R2, &R3, &R4, &R5);

	PC = (1 / (R2 + R3) + 1 / R4);
	R = R1 + 1 / PC + R5;

	printf("%.5lf", R);

	return 0;
}