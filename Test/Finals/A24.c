#include <stdio.h>
#include <ctype.h>

int info(char ch);

int main() {
	char ch;
	int location;

	while ((ch = getchar()) != EOF) {
		if ((location = info(ch)) == -1) {
			if (ch != '\n' && ch != ' ') {
				printf("%c is not a letter.\n", ch);
			}
		}
		else {
			printf("%c is a letter #%d.\n", ch, location);
		}
	}
	return 0;
}

int info(char ch) {
	if (isalpha(ch)) {
		ch = tolower(ch);
		return (ch - 'a' + 1);
	}
	else {
		return -1;
	}
}