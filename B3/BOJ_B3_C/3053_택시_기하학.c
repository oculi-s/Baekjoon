#include <stdio.h>

int main() {
	double r;
	scanf("%lf", &r);
	printf("%.6lf\n%.6lf", r * r * 3.14159265359, r * r * 2);
	return 0;
}