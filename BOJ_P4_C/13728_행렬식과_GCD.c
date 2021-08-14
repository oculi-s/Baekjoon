#include <stdio.h>
#define D 1000000007

int _gcd(int a, int b) {
	int t;
	while (a % b)
		t = b, b = a % b, a = t;
	return b;
}

int main() {
	unsigned int F[100001], i, n, s = 0;
	F[0] = 1, F[1] = 1;
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
		F[i] = (F[i - 1] + F[i - 2]) % D;
	for (i = 1; i <= n; i++)
		s += F[_gcd(n + 1, i + 1) - 1], s %= D;
	printf("%d", s);
	return 0;
}