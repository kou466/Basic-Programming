#include <stdio.h>

int main() {
	long long int in;
	long long int even = 0, odd = 0;
	double avg1 = 0, avg2 = 0;

	while (1) {

		scanf("%lld", &in);

		if (in != 0) {
			if (in % 2 == 0) {
				even++;
				avg1 += in;
			}
			else {
				odd++;
				avg2 += in;
			}
		}
		else {
			break;
		}

	}
	if (even > 0)			//not avg, even & odd
		avg1 = avg1 / even;
	if (odd > 0)
		avg2 = avg2 / odd;

	printf("%lld %.2lf %lld %.2lf", even, avg1, odd, avg2);

	return 0;
}