#include <stdio.h>

typedef unsigned int ui;
ui _gcd(ui m, ui n) {
	ui t, a, b;
	a = m > n ? m : n;
	b = m < n ? m : n;
	while (b)
		t = b, b = a % b, a = t;
	return a;
}

int main() {
	ui a, b, c, d, m, n, g;
	scanf("%u %u\n%u %u", &a, &b, &c, &d);
	m = a * d + b * c, n = b * d, g = _gcd(m, n);
	printf("%u %u", m / g, n / g);
	return 0;
}