#include <stdio.h>
#include <math.h>

int main() {
	double a;
	scanf("%lf", &a);
	printf("%.0lf", ceil(sqrt(a)));
	return 0;
}