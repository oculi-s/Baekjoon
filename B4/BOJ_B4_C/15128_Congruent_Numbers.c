#include <stdio.h>

int main() {
	long long a, b, c, d;
	double e;
	scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
	e = 0.5 * a * c / b / d;
	printf("%d", e == (long long)e);
	return 0;
}