#include <stdio.h>

unsigned long long a, b, n, m, i, s, c[1000001];
int main() {
	scanf("%lld %lld", &a, &b);
	for (n = 2; n <= 1000000; n++) {
		m = n * n;
		for (i = (a + m - 1) / m; i <= b / m; i++)
			c[i * m - a] = 1;
	}
	for (i = 0; i <= b - a; i++)
		s += c[i];
	printf("%lld", b - a - s + 1);
	return 0;
}