#include <stdio.h>

#define overtime1 40.0
#define overtime2 55.0

#define overpay1 1.6
#define overpay2 2.1

#define a 0.08
#define b 0.12
#define c 0.18
#define d 0.25

double Calcmoney(double m1, double m2);
double Calctax(double tax1, double tax2);

int main() {
	double time, x;
	double total, tax, subtotal;

	while (scanf("%lf %lf", &time, &x) == 2) {
		total = Calcmoney(time, x);
		tax = Calctax(total, x);

		subtotal = total - tax;
		printf("%.1lf %.1lf %.1lf\n", total, tax, subtotal);
	}
	printf("Done!");
	return 0;
}

double Calcmoney(double m1, double m2) { //time, x
	if (m1 > overtime1 && m1 <= overtime2) {
		return (((m1 - overtime1) * (m2 * overpay1)) + (overtime1 * m2));
	}
	else if (m1 > overtime2) {
		return ((m1 - overtime2) * (m2 * overpay2) + (overtime2 - overtime1) * (m2 * overpay1) + (overtime1 * m2));
	}
	else {
		return m1 * m2;
	}
}

double Calctax(double tax1, double tax2) { //total, x
	if ((35 * tax2) >= tax1) {
		return (tax1 * a);
	}
	else if ((50 * tax2) >= tax1) {
		return ((tax1 - 35 * tax2) * b + ((35 * tax2) * a));
	}
	else if ((60 * tax2) >= tax1) {
		return ((tax1 - 50 * tax2) * c + ((50 * tax2) - (35 * tax2)) * b + ((35 * tax2) * a));
	}
	else if ((60 * tax2) < tax1) {
		return ((tax1 - 60 * tax2) * d + ((60 * tax2) - (50 * tax2)) * c + ((50 * tax2) - (35 * tax2)) * b + (35 * tax2) * a);
	}
}