#include <stdio.h>

int main() {
	char first_name[30];
	char last_name[30];
	int age;

	scanf("%s %s", first_name, last_name);
	scanf("%d", &age);

	printf("%d %d", strlen(first_name) + strlen(last_name), age);
	
	return 0;
}