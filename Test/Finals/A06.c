#include <stdio.h>

int main() {
	char str[30];
	int len, s = 0;

	scanf("%s", str);

	len = strlen(str);

	for (int x = 1; x <= len; x++) {

		for (int i = 0; i < x - 1; i++) {
			printf("-");
		}
		for (int j = s; j < len; j++) {
			printf("%c", str[j]);
		}
		for (int k = len - 2; k >= s; k--) {
			printf("%c", str[k]);
		}
		for (int i = 0; i < x - 1; i++) {
			printf("-");
		}
		s++;
		printf("\n");
	}
	return 0;
}