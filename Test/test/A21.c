#include <stdio.h>
#include <ctype.h>

int main() {
	char ch = 'a';
	int uppercase = 0, lowercase = 0;

	while ((ch = getchar()) != EOF) {
		if (isupper(ch)) {
			uppercase++;
		}
		else if (islower(ch)) {
			lowercase++;
		}
	}
	printf("%d %d", uppercase, lowercase);
	return 0;
}