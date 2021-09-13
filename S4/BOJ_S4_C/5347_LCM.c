#include <stdio.h>

long long gcd(int a, int b) {
	int t;
	while (a % b)
		t = a, a = b % a, b = t;
	return b;
}

long long n, a, b;
int main() {
	scanf("%lld", &n);
	while (n--)
		scanf("%lld %lld", &a, &b), printf("%lld\n", (a * b) / gcd(a, b));
	return 0;
}