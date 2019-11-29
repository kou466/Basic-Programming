#include <stdio.h>

int main() {
	int string;

	scanf("%d", &string);
	

	for (int i = 1; i <= string; i++) {
		for (char j = 64 + string; 64 + string - j < i; j--) {
			printf("%c", j);
		}
		printf("\n");
	}
	return 0;
}