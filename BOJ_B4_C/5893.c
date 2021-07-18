#include <stdio.h>
#include <stdlib.h>

void _sum(char* a, char* b, char* c, int m, int n) {
	int u = 0;
	c[m + 1] = 0;
	while (m) {
		--m, --n;
		if (n >= 0)
			c[m + 1] = (a[m] + b[n] + u) - 96;
		else
			c[m + 1] = (a[m] + u) - 48;
		u = c[m + 1] > 1, c[m + 1] = c[m + 1] % 2 + 48;
	}
	c[0] = u + 48;
}

int main() {
	char a[2000], b[2000], c[2000];
	scanf("%s", a + 1);
	int i, j, m = 1;
	while (a[m++]) {};
	for (i = 1; i <= m; i++)
		b[i] = a[i];
	for (j = -1; j < 3; j++)
		b[m + j] = '0';
	b[m + 3] = 0;
	_sum(b + 1, a + 1, c, m + 2, m - 2);
	for (i = (c[0] == '0'); i < m + 3; i++)
		printf("%c", c[i]);
	return 0;
}