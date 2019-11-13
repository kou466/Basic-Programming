#include <stdio.h>

int main() {
	char first_name[10];
	char last_name[10];
	double korean, english, math, avg;

	scanf("%s %s", first_name, last_name);
	scanf("%lf %lf %lf", &korean, &english, &math);

	avg = (korean + english + math) / 3;

	printf("\"%-23s %s\"%8.1lf", first_name, last_name, avg);

	return 0;
}