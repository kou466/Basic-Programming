#include <stdio.h>

int main() {
	float down_speed, file_size, time;

	scanf("%f %f", &down_speed, &file_size);

	file_size *= 8;
	time = file_size / down_speed;

	printf("%.2fsec", time);

	return 0;
}