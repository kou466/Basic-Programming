#include <stdio.h>

int main() {
	int a, b, n, w; //양 사료 a, 염소 사료 b, 양+염소 수 n, 전체 사료양 w
	int cnt = 0;
	int aNum, bNum;

	scanf("%d %d %d %d", &a, &b, &n, &w);

	for (int i = 1; i < n; i++) {
		if (a * i + b * (n - i) == w) {
			cnt++;
			aNum = i;
			bNum = n - i;
		}
	}

	if (cnt == 1) {
		printf("%d %d", aNum, bNum);
	}
	else {
		printf("-1");
	}

	return 0;

}