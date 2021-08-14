#include <stdio.h>

int main() {
	unsigned long long m, n;
	scanf("%lld %lld", &m, &n);
	printf("%lld", n * (m / 2) + (m % 2) * (n / 2));
	return 0;
}