#include <stdio.h>

int main() {
	int a, b, n, w; //�� ��� a, ���� ��� b, ��+���� �� n, ��ü ���� w
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