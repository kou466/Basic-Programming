#include <stdio.h>

int main() {
	double inch;
	double cm;
	scanf("%lf", &inch);

	cm = inch * 2.54;

	printf("%.2lf", cm);

	return 0;
}