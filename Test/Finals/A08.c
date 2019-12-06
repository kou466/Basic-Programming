#include <stdio.h>

int main() {
	int k;
	char str[100];

	scanf("%s", str);
	k = strlen(str);

	for (int i = k-1; i >= 0; i--) {
		printf("%c", str[i]);
	}
	return 0;
}