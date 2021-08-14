#include <stdio.h>

typedef unsigned long long ld;

int _s(ld n) {
	int t = 0, m = 0;
	while (n) {
		while (n % 10 == 6)
			n /= 10, t++;
		m = m > t ? m : t, n /= 10, t = 0;
	}
	return m;
}

int main() {
	ld n, i;
	scanf("%lld", &n);
	for (i = 666; n; i++)
		if (_s(i) >= 3)
			n--;
	printf("%lld", i - 1);
	return 0;
}