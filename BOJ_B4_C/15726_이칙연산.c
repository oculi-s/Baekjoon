#include <stdio.h>

int main() {
	unsigned long long a, b, c, p, q;
	scanf("%lld %lld %lld", &a, &b, &c);
	p = a * b / c;
	q = a * c / b;
	printf("%lld", p > q ? p : q);
	return 0;
}