#include <stdio.h>

typedef unsigned long long ul;
ul a, b, t, s, m, n;

int main() {
	scanf("%lld %lld", &a, &b);
	t = 2, s = b - a + 1;
	while (t <= b) {
		m = (a + t - 1) / t;
		n = (b + t - 1) / t;
		if (m * t <= b && a <= n * t)
			s += (n - m + (n * t == b)) * (t / 2);
		t *= 2;
	}
	printf("%lld", s);
	return 0;
}