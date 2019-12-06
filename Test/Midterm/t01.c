#include <stdio.h>

int main() {
	double a,b,c;
	double sum;
	
	scanf("%lf %lf %lf", &a,&b,&c);
	
	sum = (a*b*c)/(a+b+c);
	
	printf("%.1lf", sum);
	
	return 0;
}
