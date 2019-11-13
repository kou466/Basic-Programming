#include<stdio.h>

int main()
{
	int i = 0, cnt = 0;
	char vps[50];
	scanf("%s", vps);
	for (i = 0; i < 50; i++) {
		if (vps[i] == '\0')
			break;
		if (vps[i] == '(')
			cnt++;
		else if (vps[i] == ')' && cnt > 0)
			cnt--;
		else if (vps[i] == ')' && cnt <= 0) {
			cnt--;
			break;
		}
	}
	if (cnt == 0)
		printf("YES");
	else
		printf("NO");

	return 0;
}