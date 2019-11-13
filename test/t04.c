#include <stdio.h>

int main() {

	double a = 0, total = 0, most = 0;
	double sell = 0, prt = 0;

	for (int i = 0; i < 12; i++) {
		scanf("%lf", &a);
		total += a;
		most = a;

		if (most > sell) {
			sell = most;
		}
	}
	prt = sell / total * 100.00;

	printf("%.2lf%%", prt);

	return 0;
}