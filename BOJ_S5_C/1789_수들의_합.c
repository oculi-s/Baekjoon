#include <stdio.h>
#include <math.h>

int main() {
	double n;
	scanf("%lf", &n);
	double i = (-1 + sqrt(1 + 8 * n)) / 2;
	printf("%d", (int)i);
	return 0;
}