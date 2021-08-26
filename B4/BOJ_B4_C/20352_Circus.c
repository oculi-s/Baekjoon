#include <stdio.h>
#include <math.h>

double a;
int main() {
	scanf("%lf", &a);
	printf("%.10lf", 2*sqrt(a*3.14159265359));
	return 0;
}