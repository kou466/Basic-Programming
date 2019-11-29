#include <stdio.h>

int main() {
	int years = 0;
	double money, interest, spend;

	scanf("%lf %lf %lf", &money, &interest, &spend);

	while (money > 0) {
		money *= 1.0f + interest * 0.01;
		money -= spend;
		years++;

		if (money * (interest * 0.01) + money - spend == money) {
			break;
		}
	}
	if (money * (interest * 0.01) + money - spend == money) {
		printf("NO");
	}
	else {
		printf("%d\n", years);
	}
	return 0;
}