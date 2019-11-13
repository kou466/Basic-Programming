#include <stdio.h>

int main() {
	char ch;
	int ei = 0;
	int count = 0;

	while ((ch = getchar()) != '#') {
		if (ch == 'e') {
			count = 1;
		}
		else if (ch == 'i') {
			if (count == 1) {
				ei++;
			}
			count = 0;
		}
		else {
			count = 0;
		}
	}
	printf("%d", ei);

	return 0;
}