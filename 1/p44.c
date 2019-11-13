#include <stdio.h>

int main() {
	int num, i;
	int cnt = 0;

	scanf("%d", &num);

	for (i = 2; i * i < num; i++) {
		if (num % i == 0) {
			cnt += 2;
		}
	}
	if (i * i == num) {
		cnt++;
	}
	printf("%d", cnt);

	return 0;
}