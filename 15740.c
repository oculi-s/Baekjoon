#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void _sum(char* a, char* b, char* c, int m, int n, int d) {
	int s = 0, p = (m > n ? m : n);
	bool u = 0;
	c[p] = 0;

	while (p > 1) {
		if (m && n)
			s = a[--m] - 48 + (b[--n] - 48 + u) * d;
		else if (n)
			s = b[--n] + u * d - 48;
		else if (m)
			s = a[--m] + u * d - 48;
		--p;
		if (d == -1)
			c[p] = 48 + (s < 0 ? s + 10 : s), u = s < 0;
		else
			c[p] = 48 + s % 10, u = s >= 10;
	}
	if (d == -1 && u)
		c[p] = 10 - (c[p] - 48) + 48;
	if (d == 1 && u)
		c[0] = '1';
}

int main() {
	int i, j;
	char a[10010], b[10010], c[10010], t[20010];
	for (i = 0; i < 10010; i++)
		a[i] = '0', b[i] = '0', c[i] = '0';
	i = 0;
	while (scanf("%c", t + i) > 0)
		i++;
	t[i - 1] = 0;
	i = 0;
	if (t[0] == '-')
		a[1] = '-', i++;
	while (t[i] != ' ') {
		if (t[i] >= '0' && t[i] <= '9')
			a[i + 1] = t[i];
		i++;
	}
	a[i + 1] = 0;
	while (!((t[i] == '-') || ((t[i] >= '0' && t[i] <= '9')))) { i++; }
	j = 0;
	if (t[i] == '-')
		b[1] = '-', i++, j++;
	while (t[i] != 0) {
		if (t[i] >= '0' && t[i] <= '9')
			b[j + 1] = t[i];
		i++, j++;
	}
	b[j + 1] = 0;

	bool ma = a[1] == '-', mb = b[1] == '-';
	int m = 1, n = 1, d = 1;
	while (a[m++]) {};
	while (b[n++]) {};

	if (a[1] == '0' && b[1] == '0')
		printf("0");
	else {
		if (ma && mb)
			printf("-");

		if (ma) {
			for (i = 1; i <= m; i++)
				a[i] = a[i + 1];
			d = -d, m--, a[m] = 0;
		}
		if (mb) {
			for (i = 1; i <= n; i++)
				b[i] = b[i + 1];
			d = -d, n--, b[n] = 0;
		}

		if (m > n) {
			if (d == -1 && ma)
				printf("-");
			_sum(a, b, c, --m, --n, d);
		}
		else if (m < n) {
			if (d == -1 && mb)
				printf("-");
			_sum(b, a, c, --n, --m, d);
		}
		else {
			i = 0;
			while (a[i] == b[i]) { i++; }
			if (d == -1) {
				if (i == m) {
					printf("0");
					return 0;
				}
				else if (a[i] > b[i]) {
					_sum(a, b, c, --m, --n, d);
					if (ma)
						printf("-");
				}
				else if (a[i] < b[i]) {
					_sum(b, a, c, --n, --m, d);
					if (mb)
						printf("-");
				}
			}
			else {
				_sum(a, b, c, --m, --n, d);
			}
		}
		i = -1;
		while (c[++i] == '0') {};
		while (c[i])
			printf("%c", c[i++]);
	}
	return 0;
}