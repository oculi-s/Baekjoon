#include <stdio.h>
#include <math.h>

char s[51];
long long p[50] = { 1 }, M = 1234567891, t = 0, n;
int main() {
	for (n = 1; n < 50; n++)
		p[n] = p[n - 1] * 31 % M;
	scanf("%lld\n%s", &n, s);
	while (n--)
		t += (s[n] - 96) * p[n], t %= M;
	printf("%lld", t);
	return 0;
}