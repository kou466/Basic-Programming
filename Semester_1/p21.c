#include <stdio.h>

int main() {
	const int s = 60;
	int a = 1;

	while (a > 0) {
		scanf("%d", &a);
		if (a <= 0) {
			break;
		}
		else {
			int h = a / s;
			int m = a % s;
			printf("Time in minute(s): %d = %d hour(s) and %d minute(s) \n", a, h, m);
		}
	}
	
}