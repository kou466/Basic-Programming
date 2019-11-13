#include <stdio.h>

int main() {
	double hob = 0, doe = 0, mal = 0;
	double cm3 = 0, m3 = 0, liter = 0;

	scanf("%lf", &m3);

	cm3 = 1000000 * m3;
	liter = 1000 * m3;
	hob = cm3 / 180.39;
	doe = hob / 10;
	mal = doe / 10;

	printf("%.2lf cubic meters are equivalent to each of the following: \n", m3);
	printf("%.2lf hob\n", hob);
	printf("%.2lf doe\n", doe);
	printf("%.2lf mal\n", mal);
	printf("%.2lf liters\n", liter);

	return 0;
}