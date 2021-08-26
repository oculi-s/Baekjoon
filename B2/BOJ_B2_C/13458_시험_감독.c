#include <stdio.h>

long long n, s[1000000], b, c, i, a;
int main() {
	scanf("%lld", &n);
	for (i = 0; i < n; i++)
		scanf("%lld", s + i);
	scanf("%lld %lld", &b, &c);
	for (i = 0; i < n; i++) {
		if (s[i] > b)
			a += (s[i] - b + c - 1) / c;
	}
	printf("%lld", a + n);
	return 0;
}