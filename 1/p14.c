#include <stdio.h>

int main() {
	double cups;
	double pints, ounces, tablespoons, teaspoons;

	scanf("%lf", &cups);

	pints = cups * 0.5;
	ounces = cups * 8;
	tablespoons = ounces * 2 * 8;
	teaspoons = tablespoons * 3 * tablespoons;

	printf("%lf cups are equivalent to each of the following: \n", cups);
	printf("%lf pints \n", pints);
	printf("%lf tablespoons \n", tablespoons);
	printf("%lf teaspoons \n", teaspoons);

	return 0;
}