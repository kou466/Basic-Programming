#include <stdio.h>

int main() {
	char ch = 'a';
	int spaces = 0, lines = 0, others = 0;

	while ((ch = getchar()) != EOF) {
		if (ch == ' ') {
			spaces++;
		}
		else if (ch == '\n') {
			lines++;
		}
		else {
			others++;
		}
	}
	printf("%d %d %d", spaces, lines, others);
	return 0;
}