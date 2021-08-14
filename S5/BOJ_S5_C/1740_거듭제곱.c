#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
	long long n, i, t = 1, a = 0;
	bool s[40];
	for (i = 0; i < 40; i++)
		s[i] = 0;
	scanf("%lld", &n);
	i = 0;
	while (n)
		s[i] = n % 2, n /= 2, i++;
	for (i = 0; i < 40; i++)
		a += s[i] * t, t *= 3;
	printf("%lld", a);
	return 0;
}