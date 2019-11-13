#include <stdio.h>

int main() {
	char ch;
	int i = 0, cnt = 0;

	while ((ch = getchar()) != '#') {
		if (ch == 'c') {
			cnt = 1;
		}
		else if (ch == 'a') {
			if (cnt == 1) {
				cnt++;
			}
			else {
				cnt = 0;
				continue;
			}
		}
		else if (ch == 't') {
			if (cnt == 2) {
				i++;
				cnt = 0;
			}
			else {
				cnt = 0;
			}
		}
		else
			cnt = 0;
	}
	printf("%d", i);
	return 0;
}
