#include <stdio.h>
#include <math.h>

int main() {
	double n, t;
	scanf("%lf", &n);
	while (n--)
		scanf("%lf", &t), printf("$%.2lf\n", round(t * 80) / 100);
	return 0;
}