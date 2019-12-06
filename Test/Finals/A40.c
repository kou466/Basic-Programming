#include <stdio.h>

int main() {
	int R = 0, G = 0, B = 0;
	char rgb;

	while ((rgb = getchar()) != '\n') {
		if (rgb == 'R') {
			R++;
		}
		else if (rgb == 'G') {
			G++;
		}
		else if (rgb == 'B') {
			B++;
		}
	}
	printf("%d %d %d", R, G, B);
	return 0;
}