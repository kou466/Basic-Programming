#include <stdio.h>

#define Rate1 0.15
#define Rate2 0.28

int main() {
	int category;
	double income = 0, rate, taxes;

	scanf("%d", &category);

	switch (category) {

	case 1:
		rate = 17850.0;
		break;
	case 2:
		rate = 23900.0;
		break;
	case 3:
		rate = 29750.0;
		break;
	case 4:
		rate = 14875.0;
		break;
	default:
		while (getchar() != '\n');
	}
	while (scanf("%lf", &income) != 1 || income < 0) {
		while (getchar() != '\n');
	}

	if (income > rate)
		taxes = Rate2 * (income - rate) + Rate1 * rate;
	else
		taxes = Rate1 * income;

	printf("%.2lf\n\n", taxes);

	return 0;
}