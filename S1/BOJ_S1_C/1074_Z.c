#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n, r, c, p, m, a = 0;
	scanf("%d %d %d", &n, &r, &c);
	while (--n >= 0) {
		m = pow(2, n);
		p = 2 * (r >= m) + 1 * (c >= m);
		r -= m * (r >= m);
		c -= m * (c >= m);
		a += m * m * p;
	}
	printf("%d", a);
	return 0;
}