#include <stdio.h>

unsigned long long t(unsigned long long n) {
	unsigned long long s[36], a = 0, i, j;
	s[0] = 1;
	for (i = 1; i <= n; i++) {
		s[i] = (i % 2) * s[i / 2] * s[i / 2];
		for (j = 0; j < i / 2; j++)
			s[i] += 2 * s[i - 1 - j] * s[j];
	}
	return s[n];
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%lld", t(n));
}