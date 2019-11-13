#include <stdio.h>

int main() {
	int n;
	int day, hour, min, sec;

	scanf("%d", &n);

	day = n / 86400;
	hour = n % 86400 / 3600;
	min = n % 3600 / 60;
	sec = n % 60;
	

	printf("%d %d %d %d", day, hour, min, sec);

	return 0;
}