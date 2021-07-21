#include <stdio.h>

int main() {
	long long a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld", (a / c + (a % c != 0)) * (b / c + (b % c != 0)));
	return 0;
}