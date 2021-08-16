#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	long long x, y, d, s;
	scanf("%lld %lld", &x, &y);
	d = y - x, s = sqrt(d);
	if (d <= 3)
		printf("%d", d);
	else
		printf("%lld", 2 * s - 1 + (d != s * s) + (d > s * (s + 1)));
	return 0;
}