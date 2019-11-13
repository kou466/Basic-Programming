#include <stdio.h>

int main() {
	char letter;
	char c1, c2;

	scanf("%c", &letter);

	for (c1 = 'A'; c1 <= letter; c1++) {

		for (int i = 0; i < letter - c1; i++) {
			printf("-");
		}

		for (c2 = 'A'; c2 < c1; c2++) {
			printf("%c", c2);

		}
		for (; 'A' <= c2; c2--) {
			printf("%c", c2);
		}
		printf("\n");
	}
	return 0;
}