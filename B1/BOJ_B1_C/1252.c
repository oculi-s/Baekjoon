#include <stdio.h>
#include <stdlib.h>

void _sum(char* a, char* b, char* c, int m, int n) {
	if (!m && !n)
		c[0] = '0', c[1] = '0', c[2] = 0;
	else {
		int l = 1 + (m > n ? m : n), u = 0;
		c[l] = 0;
		while (l) {
			c[--l] = u;
			if (m)
				c[l] += a[--m] - 48;
			if (n)
				c[l] += b[--n] - 48;
			u = c[l] > 1;
			c[l] = (c[l] % 2) + 48;
		}
		if (u)
			c[l] = '1';
	}
}

int main() {
	char a[82], b[82], c[82];
	scanf("%s %s", a, b);
	int m = 0, n = 0, x = 0, y = 0;
	while (a[m++]) {};
	while (a[x++] == '0') {};
	while (b[n++]) {};
	while (b[y++] == '0') {};
	_sum(a + x - 1, b + y - 1, c, m - x, n - y);
	printf("%s", c + (c[0] == '0'));
	return 0;
}