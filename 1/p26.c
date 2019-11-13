#include <stdio.h>

int main() {
	int h, w, n;
	int Floor, Line;

	scanf("%d %d %d", &h, &w, &n);

	n--;
	Floor = n % h + 1;
	Line = n / h + 1;

	printf("%d%02d", Floor, Line);
}