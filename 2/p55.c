#include <stdio.h>

void chline(char, int, int);

int main() {
	char ch;
	int i, j;

	scanf("%c %d %d", &ch, &i, &j);

	chline(ch, i, j);

	return 0;
}

void chline(char ch, int i, int j) {
	int n;

	for (n = 1; n < i; n++) {
		putchar('+');
	}
	for (; n <= j; n++) {
		putchar(ch);
	}
	for (n = 1; n < i; n++) {
		putchar('+');
	}
}