#include <stdio.h>

int main() {
	double x[3], y[3], a;
	scanf("%lf %lf\n%lf %lf\n%lf %lf", x, y, x + 1, y + 1, x + 2, y + 2);
	a = (x[0] * y[1] + x[1] * y[2] + x[2] * y[0]) - (y[0] * x[1] + y[1] * x[2] + y[2] * x[0]);
	printf("%d", a == 0 ? 0 : a > 0 ? 1 : -1);
	return 0;
}