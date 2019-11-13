#include <stdio.h>
#include <string.h>

int main() {
	char a[20];
	int len, i;

	scanf("%s", a);

	len = strlen(a);

	for (i = 0; i < len; i++) {
		printf("*%-*.*s*\n", len, i + 1, a);
		
	}
}