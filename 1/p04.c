#include <stdio.h>

int main() {
	int year, age;

	scanf("%d", &age);

	year = age * 365;

	printf("An age of %d years is %d days. \n", age, year);

	return 0;
}