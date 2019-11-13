#include <stdio.h>

int main() {
	int i;
	int a = 0;
	int num[10000];
	
	
	scanf("%d", &a);

	for (i = 0; i < a; i++) {
		scanf("%d", &num[i]);
	}

	for (i--; i >= 0; i--) {
		printf("%d ", num[i]);
	}
	return 0;
}