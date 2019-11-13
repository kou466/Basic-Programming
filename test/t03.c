#include <stdio.h>

int main() {
	int string;

	scanf("%d", &string);


	for (int i = string; i >= 0; i--) {
		for (char j = 'a' + i - 1; j >= 'a'; j--) {
			printf("%c", j);
		}
		printf("\n");
	}
	return 0;
}