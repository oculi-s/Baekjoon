#include <stdio.h>

int main() {
	float a, b, c, d;
	scanf("%f %f\n%f %f", &a, &b, &c, &d);
	if (a * d > c * c * 3.14159265359 * b)
		printf("Slice of pizza");
	else
		printf("Whole pizza");
	return 0;
}