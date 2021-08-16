#include <stdio.h>
#include <stdlib.h>

int main() {
	double a, b;
	scanf_s("%lf %lf", &a, &b);
	printf("%.20f", (double)(a / b));
	return 0;
}