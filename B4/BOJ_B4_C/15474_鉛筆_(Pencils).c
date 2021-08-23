#include <stdio.h>

int main() {
	int a, b, c, d, e, m, n;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	m = (a + d - 1) / d * e;
	n = (a + b - 1) / b * c;
	printf("%d", m < n ? m : n);
	return 0;
}