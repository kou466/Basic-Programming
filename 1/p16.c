#include <stdio.h>
#include <string.h>

int main(void) {
	char fname[30];
	char lname[30];

	scanf("%s %s", fname, lname);

	int flen = strlen(fname);
	int llen = strlen(lname);

	printf("%s %s\n", fname, lname);
	printf("%*d %*d\n", flen, flen, llen, llen);
	printf("%s %s\n", fname, lname);
	printf("%-*d %-*d\n", flen, flen, llen, llen);


	return 0;
}