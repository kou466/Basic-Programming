#include <stdio.h>

void to_base_n(int integer, int base);

int main() {
	int integer, base;

	scanf("%d %d", &integer, &base);
	to_base_n(integer, base);

	return 0;
}

void to_base_n(int integer, int base) {
	if (integer == 0) return;

	to_base_n(integer / base, base);
	printf("%d", integer % base);
	return;
}