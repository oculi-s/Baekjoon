#include <stdio.h>

typedef unsigned long long lnt;
lnt _f(lnt n) {
	lnt a = 5, s = 0;
	while (a <= n)
		s += n / a, a *= 5;
	return s;
}
lnt _t(lnt n) {
	lnt a = 2, s = 0;
	while (a <= n)
		s += n / a, a *= 2;
	return s;
}

lnt n, m, a, b;
int main() {
	scanf("%lld %lld", &n, &m);
	a = _f(n) - _f(m) - _f(n - m);
	b = _t(n) - _t(m) - _t(n - m);
	printf("%lld", a < b ? a : b);
	return 0;
}