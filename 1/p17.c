#include <stdio.h>

#define GtoL 3.785 // 1 Gallon to L
#define MToK 1.609 // 1 Mile to Km

int main() {

	double mile, gallon;
	double mpg, liters;

	scanf("%lf %lf", &mile, &gallon);

	mpg = mile / gallon;
	liters = 100.0 / mpg * GtoL / MToK;

	printf("%.1lf mpg or %.1lf liters / 100km. \n", mpg, liters);

	return 0;
}